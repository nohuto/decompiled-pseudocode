/*
 * XREFs of _RtlDebugSetUserFlagsHeap@20 @ 0x4B36015A
 * Callers:
 *     _RtlSetUserFlagsHeap@20 @ 0x4B357160 (_RtlSetUserFlagsHeap@20.c)
 * Callees:
 *     _RtlpValidateHeapEntry@12 @ 0x4B2A74FF (_RtlpValidateHeapEntry@12.c)
 *     _RtlpCheckHeapSignature@8 @ 0x4B2A7622 (_RtlpCheckHeapSignature@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlSetUserFlagsHeap@20 @ 0x4B357160 (_RtlSetUserFlagsHeap@20.c)
 *     _RtlDebugSetUserFlagsHeap@20 @ 0x4B36015A (_RtlDebugSetUserFlagsHeap@20.c)
 *     _RtlpValidateHeap@8 @ 0x4B360697 (_RtlpValidateHeap@8.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 */

BOOLEAN __fastcall RtlDebugSetUserFlagsHeap(
        unsigned int a1,
        int a2,
        char *BaseAddress,
        ULONG UserFlagsReset,
        ULONG UserFlagsSet,
        int a6,
        int a7)
{
  ULONG v10; // ebx
  char *v11; // edx
  char v13; // [esp+1Eh] [ebp-1Ah]
  BOOLEAN v14; // [esp+1Fh] [ebp-19h]

  v14 = 0;
  v13 = 0;
  if ( (*(_DWORD *)(a1 + 68) & 0x1000000) != 0 )
    return dword_4B3A3780(dword_4B3A3780, a1, a2, BaseAddress, UserFlagsReset, UserFlagsSet);
  if ( ((UserFlagsSet | UserFlagsReset) & 0xFFFFF1FF) != 0 )
    return 0;
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlSetUserFlagsHeap") )
  {
    v10 = *(_DWORD *)(a1 + 68) | 0x10000000 | a2;
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 200));
      v13 = 1;
      v10 |= 1u;
    }
    RtlpValidateHeap((PVOID)a1);
    v11 = BaseAddress - 8;
    if ( *(BaseAddress - 1) == 5 )
      v11 -= 8 * (unsigned __int8)v11[6];
    if ( RtlpValidateHeapEntry(a1, (unsigned int)v11, "RtlSetUserFlagsHeap") )
    {
      v14 = RtlSetUserFlagsHeap((PVOID)a1, v10, BaseAddress, UserFlagsReset, UserFlagsSet);
      RtlpValidateHeap((PVOID)a1);
    }
  }
  else
  {
    v14 = 0;
  }
  if ( v13 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 200));
  return v14;
}
