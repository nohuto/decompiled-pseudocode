/*
 * XREFs of NtFlushInstallUILanguage @ 0x14085F580
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x140642868 (MigrateOOBELanguageToInstallationLanguage.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     MUIInitializeResourceLock @ 0x14085F65C (MUIInitializeResourceLock.c)
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v3;
  }
  return result;
}
