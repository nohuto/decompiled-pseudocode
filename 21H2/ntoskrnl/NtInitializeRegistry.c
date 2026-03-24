/*
 * XREFs of NtInitializeRegistry @ 0x14078D500
 * Callers:
 *     <none>
 * Callees:
 *     ZwInitializeRegistry @ 0x1403FC3C0 (ZwInitializeRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x140627640 (SeSinglePrivilegeCheck.c)
 *     CmpAcceptBoot @ 0x14078D570 (CmpAcceptBoot.c)
 *     CmCompleteRegistryInitialization @ 0x1407900CC (CmCompleteRegistryInitialization.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407C8D38 (CmpHandlePageFileOpenNotification.c)
 *     CmpSyncNextBackupHive @ 0x140871460 (CmpSyncNextBackupHive.c)
 */

__int64 __fastcall NtInitializeRegistry(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = KeGetCurrentThread()->PreviousMode;
  if ( (_BYTE)a2 )
  {
    if ( (_WORD)a1 == 5096 )
    {
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, a2) )
        return CmpSyncNextBackupHive();
      else
        return 3221225569LL;
    }
    else
    {
      return ZwInitializeRegistry(a1, a2);
    }
  }
  else if ( (unsigned __int16)(a1 - 4096) > 0x3E7u )
  {
    if ( (_WORD)a1 == 2 )
    {
      return CmpHandlePageFileOpenNotification();
    }
    else if ( (unsigned __int16)a1 >= 2u )
    {
      return 3221225485LL;
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
