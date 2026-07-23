/*
 * XREFs of EtwpLogKernelEvent @ 0x14035AD50
 * Callers:
 *     PerfInfoLogInterrupt @ 0x140213730 (PerfInfoLogInterrupt.c)
 *     EtwTraceTimedEvent @ 0x14022D15C (EtwTraceTimedEvent.c)
 *     EtwTraceSiloKernelEvent @ 0x14027BDBC (EtwTraceSiloKernelEvent.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     KiExecuteAllDpcs @ 0x1402EBB00 (KiExecuteAllDpcs.c)
 *     MiConvertPrivateToProto @ 0x14036A200 (MiConvertPrivateToProto.c)
 *     EtwpCCSwapFlush @ 0x1403AF438 (EtwpCCSwapFlush.c)
 *     EtwpTraceFileName @ 0x1403B9050 (EtwpTraceFileName.c)
 *     EtwpTraceStackWalk @ 0x1405A7364 (EtwpTraceStackWalk.c)
 *     EtwTracePool @ 0x1405A7EF4 (EtwTracePool.c)
 *     EtwTraceSiloDcEvent @ 0x1405A83C0 (EtwTraceSiloDcEvent.c)
 *     EtwTraceSiloTimedEvent @ 0x1405A83F8 (EtwTraceSiloTimedEvent.c)
 *     EtwpLogMemInfo @ 0x1405A8DE8 (EtwpLogMemInfo.c)
 *     EtwpTraceKernelEventWithFilter @ 0x1405A9D3C (EtwpTraceKernelEventWithFilter.c)
 *     PerfInfoLogIpiSend @ 0x1405AA410 (PerfInfoLogIpiSend.c)
 *     EtwpTraceCachedStack @ 0x1405ADF04 (EtwpTraceCachedStack.c)
 *     EtwpTraceStackKey @ 0x1405ADFDC (EtwpTraceStackKey.c)
 *     EtwpTraceLastBranchRecord @ 0x1405B04E4 (EtwpTraceLastBranchRecord.c)
 *     EtwpWriteProcessorTrace @ 0x1405B07A0 (EtwpWriteProcessorTrace.c)
 *     EtwpEnumerateAddressSpace @ 0x1406840BC (EtwpEnumerateAddressSpace.c)
 *     EtwpLogGroupMask @ 0x1407975B8 (EtwpLogGroupMask.c)
 *     EtwpTraceProcessRundown @ 0x140797C1C (EtwpTraceProcessRundown.c)
 *     EtwpSysModuleRunDown @ 0x140797E98 (EtwpSysModuleRunDown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140798180 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpTraceImageRundown @ 0x1407AE1E8 (EtwpTraceImageRundown.c)
 *     EtwpSystemImageEnumCallback @ 0x1407B8A70 (EtwpSystemImageEnumCallback.c)
 *     EtwpLogMemInfoWsHelper @ 0x140936F00 (EtwpLogMemInfoWsHelper.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1409371D4 (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpLogTxREvent @ 0x1409373D8 (EtwpLogTxREvent.c)
 *     EtwLogPfnInfoRundown @ 0x14093D828 (EtwLogPfnInfoRundown.c)
 *     EtwpClockSourceRunDown @ 0x14093DB3C (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x14093DCC8 (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpLogPmcCounterRundown @ 0x14093DE88 (EtwpLogPmcCounterRundown.c)
 *     EtwpObjectHandleEnumCallback @ 0x14093E0C0 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x14093E374 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x14093E4D0 (EtwpPoolRunDown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x14093E924 (EtwpProcessPerfCtrsRundown.c)
 *     EtwpProcessorRundown @ 0x14093EA5C (EtwpProcessorRundown.c)
 *     EtwpSampledProfileRunDown @ 0x14093EED8 (EtwpSampledProfileRunDown.c)
 *     EtwpSpinLockConfigRunDown @ 0x14093F084 (EtwpSpinLockConfigRunDown.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402A5670 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402A58B0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     KeAreInterruptsEnabled @ 0x14035B420 (KeAreInterruptsEnabled.c)
 *     EtwpReserveTraceBuffer @ 0x14035B440 (EtwpReserveTraceBuffer.c)
 *     EtwpUpdateEventsLostCount @ 0x14036CF28 (EtwpUpdateEventsLostCount.c)
 *     EtwpCloseLogger @ 0x140379A88 (EtwpCloseLogger.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpStackTraceDispatcher @ 0x1405A7130 (EtwpStackTraceDispatcher.c)
 *     EtwpReserveWithPebsIndex @ 0x1405A9664 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x1405A96F8 (EtwpReserveWithPmcCounters.c)
 *     EtwpSendTraceEvent @ 0x1405AAD98 (EtwpSendTraceEvent.c)
 *     EtwpInvokeEventCallback @ 0x1405AB8A8 (EtwpInvokeEventCallback.c)
 *     EtwpTraceLastBranchRecord @ 0x1405B04E4 (EtwpTraceLastBranchRecord.c)
 *     EtwpTraceProcessorTrace @ 0x1405B06E8 (EtwpTraceProcessorTrace.c)
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
  __int64 v10; // rdi
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
  __int64 v33; // rax
  _DWORD *v34; // r8
  char *v35; // rax
  char *v36; // r12
  __int64 v37; // r14
  signed __int64 *v38; // roff
  signed __int64 v39; // rax
  __int64 v40; // rdx
  signed __int64 v41; // rtt
  int v42; // edx
  unsigned __int16 v43; // r15
  unsigned int v44; // esi
  unsigned int v45; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // r8d
  __int64 v53; // rcx
  unsigned int v54; // edx
  __int64 v55; // rcx
  __int64 v56; // rcx
  unsigned int Size; // [rsp+30h] [rbp-40h]
  __int64 v58; // [rsp+38h] [rbp-38h] BYREF
  void *v59; // [rsp+40h] [rbp-30h]
  __int64 v60; // [rsp+48h] [rbp-28h]
  __int64 v61; // [rsp+50h] [rbp-20h]
  __int128 v62; // [rsp+58h] [rbp-18h] BYREF
  __int64 v63; // [rsp+68h] [rbp-8h]

  v6 = a3;
  v7 = 0;
  v62 = 0LL;
  v63 = 0LL;
  v58 = 0LL;
  v10 = a1;
  v11 = 0;
  if ( (unsigned __int8)KeAreInterruptsEnabled(a1, a2) && KeGetCurrentIrql() < 2u )
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
  v61 = 8 * v12;
  v14 = *(_QWORD *)(8 * v12 + v13);
  v60 = v14;
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
                  _mm_cvtsi32_si128(*(_DWORD *)(v10 + 8 * v20 + 8)),
                  _mm_cvtsi32_si128(*(_DWORD *)(v10 + 16LL * v19 + 8)));
          v22 = _mm_cvtsi32_si128(*(_DWORD *)(v10 + 16LL * (v19 + 4) + 8));
          v23 = 2LL * (v19 + 5);
          v24 = 2LL * (v19 + 3);
          v25 = 2LL * (v19 + 2);
          v26 = _mm_add_epi32(
                  _mm_unpacklo_epi32(
                    v21,
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)(v10 + 16LL * (v19 - 1) + 8)),
                      _mm_cvtsi32_si128(*(_DWORD *)(v10 + 16LL * (v19 + 1) + 8)))),
                  v17);
          v19 += 8;
          v17 = v26;
          v27 = _mm_add_epi32(
                  _mm_unpacklo_epi32(
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v10 + 8 * v25 + 8)), v22),
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)(v10 + 8 * v24 + 8)),
                      _mm_cvtsi32_si128(*(_DWORD *)(v10 + 8 * v23 + 8)))),
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
        v30 = (_DWORD *)(16LL * v16 + v10 + 8);
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
        v51 = EtwpReserveTraceBuffer(v14, v15 + 24, (unsigned int)&v62, (unsigned int)&v58, a6);
        v34 = (_DWORD *)v51;
        if ( !v51 )
          goto LABEL_34;
        *(_DWORD *)v51 = (unsigned __int8)a6 | 0xC0040000;
        *(_QWORD *)(v51 + 16) = v58;
        *(_WORD *)(v51 + 4) = v15 + 24;
        *(_WORD *)(v51 + 6) = a5;
        *(_DWORD *)(v51 + 8) = KeGetCurrentThread()[1].CurrentRunTime;
        *(_DWORD *)(v51 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
        v35 = (char *)(v51 + 24);
      }
      else
      {
        v59 = KeGetCurrentThread();
        v50 = EtwpReserveTraceBuffer(v14, v15 + 32, (unsigned int)&v62, (unsigned int)&v58, a6);
        if ( !v50 )
          goto LABEL_34;
        v34 = v59;
        *(_DWORD *)v50 = (unsigned __int8)a6 | 0xC0020000;
        *(_QWORD *)(v50 + 16) = v58;
        *(_WORD *)(v50 + 4) = v15 + 32;
        *(_WORD *)(v50 + 6) = a5;
        *(_DWORD *)(v50 + 8) = v34[288];
        *(_DWORD *)(v50 + 12) = v34[286];
        *(_DWORD *)(v50 + 24) = v34[163];
        *(_DWORD *)(v50 + 28) = v34[183];
        v35 = (char *)(v50 + 32);
      }
    }
    else
    {
      v32 = *(_DWORD *)(v14 + 832);
      if ( (v32 & 0xC00) == 0 )
      {
LABEL_17:
        v33 = EtwpReserveTraceBuffer(v14, v15 + 16, (unsigned int)&v62, (unsigned int)&v58, a6);
        if ( !v33 )
          goto LABEL_34;
        *(_QWORD *)(v33 + 8) = v58;
        *(_DWORD *)v33 = (unsigned __int8)a6 | 0xC0110000;
        *(_WORD *)(v33 + 4) = v15 + 16;
        *(_WORD *)(v33 + 6) = a5;
        v35 = (char *)(v33 + 16);
        goto LABEL_19;
      }
      if ( (v32 & 0x400) != 0 && a5 == 1316 )
      {
        v35 = (char *)EtwpReserveWithPebsIndex(v14, 1316, v15, (unsigned int)&v62, (__int64)&v58, a6);
      }
      else
      {
        if ( (v32 & 0x800) == 0 )
          goto LABEL_17;
        v52 = 0;
        if ( !*(_DWORD *)(*(_QWORD *)(v14 + 1000) + 8LL) )
          goto LABEL_17;
        while ( 1 )
        {
          v53 = *(_QWORD *)(v14 + 1000);
          if ( *(_WORD *)(v53 + 2LL * v52 + 12) == a5 )
            break;
          if ( ++v52 >= *(_DWORD *)(v53 + 8) )
            goto LABEL_17;
        }
        v35 = (char *)EtwpReserveWithPmcCounters(v14, a5, v15, (unsigned int)&v62, (__int64)&v58, a6);
      }
    }
LABEL_19:
    v59 = v35;
    if ( v35 )
    {
      v36 = v35;
      if ( a4 )
      {
        while ( 1 )
        {
          v37 = *(unsigned int *)(v10 + 8);
          if ( (unsigned int)v37 > v15 )
            break;
          memmove(v36, *(const void **)v10, (unsigned int)v37);
          v36 += v37;
          v15 -= v37;
          ++v7;
          v10 += 16LL;
          if ( v7 >= a4 )
          {
            v14 = v60;
            goto LABEL_24;
          }
        }
        memset(v59, 0, Size);
        v14 = v60;
        EtwpUpdateEventsLostCount(v60);
      }
LABEL_24:
      if ( (*(_DWORD *)(v14 + 12) & 0x80000) != 0
        && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
      {
        EtwpSendTraceEvent(v14, &v62, v34);
      }
      if ( *(_QWORD *)(v14 + 1272) )
        EtwpInvokeEventCallback(v14, &v62, 0LL, 0LL);
      v38 = (signed __int64 *)*((_QWORD *)&v62 + 1);
      _m_prefetchw(*((const void **)&v62 + 1));
      v39 = *v38;
      v40 = v62;
      if ( (*v38 ^ (unsigned __int64)v62) >= 0xF )
      {
LABEL_43:
        _InterlockedDecrement((volatile signed __int32 *)(v40 + 12));
      }
      else
      {
        while ( 1 )
        {
          v41 = v39;
          v39 = _InterlockedCompareExchange64(*((volatile signed __int64 **)&v62 + 1), v39 + 1, v39);
          if ( v41 == v39 )
            break;
          v40 = v62;
          if ( (v39 ^ (unsigned __int64)v62) >= 0xF )
            goto LABEL_43;
        }
      }
      v42 = *(_DWORD *)(v14 + 832);
      if ( (v42 & 0x80u) != 0 )
      {
        v43 = a5;
        if ( _bittest(*(const signed __int32 **)(v14 + 984), a5 & 0x1FFF) )
        {
          v44 = a6;
          EtwpStackTraceDispatcher(v14, &v58, 0LL, a6);
          v42 = *(_DWORD *)(v14 + 832);
LABEL_32:
          v45 = 0;
          if ( (v42 & 0x8000) != 0 )
          {
            v54 = 0;
            if ( *(_DWORD *)(*(_QWORD *)(v14 + 1008) + 8LL) )
            {
              while ( 1 )
              {
                v55 = *(_QWORD *)(v14 + 1008);
                if ( *(_WORD *)(v55 + 2LL * v54 + 12) == v43 )
                  break;
                if ( ++v54 >= *(_DWORD *)(v55 + 8) )
                  goto LABEL_33;
              }
              EtwpTraceLastBranchRecord(v14, &v58, 0LL, v44);
            }
          }
LABEL_33:
          if ( (*(_DWORD *)(v14 + 832) & 0x4000000) != 0 && *(_DWORD *)(*(_QWORD *)(v14 + 1016) + 24LL) )
          {
            while ( 1 )
            {
              v56 = *(_QWORD *)(v14 + 1016);
              if ( *(_WORD *)(v56 + 2LL * v45 + 28) == v43 )
                break;
              if ( ++v45 >= *(_DWORD *)(v56 + 24) )
                goto LABEL_34;
            }
            EtwpTraceProcessorTrace(v14, &v58, 0LL, v44);
          }
          goto LABEL_34;
        }
      }
      else
      {
        v43 = a5;
      }
      v44 = a6;
      goto LABEL_32;
    }
LABEL_34:
    if ( v11 )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + v61), 1u);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v47, v48, v49);
    }
  }
}
