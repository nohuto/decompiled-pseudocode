/*
 * XREFs of _RtlDebugSizeHeap@12 @ 0x4B3603F5
 * Callers:
 *     _RtlSizeHeap@12 @ 0x4B2DB840 (_RtlSizeHeap@12.c)
 * Callees:
 *     _RtlpValidateHeapEntry@12 @ 0x4B2A74FF (_RtlpValidateHeapEntry@12.c)
 *     _RtlpCheckHeapSignature@8 @ 0x4B2A7622 (_RtlpCheckHeapSignature@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _RtlSizeHeap@12 @ 0x4B2DB840 (_RtlSizeHeap@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlDebugSizeHeap@12 @ 0x4B3603F5 (_RtlDebugSizeHeap@12.c)
 *     _RtlpValidateHeap@8 @ 0x4B360697 (_RtlpValidateHeap@8.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 */

int __fastcall RtlDebugSizeHeap(_DWORD *a1, int a2, int a3)
{
  int v6; // edx
  int v7; // ebx
  unsigned int v8; // edx
  int v10; // [esp+1Ch] [ebp-20h]
  char v11; // [esp+23h] [ebp-19h]

  v11 = 0;
  if ( (a1[17] & 0x1000000) != 0 )
    return dword_4B3A3788(dword_4B3A3788, a1, a2, a3);
  v10 = -1;
  if ( RtlpCheckHeapSignature(a1, "RtlSizeHeap") )
  {
    v7 = a1[17] | 0x10000000 | a2;
    if ( (v7 & 1) == 0 )
    {
      RtlEnterCriticalSection(a1[50]);
      v7 |= 1u;
      v11 = 1;
    }
    LOBYTE(v6) = 0;
    RtlpValidateHeap(a1, v6);
    v8 = a3 - 8;
    if ( *(_BYTE *)(a3 - 8 + 7) == 5 )
      v8 -= 8 * *(unsigned __int8 *)(v8 + 6);
    if ( RtlpValidateHeapEntry((unsigned int)a1, v8, "RtlSizeHeap") )
      v10 = RtlSizeHeap((int)a1, v7, a3);
  }
  else
  {
    v10 = 0;
  }
  if ( v11 )
    RtlLeaveCriticalSection(a1[50]);
  return v10;
}
