/*
 * XREFs of NtInitializeRegistry @ 0x14077B120
 * Callers:
 *     <none>
 * Callees:
 *     ZwInitializeRegistry @ 0x1403F55C0 (ZwInitializeRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     CmpAcceptBoot @ 0x14077B190 (CmpAcceptBoot.c)
 *     CmCompleteRegistryInitialization @ 0x140782FEC (CmCompleteRegistryInitialization.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407B6248 (CmpHandlePageFileOpenNotification.c)
 *     CmpSyncNextBackupHive @ 0x14086E138 (CmpSyncNextBackupHive.c)
 */

NTSTATUS __cdecl NtInitializeRegistry(USHORT BootCondition)
{
  KPROCESSOR_MODE PreviousMode; // dl

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( BootCondition == 5096 )
    {
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
        return CmpSyncNextBackupHive();
      else
        return -1073741727;
    }
    else
    {
      return ZwInitializeRegistry(BootCondition);
    }
  }
  else if ( (unsigned __int16)(BootCondition - 4096) > 0x3E7u )
  {
    if ( BootCondition == 2 )
    {
      return CmpHandlePageFileOpenNotification();
    }
    else if ( BootCondition >= 2u )
    {
      return -1073741811;
    }
    else
    {
      return CmCompleteRegistryInitialization();
    }
  }
  else
  {
    return CmpAcceptBoot();
  }
}
