/*
 * XREFs of NtTraceControl @ 0x1405F56E0
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1407A1250 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1407A1498 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14092B318 (PerfDiagpSaveActiveDCLLogFileName.c)
 * Callees:
 *     EtwpCreateActivityId @ 0x140241CC8 (EtwpCreateActivityId.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 *     PsGetCurrentThreadProcessId @ 0x14025ECF0 (PsGetCurrentThreadProcessId.c)
 *     PtrToUlong @ 0x1403189F0 (PtrToUlong.c)
 *     EtwpTransitionToRealtime @ 0x1403F16C0 (EtwpTransitionToRealtime.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     WdiUpdateSem @ 0x14059FA30 (WdiUpdateSem.c)
 *     EtwpGetCurrentSiloState @ 0x1405A4B64 (EtwpGetCurrentSiloState.c)
 *     EtwpGetCompressionSettings @ 0x1405A7744 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1405A7C14 (EtwpSetCompressionSettings.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     EtwpSetProviderTraitsUm @ 0x1405F3724 (EtwpSetProviderTraitsUm.c)
 *     EtwpRegisterUMGuid @ 0x1405F6270 (EtwpRegisterUMGuid.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x140677290 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpRealtimeConnect @ 0x140677318 (EtwpRealtimeConnect.c)
 *     EtwpStartTrace @ 0x140678DB0 (EtwpStartTrace.c)
 *     EtwpFlushTrace @ 0x140678E30 (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x1406796F8 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x14067A554 (EtwpQueryTrace.c)
 *     EtwpValidateUserModeLoggerInfo @ 0x14067A71C (EtwpValidateUserModeLoggerInfo.c)
 *     EtwpNotifyGuid @ 0x14067D410 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14067E254 (EtwpEnableGuid.c)
 *     EtwpAddNotificationEvent @ 0x14067FC40 (EtwpAddNotificationEvent.c)
 *     EtwpReceiveNotification @ 0x14067FFB8 (EtwpReceiveNotification.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406CCEC8 (EtwpReceiveReplyDataBlock.c)
 *     EtwpSendReplyDataBlock @ 0x1406E5628 (EtwpSendReplyDataBlock.c)
 *     EtwpTrackProviderBinary @ 0x1406E9B78 (EtwpTrackProviderBinary.c)
 *     EtwpEnumerateTraceGuids @ 0x140716BBC (EtwpEnumerateTraceGuids.c)
 *     EtwpGetTraceGuidInfo @ 0x14071A7D4 (EtwpGetTraceGuidInfo.c)
 *     WdiDispatchControl @ 0x140774AF0 (WdiDispatchControl.c)
 *     EtwpUpdateTrace @ 0x14077FAB8 (EtwpUpdateTrace.c)
 *     EtwpRegisterSecurityProvider @ 0x1407BF0E0 (EtwpRegisterSecurityProvider.c)
 *     EtwpUpdateDisallowList @ 0x14092FB30 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x14092FDC8 (EtwpGetDisallowList.c)
 *     EtwpGetTraceGroupInfo @ 0x14092FEA4 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGroupList @ 0x140930118 (EtwpGetTraceGroupList.c)
 *     EtwpGetTraceGuidList @ 0x1409301B8 (EtwpGetTraceGuidList.c)
 *     EtwpUseDescriptorTypeUm @ 0x1409302A4 (EtwpUseDescriptorTypeUm.c)
 *     EtwpIncrementTraceFile @ 0x140930334 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x140930420 (EtwpQueryReferenceTime.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093A910 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpQuerySessionDemuxObject @ 0x14093AA8C (EtwpQuerySessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x14093AB08 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14093ADC4 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpSetProviderBinaryTracking @ 0x14093C634 (EtwpSetProviderBinaryTracking.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  _QWORD *v8; // r12
  _QWORD *v9; // rsi
  char PreviousMode; // bl
  __int64 v11; // r8
  __int64 CurrentSiloState; // r15
  NTSTATUS updated; // edi
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
  ETWTRACECONTROLCODE v34; // [rsp+30h] [rbp-78h]
  ULONG Size; // [rsp+34h] [rbp-74h] BYREF
  __int16 Size_4; // [rsp+38h] [rbp-70h] BYREF
  unsigned int v37; // [rsp+3Ch] [rbp-6Ch]
  int v38; // [rsp+40h] [rbp-68h]
  void *Src; // [rsp+48h] [rbp-60h]
  int v40; // [rsp+50h] [rbp-58h]
  __int64 v41; // [rsp+58h] [rbp-50h]
  __int64 v42; // [rsp+60h] [rbp-48h]

  v7 = FunctionCode;
  v34 = FunctionCode;
  v8 = 0LL;
  v9 = 0LL;
  Src = 0LL;
  Size = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentSiloState = EtwpGetCurrentSiloState();
  updated = 0;
  v38 = 0;
  LOBYTE(v37) = 0;
  if ( PreviousMode )
  {
    v37 = (unsigned int)v7 >> 31;
    v14 = v7 & 0x7FFFFFFF;
    if ( v7 >= 0 )
      v14 = v7;
    v7 = v14;
    v34 = v14;
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
      updated = -1073741811;
      v38 = -1073741811;
      goto LABEL_146;
    }
    if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
      v15 = (__int64)ReturnLength;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    updated = v38;
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
        updated = -1073741801;
        goto LABEL_146;
      }
      memset(PoolWithQuotaTag, 0, OutputBufferLength);
      if ( InputBuffer )
        memmove(v9, InputBuffer, InputBufferLength);
    }
  }
  switch ( v34 )
  {
    case EtwStartLoggerCode:
    case EtwStopLoggerCode:
    case EtwQueryLoggerCode:
    case EtwUpdateLoggerCode:
    case EtwFlushLoggerCode:
    case EtwIncrementLoggerFile:
    case EtwRealtimeTransition:
      updated = EtwpValidateUserModeLoggerInfo(v9, v18, v17);
      if ( updated >= 0 )
      {
        if ( (unsigned int)v21 <= 6 )
          __asm { jmp     rdx }
        Size = 176;
      }
      break;
    case EtwRealtimeConnectCode:
      if ( v18 != 96 || v17 != 96 )
        goto LABEL_61;
      updated = EtwpRealtimeConnect(v9);
      Size = 96;
      break;
    case EtwActivityIdCreate:
      if ( v17 != 16 )
        goto LABEL_61;
      updated = 0;
      EtwpCreateActivityId((volatile signed __int64 *)OutputBuffer);
      v25 = (unsigned int)v34;
      goto LABEL_135;
    case EtwWdiScenarioCode:
      if ( v18 != 48 || v17 )
        goto LABEL_61;
      updated = WdiDispatchControl(v9);
      break;
    case EtwRealtimeDisconnectCode:
      if ( v18 != 8 || v17 )
        goto LABEL_61;
      LODWORD(v23) = PtrToUlong((const void *)*(unsigned int *)InputBuffer);
      v41 = v23;
      updated = EtwpRealtimeDisconnectConsumerByHandle(v23);
      break;
    case EtwRegisterGuidsCode:
      if ( v18 != 160 || v17 - 160 > 0xFF60 )
        goto LABEL_61;
      updated = EtwpRegisterUMGuid(CurrentSiloState, (_DWORD)v9, v17, (unsigned __int8)v37, (__int64)&Size);
      break;
    case EtwReceiveNotification:
      if ( v18 || v17 - 72 > 0xFFB8 )
        goto LABEL_61;
      updated = EtwpReceiveNotification(v9);
      break;
    case EtwSendDataBlock:
      if ( v18 < 0x48 || v17 != 72 || *((_DWORD *)v9 + 1) != v18 )
        goto LABEL_61;
      if ( *(_DWORD *)v9 == 3 )
      {
        if ( v18 < 0x78 )
          goto LABEL_61;
        LOBYTE(v11) = 1;
        updated = EtwpEnableGuid(CurrentSiloState, v9, v11);
        Size = 72;
      }
      else
      {
        LOBYTE(v11) = 1;
        updated = EtwpNotifyGuid(CurrentSiloState, v9, v11);
        Size = 72;
      }
      break;
    case EtwSendReplyDataBlock:
      if ( v18 < 0x48 || *((_DWORD *)v9 + 1) != v18 )
        goto LABEL_61;
      *((_DWORD *)v9 + 9) = PsGetCurrentThreadProcessId();
      updated = EtwpSendReplyDataBlock(v9);
      break;
    case EtwReceiveReplyDataBlock:
      if ( v18 != 8 )
        goto LABEL_61;
      v40 = 0;
      updated = EtwpReceiveReplyDataBlock(v9);
      Size = 0;
      break;
    case EtwWdiSemUpdate:
      if ( v18 || v17 )
        goto LABEL_61;
      updated = WdiUpdateSem();
      break;
    case EtwEnumTraceGuidList:
      Size = v17;
      updated = EtwpGetTraceGuidList(CurrentSiloState, v9, &Size);
      break;
    case EtwGetTraceGuidInfo:
      if ( v18 != 16 )
        goto LABEL_61;
      Size = v17;
      updated = EtwpGetTraceGuidInfo(CurrentSiloState, v9, v9, &Size);
      break;
    case EtwEnumerateTraceGuids:
      Size = v17;
      updated = EtwpEnumerateTraceGuids(CurrentSiloState, v9, &Size);
      break;
    case EtwRegisterSecurityProv:
      if ( v18 || v17 )
        goto LABEL_61;
      updated = EtwpRegisterSecurityProvider(CurrentSiloState);
      break;
    case EtwReferenceTimeCode:
      if ( v18 != 4 || v17 != 16 )
        goto LABEL_61;
      updated = EtwpQueryReferenceTime(CurrentSiloState, *(unsigned int *)v9, v9);
      Size = 16;
      break;
    case EtwTrackBinaryCode:
      if ( v18 != 8 )
        goto LABEL_61;
      updated = EtwpTrackProviderBinary(CurrentSiloState, v9);
      break;
    case EtwAddNotificationEvent:
      if ( v18 != 4 )
        goto LABEL_61;
      v26 = *(unsigned int *)InputBuffer;
      v42 = v26;
      if ( !v26 )
        goto LABEL_61;
      updated = EtwpAddNotificationEvent(v26, (unsigned __int8)v37);
      break;
    case EtwUpdateDisallowList:
      if ( v18 < 8 )
        goto LABEL_61;
      v27 = *((_DWORD *)v9 + 1);
      if ( 16LL * v27 + 8 != v18 )
        goto LABEL_61;
      if ( v27 )
        v8 = v9 + 1;
      updated = EtwpUpdateDisallowList(CurrentSiloState, *(unsigned int *)v9, v27, v8);
      break;
    case EtwSetProviderTraitsCode:
      if ( v18 != 24 || v17 - 120 > 0xFF88 )
        goto LABEL_61;
      updated = EtwpSetProviderTraitsUm((__int64)v9, v17, (int)&Size);
      break;
    case EtwUseDescriptorTypeCode:
      if ( v18 != 16 || v17 )
        goto LABEL_61;
      updated = EtwpUseDescriptorTypeUm(v9);
      break;
    case EtwEnumTraceGroupList:
      Size = v17;
      updated = EtwpGetTraceGroupList(CurrentSiloState, v9, &Size);
      break;
    case EtwGetTraceGroupInfo:
      if ( v18 != 16 )
        goto LABEL_61;
      Size = v17;
      updated = EtwpGetTraceGroupInfo(CurrentSiloState, v9, v9, &Size);
      break;
    case EtwGetDisallowList:
      if ( v18 != 8 )
        goto LABEL_61;
      Size = v17;
      updated = EtwpGetDisallowList(CurrentSiloState, v9, v9, &Size);
      break;
    case EtwSetCompressionSettings:
      if ( v18 != 16 || v17 )
        goto LABEL_61;
      updated = EtwpSetCompressionSettings((unsigned int *)v9);
      break;
    case EtwGetCompressionSettings:
      if ( v18 != 8 || v17 != 16 )
        goto LABEL_61;
      Size = 16;
      updated = EtwpGetCompressionSettings((unsigned __int16 *)v9, (unsigned int *)v9);
      break;
    case EtwUpdatePeriodicCaptureState:
      if ( v18 < 0xC )
        goto LABEL_61;
      v28 = *((unsigned __int16 *)v9 + 4);
      if ( (unsigned int)v28 <= 0x10 )
      {
        v29 = *((unsigned int *)v9 + 1);
        if ( (unsigned int)(v29 - 1) > 3 )
        {
          if ( 16 * v28 + 12 == v18 )
          {
            if ( (_WORD)v28 )
              v8 = (_QWORD *)((char *)v9 + 12);
            EtwpUpdatePeriodicCaptureState(*(unsigned int *)v9, v29, v28, v8);
          }
          else
          {
LABEL_61:
            updated = -1073741811;
          }
        }
        else
        {
          updated = -1073741811;
        }
      }
      else
      {
        updated = -1073741811;
      }
      break;
    case EtwGetPrivateSessionTraceHandle:
      if ( v18 < 8 || (v18 & 7) != 0 || v17 < 2 )
        goto LABEL_61;
      Size_4 = 0;
      updated = EtwpGetPrivateSessionTraceHandle(v9, v18 >> 3, &Size_4);
      if ( !updated )
      {
        Size = 2;
        *(_WORD *)v9 = Size_4;
      }
      break;
    case EtwRegisterPrivateSession:
      if ( v18 < 2 || v17 < 8 )
        goto LABEL_61;
      v30 = EtwpGetCurrentSiloState();
      updated = EtwpRegisterPrivateSession(v30, *(unsigned __int16 *)v9, (char *)v9 + 4, v9);
      if ( !updated )
        Size = 8;
      break;
    case EtwQuerySessionDemuxObject:
      if ( v18 < 8 || v17 < 2 )
        goto LABEL_61;
      updated = EtwpQuerySessionDemuxObject(*v9, v9);
      if ( !updated )
        Size = 2;
      break;
    case EtwSetProviderBinaryTracking:
      if ( v18 < 8 )
        goto LABEL_61;
      updated = EtwpSetProviderBinaryTracking(CurrentSiloState, *(unsigned int *)v9, *((unsigned __int8 *)v9 + 4));
      break;
    case EtwMaxLoggers:
      v25 = (unsigned int)v34;
      v24 = OutputBuffer;
      if ( v17 < 4 )
        goto LABEL_130;
      *(_DWORD *)v9 = *(_DWORD *)(CurrentSiloState + 16);
      Size = 4;
      updated = 0;
      goto LABEL_135;
    case EtwMaxPmcCounter:
      v25 = (unsigned int)v34;
      v24 = OutputBuffer;
      if ( v17 < 4 )
      {
LABEL_130:
        updated = -1073741811;
      }
      else
      {
        *(_DWORD *)v9 = EtwpMaxPmcCounter;
        Size = 4;
        updated = 0;
      }
      goto LABEL_135;
    default:
      updated = -1073741808;
      break;
  }
  v25 = (unsigned int)v34;
  v24 = OutputBuffer;
LABEL_135:
  if ( updated < 0 )
  {
    v31 = ReturnLength;
  }
  else
  {
    if ( Size )
      memmove(v24, v9, Size);
    v31 = ReturnLength;
    *ReturnLength = Size;
  }
  if ( updated == -1073741789 && ((unsigned int)(v25 - 15) <= 1 || (unsigned int)(v25 - 21) <= 1)
    || (unsigned int)v25 <= 0x28 && (v32 = 0x1D700880000LL, _bittest64(&v32, v25)) )
  {
    *v31 = Size;
  }
LABEL_146:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return updated;
}
