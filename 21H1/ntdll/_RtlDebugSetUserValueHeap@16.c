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

BOOLEAN __fastcall RtlDebugSetUserValueHeap(unsigned int a1, int a2, char *BaseAddress, PVOID UserValue)
{
  ULONG v7; // ebx
  char *v8; // edx
  char v10; // [esp+1Eh] [ebp-1Ah]
  BOOLEAN v11; // [esp+1Fh] [ebp-19h]

  v11 = 0;
  v10 = 0;
  if ( (*(_DWORD *)(a1 + 68) & 0x1000000) != 0 )
    return dword_4B3A3778(dword_4B3A3778, a1, a2, BaseAddress, UserValue);
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlSetUserValueHeap") )
  {
    v7 = *(_DWORD *)(a1 + 68) | 0x10000000 | a2;
    if ( (v7 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 200));
      v10 = 1;
      v7 |= 1u;
    }
    RtlpValidateHeap((PVOID)a1);
    v8 = BaseAddress - 8;
    if ( *(BaseAddress - 1) == 5 )
      v8 -= 8 * (unsigned __int8)v8[6];
    if ( RtlpValidateHeapEntry(a1, (unsigned int)v8, "RtlSetUserValueHeap") )
    {
      v11 = RtlSetUserValueHeap((PVOID)a1, v7, BaseAddress, UserValue);
      RtlpValidateHeap((PVOID)a1);
    }
  }
  else
  {
    v11 = 0;
  }
  if ( v10 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 200));
  return v11;
}
