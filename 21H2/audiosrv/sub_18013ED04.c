/*
 * XREFs of sub_18013ED04 @ 0x18013ED04
 * Callers:
 *     sub_18014059C @ 0x18014059C (sub_18014059C.c)
 *     sub_180142A90 @ 0x180142A90 (sub_180142A90.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_180107110 @ 0x180107110 (sub_180107110.c)
 */

__int64 __fastcall sub_18013ED04(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  if ( !*(_QWORD *)a1 && !sub_180107110(a1, *(_DWORD *)(a1 + 16), 1) )
    sub_1800B8610(-2147024882);
  return sub_180140070(a1, a2, a3, a4);
}
