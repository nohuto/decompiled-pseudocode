/*
 * XREFs of EtwpLogKernelEvent @ 0x1402085B0
 * Callers:
 *     KiExecuteAllDpcs @ 0x140207510 (KiExecuteAllDpcs.c)
 *     EtwTraceSiloKernelEvent @ 0x1402A8CA4 (EtwTraceSiloKernelEvent.c)
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     PerfInfoLogInterrupt @ 0x1402EF640 (PerfInfoLogInterrupt.c)
 *     EtwTraceTimedEvent @ 0x1402FF550 (EtwTraceTimedEvent.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 *     EtwpCCSwapFlush @ 0x1403AAD38 (EtwpCCSwapFlush.c)
 *     EtwpTraceFileName @ 0x1403B4CC0 (EtwpTraceFileName.c)
 *     EtwpTraceStackWalk @ 0x1405A1574 (EtwpTraceStackWalk.c)
 *     EtwTracePool @ 0x1405A2104 (EtwTracePool.c)
 *     EtwTraceSiloDcEvent @ 0x1405A25D0 (EtwTraceSiloDcEvent.c)
 *     EtwTraceSiloTimedEvent @ 0x1405A2608 (EtwTraceSiloTimedEvent.c)
 *     EtwpLogMemInfo @ 0x1405A2FF8 (EtwpLogMemInfo.c)
 *     EtwpTraceKernelEventWithFilter @ 0x1405A3F4C (EtwpTraceKernelEventWithFilter.c)
 *     PerfInfoLogIpiSend @ 0x1405A4620 (PerfInfoLogIpiSend.c)
 *     EtwpTraceCachedStack @ 0x1405A8084 (EtwpTraceCachedStack.c)
 *     EtwpTraceStackKey @ 0x1405A815C (EtwpTraceStackKey.c)
 *     EtwpTraceLastBranchRecord @ 0x1405AA664 (EtwpTraceLastBranchRecord.c)
 *     EtwpWriteProcessorTrace @ 0x1405AA920 (EtwpWriteProcessorTrace.c)
 *     EtwpEnumerateAddressSpace @ 0x1406389A4 (EtwpEnumerateAddressSpace.c)
 *     EtwpLogGroupMask @ 0x1407800D4 (EtwpLogGroupMask.c)
 *     EtwpTraceProcessRundown @ 0x14078073C (EtwpTraceProcessRundown.c)
 *     EtwpSysModuleRunDown @ 0x1407809B8 (EtwpSysModuleRunDown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140780CA0 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpTraceImageRundown @ 0x140796158 (EtwpTraceImageRundown.c)
 *     EtwpSystemImageEnumCallback @ 0x1407A2030 (EtwpSystemImageEnumCallback.c)
 *     EtwpLogMemInfoWsHelper @ 0x140932484 (EtwpLogMemInfoWsHelper.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x140932758 (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpLogTxREvent @ 0x14093295C (EtwpLogTxREvent.c)
 *     EtwLogPfnInfoRundown @ 0x140938DB4 (EtwLogPfnInfoRundown.c)
 *     EtwpClockSourceRunDown @ 0x1409390C8 (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x140939254 (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpLogPmcCounterRundown @ 0x140939414 (EtwpLogPmcCounterRundown.c)
 *     EtwpObjectHandleEnumCallback @ 0x140939650 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x140939904 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x140939A60 (EtwpPoolRunDown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x140939EB4 (EtwpProcessPerfCtrsRundown.c)
 *     EtwpProcessorRundown @ 0x140939FEC (EtwpProcessorRundown.c)
 *     EtwpSampledProfileRunDown @ 0x14093A468 (EtwpSampledProfileRunDown.c)
 *     EtwpSpinLockConfigRunDown @ 0x14093A614 (EtwpSpinLockConfigRunDown.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x140208060 (EtwpReserveTraceBuffer.c)
 *     KeAreInterruptsEnabled @ 0x140208590 (KeAreInterruptsEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402C2730 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402E5060 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpUpdateEventsLostCount @ 0x140369DA8 (EtwpUpdateEventsLostCount.c)
 *     EtwpCloseLogger @ 0x140377084 (EtwpCloseLogger.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     EtwpStackTraceDispatcher @ 0x1405A1340 (EtwpStackTraceDispatcher.c)
 *     EtwpReserveWithPebsIndex @ 0x1405A3874 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x1405A3908 (EtwpReserveWithPmcCounters.c)
 *     EtwpSendTraceEvent @ 0x1405A4FCC (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1405A5ADC (EtwpInvokeEventCallback.c)
 *     EtwpTraceLastBranchRecord @ 0x1405AA664 (EtwpTraceLastBranchRecord.c)
 *     EtwpTraceProcessorTrace @ 0x1405AA868 (EtwpTraceProcessorTrace.c)
 */

