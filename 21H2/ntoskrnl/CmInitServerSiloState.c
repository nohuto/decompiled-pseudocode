/*
 * XREFs of CmInitServerSiloState @ 0x140861E8C
 * Callers:
 *     CmpInitSiloSupport @ 0x140861E5C (CmpInitSiloSupport.c)
 *     PspInitializeServerSiloDeferred @ 0x1409AC180 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     CmpStartSiloRegistryNamespace @ 0x140690978 (CmpStartSiloRegistryNamespace.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x140690C50 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmpLockSiloKeyLockTrackerExclusive @ 0x1407FCA44 (CmpLockSiloKeyLockTrackerExclusive.c)
 */

__int64 CmInitServerSiloState()
{
  __int64 v0; // r8
  ULONG_PTR v1; // rbx
  unsigned int v2; // r8d
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF

  BugCheckParameter2 = 0LL;
  *(_OWORD *)v4 = 0LL;
  CmpInitializeThreadInfo((__int64)v4);
  if ( (int)CmpGetOrCreateContextForSiloNoRef(v0, &BugCheckParameter2) >= 0 )
  {
    v1 = BugCheckParameter2;
    if ( (int)CmpStartSiloRegistryNamespace(BugCheckParameter2) >= 0 )
    {
      CmpLockSiloKeyLockTrackerExclusive(v1);
      *(_DWORD *)(v1 + 8) |= 1u;
      ExReleasePushLockEx(v1, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  CmCleanupThreadInfo(v4);
  return v2;
}
