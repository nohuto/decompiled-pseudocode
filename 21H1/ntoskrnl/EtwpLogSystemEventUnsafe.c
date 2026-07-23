/*
 * XREFs of EtwpLogSystemEventUnsafe @ 0x1403AA58C
 * Callers:
 *     NtTraceEvent @ 0x1402D5FC0 (NtTraceEvent.c)
 *     EtwpTraceThreadRundown @ 0x1403AA290 (EtwpTraceThreadRundown.c)
 *     EtwpLogRegistryEvent @ 0x140932658 (EtwpLogRegistryEvent.c)
 *     EtwpSetMark @ 0x140932B3C (EtwpSetMark.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x140208060 (EtwpReserveTraceBuffer.c)
 *     EtwpOpenLogger @ 0x1402D6EF8 (EtwpOpenLogger.c)
 *     EtwpReleaseTraceBuffer @ 0x1402D6FA0 (EtwpReleaseTraceBuffer.c)
 *     EtwpUpdateEventsLostCount @ 0x140369DA8 (EtwpUpdateEventsLostCount.c)
 *     EtwpCloseLogger @ 0x140377084 (EtwpCloseLogger.c)
 *     EtwpCopyEventData @ 0x1403AAE48 (EtwpCopyEventData.c)
 *     memset @ 0x140408F80 (memset.c)
 *     EtwpStackTraceDispatcher @ 0x1405A1340 (EtwpStackTraceDispatcher.c)
 *     EtwpSendTraceEvent @ 0x1405A4FCC (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1405A5ADC (EtwpInvokeEventCallback.c)
 *     EtwpTraceLastBranchRecord @ 0x1405AA664 (EtwpTraceLastBranchRecord.c)
 *     EtwpTraceProcessorTrace @ 0x1405AA868 (EtwpTraceProcessorTrace.c)
 */

unsigned int *EtwpLogSystemEventUnsafe(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        __int16 a6,
        unsigned int a7,
        char a8,
        ...)
{
  unsigned int v10; // ebx
  unsigned int *result; // rax
  __int64 v12; // rdi
  unsigned int v13; // esi
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // r9
  int v17; // edx
  void *v18; // r13
  __int64 v19; // r9
  unsigned int *v20; // r15
  unsigned int v21; // edx
  __int16 v22; // si
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // rcx
  char v26[4]; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-84h]
  LARGE_INTEGER v28; // [rsp+38h] [rbp-80h] BYREF
  int v29; // [rsp+40h] [rbp-78h]
  unsigned int *v30; // [rsp+48h] [rbp-70h]
  unsigned __int64 v31; // [rsp+50h] [rbp-68h]
  unsigned int *v32; // [rsp+58h] [rbp-60h]
  __int128 v33; // [rsp+68h] [rbp-50h] BYREF
  __int64 v34; // [rsp+78h] [rbp-40h]

  v33 = 0LL;
  v34 = 0LL;
  v10 = 0;
  v26[0] = 0;
  v28.QuadPart = 0LL;
  result = (unsigned int *)EtwpOpenLogger(a4, a1, 1, v26);
  v30 = result;
  v12 = (__int64)result;
  v32 = result;
  if ( result )
  {
    v13 = 0;
    v27 = 0;
    if ( a5 )
    {
      v14 = (_DWORD *)(a2 + 8);
      v15 = a5;
      do
      {
        v13 += *v14;
        v14 += 4;
        --v15;
      }
      while ( v15 );
      v27 = v13;
    }
    v16 = EtwpReserveTraceBuffer(result, v13 + 32, (__int64)&v33, &v28, a7);
    if ( v16 )
    {
      v17 = -1073676288;
      if ( (a7 & 0xC0000000) != 0x80000000 )
        v17 = -1073610752;
      *(_DWORD *)v16 = (unsigned __int8)a7 | v17;
      *(LARGE_INTEGER *)(v16 + 16) = v28;
      *(_WORD *)(v16 + 4) = v13 + 32;
      *(_WORD *)(v16 + 6) = a6;
      *(_DWORD *)(v16 + 8) = a3[288];
      *(_DWORD *)(v16 + 12) = a3[286];
      *(_DWORD *)(v16 + 24) = a3[163];
      *(_DWORD *)(v16 + 28) = a3[183];
      v18 = (void *)(v16 + 32);
      v31 = v16 + 32;
      if ( v16 != -32LL )
      {
        v29 = EtwpCopyEventData(v18);
        v20 = v30;
        if ( v29 )
        {
          memset(v18, 0, v13);
          EtwpUpdateEventsLostCount(v12);
        }
        if ( (*(_DWORD *)(v12 + 12) & 0x80000) != 0
          && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
        {
          EtwpSendTraceEvent(v12, &v33);
        }
        if ( *(_QWORD *)(v12 + 1304) )
        {
          LOBYTE(v19) = a8;
          EtwpInvokeEventCallback(v12, &v33, 0LL, v19);
        }
        EtwpReleaseTraceBuffer((signed __int64 *)&v33);
        v21 = *(_DWORD *)(v12 + 832);
        if ( (v21 & 0x80u) != 0 )
        {
          v22 = a6;
          if ( _bittest(*(const signed __int32 **)(v12 + 984), a6 & 0x1FFF) )
          {
            EtwpStackTraceDispatcher(v12, &v28, a3, a7);
            v21 = v20[208];
          }
        }
        else
        {
          v22 = a6;
        }
        if ( (v21 & 0x8000) != 0 )
        {
          v23 = 0;
          if ( *(_DWORD *)(*(_QWORD *)(v12 + 1008) + 8LL) )
          {
            while ( 1 )
            {
              v24 = *(_QWORD *)(v12 + 1008);
              if ( *(_WORD *)(v24 + 2LL * v23 + 12) == v22 )
                break;
              if ( ++v23 >= *(_DWORD *)(v24 + 8) )
                goto LABEL_18;
            }
            EtwpTraceLastBranchRecord(v12, &v28, a3, a7);
          }
        }
LABEL_18:
        if ( (*(_DWORD *)(v12 + 832) & 0x4000000) != 0 && *(_DWORD *)(*(_QWORD *)(v12 + 1016) + 24LL) )
        {
          while ( 1 )
          {
            v25 = *(_QWORD *)(v12 + 1016);
            if ( *(_WORD *)(v25 + 2LL * v10 + 28) == v22 )
              break;
            if ( ++v10 >= *(_DWORD *)(v25 + 24) )
              return (unsigned int *)EtwpCloseLogger(a4, a1, v26[0]);
          }
          EtwpTraceProcessorTrace(v12, &v28, a3, a7);
        }
      }
    }
    return (unsigned int *)EtwpCloseLogger(a4, a1, v26[0]);
  }
  return result;
}
