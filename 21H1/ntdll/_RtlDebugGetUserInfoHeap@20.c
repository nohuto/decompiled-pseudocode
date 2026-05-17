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

char __fastcall RtlDebugGetUserInfoHeap(_DWORD *a1, int a2, int a3, ULONG *a4, ULONG *a5)
{
  int v8; // edx
  int v9; // ebx
  unsigned int v10; // edx
  char v12; // [esp+1Eh] [ebp-1Ah]
  char UserInfoHeap; // [esp+1Fh] [ebp-19h]

  UserInfoHeap = 0;
  v12 = 0;
  if ( (a1[17] & 0x1000000) != 0 )
    return dword_4B3A377C(dword_4B3A377C, a1, a2, a3, a4, a5);
  if ( RtlpCheckHeapSignature(a1, "RtlGetUserInfoHeap") )
  {
    v9 = a1[17] | 0x10000000 | a2;
    if ( (v9 & 1) == 0 )
    {
      RtlEnterCriticalSection(a1[50]);
      v12 = 1;
      v9 |= 1u;
    }
    LOBYTE(v8) = 0;
    RtlpValidateHeap(a1, v8);
    v10 = a3 - 8;
    if ( *(_BYTE *)(a3 - 8 + 7) == 5 )
      v10 -= 8 * *(unsigned __int8 *)(v10 + 6);
    if ( RtlpValidateHeapEntry((unsigned int)a1, v10, "RtlGetUserInfoHeap") )
      UserInfoHeap = RtlGetUserInfoHeap((int)a1, v9, a3, a4, a5);
  }
  else
  {
    UserInfoHeap = 0;
  }
  if ( v12 )
    RtlLeaveCriticalSection(a1[50]);
  return UserInfoHeap;
}
