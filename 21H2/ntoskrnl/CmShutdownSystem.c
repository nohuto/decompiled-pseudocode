/*
 * XREFs of CmShutdownSystem @ 0x140911B58
 * Callers:
 *     ExRebootSystemForRecovery @ 0x1406396B8 (ExRebootSystemForRecovery.c)
 *     PopGracefulShutdown @ 0x140A6AEC0 (PopGracefulShutdown.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     CmShutdownSystem0 @ 0x14053EBB0 (CmShutdownSystem0.c)
 *     CmShutdownSystem1 @ 0x14053EBD8 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x14053EE38 (CmShutdownSystem2.c)
 */

__int64 CmShutdownSystem()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v6 = 0LL;
  CmpInitializeThreadInfo((__int64)v6);
  if ( v2 )
  {
    v4 = (unsigned int)(v2 - 1);
    if ( (_DWORD)v4 )
    {
      if ( (_DWORD)v4 == 1 )
        CmShutdownSystem2();
    }
    else
    {
      CmShutdownSystem1(v1, v0, v4, v3);
    }
  }
  else
  {
    CmShutdownSystem0();
  }
  return CmCleanupThreadInfo(v6);
}
