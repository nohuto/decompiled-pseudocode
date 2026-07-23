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
 *     RtlpGetHeapInterceptorIndex @ 0x180107E28 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHeapLogRangeCreate @ 0x180107EF0 (RtlpHeapLogRangeCreate.c)
 *     RtlpLogHeapCreateEvent @ 0x180109D40 (RtlpLogHeapCreateEvent.c)
 */

__int64 __fastcall RtlpHpHeapCreate(unsigned int a1, unsigned __int64 a2, __int64 a3, __int128 *a4)
{
  unsigned int ProcessorCount; // r13d
  volatile signed __int64 *v8; // rax
  __int64 v9; // rsi
  __int128 v10; // xmm0
  bool v11; // cf
  char v12; // bl
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rcx
  int v18; // [rsp+28h] [rbp-49h]
  __int128 v19; // [rsp+48h] [rbp-29h] BYREF
  __int128 v20; // [rsp+58h] [rbp-19h] BYREF
  __int128 v21; // [rsp+68h] [rbp-9h] BYREF
  __int128 v22; // [rsp+78h] [rbp+7h] BYREF
  __int64 (__fastcall *v23)(int); // [rsp+88h] [rbp+17h]
  __int64 (__fastcall *v24)(int); // [rsp+90h] [rbp+1Fh]
  __int64 (__fastcall *v25)(__int64); // [rsp+98h] [rbp+27h]

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL || (int)RtlpHpRegisterEnvironment(a4, 1) < 0 )
    return 0LL;
  ProcessorCount = RtlpHpEnvQueryProcessorCount();
  v19 = *a4;
  v8 = RtlpHpHeapAllocate(a1, ProcessorCount, &v19);
  v9 = (__int64)v8;
  if ( !v8 )
  {
    v13 = 0LL;
    RtlpHpRegisterEnvironment(a4, 0);
    return v13;
  }
  v10 = *a4;
  *((_DWORD *)v8 + 4) = -571548178;
  *((_DWORD *)v8 + 5) = a1;
  *(_OWORD *)v8 = v10;
  v11 = BYTE1(*(_QWORD *)a4) < 2u;
  v20 = *a4;
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
    (__int64)&v20,
    v12);
  v21 = *a4;
  RtlpHpSegContextInitialize(v9 + 448, 0x1000000, v9, 0, 0LL, v9 + 128, (__int64)&v21, v12);
  *(_QWORD *)(v9 + 64) = 0LL;
  *(_QWORD *)(v9 + 72) = 0LL;
  *(_QWORD *)(v9 + 80) = 0LL;
  *(_QWORD *)(v9 + 224) = 0LL;
  if ( (*(_DWORD *)(v9 + 20) & 0x20000000) != 0 )
    *(_DWORD *)(v9 + 24) = (unsigned __int16)RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
  v25 = 0LL;
  *(_QWORD *)&v22 = RtlpHpSegVsAllocate;
  *((_QWORD *)&v22 + 1) = RtlpHpSegLfhVsFree;
  v23 = RtlpHpSegLfhVsCommit;
  v24 = RtlpHpSegLfhVsDecommit;
  RtlpHpVsContextInitialize(v9 + 640, v9 + 256, &v22, *(_DWORD *)a4 & 1, v18, (_DWORD *)&qword_18016F4D8 + 1);
  *(_QWORD *)&v22 = RtlpHpSegLfhAllocate;
  *((_QWORD *)&v22 + 1) = RtlpHpSegLfhVsFree;
  v23 = RtlpHpSegLfhVsCommit;
  v24 = RtlpHpSegLfhVsDecommit;
  v25 = RtlpHpSegLfhExtendContext;
  RtlpHpLfhContextInitialize(
    v9 + 832,
    v9 + 256,
    ProcessorCount,
    *(_DWORD *)a4 & 1,
    (__int64)&v22,
    v9 + 128,
    (__int64)&qword_18016F4D8);
  *(_QWORD *)(v9 + 104) = 0LL;
  if ( (int)RtlpHpSegContextReserve(v9 + 256, a2, a3) < 0 )
  {
    v13 = 0LL;
LABEL_26:
    if ( v9 )
      RtlpHpHeapDestroy(v9);
    return v13;
  }
  v13 = v9;
  v9 = 0LL;
  if ( RtlGetCurrentServiceSessionId() )
    v14 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v14 = 2147353480LL;
  if ( *(_BYTE *)v14 )
    RtlpHeapLogRangeCreate(v13, *(_QWORD *)(v13 + 248) - v13, a1);
  v15 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v16 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v16 = 2147353472LL;
  if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v15 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapCreateEvent(v13, a1, *(_QWORD *)(v13 + 248) - v13, *(_DWORD *)(v13 + 240) - v13, *(unsigned __int8 *)v15);
    goto LABEL_26;
  }
  return v13;
}
