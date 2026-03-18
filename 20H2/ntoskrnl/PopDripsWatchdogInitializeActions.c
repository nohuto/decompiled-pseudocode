/*
 * XREFs of PopDripsWatchdogInitializeActions @ 0x140A965FC
 * Callers:
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     PopCapturePlatformRole @ 0x1406F7414 (PopCapturePlatformRole.c)
 *     PopIsDirectedDripsEnabled @ 0x140741B24 (PopIsDirectedDripsEnabled.c)
 */

__int64 PopDripsWatchdogInitializeActions()
{
  int v0; // edx
  int v1; // eax

  if ( PopIsDirectedDripsEnabled() )
  {
    v1 = PopCapturePlatformRole();
    if ( v1 != 2 && v1 != 8 )
      v0 |= 1u;
  }
  dword_140C212AC = v0;
  return 0LL;
}
