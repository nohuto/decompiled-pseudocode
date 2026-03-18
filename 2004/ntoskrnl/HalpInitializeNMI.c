/*
 * XREFs of HalpInitializeNMI @ 0x1403C2898
 * Callers:
 *     HalpInitializeErrSrc @ 0x14099D4C0 (HalpInitializeErrSrc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInitializeNMI(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 8) == 3 )
  {
    dword_140C50754 = 1;
    HalpNmiInfo = *(_DWORD *)(a2 + 28);
    dword_140C50758 = 0;
  }
  return 0LL;
}
