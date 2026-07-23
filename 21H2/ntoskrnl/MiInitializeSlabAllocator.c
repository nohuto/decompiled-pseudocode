/*
 * XREFs of MiInitializeSlabAllocator @ 0x1403AFD3C
 * Callers:
 *     MiInitializePartition @ 0x14079C85C (MiInitializePartition.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiInitializeSlabAllocator(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  memset((void *)a1, 0, 0x78uLL);
  *(_DWORD *)(a1 + 48) = a2;
  result = 0xFFFFFFFFFLL;
  *(_DWORD *)(a1 + 52) = a3;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 80) = 0xFFFFFFFFFLL;
  *(_QWORD *)(a1 + 88) = 0xFFFFFFFFFLL;
  *(_DWORD *)(a1 + 72) = 2;
  return result;
}
