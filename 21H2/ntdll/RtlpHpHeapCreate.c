/*
 * XREFs of RtlpHpHeapCreate @ 0x18000821C
 * Callers:
 *     RtlpHpMetadataHeapCreate @ 0x180005620 (RtlpHpMetadataHeapCreate.c)
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 * Callees:
 *     RtlpHpHeapDestroy @ 0x1800048E4 (RtlpHpHeapDestroy.c)
 *     RtlpHpRegisterEnvironment @ 0x180007C08 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpEnvQueryProcessorCount @ 0x180007E1C (RtlpHpEnvQueryProcessorCount.c)
 *     RtlpHpHeapAllocate @ 0x180007E6C (RtlpHpHeapAllocate.c)
 *     RtlpHpVsContextInitialize @ 0x18000813C (RtlpHpVsContextInitialize.c)
 *     RtlpHpSegContextInitialize @ 0x1800084E0 (RtlpHpSegContextInitialize.c)
 *     RtlpHpSegContextReserve @ 0x1800085F8 (RtlpHpSegContextReserve.c)
 *     RtlpHpLfhContextInitialize @ 0x1800086EC (RtlpHpLfhContextInitialize.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGetHeapInterceptorIndex @ 0x1801081D8 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHeapLogRangeCreate @ 0x1801082A0 (RtlpHeapLogRangeCreate.c)
 *     RtlpLogHeapCreateEvent @ 0x18010A0F0 (RtlpLogHeapCreateEvent.c)
 */

volatile signed __int64 *__fastcall RtlpHpHeapCreate(unsigned int a1, unsigned __int64 a2, __int64 a3, __int128 *a4)
{
  unsigned int ProcessorCount; // r13d
  volatile signed __int64 *v8; // rax
  volatile signed __int64 *v9; // rsi
  __int128 v10; // xmm0
  bool v11; // cf
  char v12; // bl
  __int64 v13; // rdx
  __int64 v14; // rcx
  volatile signed __int64 *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // rcx
  int v22; // [rsp+28h] [rbp-49h]
  __int128 v23; // [rsp+48h] [rbp-29h] BYREF
  __int128 v24; // [rsp+58h] [rbp-19h] BYREF
  __int128 v25; // [rsp+68h] [rbp-9h] BYREF
  __int128 v26; // [rsp+78h] [rbp+7h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+88h] [rbp+17h]
  __int64 (__fastcall *v28)(); // [rsp+90h] [rbp+1Fh]
  __int64 (__fastcall *v29)(__int64); // [rsp+98h] [rbp+27h]

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL || (int)RtlpHpRegisterEnvironment(a4, 1) < 0 )
    return 0LL;
  ProcessorCount = RtlpHpEnvQueryProcessorCount();
  v23 = *a4;
  v8 = RtlpHpHeapAllocate(a1, ProcessorCount, &v23);
  v9 = v8;
  if ( !v8 )
  {
    v15 = 0LL;
    RtlpHpRegisterEnvironment(a4, 0);
    return v15;
  }
  v10 = *a4;
  *((_DWORD *)v8 + 4) = -571548178;
  *((_DWORD *)v8 + 5) = a1;
  *(_OWORD *)v8 = v10;
  v11 = BYTE1(*(_QWORD *)a4) < 2u;
  v24 = *a4;
  v12 = (v11 ? 0 : 0x10) | 4;
  if ( (a1 & 0x4000000) == 0 )
    v12 = v11 ? 0 : 0x10;
  RtlpHpSegContextInitialize(
    (_DWORD)v8 + 256,
    0x100000,
    (_DWORD)v8,
    (_DWORD)v8 + 832,
    (__int64)(v8 + 80),
    (_WORD)v8 + 128,
    (__int64)&v24,
    v12);
  v25 = *a4;
  RtlpHpSegContextInitialize((_DWORD)v9 + 448, 0x1000000, (_DWORD)v9, 0, 0LL, (_WORD)v9 + 128, (__int64)&v25, v12);
  *((_QWORD *)v9 + 8) = 0LL;
  *((_QWORD *)v9 + 9) = 0LL;
  *((_QWORD *)v9 + 10) = 0LL;
  *((_QWORD *)v9 + 28) = 0LL;
  if ( (*((_DWORD *)v9 + 5) & 0x20000000) != 0 )
    *((_DWORD *)v9 + 6) = (unsigned __int16)RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
  v29 = 0LL;
  *(_QWORD *)&v26 = RtlpHpSegVsAllocate;
  *((_QWORD *)&v26 + 1) = RtlpHpSegLfhVsFree;
  v27 = RtlpHpSegLfhVsCommit;
  v28 = RtlpHpSegLfhVsDecommit;
  RtlpHpVsContextInitialize(
    (unsigned __int64)(v9 + 80),
    (__int64)(v9 + 32),
    &v26,
    *(_DWORD *)a4 & 1,
    v22,
    (_DWORD *)&qword_180171518 + 1);
  *(_QWORD *)&v26 = RtlpHpSegLfhAllocate;
  *((_QWORD *)&v26 + 1) = RtlpHpSegLfhVsFree;
  v27 = RtlpHpSegLfhVsCommit;
  v28 = RtlpHpSegLfhVsDecommit;
  v29 = RtlpHpSegLfhExtendContext;
  RtlpHpLfhContextInitialize(
    (_DWORD)v9 + 832,
    (_DWORD)v9 + 256,
    ProcessorCount,
    *(_DWORD *)a4 & 1,
    (__int64)&v26,
    (_WORD)v9 + 128,
    (__int64)&qword_180171518);
  *((_QWORD *)v9 + 13) = 0LL;
  if ( (int)RtlpHpSegContextReserve(v9 + 32, a2, a3) < 0 )
  {
    v15 = 0LL;
LABEL_26:
    if ( v9 )
      RtlpHpHeapDestroy((__int128 *)v9);
    return v15;
  }
  v15 = v9;
  v9 = 0LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v14, v13) )
    v17 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v17 = 2147353480LL;
  if ( *(_BYTE *)v17 )
    RtlpHeapLogRangeCreate(v15, *((_QWORD *)v15 + 31) - (_QWORD)v15, a1);
  v19 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v17, v16) )
    v20 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v20 = 2147353472LL;
  if ( *(_BYTE *)v20 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v20, v18) )
      v19 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapCreateEvent(
      (_DWORD)v15,
      a1,
      *((_QWORD *)v15 + 31) - (_DWORD)v15,
      *((_DWORD *)v15 + 60) - (_DWORD)v15,
      *(unsigned __int8 *)v19);
    goto LABEL_26;
  }
  return v15;
}
