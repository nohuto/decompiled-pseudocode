/*
 * XREFs of PopFindNextSystemPowerState @ 0x1408DDC38
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFindNextSystemPowerState(int a1, char a2, _BYTE *a3)
{
  char v3; // r9

  v3 = 1;
  dword_140C22E60 = dword_140C22E64;
  if ( dword_140C22E64 == 1 )
  {
    if ( dword_140C22E4C < 0 && *a3 )
    {
      *a3 = 0;
      dword_140C22E4C &= ~0x10000000u;
      dword_140C22E60 = a1;
    }
    else if ( a2 && a1 == 5 )
    {
      dword_140C22E60 = 5;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
