/*
 * XREFs of _NormBuffer__Construct@24 @ 0x4B366CA5
 * Callers:
 *     _Normalization__Normalize@24 @ 0x4B367CF9 (_Normalization__Normalize@24.c)
 * Callees:
 *     <none>
 */

int __fastcall NormBuffer__Construct(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // eax

  *(_DWORD *)(a1 + 28) = a3;
  *(_DWORD *)(a1 + 12) = a4;
  *(_DWORD *)(a1 + 4) = a2 + 2 * a3;
  *(_DWORD *)(a1 + 24) = a5;
  *(_DWORD *)(a1 + 20) = a4;
  *(_DWORD *)(a1 + 44) = a4;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 16) = a4 + 2 * a5;
  *(_DWORD *)(a1 + 36) = a4 - 2;
  *(_DWORD *)(a1 + 32) = 0;
  *(_WORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_WORD *)(a1 + 52) = 0;
  result = a6;
  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 68) = a6;
  return result;
}
