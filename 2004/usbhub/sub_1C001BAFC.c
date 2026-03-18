/*
 * XREFs of sub_1C001BAFC @ 0x1C001BAFC
 * Callers:
 *     sub_1C000F090 @ 0x1C000F090 (sub_1C000F090.c)
 *     sub_1C005C2E8 @ 0x1C005C2E8 (sub_1C005C2E8.c)
 *     sub_1C005C3DC @ 0x1C005C3DC (sub_1C005C3DC.c)
 *     sub_1C005C500 @ 0x1C005C500 (sub_1C005C500.c)
 *     sub_1C005C614 @ 0x1C005C614 (sub_1C005C614.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C001BAFC(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  unsigned __int16 *v3; // r8
  __int64 v4; // r10
  _DWORD *v5; // r9
  int v6; // eax
  __int64 result; // rax

  *(_WORD *)a2 = *(_WORD *)(a1 + 2548);
  v2 = *(_WORD *)(a1 + 2550);
  *(_DWORD *)(a2 + 4) = 0;
  *(_WORD *)(a2 + 2) = v2;
  *(_DWORD *)(a2 + 8) = *(unsigned __int16 *)(a1 + 5208);
  if ( *(_WORD *)(a1 + 5208) )
    ++*(_DWORD *)(a2 + 4);
  v3 = (unsigned __int16 *)(a1 + 5210);
  v4 = 5LL;
  v5 = (_DWORD *)(a2 + 12);
  do
  {
    v6 = *v3;
    *v5 = v6;
    if ( v6 )
      ++*(_DWORD *)(a2 + 4);
    ++v5;
    ++v3;
    --v4;
  }
  while ( v4 );
  result = *(unsigned int *)(a1 + 2536);
  *(_DWORD *)(a2 + 32) = result;
  return result;
}
