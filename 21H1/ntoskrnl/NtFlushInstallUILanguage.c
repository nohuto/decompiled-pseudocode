/*
 * XREFs of NtFlushInstallUILanguage @ 0x1407B9DD0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x1405B3EF0 (MigrateOOBELanguageToInstallationLanguage.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     MUIInitializeResourceLock @ 0x1407B9EAC (MUIInitializeResourceLock.c)
 */

NTSTATUS __cdecl NtFlushInstallUILanguage(LANGID InstallUILanguage, ULONG SetComittedFlag)
{
  NTSTATUS v3; // ebx
  int v4; // edi
  KPROCESSOR_MODE PreviousMode; // dl
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
    return v3;
  }
  return result;
}
