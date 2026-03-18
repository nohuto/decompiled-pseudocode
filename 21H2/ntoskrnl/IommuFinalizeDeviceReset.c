/*
 * XREFs of IommuFinalizeDeviceReset @ 0x140525E80
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommuFinalizeDeviceReset(__int64 a1)
{
  _QWORD *v1; // rbp
  ULONG_PTR v3; // rsi
  unsigned __int8 CurrentIrql; // r15
  _DWORD *SchedulerAssist; // r9
  __int64 *i; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v11; // r9
  int v12; // eax
  bool v13; // zf
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v17; // edx
  int v18; // r8d
  char v20; // [rsp+60h] [rbp+8h]

  v1 = *(_QWORD **)(a1 + 24);
  v20 = 0;
  if ( HalpHvIommu )
    return 3221225659LL;
  v3 = (ULONG_PTR)(v1 + 50);
  if ( !v1[39] || !v1[40] )
    return 3221225659LL;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v1 + 50), 0LL);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[39])(v1[2], *(_QWORD *)(a1 + 40), *(unsigned int *)(a1 + 80));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 16));
  for ( i = *(__int64 **)(a1 + 112); i != (__int64 *)(a1 + 112); i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i + 40) )
    {
      v20 = 1;
      v7 = (__int64)i + 52;
      *((_BYTE *)i + 40) = 0;
      v8 = 512LL;
      do
      {
        *(_DWORD *)(v7 - 4) = 0;
        *(_DWORD *)v7 &= ~2u;
        *(_BYTE *)(v7 + 20) = 0;
        v7 += 32LL;
        --v8;
      }
      while ( v8 );
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[40])(v1[2], *(_QWORD *)(a1 + 40), *(unsigned int *)(i[4] + 16));
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 16));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & v11[5]) == 0;
        v11[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  CurrentThread = KeGetCurrentThread();
  if ( v3 - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  _disable();
  p_Process = (__int64)&CurrentThread[1].Process;
  v17 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v3 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v17;
    p_Process += 96LL;
    if ( v17 >= 6 )
      goto LABEL_33;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_33:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, SessionId, 0LL);
    _enable();
    return v20 != 0 ? 0 : 0xC0000225;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v18 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  CurrentThread->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v18 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v3, v18);
  return v20 != 0 ? 0 : 0xC0000225;
}
