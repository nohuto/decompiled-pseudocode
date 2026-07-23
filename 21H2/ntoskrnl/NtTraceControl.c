/*
 * XREFs of NtTraceControl @ 0x1406DA6C0
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14079C420 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14079C668 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14092FD28 (PerfDiagpSaveActiveDCLLogFileName.c)
 * Callees:
 *     PtrToUlong @ 0x140246520 (PtrToUlong.c)
 *     EtwpCreateActivityId @ 0x140272288 (EtwpCreateActivityId.c)
 *     PsGetCurrentThreadProcessId @ 0x14029E930 (PsGetCurrentThreadProcessId.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     EtwpTransitionToRealtime @ 0x1403F91C4 (EtwpTransitionToRealtime.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     WdiUpdateSem @ 0x1405A5820 (WdiUpdateSem.c)
 *     EtwpGetCurrentSiloState @ 0x1405AA954 (EtwpGetCurrentSiloState.c)
 *     EtwpGetCompressionSettings @ 0x1405AD5C4 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1405ADA94 (EtwpSetCompressionSettings.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x140617E44 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpRealtimeConnect @ 0x140617EC8 (EtwpRealtimeConnect.c)
 *     EtwpTrackProviderBinary @ 0x14061ED28 (EtwpTrackProviderBinary.c)
 *     EtwpStartTrace @ 0x1406207BC (EtwpStartTrace.c)
 *     EtwpSetProviderTraitsUm @ 0x140637E80 (EtwpSetProviderTraitsUm.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     EtwpFlushTrace @ 0x1406B4984 (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x1406B529C (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1406B60F8 (EtwpQueryTrace.c)
 *     EtwpValidateUserModeLoggerInfo @ 0x1406B62C0 (EtwpValidateUserModeLoggerInfo.c)
 *     EtwpNotifyGuid @ 0x1406B8AE4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1406B96E4 (EtwpEnableGuid.c)
 *     EtwpAddNotificationEvent @ 0x1406BB6F4 (EtwpAddNotificationEvent.c)
 *     EtwpReceiveNotification @ 0x1406BBA6C (EtwpReceiveNotification.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406BCA6C (EtwpReceiveReplyDataBlock.c)
 *     EtwpSendReplyDataBlock @ 0x1406BCB68 (EtwpSendReplyDataBlock.c)
 *     EtwpRegisterUMGuid @ 0x1406DB250 (EtwpRegisterUMGuid.c)
 *     EtwpEnumerateTraceGuids @ 0x14072AF38 (EtwpEnumerateTraceGuids.c)
 *     EtwpGetTraceGuidInfo @ 0x14072E894 (EtwpGetTraceGuidInfo.c)
 *     WdiDispatchControl @ 0x1407894A0 (WdiDispatchControl.c)
 *     EtwpUpdateTrace @ 0x140796F68 (EtwpUpdateTrace.c)
 *     EtwpRegisterSecurityProvider @ 0x1407D53D0 (EtwpRegisterSecurityProvider.c)
 *     EtwpUpdateDisallowList @ 0x1409345B0 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x140934848 (EtwpGetDisallowList.c)
 *     EtwpGetTraceGroupInfo @ 0x140934924 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGroupList @ 0x140934B98 (EtwpGetTraceGroupList.c)
 *     EtwpGetTraceGuidList @ 0x140934C38 (EtwpGetTraceGuidList.c)
 *     EtwpUseDescriptorTypeUm @ 0x140934D24 (EtwpUseDescriptorTypeUm.c)
 *     EtwpIncrementTraceFile @ 0x140934DB4 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x140934EA0 (EtwpQueryReferenceTime.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093F380 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpQuerySessionDemuxObject @ 0x14093F4FC (EtwpQuerySessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x14093F578 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14093F834 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpSetProviderBinaryTracking @ 0x140941010 (EtwpSetProviderBinaryTracking.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
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
  __int64 v11; // rdx
  char *v12; // rcx
  __int64 CurrentSiloState; // r15
  unsigned int v14; // r13d
  int v15; // eax
  __int64 v16; // rbx
  int v17; // eax
  ULONG v18; // r14d
  ULONG v19; // ebx
  SIZE_T v20; // rdx
  _QWORD *PoolWithQuotaTag; // rax
  __int64 v22; // r9
  void *v24; // rax
  PVOID v25; // rcx
  unsigned __int64 v26; // rbx
  void *v27; // rcx
  unsigned int v28; // edx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rax
  PULONG v32; // rcx
  __int64 v33; // rdx
  _WORD v35[2]; // [rsp+30h] [rbp-68h] BYREF
  ETWTRACECONTROLCODE v36; // [rsp+34h] [rbp-64h]
  ULONG Size; // [rsp+38h] [rbp-60h] BYREF
  unsigned int Size_4[3]; // [rsp+3Ch] [rbp-5Ch] BYREF
  void *Src; // [rsp+48h] [rbp-50h]
  void *v40; // [rsp+50h] [rbp-48h]
  void *v41; // [rsp+58h] [rbp-40h]

  v7 = FunctionCode;
  v36 = FunctionCode;
  v8 = 0LL;
  v9 = 0LL;
  Src = 0LL;
  Size = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentSiloState = EtwpGetCurrentSiloState(*(__int64 *)&FunctionCode, (__int64)InputBuffer);
  LOBYTE(v14) = 0;
  if ( PreviousMode )
  {
    v14 = (unsigned int)v7 >> 31;
    v15 = v7 & 0x7FFFFFFF;
    if ( v7 >= 0 )
      v15 = v7;
    v7 = v15;
    v36 = v15;
    v16 = 0x7FFFFFFF0000LL;
    if ( InputBuffer )
    {
      if ( InputBufferLength )
      {
        v12 = (char *)InputBuffer + InputBufferLength;
        if ( (unsigned __int64)v12 > 0x7FFFFFFF0000LL || v12 < InputBuffer )
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
      Size_4[1] = -1073741811;
      goto LABEL_151;
    }
    if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
      v16 = (__int64)ReturnLength;
    *(_DWORD *)v16 = *(_DWORD *)v16;
  }
  if ( (unsigned int)v7 <= EtwAddNotificationEvent && (v17 = 134238208, _bittest(&v17, v7)) )
  {
    v18 = OutputBufferLength;
    v19 = InputBufferLength;
  }
  else
  {
    v19 = InputBufferLength;
    v18 = OutputBufferLength;
    if ( InputBufferLength || OutputBufferLength )
    {
      v20 = OutputBufferLength;
      if ( InputBufferLength > OutputBufferLength )
        v20 = InputBufferLength;
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v20, 0x50777445u);
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
  switch ( v36 )
  {
    case EtwStartLoggerCode:
    case EtwStopLoggerCode:
    case EtwQueryLoggerCode:
    case EtwUpdateLoggerCode:
    case EtwFlushLoggerCode:
    case EtwIncrementLoggerFile:
    case EtwRealtimeTransition:
      LODWORD(v8) = EtwpValidateUserModeLoggerInfo((__int64)v9, v19, v18, (unsigned int)(v36 - 1));
      if ( (int)v8 >= 0 )
      {
        if ( (unsigned int)v22 <= 6 )
          __asm { jmp     rcx }
        Size = 176;
      }
      goto LABEL_139;
    case EtwRealtimeConnectCode:
      if ( v19 != 96 || v18 != 96 )
        goto LABEL_61;
      LODWORD(v8) = EtwpRealtimeConnect((int *)v9);
      Size = 96;
      goto LABEL_139;
    case EtwActivityIdCreate:
      if ( v18 != 16 )
        goto LABEL_61;
      EtwpCreateActivityId((volatile signed __int64 *)OutputBuffer);
      v26 = (unsigned int)v36;
      goto LABEL_140;
    case EtwWdiScenarioCode:
      if ( v19 != 48 || v18 )
        goto LABEL_61;
      LODWORD(v8) = WdiDispatchControl(v9);
      goto LABEL_139;
    case EtwRealtimeDisconnectCode:
      if ( v19 != 8 || v18 )
        goto LABEL_61;
      LODWORD(v24) = PtrToUlong((const void *)*(unsigned int *)InputBuffer);
      v40 = v24;
      LODWORD(v8) = EtwpRealtimeDisconnectConsumerByHandle(v24);
      goto LABEL_139;
    case EtwRegisterGuidsCode:
      if ( v19 != 160 || v18 - 160 > 0xFF60 )
        goto LABEL_61;
      LODWORD(v8) = EtwpRegisterUMGuid(CurrentSiloState, (_DWORD)v9, v18, (unsigned __int8)v14, (__int64)&Size);
      goto LABEL_139;
    case EtwReceiveNotification:
      if ( v19 || v18 - 72 > 0xFFB8 )
        goto LABEL_61;
      LODWORD(v8) = EtwpReceiveNotification(v9, v18, v14, &Size);
      goto LABEL_139;
    case EtwSendDataBlock:
      if ( v19 < 0x48 || v18 != 72 || *((_DWORD *)v9 + 1) != v19 )
        goto LABEL_61;
      if ( *(_DWORD *)v9 == 3 )
      {
        if ( v19 < 0x78 )
          goto LABEL_61;
        LODWORD(v8) = EtwpEnableGuid(CurrentSiloState, (__int64)v9, 1);
        Size = 72;
      }
      else
      {
        LODWORD(v8) = EtwpNotifyGuid(CurrentSiloState, (__int64)v9, 1);
        Size = 72;
      }
      goto LABEL_139;
    case EtwSendReplyDataBlock:
      if ( v19 < 0x48 || *((_DWORD *)v9 + 1) != v19 )
        goto LABEL_61;
      *((_DWORD *)v9 + 9) = PsGetCurrentThreadProcessId();
      LODWORD(v8) = EtwpSendReplyDataBlock((__int64)v9);
      goto LABEL_139;
    case EtwReceiveReplyDataBlock:
      if ( v19 != 8 )
        goto LABEL_61;
      Size_4[0] = 0;
      LODWORD(v8) = EtwpReceiveReplyDataBlock((unsigned int *)v9, v18, Size_4);
      Size = Size_4[0];
      goto LABEL_139;
    case EtwWdiSemUpdate:
      if ( v19 || v18 )
        goto LABEL_61;
      LODWORD(v8) = WdiUpdateSem();
      goto LABEL_139;
    case EtwEnumTraceGuidList:
      Size = v18;
      LODWORD(v8) = EtwpGetTraceGuidList(CurrentSiloState, v9, &Size);
      goto LABEL_139;
    case EtwGetTraceGuidInfo:
      if ( v19 != 16 )
        goto LABEL_61;
      Size = v18;
      LODWORD(v8) = EtwpGetTraceGuidInfo(CurrentSiloState, v9, v9, &Size);
      goto LABEL_139;
    case EtwEnumerateTraceGuids:
      Size = v18;
      LODWORD(v8) = EtwpEnumerateTraceGuids(CurrentSiloState, v9, &Size);
      goto LABEL_139;
    case EtwRegisterSecurityProv:
      if ( v19 || v18 )
        goto LABEL_61;
      LODWORD(v8) = EtwpRegisterSecurityProvider(CurrentSiloState);
      goto LABEL_139;
    case EtwReferenceTimeCode:
      if ( v19 != 4 || v18 != 16 )
        goto LABEL_61;
      LODWORD(v8) = EtwpQueryReferenceTime(CurrentSiloState, *(unsigned int *)v9, v9);
      Size = 16;
      goto LABEL_139;
    case EtwTrackBinaryCode:
      if ( v19 != 8 )
        goto LABEL_61;
      LODWORD(v8) = EtwpTrackProviderBinary(CurrentSiloState, (void **)v9);
      goto LABEL_139;
    case EtwAddNotificationEvent:
      if ( v19 != 4 )
        goto LABEL_61;
      v27 = (void *)*(unsigned int *)InputBuffer;
      v41 = v27;
      if ( !v27 )
        goto LABEL_61;
      LODWORD(v8) = EtwpAddNotificationEvent(v27, v14);
      goto LABEL_139;
    case EtwUpdateDisallowList:
      if ( v19 < 8 )
        goto LABEL_61;
      v28 = *((_DWORD *)v9 + 1);
      if ( 16LL * v28 + 8 != v19 )
        goto LABEL_61;
      if ( v28 )
        v8 = v9 + 1;
      LODWORD(v8) = EtwpUpdateDisallowList(CurrentSiloState, *(unsigned int *)v9, v28, v8);
      goto LABEL_139;
    case EtwSetProviderTraitsCode:
      if ( v19 != 24 || v18 - 120 > 0xFF88 )
        goto LABEL_61;
      LODWORD(v8) = EtwpSetProviderTraitsUm((__int64)v9, v18, (int)&Size);
      goto LABEL_139;
    case EtwUseDescriptorTypeCode:
      if ( v19 != 16 || v18 )
        goto LABEL_61;
      LODWORD(v8) = EtwpUseDescriptorTypeUm(v9);
      goto LABEL_139;
    case EtwEnumTraceGroupList:
      Size = v18;
      LODWORD(v8) = EtwpGetTraceGroupList(CurrentSiloState, v9, &Size);
      goto LABEL_139;
    case EtwGetTraceGroupInfo:
      if ( v19 != 16 )
        goto LABEL_61;
      Size = v18;
      LODWORD(v8) = EtwpGetTraceGroupInfo(CurrentSiloState, v9, v9, &Size);
      goto LABEL_139;
    case EtwGetDisallowList:
      if ( v19 != 8 )
        goto LABEL_61;
      Size = v18;
      LODWORD(v8) = EtwpGetDisallowList(CurrentSiloState, v9, v9, &Size);
      goto LABEL_139;
    case EtwSetCompressionSettings:
      if ( v19 != 16 || v18 )
        goto LABEL_61;
      LODWORD(v8) = EtwpSetCompressionSettings((unsigned int *)v9, v11);
      goto LABEL_139;
    case EtwGetCompressionSettings:
      if ( v19 != 8 || v18 != 16 )
        goto LABEL_61;
      Size = 16;
      LODWORD(v8) = EtwpGetCompressionSettings((unsigned __int16 *)v9, (unsigned int *)v9);
      goto LABEL_139;
    case EtwUpdatePeriodicCaptureState:
      if ( v19 < 0xC )
        goto LABEL_61;
      v29 = *((unsigned __int16 *)v9 + 4);
      if ( (unsigned int)v29 > 0x10 )
      {
        LODWORD(v8) = -1073741811;
        goto LABEL_139;
      }
      v30 = *((unsigned int *)v9 + 1);
      if ( (unsigned int)(v30 - 1) <= 3 )
      {
        LODWORD(v8) = -1073741811;
        goto LABEL_139;
      }
      if ( (_WORD)v29 )
      {
        if ( !(_DWORD)v30 )
        {
          LODWORD(v8) = -1073741811;
          goto LABEL_139;
        }
      }
      else if ( (_DWORD)v30 )
      {
LABEL_61:
        LODWORD(v8) = -1073741811;
        goto LABEL_139;
      }
      if ( 16 * v29 + 12 != v19 )
        goto LABEL_61;
      if ( (_WORD)v29 )
        v8 = (_QWORD *)((char *)v9 + 12);
      LODWORD(v8) = EtwpUpdatePeriodicCaptureState(*(unsigned int *)v9, v30, v29, v8);
LABEL_139:
      v25 = OutputBuffer;
      v26 = (unsigned int)v36;
LABEL_140:
      if ( (int)v8 < 0 )
      {
        v32 = ReturnLength;
      }
      else
      {
        if ( Size )
          memmove(v25, v9, Size);
        v32 = ReturnLength;
        *ReturnLength = Size;
      }
      if ( (_DWORD)v8 == -1073741789 && ((unsigned int)(v26 - 15) <= 1 || (unsigned int)(v26 - 21) <= 1)
        || (unsigned int)v26 <= 0x28 && (v33 = 0x1D700880000LL, _bittest64(&v33, v26)) )
      {
        *v32 = Size;
      }
LABEL_151:
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      return (int)v8;
    case EtwGetPrivateSessionTraceHandle:
      if ( v19 < 8 || (v19 & 7) != 0 || v18 < 2 )
        goto LABEL_61;
      v35[0] = 0;
      LODWORD(v8) = EtwpGetPrivateSessionTraceHandle(v9, v19 >> 3, v35);
      if ( !(_DWORD)v8 )
      {
        Size = 2;
        *(_WORD *)v9 = v35[0];
      }
      goto LABEL_139;
    case EtwRegisterPrivateSession:
      if ( v19 < 2 || v18 < 8 )
        goto LABEL_61;
      v31 = EtwpGetCurrentSiloState((__int64)v12, v11);
      LODWORD(v8) = EtwpRegisterPrivateSession(v31, *(unsigned __int16 *)v9, (char *)v9 + 4, v9);
      if ( !(_DWORD)v8 )
        Size = 8;
      goto LABEL_139;
    case EtwQuerySessionDemuxObject:
      if ( v19 < 8 || v18 < 2 )
        goto LABEL_61;
      LODWORD(v8) = EtwpQuerySessionDemuxObject(*v9, v9);
      if ( !(_DWORD)v8 )
        Size = 2;
      goto LABEL_139;
    case EtwSetProviderBinaryTracking:
      if ( v19 < 8 )
        goto LABEL_61;
      LODWORD(v8) = EtwpSetProviderBinaryTracking(CurrentSiloState, *(unsigned int *)v9, *((unsigned __int8 *)v9 + 4));
      goto LABEL_139;
    case EtwMaxLoggers:
      v26 = (unsigned int)v36;
      v25 = OutputBuffer;
      if ( v18 < 4 )
        goto LABEL_135;
      *(_DWORD *)v9 = *(_DWORD *)(CurrentSiloState + 16);
      Size = 4;
      goto LABEL_140;
    case EtwMaxPmcCounter:
      v26 = (unsigned int)v36;
      v25 = OutputBuffer;
      if ( v18 < 4 )
      {
LABEL_135:
        LODWORD(v8) = -1073741811;
      }
      else
      {
        *(_DWORD *)v9 = EtwpMaxPmcCounter;
        Size = 4;
      }
      goto LABEL_140;
    default:
      LODWORD(v8) = -1073741808;
      goto LABEL_139;
  }
}
