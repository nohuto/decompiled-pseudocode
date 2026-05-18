/*
 * XREFs of sub_180092744 @ 0x180092744
 * Callers:
 *     sub_180095DC0 @ 0x180095DC0 (sub_180095DC0.c)
 * Callees:
 *     sub_1800927E8 @ 0x1800927E8 (sub_1800927E8.c)
 *     sub_180092C20 @ 0x180092C20 (sub_180092C20.c)
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 */

__int64 __fastcall sub_180092744(__int64 a1, __int64 a2)
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
  sub_1801163DC(&unk_18020C5E0, 3LL, "Mesh of type %d loaded with %lu vertices and %lu indices", v2, v5, v6);
  result = *(unsigned int *)(a2 + 28);
  if ( (result & 0x800) != 0 )
    result = sub_180092C20(
               a1,
               *(_DWORD *)(a1 + 116),
               *(_DWORD *)(a1 + 124),
               *(_DWORD *)(a1 + 300),
               *(_DWORD *)(a2 + 28));
  if ( *(_DWORD *)(a1 + 120) )
    return sub_1800927E8(a1, a2);
  return result;
}
