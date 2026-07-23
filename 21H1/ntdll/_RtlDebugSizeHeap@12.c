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

int __fastcall RtlDebugSizeHeap(unsigned int a1, int a2, char *BaseAddress)
{
  ULONG v6; // ebx
  char *v7; // edx
  int v9; // [esp+1Ch] [ebp-20h]
  char v10; // [esp+23h] [ebp-19h]

  v10 = 0;
  if ( (*(_DWORD *)(a1 + 68) & 0x1000000) != 0 )
    return dword_4B3A3788(dword_4B3A3788, a1, a2, BaseAddress);
  v9 = -1;
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlSizeHeap") )
  {
    v6 = *(_DWORD *)(a1 + 68) | 0x10000000 | a2;
    if ( (v6 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 200));
      v6 |= 1u;
      v10 = 1;
    }
    RtlpValidateHeap((PVOID)a1);
    v7 = BaseAddress - 8;
    if ( *(BaseAddress - 1) == 5 )
      v7 -= 8 * (unsigned __int8)v7[6];
    if ( RtlpValidateHeapEntry(a1, (unsigned int)v7, "RtlSizeHeap") )
      v9 = RtlSizeHeap((PVOID)a1, v6, BaseAddress);
  }
  else
  {
    v9 = 0;
  }
  if ( v10 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 200));
  return v9;
}
