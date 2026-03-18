/*
 * XREFs of PopFindNextSystemPowerState @ 0x1408DC8C8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFindNextSystemPowerState(int a1, char a2, _BYTE *a3)
{
  char v3; // r9

  v3 = 1;
  dword_140C23420 = dword_140C23424;
  if ( dword_140C23424 == 1 )
  {
    if ( dword_140C2340C < 0 && *a3 )
    {
      *a3 = 0;
      dword_140C2340C &= ~0x10000000u;
      dword_140C23420 = a1;
    }
    else if ( a2 && a1 == 5 )
    {
      dword_140C23420 = 5;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
