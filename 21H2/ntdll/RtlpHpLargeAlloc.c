/*
 * XREFs of RtlpHpLargeAlloc @ 0x180003404
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x1800076C4 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpSegReAlloc @ 0x1800271D0 (RtlpHpSegReAlloc.c)
 *     RtlpAllocateHeapInternal @ 0x18002AA20 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpSegHeapCheckCommitLimit @ 0x180003724 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpQueryVA @ 0x180003794 (RtlpHpQueryVA.c)
 *     RtlpHpMetadataFree @ 0x180005968 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x18000798C (RtlpHpMetadataAlloc.c)
 *     RtlpHpHeapValidateProtection @ 0x18000EE64 (RtlpHpHeapValidateProtection.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpFreeVA @ 0x180020824 (RtlpHpFreeVA.c)
 *     RtlpHpAllocVA @ 0x180022BAC (RtlpHpAllocVA.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlRbInsertNodeEx @ 0x180027DC0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     memset @ 0x1800A4740 (memset.c)
 *     RtlpHeapLogRangeReserve @ 0x18010841C (RtlpHeapLogRangeReserve.c)
 */

PVOID __fastcall RtlpHpLargeAlloc(char *BaseAddress, __int16 a2, size_t a3, char a4)
{
  __int128 v4; // xmm0
  PVOID v5; // r12
  __int64 v8; // rax
  __int64 v9; // rsi
  BOOL v10; // edi
  unsigned int v11; // edx
  ULONG_PTR v12; // rax
  ULONG v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r13
  ULONG v16; // eax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  _RTL_RB_TREE *v20; // rcx
  unsigned __int64 v21; // rdx
  BOOLEAN v22; // r8
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  PVOID BaseAddressa; // [rsp+38h] [rbp-69h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-61h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-59h]
  __int64 v29; // [rsp+50h] [rbp-51h]
  char v30[8]; // [rsp+58h] [rbp-49h] BYREF
  _QWORD *v31; // [rsp+60h] [rbp-41h] BYREF
  __int128 v32; // [rsp+68h] [rbp-39h] BYREF
  __int128 v33; // [rsp+78h] [rbp-29h] BYREF
  __int64 v34[2]; // [rsp+88h] [rbp-19h] BYREF
  __int64 v35[2]; // [rsp+98h] [rbp-9h] BYREF
  __int128 v36; // [rsp+A8h] [rbp+7h]
  __int128 v37; // [rsp+B8h] [rbp+17h]

  v4 = *(_OWORD *)BaseAddress;
  v5 = 0LL;
  BaseAddressa = 0LL;
  v33 = v4;
  v8 = RtlpHpMetadataAlloc(40LL, 40LL, 0LL, &v33);
  v9 = v8;
  if ( !v8 )
  {
LABEL_47:
    if ( BaseAddressa )
    {
      v37 = *(_OWORD *)BaseAddress;
      RtlpHpFreeVA(&BaseAddressa, &RegionSize);
    }
    return v5;
  }
  *(_OWORD *)v8 = 0LL;
  v10 = 0;
  *(_OWORD *)(v8 + 16) = 0LL;
  *(_QWORD *)(v8 + 32) = 0LL;
  if ( (*((_DWORD *)BaseAddress + 5) & 0x4000000) != 0 )
    v10 = 0x1FFFFF - ((a3 - 1) & 0x1FFFFF) < a3 >> 2;
  while ( 1 )
  {
    v28 = 0;
    if ( v10 )
    {
      v12 = a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF;
    }
    else
    {
      v11 = BYTE1(*(_QWORD *)BaseAddress) < 2u;
      v28 = v11;
      v12 = a3 + (v11 << 12);
    }
    RegionSize = v12;
    if ( v12 < a3 )
      goto LABEL_45;
    *(_OWORD *)v34 = *(_OWORD *)BaseAddress;
    v13 = RtlpHpHeapValidateProtection(BaseAddress);
    if ( (int)RtlpHpAllocVA(&BaseAddressa, v13, (__int64)v34) < 0 )
    {
      BaseAddressa = 0LL;
LABEL_45:
      if ( v9 )
      {
        v32 = *(_OWORD *)BaseAddress;
        RtlpHpMetadataFree(v9, &v32);
      }
      goto LABEL_47;
    }
    RtlpHpQueryVA(BaseAddressa, v14, &v31, v30);
    *v31 = BaseAddress;
    *(_QWORD *)&v32 = (a3 + 4095) >> 12;
    v15 = (_QWORD)v32 << 12;
    v29 = (_QWORD)v32 << 12;
    if ( !(unsigned int)RtlpHpSegHeapCheckCommitLimit((_QWORD)v32 << 12, BaseAddress) )
      goto LABEL_45;
    if ( v10 )
      v29 = v15 - ((v15 - 1) & 0x1FFFFF) + 0x1FFFFF;
    *(_OWORD *)v35 = *(_OWORD *)BaseAddress;
    v16 = RtlpHpHeapValidateProtection(BaseAddress);
    if ( (int)RtlpHpAllocVA(&BaseAddressa, v16, (__int64)v35) >= 0 )
      break;
    if ( !v10 )
      goto LABEL_45;
    v10 = 0;
    v36 = *(_OWORD *)BaseAddress;
    RtlpHpFreeVA(&BaseAddressa, &RegionSize);
    BaseAddressa = 0LL;
  }
  if ( v10 && (a4 & 2) != 0 )
    memset(BaseAddressa, 0, a3);
  v17 = v32;
  *(_QWORD *)(v9 + 24) = BaseAddressa;
  v18 = *(_DWORD *)(v9 + 32) & 0xFFD | (2 * (v28 | (v17 << 11)));
  *(_QWORD *)(v9 + 32) = v18;
  _BitScanForward64(&v19, RegionSize);
  *(_QWORD *)(v9 + 32) = v18 ^ (unsigned __int8)(v18 ^ (4 * v19)) & 0xFC;
  *(_WORD *)(v9 + 24) = ((_WORD)v17 << 12) - a2;
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
  v20 = (_RTL_RB_TREE *)(BaseAddress + 72);
  v21 = *((_QWORD *)BaseAddress + 9);
  if ( (BaseAddress[80] & 1) != 0 && v21 )
    v21 ^= (unsigned __int64)v20;
  v22 = 0;
  if ( v21 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)BaseAddressa < (*(_QWORD *)(v21 + 24) & 0xFFFFFFFFFFFF0000uLL) )
      {
        v23 = *(_QWORD *)v21;
        if ( (BaseAddress[80] & 1) != 0 )
        {
          if ( !v23 )
            break;
          v23 ^= v21;
        }
        if ( !v23 )
          break;
      }
      else
      {
        v23 = *(_QWORD *)(v21 + 8);
        if ( (BaseAddress[80] & 1) != 0 )
        {
          if ( !v23 )
            goto LABEL_30;
          v23 ^= v21;
        }
        if ( !v23 )
        {
LABEL_30:
          v22 = 1;
          break;
        }
      }
      v21 = v23;
    }
  }
  RtlRbInsertNodeEx(v20, (PRTL_BALANCED_NODE)v21, v22, (PRTL_BALANCED_NODE)v9);
  if ( (a4 & 1) == 0 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
  _InterlockedExchangeAdd64((volatile signed __int64 *)BaseAddress + 11, (__int64)RegionSize / 4096);
  _InterlockedExchangeAdd64((volatile signed __int64 *)BaseAddress + 12, v17);
  v5 = BaseAddressa;
  v9 = 0LL;
  BaseAddressa = 0LL;
  if ( RtlGetCurrentServiceSessionId() )
    v24 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v24 = 2147353480LL;
  if ( *(_BYTE *)v24 )
  {
    RtlpHeapLogRangeReserve(BaseAddress, v5, RegionSize);
    goto LABEL_45;
  }
  return v5;
}
