/*
 * XREFs of KdInitSystem @ 0x1409B2160
 * Callers:
 *     KdEnableDebuggerWithLock @ 0x14050B2CC (KdEnableDebuggerWithLock.c)
 *     KeEnterKernelDebugger @ 0x140511F60 (KeEnterKernelDebugger.c)
 *     KiSystemStartup @ 0x14098B010 (KiSystemStartup.c)
 *     PopHiberCheckResume @ 0x140993F10 (PopHiberCheckResume.c)
 *     KiSetFeatureBits @ 0x1409981AC (KiSetFeatureBits.c)
 *     KiSetProcessorSignature @ 0x140999C08 (KiSetProcessorSignature.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140203280 (RtlInitAnsiString.c)
 *     KeInitializeDpc @ 0x140204F10 (KeInitializeDpc.c)
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     MmGetPagedPoolCommitPointer @ 0x1403234C8 (MmGetPagedPoolCommitPointer.c)
 *     KeInitializeTimerEx @ 0x140355110 (KeInitializeTimerEx.c)
 *     DbgLoadImageSymbols @ 0x14036ED90 (DbgLoadImageSymbols.c)
 *     KdDisableDebuggerWithLock @ 0x1403CB6E8 (KdDisableDebuggerWithLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _strupr @ 0x1403CCBE0 (_strupr.c)
 *     strncmp @ 0x1403CD100 (strncmp.c)
 *     strstr @ 0x1403CD440 (strstr.c)
 *     atol @ 0x1403CD4E0 (atol.c)
 *     memset @ 0x140408F80 (memset.c)
 *     __report_rangecheckfailure @ 0x1404B0ECC (__report_rangecheckfailure.c)
 *     KdPollBreakIn @ 0x14050C070 (KdPollBreakIn.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 *     KdRegisterDebuggerDataBlock @ 0x1409B2434 (KdRegisterDebuggerDataBlock.c)
 */

