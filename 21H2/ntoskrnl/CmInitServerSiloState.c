/*
 * XREFs of CmInitServerSiloState @ 0x1407A5728
 * Callers:
 *     CmpInitSiloSupport @ 0x1407A56F8 (CmpInitSiloSupport.c)
 *     PspInitializeServerSiloDeferred @ 0x140906470 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     CmpStartSiloRegistryNamespace @ 0x1406C39CC (CmpStartSiloRegistryNamespace.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x140715BF8 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmpStartSiloKeyLockTracker @ 0x1407A5770 (CmpStartSiloKeyLockTracker.c)
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
