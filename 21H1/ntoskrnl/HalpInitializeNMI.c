/*
 * XREFs of HalpInitializeNMI @ 0x1403C19D8
 * Callers:
 *     HalpInitializeErrSrc @ 0x14099BD20 (HalpInitializeErrSrc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInitializeNMI(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 8) == 3 )
  {
    dword_140C50894 = 1;
    HalpNmiInfo = *(_DWORD *)(a2 + 28);
    dword_140C50898 = 0;
  }
  return 0LL;
}
