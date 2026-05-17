/*
 * XREFs of _RtlpHpVaMgrStart@20 @ 0x4B37B3A5
 * Callers:
 *     _RtlpHpVaMgrCtxAllocatorReference@12 @ 0x4B37AB82 (_RtlpHpVaMgrCtxAllocatorReference@12.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpVaMgrStart(int a1, int a2, int a3, int a4, char a5)
{
  int v6; // eax
  char v7; // dl
  char v8; // dl
  int result; // eax

  v6 = *(_DWORD *)(a3 + 16);
  v7 = *(_BYTE *)(a3 + 12);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 16) = v6;
  *(_WORD *)(a1 + 20) = 2;
  *(_WORD *)(a1 + 22) = 1;
  *(_BYTE *)(a1 + 24) = a5;
  *(_BYTE *)(a1 + 25) = *(_BYTE *)(a3 + 8);
  LOBYTE(v6) = *(_BYTE *)(a3 + 4) & 3;
  *(_DWORD *)(a1 + 12) = a2;
  v8 = *(_BYTE *)(a1 + 26) & 0xF0 | (*(_DWORD *)(a3 + 4) != 0) | (2 * (v6 | (4 * (v7 & 1))));
  result = 0;
  *(_BYTE *)(a1 + 26) = v8;
  return result;
}
