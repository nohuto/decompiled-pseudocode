/*
 * XREFs of NtTraceControl @ 0x140620910
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1407ACAC0 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1407ACD08 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1409323F8 (PerfDiagpSaveActiveDCLLogFileName.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14020A530 (ExAllocatePoolWithQuotaTag.c)
 *     PsGetCurrentThreadProcessId @ 0x140211210 (PsGetCurrentThreadProcessId.c)
 *     PtrToUlong @ 0x1402EB730 (PtrToUlong.c)
 *     EtwpCreateActivityId @ 0x140364258 (EtwpCreateActivityId.c)
 *     EtwpTransitionToRealtime @ 0x1403F7364 (EtwpTransitionToRealtime.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     WdiUpdateSem @ 0x1405A3BC0 (WdiUpdateSem.c)
 *     EtwpGetCurrentSiloState @ 0x1405A8CF4 (EtwpGetCurrentSiloState.c)
 *     EtwpGetCompressionSettings @ 0x1405AB994 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1405ABE64 (EtwpSetCompressionSettings.c)
 *     EtwpRegisterUMGuid @ 0x1405F3400 (EtwpRegisterUMGuid.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     EtwpSetProviderTraitsUm @ 0x1406695EC (EtwpSetProviderTraitsUm.c)
 *     EtwpTrackProviderBinary @ 0x1406DFDD8 (EtwpTrackProviderBinary.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x14071214C (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpRealtimeConnect @ 0x1407121C8 (EtwpRealtimeConnect.c)
 *     EtwpStartTrace @ 0x140713044 (EtwpStartTrace.c)
 *     EtwpFlushTrace @ 0x1407130C4 (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x140713944 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1407147A0 (EtwpQueryTrace.c)
 *     EtwpValidateUserModeLoggerInfo @ 0x140714968 (EtwpValidateUserModeLoggerInfo.c)
 *     EtwpNotifyGuid @ 0x1407181E8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1407188EC (EtwpEnableGuid.c)
 *     EtwpAddNotificationEvent @ 0x14071A8FC (EtwpAddNotificationEvent.c)
 *     EtwpReceiveNotification @ 0x14071AC74 (EtwpReceiveNotification.c)
 *     EtwpReceiveReplyDataBlock @ 0x14071BC7C (EtwpReceiveReplyDataBlock.c)
 *     EtwpSendReplyDataBlock @ 0x14071BD78 (EtwpSendReplyDataBlock.c)
 *     EtwpEnumerateTraceGuids @ 0x140726F38 (EtwpEnumerateTraceGuids.c)
 *     EtwpGetTraceGuidInfo @ 0x14072A6B0 (EtwpGetTraceGuidInfo.c)
 *     WdiDispatchControl @ 0x140785500 (WdiDispatchControl.c)
 *     EtwpUpdateTrace @ 0x14078C87C (EtwpUpdateTrace.c)
 *     EtwpRegisterSecurityProvider @ 0x1407D0DE0 (EtwpRegisterSecurityProvider.c)
 *     EtwpUpdateDisallowList @ 0x140936C10 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x140936EA8 (EtwpGetDisallowList.c)
 *     EtwpGetTraceGroupInfo @ 0x140936F84 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGroupList @ 0x1409371F8 (EtwpGetTraceGroupList.c)
 *     EtwpGetTraceGuidList @ 0x140937298 (EtwpGetTraceGuidList.c)
 *     EtwpUseDescriptorTypeUm @ 0x140937384 (EtwpUseDescriptorTypeUm.c)
 *     EtwpIncrementTraceFile @ 0x140937414 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x140937500 (EtwpQueryReferenceTime.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409419E0 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpQuerySessionDemuxObject @ 0x140941B5C (EtwpQuerySessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x140941BD8 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x140941E94 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpSetProviderBinaryTracking @ 0x140943670 (EtwpSetProviderBinaryTracking.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtTraceControl(
        ETWTRACECONTROLCODE FunctionCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  ETWTRACECONTROLCODE v7; // r14d
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi
  char PreviousMode; // bl
  __int64 v11; // r8
  __int64 CurrentSiloState; // r15
  unsigned int v13; // r13d
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  ULONG v17; // r14d
  ULONG v18; // ebx
  SIZE_T v19; // rdx
  _QWORD *PoolWithQuotaTag; // rax
  __int64 v21; // r9
  __int64 v23; // rax
  PVOID v24; // rcx
  unsigned __int64 v25; // rbx
  __int64 v26; // rcx
  unsigned int v27; // edx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rax
  PULONG v31; // rcx
  __int64 v32; // rdx
  _WORD v34[2]; // [rsp+30h] [rbp-68h] BYREF
  ETWTRACECONTROLCODE v35; // [rsp+34h] [rbp-64h]
  size_t Size; // [rsp+38h] [rbp-60h] BYREF
  int v37; // [rsp+40h] [rbp-58h]
  void *Src; // [rsp+48h] [rbp-50h]
  __int64 v39; // [rsp+50h] [rbp-48h]
  __int64 v40; // [rsp+58h] [rbp-40h]

  v7 = FunctionCode;
  v35 = FunctionCode;
  v8 = 0LL;
  v9 = 0LL;
  Src = 0LL;
  LODWORD(Size) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentSiloState = EtwpGetCurrentSiloState();
  LOBYTE(v13) = 0;
  if ( PreviousMode )
  {
    v13 = (unsigned int)v7 >> 31;
    v14 = v7 & 0x7FFFFFFF;
    if ( v7 >= 0 )
      v14 = v7;
    v7 = v14;
    v35 = v14;
    v15 = 0x7FFFFFFF0000LL;
    if ( InputBuffer )
    {
      if ( InputBufferLength
        && ((unsigned __int64)InputBuffer + InputBufferLength > 0x7FFFFFFF0000LL
         || (char *)InputBuffer + InputBufferLength < InputBuffer) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      InputBufferLength = 0;
    }
    if ( OutputBuffer )
      ProbeForWrite(OutputBuffer, OutputBufferLength, 1u);
    else
      OutputBufferLength = 0;
    if ( !ReturnLength )
    {
      LODWORD(v8) = -1073741811;
      v37 = -1073741811;
      goto LABEL_151;
    }
    if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
      v15 = (__int64)ReturnLength;
    *(_DWORD *)v15 = *(_DWORD *)v15;
  }
  if ( (unsigned int)v7 <= EtwAddNotificationEvent && (v16 = 134238208, _bittest(&v16, v7)) )
  {
    v17 = OutputBufferLength;
    v18 = InputBufferLength;
  }
  else
  {
    v18 = InputBufferLength;
    v17 = OutputBufferLength;
    if ( InputBufferLength || OutputBufferLength )
    {
      v19 = OutputBufferLength;
      if ( InputBufferLength > OutputBufferLength )
        v19 = InputBufferLength;
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v19, 0x50777445u);
      v9 = PoolWithQuotaTag;
      Src = PoolWithQuotaTag;
      if ( !PoolWithQuotaTag )
      {
        LODWORD(v8) = -1073741801;
        goto LABEL_151;
      }
      memset(PoolWithQuotaTag, 0, OutputBufferLength);
      if ( InputBuffer )
        memmove(v9, InputBuffer, InputBufferLength);
    }
  }
  switch ( v35 )
  {
    case EtwStartLoggerCode:
    case EtwStopLoggerCode:
    case EtwQueryLoggerCode:
    case EtwUpdateLoggerCode:
    case EtwFlushLoggerCode:
    case EtwIncrementLoggerFile:
    case EtwRealtimeTransition:
      LODWORD(v8) = EtwpValidateUserModeLoggerInfo(v9, v18, v17);
      if ( (int)v8 >= 0 )
      {
        if ( (unsigned int)v21 <= 6 )
          __asm { jmp     rcx }
        LODWORD(Size) = 176;
      }
      goto LABEL_139;
    case EtwRealtimeConnectCode:
      if ( v18 != 96 || v17 != 96 )
        goto LABEL_61;
      LODWORD(v8) = EtwpRealtimeConnect(v9);
      LODWORD(Size) = 96;
      goto LABEL_139;
    case EtwActivityIdCreate:
      if ( v17 != 16 )
        goto LABEL_61;
      EtwpCreateActivityId((volatile signed __int64 *)OutputBuffer);
      v25 = (unsigned int)v35;
      goto LABEL_140;
    case EtwWdiScenarioCode:
      if ( v18 != 48 || v17 )
        goto LABEL_61;
      LODWORD(v8) = WdiDispatchControl(v9);
      goto LABEL_139;
    case EtwRealtimeDisconnectCode:
      if ( v18 != 8 || v17 )
        goto LABEL_61;
      LODWORD(v23) = PtrToUlong((const void *)*(unsigned int *)InputBuffer);
      v39 = v23;
      LODWORD(v8) = EtwpRealtimeDisconnectConsumerByHandle(v23);
      goto LABEL_139;
    case EtwRegisterGuidsCode:
      if ( v18 != 160 || v17 - 160 > 0xFF60 )
        goto LABEL_61;
      LODWORD(v8) = EtwpRegisterUMGuid(CurrentSiloState, (__int64)v9, v17, v13, &Size);
      goto LABEL_139;
    case EtwReceiveNotification:
      if ( v18 || v17 - 72 > 0xFFB8 )
        goto LABEL_61;
      LODWORD(v8) = EtwpReceiveNotification(v9);
      goto LABEL_139;
    case EtwSendDataBlock:
      if ( v18 < 0x48 || v17 != 72 || *((_DWORD *)v9 + 1) != v18 )
        goto LABEL_61;
      if ( *(_DWORD *)v9 == 3 )
      {
        if ( v18 < 0x78 )
          goto LABEL_61;
        LOBYTE(v11) = 1;
        LODWORD(v8) = EtwpEnableGuid(CurrentSiloState, v9, v11);
        LODWORD(Size) = 72;
      }
      else
      {
        LOBYTE(v11) = 1;
        LODWORD(v8) = EtwpNotifyGuid(CurrentSiloState, v9, v11);
        LODWORD(Size) = 72;
      }
      goto LABEL_139;
    case EtwSendReplyDataBlock:
      if ( v18 < 0x48 || *((_DWORD *)v9 + 1) != v18 )
        goto LABEL_61;
      *((_DWORD *)v9 + 9) = PsGetCurrentThreadProcessId();
      LODWORD(v8) = EtwpSendReplyDataBlock(v9);
      goto LABEL_139;
    case EtwReceiveReplyDataBlock:
      if ( v18 != 8 )
        goto LABEL_61;
      LODWORD(v8) = EtwpReceiveReplyDataBlock(v9);
      Size = 0LL;
      goto LABEL_139;
    case EtwWdiSemUpdate:
      if ( v18 || v17 )
        goto LABEL_61;
      LODWORD(v8) = WdiUpdateSem();
      goto LABEL_139;
    case EtwEnumTraceGuidList:
      LODWORD(Size) = v17;
      LODWORD(v8) = EtwpGetTraceGuidList(CurrentSiloState, v9, &Size);
      goto LABEL_139;
    case EtwGetTraceGuidInfo:
      if ( v18 != 16 )
        goto LABEL_61;
      LODWORD(Size) = v17;
      LODWORD(v8) = EtwpGetTraceGuidInfo(CurrentSiloState, v9, v9, &Size);
      goto LABEL_139;
    case EtwEnumerateTraceGuids:
      LODWORD(Size) = v17;
      LODWORD(v8) = EtwpEnumerateTraceGuids(CurrentSiloState, v9, &Size);
      goto LABEL_139;
    case EtwRegisterSecurityProv:
      if ( v18 || v17 )
        goto LABEL_61;
      LODWORD(v8) = EtwpRegisterSecurityProvider(CurrentSiloState);
      goto LABEL_139;
    case EtwReferenceTimeCode:
      if ( v18 != 4 || v17 != 16 )
        goto LABEL_61;
      LODWORD(v8) = EtwpQueryReferenceTime(CurrentSiloState, *(unsigned int *)v9, v9);
      LODWORD(Size) = 16;
      goto LABEL_139;
    case EtwTrackBinaryCode:
      if ( v18 != 8 )
        goto LABEL_61;
      LODWORD(v8) = EtwpTrackProviderBinary(CurrentSiloState, v9);
      goto LABEL_139;
    case EtwAddNotificationEvent:
      if ( v18 != 4 )
        goto LABEL_61;
      v26 = *(unsigned int *)InputBuffer;
      v40 = v26;
      if ( !v26 )
        goto LABEL_61;
      LODWORD(v8) = EtwpAddNotificationEvent(v26, (unsigned __int8)v13);
      goto LABEL_139;
    case EtwUpdateDisallowList:
      if ( v18 < 8 )
        goto LABEL_61;
      v27 = *((_DWORD *)v9 + 1);
      if ( 16LL * v27 + 8 != v18 )
        goto LABEL_61;
      if ( v27 )
        v8 = v9 + 1;
      LODWORD(v8) = EtwpUpdateDisallowList(CurrentSiloState, *(unsigned int *)v9, v27, v8);
      goto LABEL_139;
    case EtwSetProviderTraitsCode:
      if ( v18 != 24 || v17 - 120 > 0xFF88 )
        goto LABEL_61;
      LODWORD(v8) = EtwpSetProviderTraitsUm((_DWORD)v9, v17, (unsigned int)&Size);
      goto LABEL_139;
    case EtwUseDescriptorTypeCode:
      if ( v18 != 16 || v17 )
        goto LABEL_61;
      LODWORD(v8) = EtwpUseDescriptorTypeUm(v9);
      goto LABEL_139;
    case EtwEnumTraceGroupList:
      LODWORD(Size) = v17;
      LODWORD(v8) = EtwpGetTraceGroupList(CurrentSiloState, v9, &Size);
      goto LABEL_139;
    case EtwGetTraceGroupInfo:
      if ( v18 != 16 )
        goto LABEL_61;
      LODWORD(Size) = v17;
      LODWORD(v8) = EtwpGetTraceGroupInfo(CurrentSiloState, v9, v9, &Size);
      goto LABEL_139;
    case EtwGetDisallowList:
      if ( v18 != 8 )
        goto LABEL_61;
      LODWORD(Size) = v17;
      LODWORD(v8) = EtwpGetDisallowList(CurrentSiloState, v9, v9, &Size);
      goto LABEL_139;
    case EtwSetCompressionSettings:
      if ( v18 != 16 || v17 )
        goto LABEL_61;
      LODWORD(v8) = EtwpSetCompressionSettings((unsigned int *)v9);
      goto LABEL_139;
    case EtwGetCompressionSettings:
      if ( v18 != 8 || v17 != 16 )
        goto LABEL_61;
      LODWORD(Size) = 16;
      LODWORD(v8) = EtwpGetCompressionSettings((unsigned __int16 *)v9, (unsigned int *)v9);
      goto LABEL_139;
    case EtwUpdatePeriodicCaptureState:
      if ( v18 < 0xC )
        goto LABEL_61;
      v28 = *((unsigned __int16 *)v9 + 4);
      if ( (unsigned int)v28 > 0x10 )
      {
        LODWORD(v8) = -1073741811;
        goto LABEL_139;
      }
      v29 = *((unsigned int *)v9 + 1);
      if ( (unsigned int)(v29 - 1) <= 3 )
      {
        LODWORD(v8) = -1073741811;
        goto LABEL_139;
      }
      if ( (_WORD)v28 )
      {
        if ( !(_DWORD)v29 )
        {
          LODWORD(v8) = -1073741811;
          goto LABEL_139;
        }
      }
      else if ( (_DWORD)v29 )
      {
LABEL_61:
        LODWORD(v8) = -1073741811;
        goto LABEL_139;
      }
      if ( 16 * v28 + 12 != v18 )
        goto LABEL_61;
      if ( (_WORD)v28 )
        v8 = (_QWORD *)((char *)v9 + 12);
      LODWORD(v8) = EtwpUpdatePeriodicCaptureState(*(unsigned int *)v9, v29, v28, v8);
LABEL_139:
      v24 = OutputBuffer;
      v25 = (unsigned int)v35;
LABEL_140:
      if ( (int)v8 < 0 )
      {
        v31 = ReturnLength;
      }
      else
      {
        if ( (_DWORD)Size )
          memmove(v24, v9, (unsigned int)Size);
        v31 = ReturnLength;
        *ReturnLength = Size;
      }
      if ( (_DWORD)v8 == -1073741789 && ((unsigned int)(v25 - 15) <= 1 || (unsigned int)(v25 - 21) <= 1)
        || (unsigned int)v25 <= 0x28 && (v32 = 0x1D700880000LL, _bittest64(&v32, v25)) )
      {
        *v31 = Size;
      }
LABEL_151:
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      return (int)v8;
    case EtwGetPrivateSessionTraceHandle:
      if ( v18 < 8 || (v18 & 7) != 0 || v17 < 2 )
        goto LABEL_61;
      v34[0] = 0;
      LODWORD(v8) = EtwpGetPrivateSessionTraceHandle(v9, v18 >> 3, v34);
      if ( !(_DWORD)v8 )
      {
        LODWORD(Size) = 2;
        *(_WORD *)v9 = v34[0];
      }
      goto LABEL_139;
    case EtwRegisterPrivateSession:
      if ( v18 < 2 || v17 < 8 )
        goto LABEL_61;
      v30 = EtwpGetCurrentSiloState();
      LODWORD(v8) = EtwpRegisterPrivateSession(v30, *(unsigned __int16 *)v9, (char *)v9 + 4, v9);
      if ( !(_DWORD)v8 )
        LODWORD(Size) = 8;
      goto LABEL_139;
    case EtwQuerySessionDemuxObject:
      if ( v18 < 8 || v17 < 2 )
        goto LABEL_61;
      LODWORD(v8) = EtwpQuerySessionDemuxObject(*v9, v9);
      if ( !(_DWORD)v8 )
        LODWORD(Size) = 2;
      goto LABEL_139;
    case EtwSetProviderBinaryTracking:
      if ( v18 < 8 )
        goto LABEL_61;
      LODWORD(v8) = EtwpSetProviderBinaryTracking(CurrentSiloState, *(unsigned int *)v9, *((unsigned __int8 *)v9 + 4));
      goto LABEL_139;
    case EtwMaxLoggers:
      v25 = (unsigned int)v35;
      v24 = OutputBuffer;
      if ( v17 < 4 )
        goto LABEL_135;
      *(_DWORD *)v9 = *(_DWORD *)(CurrentSiloState + 16);
      LODWORD(Size) = 4;
      goto LABEL_140;
    case EtwMaxPmcCounter:
      v25 = (unsigned int)v35;
      v24 = OutputBuffer;
      if ( v17 < 4 )
      {
LABEL_135:
        LODWORD(v8) = -1073741811;
      }
      else
      {
        *(_DWORD *)v9 = EtwpMaxPmcCounter;
        LODWORD(Size) = 4;
      }
      goto LABEL_140;
    default:
      LODWORD(v8) = -1073741808;
      goto LABEL_139;
  }
}
