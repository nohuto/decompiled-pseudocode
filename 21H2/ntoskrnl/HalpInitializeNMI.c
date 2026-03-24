/*
 * XREFs of HalpInitializeNMI @ 0x1403C5768
 * Callers:
 *     HalpInitializeErrSrc @ 0x1409A0DE0 (HalpInitializeErrSrc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInitializeNMI(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 8) == 3 )
  {
    dword_140C50954 = 1;
    HalpNmiInfo = *(_DWORD *)(a2 + 28);
    dword_140C50958 = 0;
  }
  return 0LL;
}
