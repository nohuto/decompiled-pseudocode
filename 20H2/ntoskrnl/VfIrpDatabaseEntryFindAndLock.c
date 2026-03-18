/*
 * XREFs of VfIrpDatabaseEntryFindAndLock @ 0x1409E37B8
 * Callers:
 *     IovCancelIrp @ 0x1409C7F6C (IovCancelIrp.c)
 *     IovpCallDriver1 @ 0x1409D2C5C (IovpCallDriver1.c)
 *     IovpCheckIrpForCriticalTracking @ 0x1409D3458 (IovpCheckIrpForCriticalTracking.c)
 *     IovpCompleteRequest1 @ 0x1409D34D0 (IovpCompleteRequest1.c)
 *     VfIoFreeIrp @ 0x1409D425C (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x1409D4414 (VfIoInitializeIrp.c)
 *     VfIrpWatermark @ 0x1409D46AC (VfIrpWatermark.c)
 *     VfSetIoBuildRequest @ 0x1409D46E8 (VfSetIoBuildRequest.c)
 *     VfPendingMoreProcessingRequired @ 0x1409D88B0 (VfPendingMoreProcessingRequired.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x1409E3868 (VfIrpDatabaseEntryInsertAndLock.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x1405A0C00 (ViIrpDatabaseAcquireLockShared.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x1405A0CA0 (ViIrpDatabaseReleaseLockShared.c)
 *     VfUtilAddressRangeFitNoLock @ 0x1409C934C (VfUtilAddressRangeFitNoLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1409E393C (VfIrpDatabaseEntryReleaseLock.c)
 *     ViIrpDatabaseFindPointer @ 0x1409E3B4C (ViIrpDatabaseFindPointer.c)
 */

__int64 __fastcall VfIrpDatabaseEntryFindAndLock(unsigned __int64 a1)
{
  __int64 v1; // rdi
  __int64 Pointer; // rax
  KIRQL v4; // bl
  KIRQL v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  v6 = 0;
  if ( VfIrpDatabaseInitialized
    && VfUtilAddressRangeFitNoLock(
         (__m128i *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (a1 >> 12))),
         a1,
         a1 + 208) )
  {
    ViIrpDatabaseAcquireLockShared(&v6);
    Pointer = ViIrpDatabaseFindPointer(a1);
    v1 = Pointer;
    if ( Pointer )
    {
      _InterlockedIncrement((volatile signed __int32 *)(Pointer + 20));
      v4 = v6;
      ViIrpDatabaseReleaseLockShared(v6);
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 8));
      *(_BYTE *)(v1 + 16) = v4;
      _InterlockedDecrement((volatile signed __int32 *)(v1 + 20));
      if ( !*(_DWORD *)(v1 + 24) )
      {
        VfIrpDatabaseEntryReleaseLock(v1);
        return 0LL;
      }
    }
    else
    {
      ViIrpDatabaseReleaseLockShared(v6);
    }
  }
  return v1;
}
