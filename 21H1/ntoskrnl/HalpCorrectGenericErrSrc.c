/*
 * XREFs of HalpCorrectGenericErrSrc @ 0x1403C8874
 * Callers:
 *     HalpCorrectErrSrc @ 0x14099C6F0 (HalpCorrectErrSrc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpCorrectGenericErrSrc(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 64) )
    *(_DWORD *)(a1 + 20) = 0;
  result = 0LL;
  *a2 = *(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 16) + 80;
  return result;
}
