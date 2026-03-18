/*
 * XREFs of CmInitServerSiloState @ 0x14079B670
 * Callers:
 *     CmpInitSiloSupport @ 0x14079B640 (CmpInitSiloSupport.c)
 *     PspInitializeServerSiloDeferred @ 0x140908CC0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     CmpGetOrCreateContextForSiloNoRef @ 0x1406A0A64 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmpStartSiloRegistryNamespace @ 0x1406E3CDC (CmpStartSiloRegistryNamespace.c)
 *     CmpStartSiloKeyLockTracker @ 0x14079B6B8 (CmpStartSiloKeyLockTracker.c)
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
