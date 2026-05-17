/*
 * XREFs of _RtlDebugZeroHeap@8 @ 0x4B3605A9
 * Callers:
 *     _RtlZeroHeap@8 @ 0x4B35D0F0 (_RtlZeroHeap@8.c)
 * Callees:
 *     _RtlpCheckHeapSignature@8 @ 0x4B2A7622 (_RtlpCheckHeapSignature@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlZeroHeap@8 @ 0x4B35D0F0 (_RtlZeroHeap@8.c)
 *     _RtlDebugZeroHeap@8 @ 0x4B3605A9 (_RtlDebugZeroHeap@8.c)
 *     _RtlpValidateHeap@8 @ 0x4B360697 (_RtlpValidateHeap@8.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 */

int __fastcall RtlDebugZeroHeap(_DWORD *a1, int a2)
{
  int v5; // edx
  int v6; // esi
  int v7; // ebx
  char v9; // [esp+23h] [ebp-19h]

  v9 = 0;
  if ( (a1[17] & 0x1000000) != 0 )
    return dword_4B3A3790(dword_4B3A3790, a1, a2);
  if ( !RtlpCheckHeapSignature(a1, "RtlZeroHeap") )
    goto LABEL_4;
  v7 = a1[17] | 0x10000000 | a2;
  if ( (v7 & 1) == 0 )
  {
    RtlEnterCriticalSection(a1[50]);
    v9 = 1;
    v7 |= 1u;
  }
  LOBYTE(v5) = 0;
  if ( (unsigned __int8)RtlpValidateHeap(a1, v5) )
    v6 = RtlZeroHeap((unsigned int)a1, v7);
  else
LABEL_4:
    v6 = -1073741811;
  if ( v9 )
    RtlLeaveCriticalSection(a1[50]);
  return v6;
}
