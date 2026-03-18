/*
 * XREFs of PopFindNextSystemPowerState @ 0x1408E3A78
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFindNextSystemPowerState(int a1, char a2, _BYTE *a3)
{
  char v3; // r9

  v3 = 1;
  dword_140C23320 = dword_140C23324;
  if ( dword_140C23324 == 1 )
  {
    if ( dword_140C2330C < 0 && *a3 )
    {
      *a3 = 0;
      dword_140C2330C &= ~0x10000000u;
      dword_140C23320 = a1;
    }
    else if ( a2 && a1 == 5 )
    {
      dword_140C23320 = 5;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
