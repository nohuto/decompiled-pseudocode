/*
 * XREFs of PopResetActionDefaults @ 0x14078ABF8
 * Callers:
 *     PopExecutePowerAction @ 0x140771228 (PopExecutePowerAction.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void PopResetActionDefaults()
{
  dword_140C2332C = 1;
  dword_140C23320 = 0;
  dword_140C23328 = 0;
  byte_140C2331D = 0;
  if ( (PopAction & 2) == 0 )
  {
    LOBYTE(PopAction) = 0;
    byte_140C23302 = 0;
    qword_140C23304 = 0LL;
    dword_140C23310 = 0;
    byte_140C2331C = 0;
    dword_140C23314 = 16;
    dword_140C2330C = 268435459;
  }
}
