/*
 * XREFs of PopResetActionDefaults @ 0x14077C5F8
 * Callers:
 *     PopExecutePowerAction @ 0x140762C18 (PopExecutePowerAction.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void PopResetActionDefaults()
{
  dword_140C22E6C = 1;
  dword_140C22E60 = 0;
  dword_140C22E68 = 0;
  byte_140C22E5D = 0;
  if ( (PopAction & 2) == 0 )
  {
    LOBYTE(PopAction) = 0;
    byte_140C22E42 = 0;
    qword_140C22E44 = 0LL;
    dword_140C22E50 = 0;
    byte_140C22E5C = 0;
    dword_140C22E54 = 16;
    dword_140C22E4C = 268435459;
  }
}
