/*
 * XREFs of _RtlDebugSetUserValueHeap@16 @ 0x4B3602B5
 * Callers:
 *     _RtlSetUserValueHeap@16 @ 0x4B2E3990 (_RtlSetUserValueHeap@16.c)
 * Callees:
 *     _RtlpValidateHeapEntry@12 @ 0x4B2A74FF (_RtlpValidateHeapEntry@12.c)
 *     _RtlpCheckHeapSignature@8 @ 0x4B2A7622 (_RtlpCheckHeapSignature@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _RtlSetUserValueHeap@16 @ 0x4B2E3990 (_RtlSetUserValueHeap@16.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlDebugSetUserValueHeap@16 @ 0x4B3602B5 (_RtlDebugSetUserValueHeap@16.c)
 *     _RtlpValidateHeap@8 @ 0x4B360697 (_RtlpValidateHeap@8.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 */

char __fastcall RtlDebugSetUserValueHeap(_DWORD *a1, int a2, int a3, int a4)
{
  int v7; // edx
  int v8; // ebx
  unsigned int v9; // edx
  void *v10; // ecx
  int v11; // edx
  char v13; // [esp+1Eh] [ebp-1Ah]
  char v14; // [esp+1Fh] [ebp-19h]

  v14 = 0;
  v13 = 0;
  if ( (a1[17] & 0x1000000) != 0 )
    return dword_4B3A3778(dword_4B3A3778, a1, a2, a3, a4);
  if ( RtlpCheckHeapSignature(a1, "RtlSetUserValueHeap") )
  {
    v8 = a1[17] | 0x10000000 | a2;
    if ( (v8 & 1) == 0 )
    {
      RtlEnterCriticalSection(a1[50]);
      v13 = 1;
      v8 |= 1u;
    }
    LOBYTE(v7) = 0;
    RtlpValidateHeap(a1, v7);
    v9 = a3 - 8;
    if ( *(_BYTE *)(a3 - 8 + 7) == 5 )
      v9 -= 8 * *(unsigned __int8 *)(v9 + 6);
    if ( RtlpValidateHeapEntry((unsigned int)a1, v9, "RtlSetUserValueHeap") )
    {
      v14 = RtlSetUserValueHeap(v10, (int)a1, v8, a3, a4);
      LOBYTE(v11) = 0;
      RtlpValidateHeap(a1, v11);
    }
  }
  else
  {
    v14 = 0;
  }
  if ( v13 )
    RtlLeaveCriticalSection(a1[50]);
  return v14;
}
