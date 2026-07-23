/*
 * XREFs of EtwpLogContextSwapEvent @ 0x1403AEF80
 * Callers:
 *     EtwTraceContextSwap @ 0x1403AEEB0 (EtwTraceContextSwap.c)
 * Callees:
 *     EtwpReleaseTraceBuffer @ 0x14027F770 (EtwpReleaseTraceBuffer.c)
 *     EtwpGetLoggerTimeStamp @ 0x1402D1328 (EtwpGetLoggerTimeStamp.c)
 *     EtwpReserveTraceBuffer @ 0x14035B440 (EtwpReserveTraceBuffer.c)
 *     EtwpCCSwapTrace @ 0x1403AF0E0 (EtwpCCSwapTrace.c)
 *     EtwpStackTraceDispatcher @ 0x1405A7130 (EtwpStackTraceDispatcher.c)
 *     EtwpReserveWithPebsIndex @ 0x1405A9664 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x1405A96F8 (EtwpReserveWithPmcCounters.c)
 *     EtwpTraceLastBranchRecord @ 0x1405B04E4 (EtwpTraceLastBranchRecord.c)
 *     EtwpTraceProcessorTrace @ 0x1405B06E8 (EtwpTraceProcessorTrace.c)
 */

char __fastcall EtwpLogContextSwapEvent(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rax
  bool v5; // zf
  __int64 v6; // r9
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rsi
  int v13; // ebp
  LARGE_INTEGER LoggerTimeStamp; // rax
  __int64 v15; // r8
  int v16; // ecx
  int v17; // eax
  unsigned __int64 v18; // rdx
  unsigned int v19; // edx
  __int64 v20; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  _PPM_IDLE_STATES *IdleStates; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // edx
  __int64 v26; // rcx
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int128 v30; // [rsp+30h] [rbp-58h] BYREF
  __int64 v31; // [rsp+40h] [rbp-48h]
  LARGE_INTEGER v32; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(_DWORD *)(a1 + 4224);
  LOBYTE(v4) = 0;
  v32.QuadPart = 0LL;
  v5 = !_BitScanForward((unsigned int *)&v6, v3);
  v30 = 0LL;
  v31 = 0LL;
  v10 = 0;
  while ( !v5 )
  {
    v3 &= v3 - 1;
    v11 = 32LL * (unsigned int)v6;
    v4 = v11 + a1 + 4260;
    if ( !v4 )
      goto LABEL_14;
    LODWORD(v4) = *(_DWORD *)(v4 + 4);
    if ( (v4 & 4) == 0 )
      goto LABEL_14;
    LODWORD(v4) = *(unsigned __int8 *)(a1 + 2 * v6 + 4208);
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 16) )
    {
      v12 = 1LL;
    }
    else
    {
      _mm_lfence();
      v4 = *(_QWORD *)(a1 + 456);
      v12 = *(_QWORD *)(v4 + 8LL * *(unsigned __int8 *)(a1 + 2 * v6 + 4208));
    }
    if ( (v12 & 1) != 0 )
      goto LABEL_14;
    if ( (*(_DWORD *)(v11 + a1 + 4264) & 0x100) != 0 )
    {
      v13 = 1 << *(_DWORD *)(v12 + 216);
      LOBYTE(v4) = ~(_BYTE)v10;
      if ( (~v10 & v13) != 0 )
      {
        LoggerTimeStamp = EtwpGetLoggerTimeStamp(v12);
        v15 = *(unsigned int *)(v12 + 216);
        v32 = LoggerTimeStamp;
        LOBYTE(v4) = EtwpCCSwapTrace(a2, a3, v15, &v32);
        v10 |= v13;
      }
LABEL_10:
      if ( a3 )
      {
        v16 = *(_DWORD *)(v12 + 832);
        if ( (v16 & 0x80u) != 0 )
        {
          LOBYTE(v4) = _bittest((const signed __int32 *)(*(_QWORD *)(v12 + 984) + 164LL), 4u);
          if ( (_BYTE)v4 )
          {
            LOBYTE(v4) = EtwpStackTraceDispatcher(v12, &v32, a3, 4217348LL);
            v16 = *(_DWORD *)(v12 + 832);
          }
        }
        if ( (v16 & 0x8000) != 0 )
        {
          v4 = *(_QWORD *)(v12 + 1008);
          v25 = 0;
          if ( *(_DWORD *)(v4 + 8) )
          {
            while ( 1 )
            {
              v26 = *(_QWORD *)(v12 + 1008);
              if ( *(_WORD *)(v26 + 2LL * v25 + 12) == 1316 )
                break;
              LODWORD(v4) = *(_DWORD *)(v26 + 8);
              if ( ++v25 >= (unsigned int)v4 )
                goto LABEL_13;
            }
            LOBYTE(v4) = EtwpTraceLastBranchRecord(v12, &v32, a3, 4217348LL);
          }
        }
LABEL_13:
        if ( (*(_DWORD *)(v12 + 832) & 0x4000000) != 0 )
        {
          v4 = *(_QWORD *)(v12 + 1016);
          v27 = 0;
          if ( *(_DWORD *)(v4 + 24) )
          {
            while ( 1 )
            {
              v28 = *(_QWORD *)(v12 + 1016);
              if ( *(_WORD *)(v28 + 2LL * v27 + 28) == 1316 )
                break;
              LODWORD(v4) = *(_DWORD *)(v28 + 24);
              if ( ++v27 >= (unsigned int)v4 )
                goto LABEL_14;
            }
            LOBYTE(v4) = EtwpTraceProcessorTrace(v12, &v32, a3, 4217348LL);
          }
        }
      }
      goto LABEL_14;
    }
    v17 = *(_DWORD *)(v12 + 832);
    if ( (v17 & 0xC00) == 0 )
      goto LABEL_24;
    if ( (v17 & 0x400) != 0 )
    {
      v4 = EtwpReserveWithPebsIndex(v12, 1316, 24, (unsigned int)&v30, (__int64)&v32, 4217348);
      v18 = v4;
      goto LABEL_26;
    }
    if ( (v17 & 0x800) != 0 && (v19 = 0, *(_DWORD *)(*(_QWORD *)(v12 + 1000) + 8LL)) )
    {
      while ( 1 )
      {
        v20 = *(_QWORD *)(v12 + 1000);
        if ( *(_WORD *)(v20 + 2LL * v19 + 12) == 1316 )
          break;
        if ( ++v19 >= *(_DWORD *)(v20 + 8) )
          goto LABEL_24;
      }
      v4 = EtwpReserveWithPmcCounters(v12, 1316, 24, (unsigned int)&v30, (__int64)&v32, 4217348);
      v18 = v4;
    }
    else
    {
LABEL_24:
      v4 = EtwpReserveTraceBuffer((unsigned int *)v12, 40LL, (__int64)&v30, &v32, 23044);
      if ( !v4 )
        goto LABEL_14;
      v18 = v4 + 16;
      *(LARGE_INTEGER *)(v4 + 8) = v32;
      *(_DWORD *)v4 = -1072627708;
      *(_DWORD *)(v4 + 4) = 86245416;
    }
