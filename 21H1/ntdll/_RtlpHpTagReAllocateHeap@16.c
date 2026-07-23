/*
 * XREFs of _RtlpHpTagReAllocateHeap@16 @ 0x4B370621
 * Callers:
 *     _RtlReAllocateHeap@16 @ 0x4B2C26C0 (_RtlReAllocateHeap@16.c)
 *     _RtlpHpReAllocWithExceptionProtection@16 @ 0x4B34D46A (_RtlpHpReAllocWithExceptionProtection@16.c)
 * Callees:
 *     _RtlpReAllocateHeapInternal@24 @ 0x4B2C2710 (_RtlpReAllocateHeapInternal@24.c)
 *     _RtlpHpTagContextUpdate@16 @ 0x4B370105 (_RtlpHpTagContextUpdate@16.c)
 */

int __fastcall RtlpHpTagReAllocateHeap(int a1, unsigned int a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // edi
  int v7; // [esp+8h] [ebp-8h] BYREF
  int v8; // [esp+Ch] [ebp-4h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v5 = RtlpReAllocateHeapInternal(a1, a4, (int)&savedregs, a2, a3, &v7, &v8);
  if ( v5 && (_WORD)v8 && a3 != v7 )
    RtlpHpTagContextUpdate(v4, v8, v7, a3);
  return v5;
}
