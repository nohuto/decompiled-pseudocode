/*
 * XREFs of NtShutdownSystem @ 0x1406398E0
 * Callers:
 *     <none>
 * Callees:
 *     ExRebootSystemForRecovery @ 0x1406396B8 (ExRebootSystemForRecovery.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     NtSetSystemPowerState @ 0x140A53010 (NtSetSystemPowerState.c)
 */

__int64 __fastcall NtShutdownSystem(int a1)
{
  int v1; // ecx
  int v2; // ecx
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v5; // rcx

  if ( !a1 )
  {
    v5 = 4LL;
    return NtSetSystemPowerState(v5, 4LL, 3221225476LL);
  }
  v1 = a1 - 1;
  if ( !v1 )
  {
    v5 = 5LL;
    return NtSetSystemPowerState(v5, 4LL, 3221225476LL);
  }
  v2 = v1 - 1;
  if ( !v2 )
  {
    v5 = 6LL;
    return NtSetSystemPowerState(v5, 4LL, 3221225476LL);
  }
  if ( v2 != 1 )
    return 3221225485LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
    return 3221225569LL;
  ExRebootSystemForRecovery();
  return 3221225473LL;
}
