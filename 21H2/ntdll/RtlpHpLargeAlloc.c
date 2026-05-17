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
 *     memset @ 0x1800A4780 (memset.c)
 *     RtlpHeapLogRangeReserve @ 0x18010845C (RtlpHeapLogRangeReserve.c)
 */

void *__fastcall RtlpHpLargeAlloc(__int128 *a1, __int16 a2, size_t a3, char a4)
{
  __int128 v4; // xmm0
  void *v5; // r12
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r8
  BOOL v11; // edi
  unsigned int v12; // edx
  int v13; // r14d
  unsigned __int64 v14; // rax
  bool v15; // cf
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r13
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // r8
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  void *v32; // [rsp+38h] [rbp-69h] BYREF
  signed __int64 v33; // [rsp+40h] [rbp-61h] BYREF
  unsigned int v34; // [rsp+48h] [rbp-59h]
  __int64 v35; // [rsp+50h] [rbp-51h] BYREF
  char v36[8]; // [rsp+58h] [rbp-49h] BYREF
  _QWORD *v37; // [rsp+60h] [rbp-41h] BYREF
  __int128 v38; // [rsp+68h] [rbp-39h] BYREF
  __int128 v39; // [rsp+78h] [rbp-29h] BYREF
  __int128 v40; // [rsp+88h] [rbp-19h] BYREF
  __int128 v41; // [rsp+98h] [rbp-9h] BYREF
  __int128 v42; // [rsp+A8h] [rbp+7h] BYREF
  __int128 v43[4]; // [rsp+B8h] [rbp+17h] BYREF
  int v44; // [rsp+108h] [rbp+67h]

  v4 = *a1;
  v5 = 0LL;
  v32 = 0LL;
  v39 = v4;
  v8 = RtlpHpMetadataAlloc(40LL, 40LL, 0LL, &v39);
  v9 = v8;
  if ( !v8 )
  {
LABEL_49:
    if ( v32 )
    {
      v43[0] = *a1;
      RtlpHpFreeVA(&v32, &v33, 0x8000LL, v43);
    }
    return v5;
  }
  v10 = 1LL;
  *(_OWORD *)v8 = 0LL;
  v11 = 0;
  *(_OWORD *)(v8 + 16) = 0LL;
  *(_QWORD *)(v8 + 32) = 0LL;
  if ( (*((_DWORD *)a1 + 5) & 0x4000000) != 0 )
    v11 = 0x1FFFFF - ((a3 - 1) & 0x1FFFFF) < a3 >> 2;
  while ( 1 )
  {
    v34 = 0;
    if ( v11 )
    {
      v13 = 0x200000;
      v14 = a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF;
    }
    else
    {
      v12 = BYTE1(*(_QWORD *)a1) < 2u;
      v13 = 0;
      v34 = v12;
      v14 = a3 + (v12 << 12);
    }
    v33 = v14;
    if ( v14 < a3 )
      goto LABEL_47;
    v15 = (*((_DWORD *)a1 + 5) & 0x40000000) != 0;
    v40 = *a1;
    v16 = RtlpHpHeapValidateProtection(a1, v15 ? 64 : 4, v10);
    if ( (int)RtlpHpAllocVA((unsigned int)&v32, (unsigned int)&v33, v13, 0x2000, v16, (__int64)&v40) < 0 )
    {
      v32 = 0LL;
LABEL_47:
      if ( v9 )
      {
        v38 = *a1;
        RtlpHpMetadataFree(v9, &v38);
      }
      goto LABEL_49;
    }
    RtlpHpQueryVA(v32, v17, &v37, v36);
    *v37 = a1;
    *(_QWORD *)&v38 = (a3 + 4095) >> 12;
    v18 = (_QWORD)v38 << 12;
    v35 = (_QWORD)v38 << 12;
    if ( !(unsigned int)RtlpHpSegHeapCheckCommitLimit((_QWORD)v38 << 12, a1) )
      goto LABEL_47;
    v44 = 4096;
    if ( v11 )
    {
      v44 = 536875008;
      v35 = v18 - ((v18 - 1) & 0x1FFFFF) + 0x1FFFFF;
    }
    else if ( (a4 & 2) != 0 )
    {
      v44 = 1073745920;
    }
    v15 = (*((_DWORD *)a1 + 5) & 0x40000000) != 0;
    v41 = *a1;
    v20 = RtlpHpHeapValidateProtection(a1, v15 ? 64 : 4, v19);
    if ( (int)RtlpHpAllocVA((unsigned int)&v32, (unsigned int)&v35, 0, v44, v20, (__int64)&v41) >= 0 )
      break;
    if ( !v11 )
      goto LABEL_47;
    v11 = 0;
    v42 = *a1;
    RtlpHpFreeVA(&v32, &v33, 0x8000LL, &v42);
    v32 = 0LL;
  }
  if ( v11 && (a4 & 2) != 0 )
    memset(v32, 0, a3);
  v22 = v38;
  *(_QWORD *)(v9 + 24) = v32;
  v23 = *(_DWORD *)(v9 + 32) & 0xFFD | (2 * (v34 | (v22 << 11)));
  *(_QWORD *)(v9 + 32) = v23;
  _BitScanForward64(&v24, v33);
  *(_QWORD *)(v9 + 32) = v23 ^ (unsigned __int8)(v23 ^ (4 * v24)) & 0xFC;
  *(_WORD *)(v9 + 24) = ((_WORD)v22 << 12) - a2;
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 4);
  v25 = (__int64)a1 + 72;
  v26 = *((_QWORD *)a1 + 9);
  if ( (a1[5] & 1) != 0 && v26 )
    v26 ^= v25;
  LOBYTE(v21) = 0;
  if ( v26 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v32 < (*(_QWORD *)(v26 + 24) & 0xFFFFFFFFFFFF0000uLL) )
      {
        v27 = *(_QWORD *)v26;
        if ( (a1[5] & 1) != 0 )
        {
          if ( !v27 )
            break;
          v27 ^= v26;
        }
        if ( !v27 )
          break;
      }
      else
      {
        v27 = *(_QWORD *)(v26 + 8);
        if ( (a1[5] & 1) != 0 )
        {
          if ( !v27 )
            goto LABEL_31;
          v27 ^= v26;
        }
        if ( !v27 )
        {
LABEL_31:
          LOBYTE(v21) = 1;
          break;
        }
      }
      v26 = v27;
    }
  }
  RtlRbInsertNodeEx(v25, v26, v21, v9);
  if ( (a4 & 1) == 0 )
    RtlReleaseSRWLockExclusive(a1 + 4);
  v29 = v33 % 4096;
  _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 11, v33 / 4096);
  _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 12, v22);
  v5 = v32;
  v9 = 0LL;
  v32 = 0LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v28, v29) )
    v30 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v30 = 2147353480LL;
  if ( *(_BYTE *)v30 )
  {
    RtlpHeapLogRangeReserve(a1, v5, v33);
    goto LABEL_47;
  }
  return v5;
}