char __fastcall KdInitSystem(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // r12
  char v6; // r15
  char v8; // r14
  __int64 v9; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v11; // rcx
  char *v12; // rbp
  char v13; // bl
  char *v14; // rax
  __int64 v15; // rdi
  unsigned int v16; // eax
  const char *v17; // rsi
  char *v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  const char *j; // rcx
  const char *v22; // rsi
  __int64 v23; // rdx
  unsigned int v24; // ebp
  __int64 *k; // rbx
  __int64 v26; // rdx
  CHAR *v27; // r9
  unsigned int v28; // r8d
  CHAR v29; // al
  __int64 v30; // rcx
  unsigned int i; // edi
  PVOID PoolWithTag; // rax
  PVOID v33; // rbx
  signed __int32 v34[8]; // [rsp+0h] [rbp-178h] BYREF
  STRING DestinationString; // [rsp+20h] [rbp-158h] BYREF
  CHAR SourceString[256]; // [rsp+30h] [rbp-148h] BYREF

  v5 = 0;
  v6 = 0;
  if ( a1 == -1 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a2 + 240) + 132LL) & 8) != 0 )
      __debugbreak();
  }
  else
  {
    if ( a1 )
    {
      KeQueryPerformanceCounter(&KdPerformanceCounterRate);
      if ( !KdPitchDebugger )
      {
        for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x6F49644Bu);
          v33 = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, 0x1000uLL);
            _InterlockedOr(v34, 0);
            KdLogBuffer[i] = v33;
          }
        }
      }
      KdpLoaderDebuggerBlock = 0LL;
      return 1;
    }
    if ( (_BYTE)KdDebuggerEnabled )
      goto LABEL_31;
    KdpDebugRoutineSelect = 0;
    KdBreakAfterSymbolLoad = 0;
    if ( !KdPitchDebugger || (v8 = 1, !KdLocalDebugEnabled) )
      v8 = 0;
    if ( KdDebugDevice && *(_DWORD *)(KdDebugDevice + 236) == 3 )
      KdTransportMaxPacketSize = 1152;
    if ( !KdpDebuggerDataListHead )
    {
      qword_140C321C8 = KdDebugDevice;
      qword_140C00C90 = (__int64)MmGetPagedPoolCommitPointer();
      KdpPowerSpinLock = 0LL;
      qword_140C40858 = (__int64)&KdpPowerListHead;
      KdpPowerListHead = (__int64)&KdpPowerListHead;
      qword_140C40838 = (__int64)&KdpDebuggerDataListHead;
      KdpDebuggerDataListHead = (__int64)&KdpDebuggerDataListHead;
      KdRegisterDebuggerDataBlock(v9, &KdDebuggerDataBlock);
      WORD1(KdVersionBlock) = NtBuildNumber;
      WORD3(KdVersionBlock) |= 1u;
      LOWORD(KdVersionBlock) = (unsigned int)NtBuildNumber >> 28;
      *((_QWORD *)&xmmword_140C0F378 + 1) = &PsLoadedModuleList;
      *(_WORD *)((char *)&KdVersionBlock + 11) = 13059;
      qword_140C0F388 = (__int64)&KdpDebuggerDataListHead;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( !CurrentPrcb->Context )
    {
      CurrentPrcb->ContextFlagsInit = 1048587;
      CurrentPrcb->Context = &CurrentPrcb->ProcessorState.ContextFrame;
    }
    if ( a2 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 48LL);
      off_140C00DF8 = &KdpLoaderDebuggerBlock;
      KdpLoaderDebuggerBlock = a2 + 16;
      v12 = *(char **)(a2 + 216);
      *(_QWORD *)&xmmword_140C0F378 = v11;
      if ( v12 )
      {
        strupr(v12);
        LODWORD(KdPrintBufferAllocateSize) = 0;
        v13 = 0;
        v14 = strstr(v12, "DBGPRINT_LOG_SIZE=");
        if ( v14 )
        {
          v16 = (atol(v14 + 18) + 4095) & 0xFFFFF000;
          LODWORD(KdPrintBufferAllocateSize) = v16;
          if ( v16 > 0x1000000 )
          {
            LODWORD(KdPrintBufferAllocateSize) = 0x1000000;
            v16 = 0x1000000;
          }
          if ( v16 <= 0x1000 )
            LODWORD(KdPrintBufferAllocateSize) = 0;
        }
        if ( strstr(v12, "NODEBUG") )
        {
          KdPitchDebugger = 1;
          KdPageDebuggerSection = 1;
          KdpBootedNodebug = 1;
        }
        else if ( strstr(v12, "DEBUGPORT=LOCAL") )
        {
          KdPitchDebugger = 1;
          v8 = 1;
          KdPageDebuggerSection = 1;
          LOBYTE(KdDebuggerNotPresent) = 1;
          KdLocalDebugEnabled = 1;
          KdpBootedNodebug = 0;
        }
        else
        {
          v17 = v12;
          do
          {
            v18 = strstr(v17, " DEBUG=");
            if ( !v18 )
            {
              v18 = strstr(v17, " DEBUG");
              if ( !v18 )
                break;
            }
            v17 = v18 + 6;
            v19 = v18[6];
            if ( (unsigned __int8)v19 <= 0x3Du )
            {
              v20 = 0x2000000100000001LL;
              if ( _bittest64(&v20, v19) )
              {
                KdpBootedNodebug = 0;
                v13 = 1;
                if ( v18[6] == 61 )
                {
                  for ( j = v18 + 7; ; j = v22 + 1 )
                  {
                    LOBYTE(v19) = *j;
                    v22 = j;
                    while ( (_BYTE)v19 )
                    {
                      if ( (unsigned __int8)v19 <= 0x2Cu )
                      {
                        v23 = 0x100100000200LL;
                        if ( _bittest64(&v23, v19) )
                          break;
                      }
                      LOBYTE(v19) = *++v22;
                    }
                    v19 = (unsigned int)((_DWORD)v22 - (_DWORD)j);
                    if ( (_DWORD)v22 == (_DWORD)j )
                      break;
                    switch ( (_DWORD)v19 )
                    {
                      case 0xA:
                        LODWORD(v19) = strncmp(j, "AUTOENABLE", 0xAuLL);
                        if ( !(_DWORD)v19 )
                        {
                          v5 = 1;
                          KdAutoEnableOnEvent = 1;
                          v6 = 0;
                        }
                        break;
                      case 7:
                        LODWORD(v19) = strncmp(j, "DISABLE", 7uLL);
                        if ( !(_DWORD)v19 )
                        {
                          v5 = 1;
                          KdAutoEnableOnEvent = 0;
                          v6 = 1;
                        }
                        break;
                      case 6:
                        LODWORD(v19) = strncmp(j, "NOUMEX", 6uLL);
                        if ( !(_DWORD)v19 )
                          KdIgnoreUmExceptions = 1;
                        break;
                    }
                    if ( *v22 != 44 )
                      break;
                  }
                }
                break;
              }
            }
          }
          while ( v18 != (char *)-6LL );
        }
        if ( strstr(v12, "NOEVENT") )
        {
          KdEventLoggingEnabled = 0;
        }
        else if ( strstr(v12, "EVENT") )
        {
          KdEventLoggingEnabled = 1;
          v13 = 1;
          KdPageDebuggerSection = 0;
        }
      }
      else
      {
        KdPitchDebugger = 1;
        v13 = 0;
        KdPageDebuggerSection = 1;
      }
    }
    else
    {
      v13 = 1;
      *(_QWORD *)&xmmword_140C0F378 = PsNtosImageBase;
    }
    qword_140C00B38 = xmmword_140C0F378;
    if ( !v8 )
    {
      if ( a2 && *(_DWORD *)(a2 + 12) != 1 )
        v13 = 0;
      if ( !v13 )
      {
        LOBYTE(KdDebuggerNotPresent) = 1;
        goto LABEL_31;
      }
      if ( (int)KdInitialize(0LL, a2, (char *)&KdDebuggerNotPresent + 5, a4) < 0 )
      {
        KdPitchDebugger = 0;
        v13 = 0;
        LOBYTE(KdDebuggerNotPresent) = 1;
        KdLocalDebugEnabled = 1;
      }
      else
      {
        KdpDebugRoutineSelect = 1;
      }
    }
    if ( !KdpDebuggerStructuresInitialized )
    {
      byte_140C321C4 = 0;
      *(_DWORD *)((char *)&KdDebuggerNotPresent + 5) = 20;
      KeInitializeDpc(&KdpTimeSlipDpc, KdpTimeSlipDpcRoutine, 0LL);
      KeInitializeTimerEx(&KdpTimeSlipTimer, NotificationTimer);
      KdpTimeSlipWorkItem.Parameter = 0LL;
      KdpTimeSlipWorkItem.WorkerRoutine = (void (__fastcall *)(void *))KdpTimeSlipWork;
      KdpTimeSlipWorkItem.List.Flink = 0LL;
      KdpDebuggerStructuresInitialized = 1;
    }
    KdTimerStart = 0LL;
    if ( KdEventLoggingEnabled && KdpBootedNodebug )
    {
      KdPitchDebugger = 1;
      KdEventLoggingPresent = v13;
      LOBYTE(KdDebuggerNotPresent) = 1;
      KdLocalDebugEnabled = 0;
    }
    else
    {
      LOBYTE(KdDebuggerEnabled) = 1;
      MEMORY[0xFFFFF780000002D4] = 1;
      if ( KdLocalDebugEnabled )
        goto LABEL_31;
    }
    if ( KdEventLoggingEnabled && !(_BYTE)KdDebuggerEnabled )
    {
LABEL_31:
      if ( a2 )
      {
        v15 = *(_QWORD *)(a2 + 240);
        if ( v15 )
          memset((void *)(v15 + 2464), 0, 0x20uLL);
      }
      return 1;
    }
    KdPitchDebugger = 0;
    if ( v5 )
    {
      KdDisableDebuggerWithLock();
      KdBlockEnable = v6;
      goto LABEL_31;
    }
    if ( a2 )
    {
      v24 = 0;
      for ( k = *(__int64 **)(a2 + 16); k != (__int64 *)(a2 + 16); ++v24 )
      {
        if ( v24 >= 3 )
          break;
        DestinationString = 0LL;
        LODWORD(v26) = 0;
        v27 = (CHAR *)k[10];
        v28 = *((unsigned __int16 *)k + 36) >> 1;
        if ( v28 >= 0x100 )
          v28 = 255;
        do
        {
          v29 = *v27;
          v27 += 2;
          v30 = (unsigned int)v26;
          v26 = (unsigned int)(v26 + 1);
          SourceString[v30] = v29;
        }
        while ( (unsigned int)v26 < v28 );
        if ( (unsigned int)v26 >= 0x100uLL )
          _report_rangecheckfailure();
        SourceString[v26] = 0;
        RtlInitAnsiString(&DestinationString, SourceString);
        DbgLoadImageSymbols((__int64)&DestinationString, (void *)k[6], 0xFFFFFFFFLL);
        k = (__int64 *)*k;
      }
    }
    else
    {
      DbgLoadImageSymbols(0LL, (void *)qword_140C00B38, 0xFFFFFFFFLL);
    }
    if ( a2 )
    {
      KdBreakAfterSymbolLoad = KdPollBreakIn();
      goto LABEL_31;
    }
  }
  return 1;
}
