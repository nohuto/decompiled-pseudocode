/*
 * XREFs of CmpFreeSiloContextCallback @ 0x1407F8C00
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     CmpStopSiloKeyLockTracker @ 0x1407F85CC (CmpStopSiloKeyLockTracker.c)
 */

__int64 __fastcall CmpFreeSiloContextCallback(ULONG_PTR BugCheckParameter2)
{
  void *v2; // rcx
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v4 = 0LL;
  CmpInitializeThreadInfo((__int64)v4);
  CmpStopSiloKeyLockTracker(BugCheckParameter2);
  v2 = *(void **)(BugCheckParameter2 + 32);
  if ( v2 )
    ObfDereferenceObject(v2);
  return CmCleanupThreadInfo(v4);
}
