/*
 * XREFs of PopDripsWatchdogInitializeActions @ 0x140A90914
 * Callers:
 *     PopDripsWatchdogInitialize @ 0x140A70F60 (PopDripsWatchdogInitialize.c)
 * Callees:
 *     PopCapturePlatformRole @ 0x14064B840 (PopCapturePlatformRole.c)
 *     PopIsDirectedDripsEnabled @ 0x140732778 (PopIsDirectedDripsEnabled.c)
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
  dword_140C211AC = v0;
  return 0LL;
}
