/*
 * XREFs of NtFlushInstallUILanguage @ 0x1407BCF40
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x1405B4610 (MigrateOOBELanguageToInstallationLanguage.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     MUIInitializeResourceLock @ 0x1407BD01C (MUIInitializeResourceLock.c)
 */

NTSTATUS __cdecl NtFlushInstallUILanguage(LANGID InstallUILanguage, ULONG SetComittedFlag)
{
  NTSTATUS v3; // ebx
  int v4; // edi
  KPROCESSOR_MODE PreviousMode; // dl
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax

  v3 = 0;
  v4 = InstallUILanguage;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
    return -1073741823;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return -1073741790;
  if ( PsUILanguageComitted )
  {
    if ( v4 == (unsigned __int16)PsInstallUILanguageId )
      return 0;
    return -1073741823;
  }
  if ( MUIRefreshCachedUILock
    || (result = MUIInitializeResourceLock(&MUIRefreshCachedUILock), (result & 0xC0000000) != 0xC0000000) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(MUIRefreshCachedUILock, 1u);
    if ( SetComittedFlag )
      PsUILanguageComitted = 1;
    if ( (_WORD)v4 != PsInstallUILanguageId )
    {
      PsInstallUILanguageId = v4;
      PsMachineUILanguageId = v4;
      v3 = MigrateOOBELanguageToInstallationLanguage();
    }
    ExReleaseResourceLite(MUIRefreshCachedUILock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v3;
  }
  return result;
}
