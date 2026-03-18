/*
 * XREFs of IommuBeginDeviceReset @ 0x140524EB0
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
 */

__int64 __fastcall IommuBeginDeviceReset(KSPIN_LOCK *a1, _DWORD *a2)
{
  KSPIN_LOCK v2; // rax
  char v3; // r12
  ULONG_PTR v6; // rsi
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  KSPIN_LOCK *v9; // r14
  __int64 **v10; // rdi
  __int64 *i; // r8
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v14; // r9
  int v15; // eax
  bool v16; // zf
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v20; // edx
  int v21; // r8d

  v2 = a1[3];
  v3 = 0;
  if ( HalpHvIommu )
    return 3221225659LL;
  v6 = v2 + 400;
  if ( !*(_QWORD *)(v2 + 312) || !*(_QWORD *)(v2 + 320) )
    return 3221225659LL;
  ExAcquirePushLockExclusiveEx(v2 + 400, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  v9 = a1 + 2;
  KxAcquireSpinLock(a1 + 2);
  v10 = (__int64 **)(a1 + 14);
  for ( i = *v10; i != (__int64 *)v10; i = (__int64 *)*i )
  {
    if ( !a2 || *(_DWORD *)(i[4] + 16) == *a2 )
    {
      *((_BYTE *)i + 40) = 1;
      v3 = 1;
    }
  }
  KxReleaseSpinLock(v9);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  CurrentThread = KeGetCurrentThread();
  if ( v6 - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  _disable();
  p_Process = (__int64)&CurrentThread[1].Process;
  v20 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v6 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v20;
    p_Process += 96LL;
    if ( v20 >= 6 )
      goto LABEL_32;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_32:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v6, SessionId, 0LL);
    _enable();
    return v3 == 0 ? 0xC0000225 : 0;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v21 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  CurrentThread->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v21 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v6, v21);
  return v3 == 0 ? 0xC0000225 : 0;
}
