/*
 * XREFs of sub_1800994A4 @ 0x1800994A4
 * Callers:
 *     sub_180013950 @ 0x180013950 (sub_180013950.c)
 *     sub_1800FB73C @ 0x1800FB73C (sub_1800FB73C.c)
 *     sub_1800FB8EC @ 0x1800FB8EC (sub_1800FB8EC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800994A4(__int64 a1, int a2)
{
  if ( !*(_DWORD *)(a1 + 124) )
    *(_DWORD *)(a1 + 124) = a2;
  *(_DWORD *)(a1 + 120) = a2;
}
