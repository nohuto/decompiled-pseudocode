/*
 * XREFs of PopDripsWatchdogInitializeActions @ 0x140A9346C
 * Callers:
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 * Callees:
 *     PopCapturePlatformRole @ 0x140679450 (PopCapturePlatformRole.c)
 *     PopIsDirectedDripsEnabled @ 0x140738C20 (PopIsDirectedDripsEnabled.c)
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
  dword_140C2142C = v0;
  return 0LL;
}
