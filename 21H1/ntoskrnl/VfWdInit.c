/*
 * XREFs of VfWdInit @ 0x1409DDBB8
 * Callers:
 *     VfInitVerifierComponents @ 0x1409C3E50 (VfInitVerifierComponents.c)
 * Callees:
 *     KeInitializeDpc @ 0x140204F10 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x140355110 (KeInitializeTimerEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     VfWdSetCancelTimeout @ 0x1409DDC80 (VfWdSetCancelTimeout.c)
 */

__int64 VfWdInit()
{
  __int64 result; // rax

  if ( !VfSafeMode )
  {
    VfWdIrpListLock = 0LL;
    qword_140D47208 = (__int64)&VfWdIrpListHead;
    VfWdIrpListHead = (__int64)&VfWdIrpListHead;
    pXdvExInitializeNPagedLookasideList(
      (int)&ViWdIrpLookasideList,
      0,
      (int)VfUtilFreePoolDispatchLevel,
      512,
      32LL,
      1683449430,
      16,
      VfInitializedWithoutReboot,
      (__int64)ExInitializeNPagedLookasideListInternal);
    KeInitializeTimerEx(&ViWdIrpTimer, NotificationTimer);
    KeInitializeDpc(&ViWdIrpTimerDpc, ViWdIrpTimerDpcRoutine, 0LL);
    VfWdSetCancelTimeout((unsigned int)VfWdIrpTimeoutMsec);
    return (unsigned int)_InterlockedExchange(&ViWdInitialized, 1);
  }
  return result;
}
