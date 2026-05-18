/*
 * XREFs of sub_180098014 @ 0x180098014
 * Callers:
 *     sub_18009B690 @ 0x18009B690 (sub_18009B690.c)
 * Callees:
 *     sub_1800980B8 @ 0x1800980B8 (sub_1800980B8.c)
 *     sub_1800984F0 @ 0x1800984F0 (sub_1800984F0.c)
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 */

__int64 __fastcall sub_180098014(__int64 a1, __int64 a2)
{
  int v2; // r9d
  int v5; // r10d
  int v6; // r8d
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 204);
  *(_DWORD *)(a1 + 300) = v2;
  v5 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a1 + 120) = v5;
  v6 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 112) = v6;
  *(_DWORD *)(a1 + 116) = v6;
  *(_DWORD *)(a1 + 124) = v5;
  *(_WORD *)(a1 + 308) = *(_WORD *)(a2 + 112);
  sub_18011BCAC(&unk_180213658, 3LL, "Mesh of type %d loaded with %lu vertices and %lu indices", v2, v5, v6);
  result = *(unsigned int *)(a2 + 28);
  if ( (result & 0x800) != 0 )
    result = sub_1800984F0(
               a1,
               *(_DWORD *)(a1 + 116),
               *(_DWORD *)(a1 + 124),
               *(_DWORD *)(a1 + 300),
               *(_DWORD *)(a2 + 28));
  if ( *(_DWORD *)(a1 + 120) )
    return sub_1800980B8(a1, a2);
  return result;
}
