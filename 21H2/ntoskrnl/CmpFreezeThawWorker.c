/*
 * XREFs of CmpFreezeThawWorker @ 0x140918FE0
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     CmThawRegistry @ 0x140918E48 (CmThawRegistry.c)
 */

__int64 CmpFreezeThawWorker()
{
  __int64 v1[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v1 = 0LL;
  CmpInitializeThreadInfo((__int64)v1);
  CmpFreezeThawPending = 0;
  if ( CmpFreezeThawState == 1 )
    CmThawRegistry();
  return CmCleanupThreadInfo(v1);
}
