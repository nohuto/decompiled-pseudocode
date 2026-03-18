/*
 * XREFs of CmReconcileAndValidateAllHives @ 0x1409190E8
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpDoFlushAll @ 0x14022EA80 (CmpDoFlushAll.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 CmReconcileAndValidateAllHives()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int128 v7; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v8[3]; // [rsp+30h] [rbp-48h] BYREF

  v7 = 0LL;
  memset(v8, 0, sizeof(v8));
  CmpInitializeThreadInfo((__int64)&v7);
  if ( (unsigned __int8)CmpAcquireShutdownRundown(v1, v0, v2) )
  {
    CmpAttachToRegistryProcess(v8);
    CmpDoFlushAll();
    CmpDetachFromRegistryProcess(v8);
    CmpReleaseShutdownRundown(v4, v3, v5);
  }
  CmCleanupThreadInfo((__int64 *)&v7);
  return 0LL;
}
