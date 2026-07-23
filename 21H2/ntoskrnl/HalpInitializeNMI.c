/*
 * XREFs of HalpInitializeNMI @ 0x1403C5B98
 * Callers:
 *     HalpInitializeErrSrc @ 0x1409A1D10 (HalpInitializeErrSrc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInitializeNMI(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 8) == 3 )
  {
    dword_140C50994 = 1;
    HalpNmiInfo = *(_DWORD *)(a2 + 28);
    dword_140C50998 = 0;
  }
  return 0LL;
}
