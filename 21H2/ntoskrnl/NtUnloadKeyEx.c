/*
 * XREFs of NtUnloadKeyEx @ 0x14069E320
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     CmUnloadKey @ 0x14069E454 (CmUnloadKey.c)
 */

__int64 NtUnloadKeyEx()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2; // r10
  unsigned int v3; // r8d
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v5 = 0LL;
  CmpInitializeThreadInfo((__int64)v5);
  LOBYTE(v0) = 1;
  CmUnloadKey(v2, 0LL, v0, v1);
  CmCleanupThreadInfo(v5);
  return v3;
}
