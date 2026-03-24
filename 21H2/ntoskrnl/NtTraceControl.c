/*
 * XREFs of NtTraceControl @ 0x1405EAF60
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14079C220 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14079C468 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14092FBC8 (PerfDiagpSaveActiveDCLLogFileName.c)
 * Callees:
 *     EtwpCreateActivityId @ 0x1402B17B8 (EtwpCreateActivityId.c)
 *     PtrToUlong @ 0x1402C7CC0 (PtrToUlong.c)
 *     PsGetCurrentThreadProcessId @ 0x1402ED5E0 (PsGetCurrentThreadProcessId.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140353020 (ExAllocatePoolWithQuotaTag.c)
 *     EtwpTransitionToRealtime @ 0x1403F9098 (EtwpTransitionToRealtime.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     WdiUpdateSem @ 0x1405A55F0 (WdiUpdateSem.c)
 *     EtwpGetCurrentSiloState @ 0x1405AA724 (EtwpGetCurrentSiloState.c)
 *     EtwpGetCompressionSettings @ 0x1405AD394 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1405AD864 (EtwpSetCompressionSettings.c)
 *     EtwpRegisterUMGuid @ 0x1405EBAF0 (EtwpRegisterUMGuid.c)
 *     EtwpSetProviderTraitsUm @ 0x140643070 (EtwpSetProviderTraitsUm.c)
 *     ProbeForWrite @ 0x1406547A0 (ProbeForWrite.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x1406B8844 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpRealtimeConnect @ 0x1406B88C8 (EtwpRealtimeConnect.c)
 *     EtwpSendReplyDataBlock @ 0x1406BB2E8 (EtwpSendReplyDataBlock.c)
 *     EtwpTrackProviderBinary @ 0x1406BFE18 (EtwpTrackProviderBinary.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406C1360 (EtwpReceiveReplyDataBlock.c)
 *     EtwpStartTrace @ 0x1406C1AB4 (EtwpStartTrace.c)
 *     EtwpFlushTrace @ 0x1406DD6A4 (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x1406DDFBC (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1406DEE18 (EtwpQueryTrace.c)
 *     EtwpValidateUserModeLoggerInfo @ 0x1406DEFE0 (EtwpValidateUserModeLoggerInfo.c)
 *     EtwpNotifyGuid @ 0x1406E1804 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1406E2404 (EtwpEnableGuid.c)
 *     EtwpAddNotificationEvent @ 0x1406E4414 (EtwpAddNotificationEvent.c)
 *     EtwpReceiveNotification @ 0x1406E478C (EtwpReceiveNotification.c)
 *     EtwpEnumerateTraceGuids @ 0x14072AA88 (EtwpEnumerateTraceGuids.c)
 *     EtwpGetTraceGuidInfo @ 0x14072E6C8 (EtwpGetTraceGuidInfo.c)
 *     WdiDispatchControl @ 0x1407892E0 (WdiDispatchControl.c)
 *     EtwpUpdateTrace @ 0x140796D68 (EtwpUpdateTrace.c)
 *     EtwpRegisterSecurityProvider @ 0x1407D5260 (EtwpRegisterSecurityProvider.c)
 *     EtwpUpdateDisallowList @ 0x1409343E0 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x140934678 (EtwpGetDisallowList.c)
 *     EtwpGetTraceGroupInfo @ 0x140934754 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGroupList @ 0x1409349C8 (EtwpGetTraceGroupList.c)
 *     EtwpGetTraceGuidList @ 0x140934A68 (EtwpGetTraceGuidList.c)
 *     EtwpUseDescriptorTypeUm @ 0x140934B54 (EtwpUseDescriptorTypeUm.c)
 *     EtwpIncrementTraceFile @ 0x140934BE4 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x140934CD0 (EtwpQueryReferenceTime.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093F1B0 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpQuerySessionDemuxObject @ 0x14093F32C (EtwpQuerySessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x14093F3A8 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14093F664 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpSetProviderBinaryTracking @ 0x140940E40 (EtwpSetProviderBinaryTracking.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtTraceControl(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        volatile void *a4,
        unsigned int Length,
        _DWORD *a6)
{
  unsigned int v7; // r14d
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi
  char PreviousMode; // bl
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 CurrentSiloState; // r15
  unsigned int v15; // r13d
  int v16; // eax
  __int64 v17; // rbx
  int v18; // eax
  unsigned int v19; // r14d
  unsigned int v20; // ebx
  SIZE_T v21; // rdx
  _QWORD *PoolWithQuotaTag; // rax
  __int64 v23; // r9
  __int64 v25; // rax
  void *v26; // rcx
  unsigned __int64 v27; // rbx
  __int64 v28; // rcx
  unsigned int v29; // edx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rax
  _DWORD *v33; // rcx
  __int64 v34; // rdx
  _WORD v36[2]; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v37; // [rsp+34h] [rbp-64h]
  size_t Size; // [rsp+38h] [rbp-60h] BYREF
  int v39; // [rsp+40h] [rbp-58h]
  void *Src; // [rsp+48h] [rbp-50h]
  __int64 v41; // [rsp+50h] [rbp-48h]
  __int64 v42; // [rsp+58h] [rbp-40h]

  v7 = a1;
  v37 = a1;
  v8 = 0LL;
  v9 = 0LL;
  Src = 0LL;
  LODWORD(Size) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentSiloState = EtwpGetCurrentSiloState(a1, (__int64)a2);
  LOBYTE(v15) = 0;
  if ( PreviousMode )
  {
    v15 = v7 >> 31;
    v16 = v7 & 0x7FFFFFFF;
    if ( (v7 & 0x80000000) == 0 )
      v16 = v7;
    v7 = v16;
    v37 = v16;
    v17 = 0x7FFFFFFF0000LL;
    if ( a2 )
    {
      if ( a3 )
      {
        v12 = (unsigned __int64)a2 + a3;
        if ( v12 > 0x7FFFFFFF0000LL || v12 < (unsigned __int64)a2 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      a3 = 0;
    }
    if ( a4 )
      ProbeForWrite(a4, Length, 1u);
    else
      Length = 0;
    if ( !a6 )
    {
      LODWORD(v8) = -1073741811;
      v39 = -1073741811;
      goto LABEL_151;
    }
    if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
      v17 = (__int64)a6;
    *(_DWORD *)v17 = *(_DWORD *)v17;
  }
  if ( v7 <= 0x1B && (v18 = 134238208, _bittest(&v18, v7)) )
  {
    v19 = Length;
    v20 = a3;
  }
  else
  {
    v20 = a3;
    v19 = Length;
    if ( a3 || Length )
    {
      v21 = Length;
      if ( a3 > Length )
        v21 = a3;
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v21, 0x50777445u);
      v9 = PoolWithQuotaTag;
      Src = PoolWithQuotaTag;
      if ( !PoolWithQuotaTag )
      {
        LODWORD(v8) = -1073741801;
        goto LABEL_151;
      }
      memset(PoolWithQuotaTag, 0, Length);
      if ( a2 )
        memmove(v9, a2, a3);
    }
  }
  switch ( v37 )
  {
    case 1u:
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
      LODWORD(v8) = EtwpValidateUserModeLoggerInfo(v9, v20, v19);
      if ( (int)v8 >= 0 )
      {
        if ( (unsigned int)v23 <= 6 )
          __asm { jmp     rcx }
        LODWORD(Size) = 176;
      }
      goto LABEL_139;
    case 0xBu:
      if ( v20 != 96 || v19 != 96 )
        goto LABEL_61;
      LODWORD(v8) = EtwpRealtimeConnect(v9);
      LODWORD(Size) = 96;
      goto LABEL_139;
    case 0xCu:
      if ( v19 != 16 )
        goto LABEL_61;
      EtwpCreateActivityId((volatile signed __int64 *)a4);
      v27 = v37;
      goto LABEL_140;
    case 0xDu:
      if ( v20 != 48 || v19 )
        goto LABEL_61;
      LODWORD(v8) = WdiDispatchControl(v9);
      goto LABEL_139;
    case 0xEu:
      if ( v20 != 8 || v19 )
        goto LABEL_61;
      LODWORD(v25) = PtrToUlong((const void *)*a2);
      v41 = v25;
      LODWORD(v8) = EtwpRealtimeDisconnectConsumerByHandle(v25);
      goto LABEL_139;
    case 0xFu:
      if ( v20 != 160 || v19 - 160 > 0xFF60 )
        goto LABEL_61;
      LODWORD(v8) = EtwpRegisterUMGuid(CurrentSiloState, (_DWORD)v9, v19, (unsigned __int8)v15, (__int64)&Size);
      goto LABEL_139;
    case 0x10u:
      if ( v20 || v19 - 72 > 0xFFB8 )
        goto LABEL_61;
      LODWORD(v8) = EtwpReceiveNotification(v9);
      goto LABEL_139;
    case 0x11u:
      if ( v20 < 0x48 || v19 != 72 || *((_DWORD *)v9 + 1) != v20 )
        goto LABEL_61;
      if ( *(_DWORD *)v9 == 3 )
      {
        if ( v20 < 0x78 )
          goto LABEL_61;
        LOBYTE(v13) = 1;
        LODWORD(v8) = EtwpEnableGuid(CurrentSiloState, v9, v13);
        LODWORD(Size) = 72;
      }
      else
      {
        LOBYTE(v13) = 1;
        LODWORD(v8) = EtwpNotifyGuid(CurrentSiloState, v9, v13);
        LODWORD(Size) = 72;
      }
      goto LABEL_139;
    case 0x12u:
      if ( v20 < 0x48 || *((_DWORD *)v9 + 1) != v20 )
        goto LABEL_61;
      *((_DWORD *)v9 + 9) = PsGetCurrentThreadProcessId();
      LODWORD(v8) = EtwpSendReplyDataBlock(v9);
      goto LABEL_139;
    case 0x13u:
      if ( v20 != 8 )
        goto LABEL_61;
      LODWORD(v8) = EtwpReceiveReplyDataBlock(v9);
      Size = 0LL;
      goto LABEL_139;
    case 0x14u:
      if ( v20 || v19 )
        goto LABEL_61;
      LODWORD(v8) = WdiUpdateSem();
      goto LABEL_139;
    case 0x15u:
      LODWORD(Size) = v19;
      LODWORD(v8) = EtwpGetTraceGuidList(CurrentSiloState, v9, &Size);
      goto LABEL_139;
    case 0x16u:
      if ( v20 != 16 )
        goto LABEL_61;
      LODWORD(Size) = v19;
      LODWORD(v8) = EtwpGetTraceGuidInfo(CurrentSiloState, v9, v9, &Size);
      goto LABEL_139;
    case 0x17u:
      LODWORD(Size) = v19;
      LODWORD(v8) = EtwpEnumerateTraceGuids(CurrentSiloState, v9, &Size);
      goto LABEL_139;
    case 0x18u:
      if ( v20 || v19 )
        goto LABEL_61;
      LODWORD(v8) = EtwpRegisterSecurityProvider(CurrentSiloState);
      goto LABEL_139;
    case 0x19u:
      if ( v20 != 4 || v19 != 16 )
        goto LABEL_61;
      LODWORD(v8) = EtwpQueryReferenceTime(CurrentSiloState, *(unsigned int *)v9, v9);
      LODWORD(Size) = 16;
      goto LABEL_139;
    case 0x1Au:
      if ( v20 != 8 )
        goto LABEL_61;
      LODWORD(v8) = EtwpTrackProviderBinary(CurrentSiloState, v9);
      goto LABEL_139;
    case 0x1Bu:
      if ( v20 != 4 )
        goto LABEL_61;
      v28 = *a2;
      v42 = v28;
      if ( !v28 )
        goto LABEL_61;
      LODWORD(v8) = EtwpAddNotificationEvent(v28, (unsigned __int8)v15);
      goto LABEL_139;
    case 0x1Cu:
      if ( v20 < 8 )
        goto LABEL_61;
      v29 = *((_DWORD *)v9 + 1);
      if ( 16LL * v29 + 8 != v20 )
        goto LABEL_61;
      if ( v29 )
        v8 = v9 + 1;
      LODWORD(v8) = EtwpUpdateDisallowList(CurrentSiloState, *(unsigned int *)v9, v29, v8);
      goto LABEL_139;
    case 0x1Eu:
      if ( v20 != 24 || v19 - 120 > 0xFF88 )
        goto LABEL_61;
      LODWORD(v8) = EtwpSetProviderTraitsUm((_DWORD)v9, v19, (unsigned int)&Size);
      goto LABEL_139;
    case 0x1Fu:
      if ( v20 != 16 || v19 )
        goto LABEL_61;
      LODWORD(v8) = EtwpUseDescriptorTypeUm(v9);
      goto LABEL_139;
    case 0x20u:
      LODWORD(Size) = v19;
      LODWORD(v8) = EtwpGetTraceGroupList(CurrentSiloState, v9, &Size);
      goto LABEL_139;
    case 0x21u:
      if ( v20 != 16 )
        goto LABEL_61;
      LODWORD(Size) = v19;
      LODWORD(v8) = EtwpGetTraceGroupInfo(CurrentSiloState, v9, v9, &Size);
      goto LABEL_139;
    case 0x22u:
      if ( v20 != 8 )
        goto LABEL_61;
      LODWORD(Size) = v19;
      LODWORD(v8) = EtwpGetDisallowList(CurrentSiloState, v9, v9, &Size);
      goto LABEL_139;
    case 0x23u:
      if ( v20 != 16 || v19 )
        goto LABEL_61;
      LODWORD(v8) = EtwpSetCompressionSettings((unsigned int *)v9, v11);
      goto LABEL_139;
    case 0x24u:
      if ( v20 != 8 || v19 != 16 )
        goto LABEL_61;
      LODWORD(Size) = 16;
      LODWORD(v8) = EtwpGetCompressionSettings((unsigned __int16 *)v9, (unsigned int *)v9);
      goto LABEL_139;
    case 0x25u:
      if ( v20 < 0xC )
        goto LABEL_61;
      v30 = *((unsigned __int16 *)v9 + 4);
      if ( (unsigned int)v30 > 0x10 )
      {
        LODWORD(v8) = -1073741811;
        goto LABEL_139;
      }
      v31 = *((unsigned int *)v9 + 1);
      if ( (unsigned int)(v31 - 1) <= 3 )
      {
        LODWORD(v8) = -1073741811;
        goto LABEL_139;
      }
      if ( (_WORD)v30 )
      {
        if ( !(_DWORD)v31 )
        {
          LODWORD(v8) = -1073741811;
          goto LABEL_139;
        }
      }
      else if ( (_DWORD)v31 )
      {
LABEL_61:
        LODWORD(v8) = -1073741811;
        goto LABEL_139;
      }
      if ( 16 * v30 + 12 != v20 )
        goto LABEL_61;
      if ( (_WORD)v30 )
        v8 = (_QWORD *)((char *)v9 + 12);
      LODWORD(v8) = EtwpUpdatePeriodicCaptureState(*(unsigned int *)v9, v31, v30, v8);
LABEL_139:
      v26 = (void *)a4;
      v27 = v37;
LABEL_140:
      if ( (int)v8 < 0 )
      {
        v33 = a6;
      }
      else
      {
        if ( (_DWORD)Size )
          memmove(v26, v9, (unsigned int)Size);
        v33 = a6;
        *a6 = Size;
      }
      if ( (_DWORD)v8 == -1073741789 && ((unsigned int)(v27 - 15) <= 1 || (unsigned int)(v27 - 21) <= 1)
        || (unsigned int)v27 <= 0x28 && (v34 = 0x1D700880000LL, _bittest64(&v34, v27)) )
      {
        *v33 = Size;
      }
LABEL_151:
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      return (unsigned int)v8;
    case 0x26u:
      if ( v20 < 8 || (v20 & 7) != 0 || v19 < 2 )
        goto LABEL_61;
      v36[0] = 0;
      LODWORD(v8) = EtwpGetPrivateSessionTraceHandle(v9, v20 >> 3, v36);
      if ( !(_DWORD)v8 )
      {
        LODWORD(Size) = 2;
        *(_WORD *)v9 = v36[0];
      }
      goto LABEL_139;
    case 0x27u:
      if ( v20 < 2 || v19 < 8 )
        goto LABEL_61;
      v32 = EtwpGetCurrentSiloState(v12, v11);
      LODWORD(v8) = EtwpRegisterPrivateSession(v32, *(unsigned __int16 *)v9, (char *)v9 + 4, v9);
      if ( !(_DWORD)v8 )
        LODWORD(Size) = 8;
      goto LABEL_139;
    case 0x28u:
      if ( v20 < 8 || v19 < 2 )
        goto LABEL_61;
      LODWORD(v8) = EtwpQuerySessionDemuxObject(*v9, v9);
      if ( !(_DWORD)v8 )
        LODWORD(Size) = 2;
      goto LABEL_139;
    case 0x29u:
      if ( v20 < 8 )
        goto LABEL_61;
      LODWORD(v8) = EtwpSetProviderBinaryTracking(CurrentSiloState, *(unsigned int *)v9, *((unsigned __int8 *)v9 + 4));
      goto LABEL_139;
    case 0x2Au:
      v27 = v37;
      v26 = (void *)a4;
      if ( v19 < 4 )
        goto LABEL_135;
      *(_DWORD *)v9 = *(_DWORD *)(CurrentSiloState + 16);
      LODWORD(Size) = 4;
      goto LABEL_140;
    case 0x2Bu:
      v27 = v37;
      v26 = (void *)a4;
      if ( v19 < 4 )
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
