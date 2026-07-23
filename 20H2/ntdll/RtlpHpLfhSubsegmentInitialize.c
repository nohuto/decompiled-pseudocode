/*
 * XREFs of RtlpHpLfhSubsegmentInitialize @ 0x18002F690
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x18002F380 (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x180043AF0 (RtlRunOnceComplete.c)
 *     NtQueryInformationProcess @ 0x18009D3D0 (NtQueryInformationProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A0AA0 (NtWaitForAlertByThreadId.c)
 *     memset @ 0x1800A4180 (memset.c)
 *     RtlReportCriticalFailure @ 0x1800FF5DC (RtlReportCriticalFailure.c)
 *     RtlpInitRandomExVector @ 0x180102880 (RtlpInitRandomExVector.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentInitialize(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned int v8; // r9d
  unsigned int v9; // edi
  int v10; // r13d
  unsigned int v11; // r12d
  unsigned int v12; // eax
  __int64 v13; // rcx
  _WORD *v14; // rcx
  _WORD *v15; // rax
  _WORD *v16; // rdi
  unsigned __int64 v17; // rcx
  __int16 HeapData_high; // si
  signed __int64 Value; // rdx
  NTSTATUS v20; // edi
  __int32 v21; // edi
  int v22; // ecx
  unsigned int v25; // edi
  unsigned __int64 v26; // rbx
  signed __int64 v27; // rdx
  NTSTATUS v28; // edi
  __int32 v29; // r8d
  int v30; // eax
  unsigned int v32; // r8d
  __int64 result; // rax
  unsigned int v34; // r8d
  signed __int64 v35; // rax
  signed __int64 v36; // rcx
  signed __int64 v37; // rax
  signed __int64 v38; // rax
  signed __int64 v39; // rcx
  signed __int64 v40; // rax
  _QWORD v41[4]; // [rsp+30h] [rbp-51h] BYREF
  __int128 v42; // [rsp+50h] [rbp-31h]
  _QWORD v43[4]; // [rsp+60h] [rbp-21h] BYREF
  __int128 v44; // [rsp+80h] [rbp-1h]
  int v45; // [rsp+E8h] [rbp+67h] BYREF
  unsigned int v46; // [rsp+F0h] [rbp+6Fh] BYREF
  unsigned int v47; // [rsp+F8h] [rbp+77h]

  if ( a3 == 4096 )
    v8 = a2 >> 12;
  else
    v8 = a2 / a3;
  v9 = (8 * (a2 - 2 * v8) - 384) / (8 * a4 + 2);
  v10 = (2 * (v8 + 4 * (((unsigned __int64)(2 * v9) + 63) >> 6)) + 63) & 0xFFFFFFF0;
  v11 = (a2 - v10) / a4;
  if ( v9 < v11 )
    v11 = (8 * (a2 - 2 * v8) - 384) / (8 * a4 + 2);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v46 = (unsigned int)a1 >> 12;
  *(_QWORD *)(a1 + 24) = 0LL;
  HIWORD(v45) = (2 * (v8 + 4 * (((unsigned __int64)(2 * v9) + 63) >> 6)) + 63) & 0xFFF0;
  LOWORD(v45) = a4;
  *(_DWORD *)(a1 + 40) = v45 ^ DWORD2(RtlpHpHeapGlobals) ^ ((unsigned int)a1 >> 12);
  _BitScanForward(&v12, a3);
  *(_BYTE *)(a1 + 45) = v8;
  *(_BYTE *)(a1 + 44) = v12;
  v47 = v12;
  *(_WORD *)(a1 + 32) = v11;
  v13 = (unsigned __int16)(8 * ((((unsigned __int64)(2 * v11) + 63) >> 6) + 6));
  *(_WORD *)(a1 + 46) = v13;
  v14 = (_WORD *)(a1 + v13);
  *(_WORD *)(a1 + 34) = v11;
  *(_BYTE *)(a1 + 38) = 2;
  v15 = &v14[(unsigned __int8)v8];
  v16 = v14 + 1;
  *v14 = 1;
  v17 = (2 * (unsigned __int64)(unsigned __int8)v8 - 2 + 1) >> 1;
  if ( v16 > v15 )
    v17 = 0LL;
  if ( v17 )
  {
    while ( v17 )
    {
      *v16++ = -1;
      --v17;
    }
  }
  memset((void *)(a1 + 48), 0, ((unsigned __int64)(2 * v11) + 7) >> 3);
  if ( ((2 * (_BYTE)v11) & 0x3F) != 0 )
    *(_QWORD *)(a1 + 8 * ((unsigned __int64)(2 * v11) >> 6) + 48) |= ~((1LL << ((2 * v11) & 0x3F)) - 1);
  if ( a2 > 0x1000 && (*(_BYTE *)(a5 + 62) & 1) != 0 )
  {
    if ( ((a4 - 1) & a4) != 0 )
    {
      v34 = 4096;
      do
      {
        if ( (v34 - v10) % a4 )
        {
          _bittestandset64((signed __int64 *)(a1 + 48), 2 * ((v34 - v10) / a4));
          --*(_WORD *)(a1 + 32);
          --*(_WORD *)(a1 + 34);
          ++*(_BYTE *)(a1 + 39);
        }
        v34 += 4096;
      }
      while ( v34 < a2 );
    }
    else
    {
      if ( (unsigned __int16)v10 - ((a4 - 1) & ((unsigned __int16)v10 + a4 - 1)) + a4 - 1 + a4 * v11 != a2 )
        __int2c();
      HIWORD(v45) = v10 - ((a4 - 1) & (v10 + a4 - 1)) + a4 - 1;
      *(_DWORD *)(a1 + 40) = v45 ^ DWORD2(RtlpHpHeapGlobals) ^ v46;
    }
  }
  HeapData_high = HIWORD(NtCurrentTeb()->HeapData);
  if ( !dword_18016D230
    && NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &dword_18016D230, 4u, 0LL) < 0 )
  {
    dword_18016D230 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  }
  Value = RtlpRandomExInit.Value;
  v20 = 0;
  if ( ((__int64)RtlpRandomExInit.Ptr & 3) == 2 )
  {
LABEL_16:
    if ( v20 >= 0 )
      goto LABEL_17;
    LOBYTE(v45) = 0;
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v35 = Value & 3;
        if ( (Value & 3) == 0 )
          break;
        if ( v35 != 1 )
        {
          if ( v35 == 3 )
            v20 = -1073741584;
          goto LABEL_16;
        }
        v41[1] = 0LL;
        v42 = 0LL;
        v41[2] = 0LL;
        v41[3] = NtCurrentTeb()->ClientId.UniqueThread;
        do
        {
          v41[0] = Value & 0xFFFFFFFFFFFFFFFCuLL;
          v37 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&RtlpRandomExInit,
                  (signed __int64)v41 + 1,
                  Value);
          if ( Value == v37 )
            break;
          Value = v37;
        }
        while ( (v37 & 3) == 1 );
        if ( (Value & 3) == 1 )
        {
          do
          {
            NtWaitForAlertByThreadId(&RtlpRandomExInit, 0LL);
            Value = RtlpRandomExInit.Value;
          }
          while ( (BYTE4(v42) & 4) == 0 );
        }
      }
      v36 = Value;
      Value = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpRandomExInit, 1LL, Value);
    }
    while ( Value != v36 );
    if ( RtlpInitRandomExVector(&RtlpRandomExInit, 0LL, 0LL) )
    {
      v20 = RtlRunOnceComplete(&RtlpRandomExInit, 0, 0LL);
      if ( v20 >= 0 )
        goto LABEL_17;
      LOBYTE(v45) = 1;
    }
    else
    {
      v20 = RtlRunOnceComplete(&RtlpRandomExInit, 4u, 0LL);
      if ( v20 >= 0 )
        goto LABEL_17;
      LOBYTE(v45) = 2;
    }
  }
  RtlReportCriticalFailure((unsigned int)v20, &v45, 1LL);
LABEL_17:
  dword_18016D230 = (2147483629 * (unsigned __int64)(unsigned int)dword_18016D230 + 2147483587) % 0x7FFFFFFF;
  v21 = _InterlockedExchange(&RtlpRandomExConstantVector[RtlpRandomExAuxVarY & 0x7F], dword_18016D230);
  if ( MEMORY[0x7FFE0290] )
  {
    v22 = 0;
    while ( 1 )
    {
      __asm { rdrand  edx }
      LODWORD(a5) = _EDX;
      if ( _CF )
        break;
      if ( (unsigned int)++v22 >= 0xA )
        goto LABEL_21;
    }
  }
  else
  {
LABEL_21:
    _EDX = 0;
  }
  v25 = _EDX ^ v21;
  _InterlockedExchangeAdd(&RtlpRandomExAuxVarY, v25);
  v26 = (unsigned __int64)v25 << 32;
  if ( !dword_18016D230
    && NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &dword_18016D230, 4u, 0LL) < 0 )
  {
    dword_18016D230 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  }
  v27 = RtlpRandomExInit.Value;
  v28 = 0;
  if ( ((__int64)RtlpRandomExInit.Ptr & 3) == 2 )
  {
LABEL_24:
    if ( v28 >= 0 )
      goto LABEL_25;
    LOBYTE(v46) = 0;
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v38 = v27 & 3;
        if ( (v27 & 3) == 0 )
          break;
        if ( v38 != 1 )
        {
          if ( v38 == 3 )
            v28 = -1073741584;
          goto LABEL_24;
        }
        v43[1] = 0LL;
        v44 = 0LL;
        v43[2] = 0LL;
        v43[3] = NtCurrentTeb()->ClientId.UniqueThread;
        do
        {
          v43[0] = v27 & 0xFFFFFFFFFFFFFFFCuLL;
          v40 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&RtlpRandomExInit,
                  (signed __int64)v43 + 1,
                  v27);
          if ( v27 == v40 )
            break;
          v27 = v40;
        }
        while ( (v40 & 3) == 1 );
        if ( (v27 & 3) == 1 )
        {
          do
          {
            NtWaitForAlertByThreadId(&RtlpRandomExInit, 0LL);
            v27 = RtlpRandomExInit.Value;
          }
          while ( (BYTE4(v44) & 4) == 0 );
        }
      }
      v39 = v27;
      v27 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlpRandomExInit, 1LL, v27);
    }
    while ( v27 != v39 );
    if ( RtlpInitRandomExVector(&RtlpRandomExInit, 0LL, 0LL) )
    {
      v28 = RtlRunOnceComplete(&RtlpRandomExInit, 0, 0LL);
      if ( v28 >= 0 )
        goto LABEL_25;
      LOBYTE(v46) = 1;
    }
    else
    {
      v28 = RtlRunOnceComplete(&RtlpRandomExInit, 4u, 0LL);
      if ( v28 >= 0 )
        goto LABEL_25;
      LOBYTE(v46) = 2;
    }
  }
  RtlReportCriticalFailure((unsigned int)v28, &v46, 1LL);
LABEL_25:
  dword_18016D230 = (2147483629 * (unsigned __int64)(unsigned int)dword_18016D230 + 2147483587) % 0x7FFFFFFF;
  v29 = _InterlockedExchange(&RtlpRandomExConstantVector[RtlpRandomExAuxVarY & 0x7F], dword_18016D230);
  if ( MEMORY[0x7FFE0290] )
  {
    v30 = 0;
    while ( 1 )
    {
      __asm { rdrand  edx }
      if ( _CF )
        break;
      if ( (unsigned int)++v30 >= 0xA )
        goto LABEL_29;
    }
  }
  else
  {
LABEL_29:
    _EDX = 0;
  }
  v32 = _EDX ^ v29;
  _InterlockedExchangeAdd(&RtlpRandomExAuxVarY, v32);
  result = 0x7F7F7F7F7F7F7F7FLL;
  *(_QWORD *)&RtlpLowFragHeapRandomData[8 * ((unsigned __int8)HeapData_high >> 3)] = (v26 | v32) & 0x7F7F7F7F7F7F7F7FLL;
  return result;
}
