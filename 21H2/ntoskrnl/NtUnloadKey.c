/*
 * XREFs of NtUnloadKey @ 0x14069E2D0
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     CmUnloadKey @ 0x14069E454 (CmUnloadKey.c)
 */

__int64 NtUnloadKey()
{
  __int64 v0; // r10
  unsigned int v1; // r8d
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v3 = 0LL;
  CmpInitializeThreadInfo((__int64)v3);
  CmUnloadKey(v0, 0LL, 0LL, 0LL);
  CmCleanupThreadInfo(v3);
  return v1;
}
