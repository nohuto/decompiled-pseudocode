/*
 * XREFs of _RtlpHpVaMgrCtxAllocatorCompare@12 @ 0x4B37AA8A
 * Callers:
 *     _RtlpHpVaMgrCtxAllocatorFind@16 @ 0x4B37AB17 (_RtlpHpVaMgrCtxAllocatorFind@16.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall RtlpHpVaMgrCtxAllocatorCompare(int a1, int a2, int a3)
{
  unsigned __int8 v3; // bl

  v3 = *(_BYTE *)(a1 + 26);
  return ((v3 >> 1) & 3) == *(_DWORD *)(a2 + 4)
      && *(unsigned __int8 *)(a1 + 25) == *(_DWORD *)(a2 + 8)
      && *(_DWORD *)(a1 + 16) == *(_DWORD *)(a2 + 16)
      && (!a3 || *(unsigned __int16 *)(a1 + 20) == a3)
      && ((*(_BYTE *)(a2 + 12) ^ (v3 >> 3)) & 1) == 0;
}