LABEL_26:
    if ( v18 )
    {
      *(_OWORD *)v18 = 0LL;
      *(_QWORD *)(v18 + 16) = 0LL;
      if ( a2 )
      {
        *(_DWORD *)(v18 + 4) = *(_DWORD *)(a2 + 1152);
        *(_BYTE *)(v18 + 9) = *(_BYTE *)(a2 + 195);
        *(_BYTE *)(v18 + 12) = *(_BYTE *)(a2 + 643);
        *(_BYTE *)(v18 + 13) ^= (*(_BYTE *)(v18 + 13) ^ *(_BYTE *)(a2 + 391)) & 1;
        *(_BYTE *)(v18 + 14) = *(_BYTE *)(a2 + 388);
        *(_BYTE *)(v18 + 15) = *(_BYTE *)(a2 + 588);
        *(_BYTE *)(v18 + 13) ^= (*(_BYTE *)(v18 + 13) ^ (2 * *(_BYTE *)(a2 + 512))) & 0xE;
        *(_DWORD *)(v18 + 20) = (*(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 72)) >> 10;
        CurrentPrcb = KeGetCurrentPrcb();
        if ( (_KTHREAD *)a2 == CurrentPrcb->IdleThread )
        {
          IdleStates = CurrentPrcb->PowerState.IdleStates;
          if ( IdleStates )
            *(_BYTE *)(v18 + 10) = IdleStates->ActualState;
        }
        else
        {
          v23 = *(_QWORD *)(a2 + 104);
          if ( v23 )
          {
            v24 = v23 + CurrentPrcb->ScbOffset;
            while ( 1 )
            {
              LODWORD(v23) = *(_DWORD *)(v24 + 116);
              if ( (unsigned int)v23 > 0xFF )
                break;
              if ( !(_BYTE)v23 )
              {
                v24 = *(_QWORD *)(v24 + 408);
                if ( v24 )
                  continue;
              }
              goto LABEL_39;
            }
            LOBYTE(v23) = -1;
          }
LABEL_39:
          *(_BYTE *)(v18 + 10) = v23;
        }
      }
      if ( a3 )
      {
        *(_DWORD *)v18 = *(_DWORD *)(a3 + 1152);
        *(_BYTE *)(v18 + 8) = *(_BYTE *)(a3 + 195);
        *(_BYTE *)(v18 + 11) = *(_BYTE *)(a3 + 564);
        *(_BYTE *)(v18 + 13) ^= (*(_BYTE *)(v18 + 13) ^ (16 * *(_BYTE *)(a3 + 512))) & 0x70;
        *(_DWORD *)(v18 + 16) = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a3 + 436);
      }
      LOBYTE(v4) = EtwpReleaseTraceBuffer((signed __int64 *)&v30);
      goto LABEL_10;
    }
LABEL_14:
    v5 = !_BitScanForward((unsigned int *)&v6, v3);
  }
  return v4;
}
