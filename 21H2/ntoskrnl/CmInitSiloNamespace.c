/*
 * XREFs of CmInitSiloNamespace @ 0x140690914
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140690378 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     CmpStartSiloRegistryNamespace @ 0x140690978 (CmpStartSiloRegistryNamespace.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x140690C50 (CmpGetOrCreateContextForSiloNoRef.c)
 */

__int64 CmInitSiloNamespace()
{
  __int64 v0; // r8
  int v1; // eax
  __int64 v2; // rdx
  unsigned int v3; // r8d
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  *(_OWORD *)v5 = 0LL;
  v6 = 0LL;
  CmpInitializeThreadInfo((__int64)v5);
  v1 = CmpGetOrCreateContextForSiloNoRef(v0, &v6);
  if ( v1 >= 0 )
    CmpStartSiloRegistryNamespace(v6, v2, (unsigned int)v1);
  CmCleanupThreadInfo(v5);
  return v3;
}
