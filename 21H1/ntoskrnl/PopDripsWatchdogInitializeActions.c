/*
 * XREFs of PopDripsWatchdogInitializeActions @ 0x140A9130C
 * Callers:
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     PopCapturePlatformRole @ 0x14070CE30 (PopCapturePlatformRole.c)
 *     PopIsDirectedDripsEnabled @ 0x1407344A0 (PopIsDirectedDripsEnabled.c)
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
  dword_140C213EC = v0;
  return 0LL;
}
