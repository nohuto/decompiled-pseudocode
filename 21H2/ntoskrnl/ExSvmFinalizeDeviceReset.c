/*
 * XREFs of ExSvmFinalizeDeviceReset @ 0x140640800
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExSvmFinalizeDeviceReset(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _KTHREAD *v3; // rsi
  __int64 v4; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v6; // r14d
  __int64 v7; // rdx
  int SessionId; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // esi
  struct _KTHREAD *v13; // rdi
  __int64 p_Process; // rbx
  unsigned int v15; // ecx
  int v16; // r9d
  bool v17; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = KeGetCurrentThread();
  v4 = 0LL;
  _disable();
  AbEntrySummary = v3->AbEntrySummary;
  v6 = -1;
  if ( v3->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&ExpAtsSvmDeviceListLock, (__int64)v3)) != 0 )
  {
    _BitScanForward((unsigned int *)&v7, AbEntrySummary);
    v3->AbEntrySummary = AbEntrySummary & ~(1 << v7);
    _enable();
    v4 = (__int64)(&v3[1].Process + 12 * v7);
    if ( (unsigned __int64)&ExpAtsSvmDeviceListLock - qword_140C50630 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
    *(_DWORD *)(v4 + 8) = SessionId;
    *(_QWORD *)v4 = (unsigned __int64)&ExpAtsSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v4, (__int64)&ExpAtsSvmDeviceListLock);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  v10 = ExpAtsSvmDevices;
  if ( (__int64 *)ExpAtsSvmDevices == &ExpAtsSvmDevices )
  {
    v12 = -1073741810;
  }
  else
  {
    do
    {
      v11 = v10;
      if ( !*(_BYTE *)(v10 + 16) && *(_QWORD *)(v10 + 24) == a1 )
        break;
      v10 = *(_QWORD *)v10;
    }
    while ( (__int64 *)v10 != &ExpAtsSvmDevices );
    v12 = (*(__int64 (__fastcall **)(_QWORD))(HalIommuDispatch + 144))(*(_QWORD *)(v11 + 184));
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExpAtsSvmDeviceListLock);
  v13 = KeGetCurrentThread();
  if ( (unsigned __int64)&ExpAtsSvmDeviceListLock - qword_140C50630 < 0x8000000000LL )
    v6 = MmGetSessionIdEx((__int64)v13->ApcState.Process);
  _disable();
  p_Process = (__int64)&v13[1].Process;
  v15 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&ExpAtsSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != v6 )
  {
    ++v15;
    p_Process += 96LL;
    if ( v15 >= 6 )
      goto LABEL_27;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_27:
    if ( (*((_DWORD *)&v13->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v13, (ULONG_PTR)&ExpAtsSvmDeviceListLock, v6, 0LL);
    _enable();
    goto LABEL_35;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v16 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  v13->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v16 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v13, (__int64)&ExpAtsSvmDeviceListLock, v16);
LABEL_35:
  v17 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v17 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v12;
}
