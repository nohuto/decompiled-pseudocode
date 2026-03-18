/*
 * XREFs of PopResetActionDefaults @ 0x14077A1E8
 * Callers:
 *     PopExecutePowerAction @ 0x140761338 (PopExecutePowerAction.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void PopResetActionDefaults()
{
  dword_140C2342C = 1;
  dword_140C23420 = 0;
  dword_140C23428 = 0;
  byte_140C2341D = 0;
  if ( (PopAction & 2) == 0 )
  {
    LOBYTE(PopAction) = 0;
    byte_140C23402 = 0;
    qword_140C23404 = 0LL;
    dword_140C23410 = 0;
    byte_140C2341C = 0;
    dword_140C23414 = 16;
    dword_140C2340C = 268435459;
  }
}
