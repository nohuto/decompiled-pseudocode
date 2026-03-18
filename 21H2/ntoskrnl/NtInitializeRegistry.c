/*
 * XREFs of NtInitializeRegistry @ 0x1406EA120
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     ZwInitializeRegistry @ 0x14041D820 (ZwInitializeRegistry.c)
 *     CmpAcceptBoot @ 0x1406EA1C8 (CmpAcceptBoot.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     CmCompleteRegistryInitialization @ 0x14082830C (CmCompleteRegistryInitialization.c)
 *     CmpHandlePageFileOpenNotification @ 0x14085A568 (CmpHandlePageFileOpenNotification.c)
 *     CmpSyncNextBackupHive @ 0x140917F4C (CmpSyncNextBackupHive.c)
 */

__int64 NtInitializeRegistry()
{
  unsigned __int16 v0; // r9
  __int64 v1; // rdx
  unsigned int v2; // r8d
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v4 = 0LL;
  CmpInitializeThreadInfo((__int64)v4);
  LOBYTE(v1) = KeGetCurrentThread()->PreviousMode;
  if ( (_BYTE)v1 )
  {
    if ( v0 == 5096 )
    {
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, v1) )
        CmpSyncNextBackupHive();
    }
    else
    {
      ZwInitializeRegistry(v0, v1);
    }
  }
  else if ( (unsigned __int16)(v0 - 4096) > 0x3E7u )
  {
    if ( v0 == 2 )
    {
      CmpHandlePageFileOpenNotification();
    }
    else if ( v0 < 2u )
    {
      CmCompleteRegistryInitialization(v0);
    }
  }
  else
  {
    CmpAcceptBoot(v0);
  }
  CmCleanupThreadInfo(v4);
  return v2;
}
