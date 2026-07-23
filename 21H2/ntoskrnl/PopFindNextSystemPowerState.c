/*
 * XREFs of PopFindNextSystemPowerState @ 0x1408E1398
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFindNextSystemPowerState(int a1, char a2, _BYTE *a3)
{
  char v3; // r9

  v3 = 1;
  dword_140C23A80 = dword_140C23A84;
  if ( dword_140C23A84 == 1 )
  {
    if ( dword_140C23A6C < 0 && *a3 )
    {
      *a3 = 0;
      dword_140C23A6C &= ~0x10000000u;
      dword_140C23A80 = a1;
    }
    else if ( a2 && a1 == 5 )
    {
      dword_140C23A80 = 5;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
