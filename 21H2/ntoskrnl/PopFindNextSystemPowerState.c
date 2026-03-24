/*
 * XREFs of PopFindNextSystemPowerState @ 0x1408E1238
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFindNextSystemPowerState(int a1, char a2, _BYTE *a3)
{
  char v3; // r9

  v3 = 1;
  dword_140C23460 = dword_140C23464;
  if ( dword_140C23464 == 1 )
  {
    if ( dword_140C2344C < 0 && *a3 )
    {
      *a3 = 0;
      dword_140C2344C &= ~0x10000000u;
      dword_140C23460 = a1;
    }
    else if ( a2 && a1 == 5 )
    {
      dword_140C23460 = 5;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
