/*
 * XREFs of VfIrpDatabaseCheckExFreePool @ 0x1409DD69C
 * Callers:
 *     VerifierExFreePool @ 0x1409D2120 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x1409D21B0 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     ViIrpDatabaseAcquireLockShared @ 0x14059CA70 (ViIrpDatabaseAcquireLockShared.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x14059CB10 (ViIrpDatabaseReleaseLockShared.c)
 *     VfUtilAddressRangeFitNoLock @ 0x1409C331C (VfUtilAddressRangeFitNoLock.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD34 (VerifierBugCheckIfAppropriate.c)
 *     ViIrpDatabaseFindPointer @ 0x1409DDACC (ViIrpDatabaseFindPointer.c)
 */

void __fastcall VfIrpDatabaseCheckExFreePool(ULONG_PTR BugCheckParameter2)
{
  __int64 Pointer; // rbx
  KIRQL v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  if ( VfIrpDatabaseInitialized )
  {
    if ( VfUtilAddressRangeFitNoLock(
           (__m128i *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (BugCheckParameter2 >> 12))),
           BugCheckParameter2,
           BugCheckParameter2 + 1) )
    {
      ViIrpDatabaseAcquireLockShared(&v3);
      Pointer = ViIrpDatabaseFindPointer(BugCheckParameter2);
      ViIrpDatabaseReleaseLockShared(v3);
      if ( Pointer )
      {
        if ( (MmVerifierData & 0x10) != 0 )
          VerifierBugCheckIfAppropriate(0xC4u, 0x105uLL, BugCheckParameter2, 0LL, 0LL);
      }
    }
  }
}
