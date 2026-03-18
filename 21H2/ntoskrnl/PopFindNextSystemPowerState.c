/*
 * XREFs of PopFindNextSystemPowerState @ 0x14098972C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFindNextSystemPowerState(int a1, char a2, _BYTE *a3)
{
  char v3; // r9

  v3 = 1;
  dword_140C227E0 = dword_140C227E4;
  if ( dword_140C227E4 == 1 )
  {
    if ( dword_140C227CC < 0 && *a3 )
    {
      *a3 = 0;
      dword_140C227CC &= ~0x10000000u;
      dword_140C227E0 = a1;
    }
    else if ( a2 && a1 == 5 )
    {
      dword_140C227E0 = 5;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
