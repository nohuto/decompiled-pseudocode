/*
 * XREFs of _RtlDebugGetUserInfoHeap@20 @ 0x4B35FA2C
 * Callers:
 *     _RtlGetUserInfoHeap@20 @ 0x4B2E37E0 (_RtlGetUserInfoHeap@20.c)
 * Callees:
 *     _RtlpValidateHeapEntry@12 @ 0x4B2A74FF (_RtlpValidateHeapEntry@12.c)
 *     _RtlpCheckHeapSignature@8 @ 0x4B2A7622 (_RtlpCheckHeapSignature@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _RtlGetUserInfoHeap@20 @ 0x4B2E37E0 (_RtlGetUserInfoHeap@20.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlDebugGetUserInfoHeap@20 @ 0x4B35FA2C (_RtlDebugGetUserInfoHeap@20.c)
 *     _RtlpValidateHeap@8 @ 0x4B360697 (_RtlpValidateHeap@8.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 */

BOOLEAN __fastcall RtlDebugGetUserInfoHeap(
        unsigned int a1,
        int a2,
        char *BaseAddress,
        PVOID *UserValue,
        PULONG UserFlags)
{
  ULONG v8; // ebx
  char *v9; // edx
  char v11; // [esp+1Eh] [ebp-1Ah]
  BOOLEAN UserInfoHeap; // [esp+1Fh] [ebp-19h]

  UserInfoHeap = 0;
  v11 = 0;
  if ( (*(_DWORD *)(a1 + 68) & 0x1000000) != 0 )
    return dword_4B3A377C(dword_4B3A377C, a1, a2, BaseAddress, UserValue, UserFlags);
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlGetUserInfoHeap") )
  {
    v8 = *(_DWORD *)(a1 + 68) | 0x10000000 | a2;
    if ( (v8 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 200));
      v11 = 1;
      v8 |= 1u;
    }
    RtlpValidateHeap((PVOID)a1);
    v9 = BaseAddress - 8;
    if ( *(BaseAddress - 1) == 5 )
      v9 -= 8 * (unsigned __int8)v9[6];
    if ( RtlpValidateHeapEntry(a1, (unsigned int)v9, "RtlGetUserInfoHeap") )
      UserInfoHeap = RtlGetUserInfoHeap((PVOID)a1, v8, BaseAddress, UserValue, UserFlags);
  }
  else
  {
    UserInfoHeap = 0;
  }
  if ( v11 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 200));
  return UserInfoHeap;
}
