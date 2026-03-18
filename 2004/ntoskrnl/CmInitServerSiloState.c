/*
 * XREFs of CmInitServerSiloState @ 0x14078ECB8
 * Callers:
 *     CmpInitSiloSupport @ 0x14078EC88 (CmpInitSiloSupport.c)
 *     PspInitializeServerSiloDeferred @ 0x1409030A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     CmpStartSiloRegistryNamespace @ 0x14064F8D0 (CmpStartSiloRegistryNamespace.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x14070FDD8 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmpStartSiloKeyLockTracker @ 0x14078ED00 (CmpStartSiloKeyLockTracker.c)
 */

__int64 __fastcall CmInitServerSiloState(__int64 a1)
{
  __int64 result; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp+10h] BYREF

  BugCheckParameter2 = 0LL;
  result = CmpGetOrCreateContextForSiloNoRef(a1, &BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    result = CmpStartSiloRegistryNamespace(BugCheckParameter2);
    if ( (int)result >= 0 )
    {
      result = CmpStartSiloKeyLockTracker(BugCheckParameter2);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
