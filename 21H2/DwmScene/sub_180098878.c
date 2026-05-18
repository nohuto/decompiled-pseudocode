/*
 * XREFs of sub_180098878 @ 0x180098878
 * Callers:
 *     sub_180013950 @ 0x180013950 (sub_180013950.c)
 *     sub_1800FB73C @ 0x1800FB73C (sub_1800FB73C.c)
 *     sub_1800FB8EC @ 0x1800FB8EC (sub_1800FB8EC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180098878(__int64 a1, int a2)
{
  if ( !*(_DWORD *)(a1 + 116) )
    *(_DWORD *)(a1 + 116) = a2;
  *(_DWORD *)(a1 + 112) = a2;
}
