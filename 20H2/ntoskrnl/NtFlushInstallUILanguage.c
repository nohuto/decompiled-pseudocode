/*
 * XREFs of NtFlushInstallUILanguage @ 0x1407CB7D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x1405B8170 (MigrateOOBELanguageToInstallationLanguage.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     MUIInitializeResourceLock @ 0x1407CB8AC (MUIInitializeResourceLock.c)
 */

__int64 __fastcall NtFlushInstallUILanguage(int a1, int a2)
{
  unsigned int v3; // ebx
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax

  v3 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
    return 3221225473LL;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return 3221225506LL;
  if ( PsUILanguageComitted )
  {
    if ( a1 == (unsigned __int16)PsInstallUILanguageId )
      return 0LL;
    return 3221225473LL;
  }
  if ( MUIRefreshCachedUILock
    || (result = MUIInitializeResourceLock(&MUIRefreshCachedUILock), (result & 0xC0000000) != 0xC0000000) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(MUIRefreshCachedUILock, 1u);
    if ( a2 )
      PsUILanguageComitted = 1;
    if ( (_WORD)a1 != PsInstallUILanguageId )
    {
      PsInstallUILanguageId = a1;
      PsMachineUILanguageId = a1;
      v3 = MigrateOOBELanguageToInstallationLanguage();
    }
    ExReleaseResourceLite(MUIRefreshCachedUILock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v3;
  }
  return result;
}
