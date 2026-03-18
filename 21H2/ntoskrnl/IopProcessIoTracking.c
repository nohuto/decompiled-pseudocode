/*
 * XREFs of IopProcessIoTracking @ 0x140559C3C
 * Callers:
 *     IopPerfCompleteRequest @ 0x140559770 (IopPerfCompleteRequest.c)
 * Callees:
 *     ExfTryAcquirePushLockSharedEx @ 0x140220664 (ExfTryAcquirePushLockSharedEx.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

char __fastcall IopProcessIoTracking(__int64 a1, int a2)
{
  char v2; // si
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned int AbEntrySummary; // eax
  __int64 v7; // rcx
  int SessionId; // eax
  struct _KTHREAD *v9; // rax
  bool v10; // zf
  __int64 i; // rbx
  __int16 v13; // [rsp+28h] [rbp-50h] BYREF
  int v14; // [rsp+2Ah] [rbp-4Eh]
  __int16 v15; // [rsp+2Eh] [rbp-4Ah]
  __int64 v16; // [rsp+30h] [rbp-48h]
  int v17; // [rsp+38h] [rbp-40h]

  v16 = a1;
  v14 = 0;
  v2 = 0;
  v15 = 0;
  v17 = a2;
  v13 = 24;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v2 = 1;
  }
  v4 = KeGetCurrentThread();
  v5 = 0LL;
  _disable();
  AbEntrySummary = v4->AbEntrySummary;
  if ( v4->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&IopPerfIoTrackingLock, (__int64)v4)) != 0 )
  {
    _BitScanForward((unsigned int *)&v7, AbEntrySummary);
    v4->AbEntrySummary = AbEntrySummary & ~(1 << v7);
    _enable();
    v5 = (unsigned __int64)(&v4[1].Process + 12 * v7);
    if ( (unsigned __int64)&IopPerfIoTrackingLock - qword_140C50630 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v4->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v5 + 8) = SessionId;
    *(_QWORD *)v5 = (unsigned __int64)&IopPerfIoTrackingLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 17LL, 0LL)
    || (LOBYTE(v9) = ExfTryAcquirePushLockSharedEx((signed __int64 *)&IopPerfIoTrackingLock, 0), (_BYTE)v9) )
  {
    if ( v5 )
      *(_BYTE *)(v5 + 18) = 1;
    for ( i = IopPerfIoTrackingListHead; (__int64 *)i != &IopPerfIoTrackingListHead; i = *(_QWORD *)i )
      (*(void (__fastcall **)(__int16 *))(i + 16))(&v13);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&IopPerfIoTrackingLock);
    LOBYTE(v9) = KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
    if ( v2 == 1 )
    {
      v9 = KeGetCurrentThread();
      v10 = v9->SpecialApcDisable++ == -1;
      if ( v10 )
        goto LABEL_25;
    }
  }
  else
  {
    if ( v5 )
      LOBYTE(v9) = KeAbPostReleaseEx((ULONG_PTR)&IopPerfIoTrackingLock, v5);
    if ( v2 == 1 )
    {
      v9 = KeGetCurrentThread();
      v10 = v9->SpecialApcDisable++ == -1;
      if ( v10 )
      {
LABEL_25:
        v9 = (struct _KTHREAD *)((char *)v9 + 152);
        if ( *(struct _KTHREAD **)&v9->Header.Lock != v9 )
          LOBYTE(v9) = KiCheckForKernelApcDelivery();
      }
    }
  }
  return (char)v9;
}
