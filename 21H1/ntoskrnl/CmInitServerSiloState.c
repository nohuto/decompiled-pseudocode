/*
 * XREFs of CmInitServerSiloState @ 0x14078CDE8
 * Callers:
 *     CmpInitSiloSupport @ 0x14078CDB8 (CmpInitSiloSupport.c)
 *     PspInitializeServerSiloDeferred @ 0x1409022A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     CmpGetOrCreateContextForSiloNoRef @ 0x1406EC2B8 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmpStartSiloRegistryNamespace @ 0x1406ED80C (CmpStartSiloRegistryNamespace.c)
 *     CmpStartSiloKeyLockTracker @ 0x14078CE30 (CmpStartSiloKeyLockTracker.c)
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
