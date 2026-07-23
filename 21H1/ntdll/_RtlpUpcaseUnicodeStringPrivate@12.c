/*
 * XREFs of _RtlpUpcaseUnicodeStringPrivate@12 @ 0x4B3618DC
 * Callers:
 *     _RtlIsNameInExpression@16 @ 0x4B361340 (_RtlIsNameInExpression@16.c)
 *     _RtlIsNameInUnUpcasedExpression@16 @ 0x4B3613D0 (_RtlIsNameInUnUpcasedExpression@16.c)
 * Callees:
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpUpcaseUnicodeStringPrivate@12 @ 0x4B3618DC (_RtlpUpcaseUnicodeStringPrivate@12.c)
 */

int __fastcall RtlpUpcaseUnicodeStringPrivate(int a1, unsigned __int16 *a2, int a3)
{
  int v5; // eax
  PVOID Heap; // eax
  unsigned int v8; // ecx
  unsigned int i; // edi
  SIZE_T v10; // [esp-4h] [ebp-44h]
  unsigned int v11; // [esp+18h] [ebp-28h]

  v5 = *a2;
  *(_WORD *)(a1 + 2) = v5;
  LODWORD(v10) = v5;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  *(_DWORD *)(a1 + 4) = Heap;
  if ( !Heap )
    return -1073741801;
  v8 = *a2 >> 1;
  v11 = v8;
  for ( i = 0; i < v8; ++i )
  {
    *(_WORD *)(*(_DWORD *)(a1 + 4) + 2 * i) = NLS_UPCASE(*(_WORD *)(*((_DWORD *)a2 + 1) + 2 * i));
    v8 = v11;
  }
  *(_WORD *)a1 = *a2;
  return 0;
}
