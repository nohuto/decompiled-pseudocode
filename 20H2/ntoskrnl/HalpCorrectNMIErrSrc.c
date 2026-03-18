/*
 * XREFs of HalpCorrectNMIErrSrc @ 0x1403CC2E8
 * Callers:
 *     HalpCorrectErrSrc @ 0x1409A3F90 (HalpCorrectErrSrc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpCorrectNMIErrSrc(__int64 a1, _DWORD *a2)
{
  if ( *(_DWORD *)(a1 + 24) < 3u )
    *(_DWORD *)(a1 + 24) = 3;
  *a2 = 192;
  *a2 = *(_DWORD *)(a1 + 16) + 192;
  return 0LL;
}