void __fastcall EtwpLogKernelEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  __int64 v6; // r15
  unsigned int v7; // r13d
  unsigned __int8 v11; // bl
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned int v15; // r15d
  unsigned int v16; // r10d
  __m128i v17; // xmm5
  __m128i v18; // xmm4
  unsigned int v19; // r15d
  __int64 v20; // r9
  __m128i v21; // xmm3
  __m128i v22; // xmm0
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __m128i v26; // xmm3
  __m128i v27; // xmm3
  __m128i v28; // xmm4
  __m128i v29; // xmm4
  _DWORD *v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  unsigned __int64 v33; // rax
  char *v34; // rax
  char *v35; // r12
  __int64 v36; // r14
  signed __int64 *v37; // roff
  signed __int64 v38; // rax
  __int64 v39; // rdx
  signed __int64 v40; // rtt
  int v41; // edx
  unsigned __int16 v42; // r15
  unsigned int v43; // esi
  unsigned int v44; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v46; // rax
  _DWORD *v47; // r8
  unsigned __int64 v48; // rax
  unsigned int v49; // r8d
  __int64 v50; // rcx
  unsigned int v51; // edx
  __int64 v52; // rcx
  __int64 v53; // rcx
  unsigned int Size; // [rsp+30h] [rbp-40h]
  LARGE_INTEGER v55; // [rsp+38h] [rbp-38h] BYREF
  void *v56; // [rsp+40h] [rbp-30h]
  __int64 v57; // [rsp+48h] [rbp-28h]
  __int64 v58; // [rsp+50h] [rbp-20h]
  __int128 v59; // [rsp+58h] [rbp-18h] BYREF
  __int64 v60; // [rsp+68h] [rbp-8h]

  v6 = a3;
  v7 = 0;
  v59 = 0LL;
  v60 = 0LL;
  v55.QuadPart = 0LL;
  v11 = 0;
  if ( KeAreInterruptsEnabled() && KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v12 = v6;
    if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + 8 * v6), 1u) )
    {
      KeLeaveCriticalRegion();
      return;
    }
    v11 = 1;
  }
  else
  {
    v12 = v6;
  }
  v13 = *(_QWORD *)(a2 + 456);
  v58 = 8 * v12;
  v14 = *(_QWORD *)(8 * v12 + v13);
  v57 = v14;
  if ( (v14 & 1) != 0 )
  {
    EtwpCloseLogger((unsigned int)v6, a2, v11);
    return;
  }
  if ( v14 )
  {
    Size = 0;
    v15 = 0;
    v16 = 0;
    if ( a4 )
    {
      if ( a4 >= 8 )
      {
        v17 = 0LL;
        v18 = 0LL;
        v19 = 2;
        do
        {
          v20 = 2LL * v16;
          v16 += 8;
          v21 = _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v20 + 8)),
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * v19 + 8)));
          v22 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v19 + 4) + 8));
          v23 = 2LL * (v19 + 5);
          v24 = 2LL * (v19 + 3);
          v25 = 2LL * (v19 + 2);
          v26 = _mm_add_epi32(
                  _mm_unpacklo_epi32(
                    v21,
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v19 - 1) + 8)),
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v19 + 1) + 8)))),
                  v17);
          v19 += 8;
          v17 = v26;
          v27 = _mm_add_epi32(
                  _mm_unpacklo_epi32(
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v25 + 8)), v22),
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v24 + 8)),
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v23 + 8)))),
                  v18);
          v18 = v27;
        }
        while ( v16 < (a4 & 0xFFFFFFF8) );
        v28 = _mm_add_epi32(v27, v17);
        v29 = _mm_add_epi32(v28, _mm_srli_si128(v28, 8));
        v15 = _mm_cvtsi128_si32(_mm_add_epi32(v29, _mm_srli_si128(v29, 4)));
        Size = v15;
      }
      if ( v16 < a4 )
      {
        v30 = (_DWORD *)(16LL * v16 + a1 + 8);
        v31 = a4 - v16;
        do
        {
          v15 += *v30;
          v30 += 4;
          --v31;
        }
        while ( v31 );
        Size = v15;
      }
    }
    if ( (a6 & 0x100) != 0 )
    {
      if ( (a6 & 0x10000000) != 0 )
      {
        v48 = EtwpReserveTraceBuffer((unsigned int *)v14, v15 + 24, (__int64)&v59, &v55, a6);
        if ( !v48 )
          goto LABEL_34;
        *(_DWORD *)v48 = (unsigned __int8)a6 | 0xC0040000;
        *(LARGE_INTEGER *)(v48 + 16) = v55;
        *(_WORD *)(v48 + 4) = v15 + 24;
        *(_WORD *)(v48 + 6) = a5;
        *(_DWORD *)(v48 + 8) = KeGetCurrentThread()[1].CurrentRunTime;
        *(_DWORD *)(v48 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
        v34 = (char *)(v48 + 24);
      }
      else
      {
        v56 = KeGetCurrentThread();
        v46 = EtwpReserveTraceBuffer((unsigned int *)v14, v15 + 32, (__int64)&v59, &v55, a6);
        if ( !v46 )
          goto LABEL_34;
        v47 = v56;
        *(_DWORD *)v46 = (unsigned __int8)a6 | 0xC0020000;
        *(LARGE_INTEGER *)(v46 + 16) = v55;
        *(_WORD *)(v46 + 4) = v15 + 32;
        *(_WORD *)(v46 + 6) = a5;
        *(_DWORD *)(v46 + 8) = v47[288];
        *(_DWORD *)(v46 + 12) = v47[286];
        *(_DWORD *)(v46 + 24) = v47[163];
        *(_DWORD *)(v46 + 28) = v47[183];
        v34 = (char *)(v46 + 32);
      }
    }
    else
    {
      v32 = *(_DWORD *)(v14 + 832);
      if ( (v32 & 0xC00) == 0 )
      {
LABEL_17:
        v33 = EtwpReserveTraceBuffer((unsigned int *)v14, v15 + 16, (__int64)&v59, &v55, a6);
        if ( !v33 )
          goto LABEL_34;
        *(LARGE_INTEGER *)(v33 + 8) = v55;
        *(_DWORD *)v33 = (unsigned __int8)a6 | 0xC0110000;
        *(_WORD *)(v33 + 4) = v15 + 16;
        *(_WORD *)(v33 + 6) = a5;
        v34 = (char *)(v33 + 16);
        goto LABEL_19;
      }
      if ( (v32 & 0x400) != 0 && a5 == 1316 )
      {
        v34 = (char *)EtwpReserveWithPebsIndex(v14, 1316, v15, (unsigned int)&v59, (__int64)&v55, a6);
      }
      else
      {
        if ( (v32 & 0x800) == 0 )
          goto LABEL_17;
        v49 = 0;
        if ( !*(_DWORD *)(*(_QWORD *)(v14 + 1000) + 8LL) )
          goto LABEL_17;
        while ( 1 )
        {
          v50 = *(_QWORD *)(v14 + 1000);
          if ( *(_WORD *)(v50 + 2LL * v49 + 12) == a5 )
            break;
          if ( ++v49 >= *(_DWORD *)(v50 + 8) )
            goto LABEL_17;
        }
        v34 = (char *)EtwpReserveWithPmcCounters(v14, a5, v15, (unsigned int)&v59, (__int64)&v55, a6);
      }
    }
LABEL_19:
    v56 = v34;
    if ( v34 )
    {
      v35 = v34;
      if ( a4 )
      {
        while ( 1 )
        {
          v36 = *(unsigned int *)(a1 + 8);
          if ( (unsigned int)v36 > v15 )
            break;
          memmove(v35, *(const void **)a1, (unsigned int)v36);
          v35 += v36;
          v15 -= v36;
          ++v7;
          a1 += 16LL;
          if ( v7 >= a4 )
          {
            v14 = v57;
            goto LABEL_24;
          }
        }
        memset(v56, 0, Size);
        v14 = v57;
        EtwpUpdateEventsLostCount(v57);
      }
LABEL_24:
      if ( (*(_DWORD *)(v14 + 12) & 0x80000) != 0
        && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
      {
        EtwpSendTraceEvent(v14, &v59);
      }
      if ( *(_QWORD *)(v14 + 1304) )
        EtwpInvokeEventCallback(v14, &v59, 0LL, 0LL);
      v37 = (signed __int64 *)*((_QWORD *)&v59 + 1);
      _m_prefetchw(*((const void **)&v59 + 1));
      v38 = *v37;
      v39 = v59;
      if ( (*v37 ^ (unsigned __int64)v59) >= 0xF )
      {
LABEL_43:
        _InterlockedDecrement((volatile signed __int32 *)(v39 + 12));
      }
      else
      {
        while ( 1 )
        {
          v40 = v38;
          v38 = _InterlockedCompareExchange64(*((volatile signed __int64 **)&v59 + 1), v38 + 1, v38);
          if ( v40 == v38 )
            break;
          v39 = v59;
          if ( (v38 ^ (unsigned __int64)v59) >= 0xF )
            goto LABEL_43;
        }
      }
      v41 = *(_DWORD *)(v14 + 832);
      if ( (v41 & 0x80u) != 0 )
      {
        v42 = a5;
        if ( _bittest(*(const signed __int32 **)(v14 + 984), a5 & 0x1FFF) )
        {
          v43 = a6;
          EtwpStackTraceDispatcher(v14, &v55, 0LL, a6);
          v41 = *(_DWORD *)(v14 + 832);
LABEL_32:
          v44 = 0;
          if ( (v41 & 0x8000) != 0 )
          {
            v51 = 0;
            if ( *(_DWORD *)(*(_QWORD *)(v14 + 1008) + 8LL) )
            {
              while ( 1 )
              {
                v52 = *(_QWORD *)(v14 + 1008);
                if ( *(_WORD *)(v52 + 2LL * v51 + 12) == v42 )
                  break;
                if ( ++v51 >= *(_DWORD *)(v52 + 8) )
                  goto LABEL_33;
              }
              EtwpTraceLastBranchRecord(v14, &v55, 0LL, v43);
            }
          }
LABEL_33:
          if ( (*(_DWORD *)(v14 + 832) & 0x4000000) != 0 && *(_DWORD *)(*(_QWORD *)(v14 + 1016) + 24LL) )
          {
            while ( 1 )
            {
              v53 = *(_QWORD *)(v14 + 1016);
              if ( *(_WORD *)(v53 + 2LL * v44 + 28) == v42 )
                break;
              if ( ++v44 >= *(_DWORD *)(v53 + 24) )
                goto LABEL_34;
            }
            EtwpTraceProcessorTrace(v14, &v55, 0LL, v43);
          }
          goto LABEL_34;
        }
      }
      else
      {
        v42 = a5;
      }
      v43 = a6;
      goto LABEL_32;
    }
LABEL_34:
    if ( v11 )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + v58), 1u);
      KeLeaveCriticalRegionThread(KeGetCurrentThread());
    }
  }
}
