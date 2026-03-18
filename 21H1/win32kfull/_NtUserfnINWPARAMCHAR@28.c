/*
 * XREFs of _NtUserfnINWPARAMCHAR@28 @ 0x16CC0D
 * Callers:
 *     <none>
 * Callees:
 *     _RtlMBMessageWParamCharToWCS@8 @ 0x1B72F5 (_RtlMBMessageWParamCharToWCS@8.c)
 */

int __stdcall NtUserfnINWPARAMCHAR(int a1, int a2, unsigned int a3, int a4, int a5, char a6, int a7)
{
  if ( a7 )
  {
    if ( a2 == 47 || a2 == 288 )
    {
      a7 = (unsigned __int16)a3;
      RtlMBMessageWParamCharToWCS(a2, &a7);
      a3 = (unsigned __int16)a7 | a3 & 0xFFFF0000;
    }
    else
    {
      RtlMBMessageWParamCharToWCS(a2, &a3);
    }
  }
  return ((int (__stdcall *)(int, int, unsigned int, int, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3, a4, a5);
}
