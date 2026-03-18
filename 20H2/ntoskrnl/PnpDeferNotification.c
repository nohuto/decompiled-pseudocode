/*
 * XREFs of PnpDeferNotification @ 0x1406ECE54
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x1406ECA80 (IoRegisterPlugPlayNotification.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x1408B5804 (PiRegisterKernelSoftRestartNotification.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     PnpInsertNoopEvent @ 0x1405CCDA4 (PnpInsertNoopEvent.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpDeferNotification(__int64 a1)
{
  char v2; // bp
  unsigned int v3; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rax

  v2 = 0;
  v3 = 0;
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  if ( BYTE2(NlsMbCodePageTag) || *(_DWORD *)(a1 + 16) == 3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x37706E50u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[2] = a1;
      ++*(_WORD *)(a1 + 56);
      *(_BYTE *)(a1 + 58) = 1;
      ExAcquireFastMutex(&PnpDeferredRegistrationLock);
      v6 = (_QWORD *)qword_140D2EB28;
      if ( *(PVOID **)qword_140D2EB28 != &PnpDeferredRegistrationList )
        __fastfail(3u);
      *v5 = &PnpDeferredRegistrationList;
      v5[1] = v6;
      *v6 = v5;
      qword_140D2EB28 = (__int64)v5;
      KeReleaseGuardedMutex(&PnpDeferredRegistrationLock);
      if ( !BYTE2(NlsMbCodePageTag) )
        v2 = 1;
    }
    else
    {
      v3 = -1073741670;
    }
  }
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  if ( v2 )
  {
    PnpInsertNoopEvent(0LL, 0LL);
    return 0;
  }
  return v3;
}
