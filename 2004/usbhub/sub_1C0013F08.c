/*
 * XREFs of sub_1C0013F08 @ 0x1C0013F08
 * Callers:
 *     sub_1C0013DA0 @ 0x1C0013DA0 (sub_1C0013DA0.c)
 *     sub_1C0013F80 @ 0x1C0013F80 (sub_1C0013F80.c)
 *     sub_1C005C07C @ 0x1C005C07C (sub_1C005C07C.c)
 *     sub_1C005C198 @ 0x1C005C198 (sub_1C005C198.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0013F08(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = *(_QWORD *)(a1 + 1160);
  *(_WORD *)(a2 + 8) = *(_WORD *)(a1 + 1408);
  *(_WORD *)(a2 + 10) = *(_WORD *)(a1 + 1410);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 2688);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 2692);
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 2696);
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 2700);
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 2704);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 2708);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 2712);
  result = *(unsigned int *)(a1 + 1168);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
