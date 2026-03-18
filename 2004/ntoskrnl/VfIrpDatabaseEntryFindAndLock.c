/*
 * XREFs of VfIrpDatabaseEntryFindAndLock @ 0x1409DD798
 * Callers:
 *     IovCancelIrp @ 0x1409C1F4C (IovCancelIrp.c)
 *     IovpCallDriver1 @ 0x1409CCC3C (IovpCallDriver1.c)
 *     IovpCheckIrpForCriticalTracking @ 0x1409CD438 (IovpCheckIrpForCriticalTracking.c)
 *     IovpCompleteRequest1 @ 0x1409CD4B0 (IovpCompleteRequest1.c)
 *     VfIoFreeIrp @ 0x1409CE23C (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x1409CE3F4 (VfIoInitializeIrp.c)
 *     VfIrpWatermark @ 0x1409CE68C (VfIrpWatermark.c)
 *     VfSetIoBuildRequest @ 0x1409CE6C8 (VfSetIoBuildRequest.c)
 *     VfPendingMoreProcessingRequired @ 0x1409D2890 (VfPendingMoreProcessingRequired.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x1409DD848 (VfIrpDatabaseEntryInsertAndLock.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x14059D160 (ViIrpDatabaseAcquireLockShared.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x14059D200 (ViIrpDatabaseReleaseLockShared.c)
 *     VfUtilAddressRangeFitNoLock @ 0x1409C332C (VfUtilAddressRangeFitNoLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1409DD91C (VfIrpDatabaseEntryReleaseLock.c)
 *     ViIrpDatabaseFindPointer @ 0x1409DDB2C (ViIrpDatabaseFindPointer.c)
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
