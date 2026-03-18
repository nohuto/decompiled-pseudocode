/*
 * XREFs of NtTraceControl @ 0x14068D910
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14079D790 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14079D9D8 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14092C5C8 (PerfDiagpSaveActiveDCLLogFileName.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x140205DD0 (PsGetCurrentThreadProcessId.c)
 *     EtwpCreateActivityId @ 0x140277F48 (EtwpCreateActivityId.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140297DA0 (ExAllocatePoolWithQuotaTag.c)
 *     PtrToUlong @ 0x1403565E0 (PtrToUlong.c)
 *     EtwpTransitionToRealtime @ 0x1403F2950 (EtwpTransitionToRealtime.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     WdiUpdateSem @ 0x1405A0120 (WdiUpdateSem.c)
 *     EtwpGetCurrentSiloState @ 0x1405A5254 (EtwpGetCurrentSiloState.c)
 *     EtwpGetCompressionSettings @ 0x1405A7E34 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1405A8304 (EtwpSetCompressionSettings.c)
 *     EtwpNotifyGuid @ 0x1406329B8 (EtwpNotifyGuid.c)
 *     EtwpReceiveNotification @ 0x140633CA8 (EtwpReceiveNotification.c)
 *     EtwpEnableGuid @ 0x140635748 (EtwpEnableGuid.c)
 *     EtwpAddNotificationEvent @ 0x1406373C4 (EtwpAddNotificationEvent.c)
 *     EtwpQueryTrace @ 0x140645318 (EtwpQueryTrace.c)
 *     EtwpValidateUserModeLoggerInfo @ 0x1406454E0 (EtwpValidateUserModeLoggerInfo.c)
 *     EtwpSetProviderTraitsUm @ 0x14066B574 (EtwpSetProviderTraitsUm.c)
 *     EtwpRegisterUMGuid @ 0x14066E310 (EtwpRegisterUMGuid.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     EtwpFlushTrace @ 0x1406C65C8 (EtwpFlushTrace.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x1406C6704 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpRealtimeConnect @ 0x1406C6788 (EtwpRealtimeConnect.c)
 *     EtwpStopTrace @ 0x1406C75AC (EtwpStopTrace.c)
 *     EtwpStartTrace @ 0x1406C7834 (EtwpStartTrace.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406EE1C8 (EtwpReceiveReplyDataBlock.c)
 *     EtwpSendReplyDataBlock @ 0x140709348 (EtwpSendReplyDataBlock.c)
 *     EtwpTrackProviderBinary @ 0x14070D9A8 (EtwpTrackProviderBinary.c)
 *     EtwpEnumerateTraceGuids @ 0x140718F4C (EtwpEnumerateTraceGuids.c)
 *     EtwpGetTraceGuidInfo @ 0x14071C74C (EtwpGetTraceGuidInfo.c)
 *     WdiDispatchControl @ 0x140776F00 (WdiDispatchControl.c)
 *     EtwpUpdateTrace @ 0x140780C28 (EtwpUpdateTrace.c)
 *     EtwpRegisterSecurityProvider @ 0x1407C25E0 (EtwpRegisterSecurityProvider.c)
 *     EtwpUpdateDisallowList @ 0x140930DE0 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x140931078 (EtwpGetDisallowList.c)
 *     EtwpGetTraceGroupInfo @ 0x140931154 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGroupList @ 0x1409313C8 (EtwpGetTraceGroupList.c)
 *     EtwpGetTraceGuidList @ 0x140931468 (EtwpGetTraceGuidList.c)
 *     EtwpUseDescriptorTypeUm @ 0x140931554 (EtwpUseDescriptorTypeUm.c)
 *     EtwpIncrementTraceFile @ 0x1409315E4 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x1409316D0 (EtwpQueryReferenceTime.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093BBB0 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpQuerySessionDemuxObject @ 0x14093BD2C (EtwpQuerySessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x14093BDA8 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14093C064 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpSetProviderBinaryTracking @ 0x14093D8B0 (EtwpSetProviderBinaryTracking.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtTraceControl(
        unsigned int a1,
        unsigned int *a2,
        unsigned int a3,
        volatile void *a4,
        unsigned int Length,
        unsigned int *a6)
{
  unsigned int v7; // r14d
  _QWORD *v8; // r12
  _QWORD *v9; // rsi
  char PreviousMode; // bl
  __int64 CurrentSiloState; // r15
  int updated; // edi
  int v13; // eax
  __int64 v14; // rbx
  int v15; // eax
  unsigned int v16; // r14d
  unsigned int v17; // ebx
  SIZE_T v18; // rdx
  _QWORD *PoolWithQuotaTag; // rax
  __int64 v20; // r9
  __int64 v22; // rax
  void *v23; // rcx
  unsigned __int64 v24; // rbx
  void *v25; // rcx
  unsigned int v26; // edx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned int *v30; // rcx
  __int64 v31; // rdx
  unsigned int v33; // [rsp+30h] [rbp-78h]
  unsigned int Size; // [rsp+34h] [rbp-74h] BYREF
  __int16 Size_4; // [rsp+38h] [rbp-70h] BYREF
  unsigned int v36; // [rsp+3Ch] [rbp-6Ch]
  int v37; // [rsp+40h] [rbp-68h]
  void *Src; // [rsp+48h] [rbp-60h]
  int v39; // [rsp+50h] [rbp-58h]
  __int64 v40; // [rsp+58h] [rbp-50h]
  void *v41; // [rsp+60h] [rbp-48h]

  v7 = a1;
  v33 = a1;
  v8 = 0LL;
  v9 = 0LL;
  Src = 0LL;
  Size = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentSiloState = EtwpGetCurrentSiloState();
  updated = 0;
  v37 = 0;
  LOBYTE(v36) = 0;
  if ( PreviousMode )
  {
    v36 = v7 >> 31;
    v13 = v7 & 0x7FFFFFFF;
    if ( (v7 & 0x80000000) == 0 )
      v13 = v7;
    v7 = v13;
    v33 = v13;
    v14 = 0x7FFFFFFF0000LL;
    if ( a2 )
    {
      if ( a3 && ((unsigned __int64)a2 + a3 > 0x7FFFFFFF0000LL || (unsigned int *)((char *)a2 + a3) < a2) )
        MEMORY[0x7FFFFFFF0000] = 0;
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
      updated = -1073741811;
      v37 = -1073741811;
      goto LABEL_151;
    }
    if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
      v14 = (__int64)a6;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    updated = v37;
  }
  if ( v7 <= 0x1B && (v15 = 134238208, _bittest(&v15, v7)) )
  {
    v16 = Length;
    v17 = a3;
  }
  else
  {
    v17 = a3;
    v16 = Length;
    if ( a3 || Length )
    {
      v18 = Length;
      if ( a3 > Length )
        v18 = a3;
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v18, 0x50777445u);
      v9 = PoolWithQuotaTag;
      Src = PoolWithQuotaTag;
      if ( !PoolWithQuotaTag )
      {
        updated = -1073741801;
        goto LABEL_151;
      }
      memset(PoolWithQuotaTag, 0, Length);
      if ( a2 )
        memmove(v9, a2, a3);
    }
  }
  switch ( v33 )
  {
    case 1u:
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
      updated = EtwpValidateUserModeLoggerInfo((__int64)v9, v17, v16, v33 - 1);
      if ( updated >= 0 )
      {
        if ( (unsigned int)v20 <= 6 )
          __asm { jmp     rdx }
        Size = 176;
      }
      goto LABEL_139;
    case 0xBu:
      if ( v17 != 96 || v16 != 96 )
        goto LABEL_61;
      updated = EtwpRealtimeConnect(v9);
      Size = 96;
      goto LABEL_139;
    case 0xCu:
      if ( v16 != 16 )
        goto LABEL_61;
      updated = 0;
      EtwpCreateActivityId((volatile signed __int64 *)a4);
      v24 = v33;
      goto LABEL_140;
    case 0xDu:
      if ( v17 != 48 || v16 )
        goto LABEL_61;
      updated = WdiDispatchControl(v9);
      goto LABEL_139;
    case 0xEu:
      if ( v17 != 8 || v16 )
        goto LABEL_61;
      LODWORD(v22) = PtrToUlong((const void *)*a2);
      v40 = v22;
      updated = EtwpRealtimeDisconnectConsumerByHandle(v22);
      goto LABEL_139;
    case 0xFu:
      if ( v17 != 160 || v16 - 160 > 0xFF60 )
        goto LABEL_61;
      updated = EtwpRegisterUMGuid(CurrentSiloState, (__int64)v9, v16, v36, &Size);
      goto LABEL_139;
    case 0x10u:
      if ( v17 || v16 - 72 > 0xFFB8 )
        goto LABEL_61;
      updated = EtwpReceiveNotification(v9, v16, v36, &Size);
      goto LABEL_139;
    case 0x11u:
      if ( v17 < 0x48 || v16 != 72 || *((_DWORD *)v9 + 1) != v17 )
        goto LABEL_61;
      if ( *(_DWORD *)v9 == 3 )
      {
        if ( v17 < 0x78 )
          goto LABEL_61;
        updated = EtwpEnableGuid(CurrentSiloState, (__int64)v9, 1);
        Size = 72;
      }
      else
      {
        updated = EtwpNotifyGuid(CurrentSiloState, (__int64)v9, 1);
        Size = 72;
      }
      goto LABEL_139;
    case 0x12u:
      if ( v17 < 0x48 || *((_DWORD *)v9 + 1) != v17 )
        goto LABEL_61;
      *((_DWORD *)v9 + 9) = PsGetCurrentThreadProcessId();
      updated = EtwpSendReplyDataBlock(v9);
      goto LABEL_139;
    case 0x13u:
      if ( v17 != 8 )
        goto LABEL_61;
      v39 = 0;
      updated = EtwpReceiveReplyDataBlock(v9);
      Size = 0;
      goto LABEL_139;
    case 0x14u:
      if ( v17 || v16 )
        goto LABEL_61;
      updated = WdiUpdateSem();
      goto LABEL_139;
    case 0x15u:
      Size = v16;
      updated = EtwpGetTraceGuidList(CurrentSiloState, v9, &Size);
      goto LABEL_139;
    case 0x16u:
      if ( v17 != 16 )
        goto LABEL_61;
      Size = v16;
      updated = EtwpGetTraceGuidInfo(CurrentSiloState, v9, v9, &Size);
      goto LABEL_139;
    case 0x17u:
      Size = v16;
      updated = EtwpEnumerateTraceGuids(CurrentSiloState, v9, &Size);
      goto LABEL_139;
    case 0x18u:
      if ( v17 || v16 )
        goto LABEL_61;
      updated = EtwpRegisterSecurityProvider(CurrentSiloState);
      goto LABEL_139;
    case 0x19u:
      if ( v17 != 4 || v16 != 16 )
        goto LABEL_61;
      updated = EtwpQueryReferenceTime(CurrentSiloState, *(unsigned int *)v9, v9);
      Size = 16;
      goto LABEL_139;
    case 0x1Au:
      if ( v17 != 8 )
        goto LABEL_61;
      updated = EtwpTrackProviderBinary(CurrentSiloState, v9);
      goto LABEL_139;
    case 0x1Bu:
      if ( v17 != 4 )
        goto LABEL_61;
      v25 = (void *)*a2;
      v41 = v25;
      if ( !v25 )
        goto LABEL_61;
      updated = EtwpAddNotificationEvent(v25, v36);
      goto LABEL_139;
    case 0x1Cu:
      if ( v17 < 8 )
        goto LABEL_61;
      v26 = *((_DWORD *)v9 + 1);
      if ( 16LL * v26 + 8 != v17 )
        goto LABEL_61;
      if ( v26 )
        v8 = v9 + 1;
      updated = EtwpUpdateDisallowList(CurrentSiloState, *(unsigned int *)v9, v26, v8);
      goto LABEL_139;
    case 0x1Eu:
      if ( v17 != 24 || v16 - 120 > 0xFF88 )
        goto LABEL_61;
      updated = EtwpSetProviderTraitsUm((__int64)v9, v16, (int)&Size);
      goto LABEL_139;
    case 0x1Fu:
      if ( v17 != 16 || v16 )
        goto LABEL_61;
      updated = EtwpUseDescriptorTypeUm(v9);
      goto LABEL_139;
    case 0x20u:
      Size = v16;
      updated = EtwpGetTraceGroupList(CurrentSiloState, v9, &Size);
      goto LABEL_139;
    case 0x21u:
      if ( v17 != 16 )
        goto LABEL_61;
      Size = v16;
      updated = EtwpGetTraceGroupInfo(CurrentSiloState, v9, v9, &Size);
      goto LABEL_139;
    case 0x22u:
      if ( v17 != 8 )
        goto LABEL_61;
      Size = v16;
      updated = EtwpGetDisallowList(CurrentSiloState, v9, v9, &Size);
      goto LABEL_139;
    case 0x23u:
      if ( v17 != 16 || v16 )
        goto LABEL_61;
      updated = EtwpSetCompressionSettings((unsigned int *)v9);
      goto LABEL_139;
    case 0x24u:
      if ( v17 != 8 || v16 != 16 )
        goto LABEL_61;
      Size = 16;
      updated = EtwpGetCompressionSettings((unsigned __int16 *)v9, (unsigned int *)v9);
      goto LABEL_139;
    case 0x25u:
      if ( v17 < 0xC )
        goto LABEL_61;
      v27 = *((unsigned __int16 *)v9 + 4);
      if ( (unsigned int)v27 > 0x10 )
      {
        updated = -1073741811;
        goto LABEL_139;
      }
      v28 = *((unsigned int *)v9 + 1);
      if ( (unsigned int)(v28 - 1) <= 3 )
      {
        updated = -1073741811;
        goto LABEL_139;
      }
      if ( (_WORD)v27 )
      {
        if ( !(_DWORD)v28 )
        {
          updated = -1073741811;
          goto LABEL_139;
        }
      }
      else if ( (_DWORD)v28 )
      {
LABEL_61:
        updated = -1073741811;
        goto LABEL_139;
      }
      if ( 16 * v27 + 12 != v17 )
        goto LABEL_61;
      if ( (_WORD)v27 )
        v8 = (_QWORD *)((char *)v9 + 12);
      EtwpUpdatePeriodicCaptureState(*(unsigned int *)v9, v28, v27, v8);
LABEL_139:
      v23 = (void *)a4;
      v24 = v33;
LABEL_140:
      if ( updated < 0 )
      {
        v30 = a6;
      }
      else
      {
        if ( Size )
          memmove(v23, v9, Size);
        v30 = a6;
        *a6 = Size;
      }
      if ( updated == -1073741789 && ((unsigned int)(v24 - 15) <= 1 || (unsigned int)(v24 - 21) <= 1)
        || (unsigned int)v24 <= 0x28 && (v31 = 0x1D700880000LL, _bittest64(&v31, v24)) )
      {
        *v30 = Size;
      }
LABEL_151:
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      return (unsigned int)updated;
    case 0x26u:
      if ( v17 < 8 || (v17 & 7) != 0 || v16 < 2 )
        goto LABEL_61;
      Size_4 = 0;
      updated = EtwpGetPrivateSessionTraceHandle(v9, v17 >> 3, &Size_4);
      if ( !updated )
      {
        Size = 2;
        *(_WORD *)v9 = Size_4;
      }
      goto LABEL_139;
    case 0x27u:
      if ( v17 < 2 || v16 < 8 )
        goto LABEL_61;
      v29 = EtwpGetCurrentSiloState();
      updated = EtwpRegisterPrivateSession(v29, *(unsigned __int16 *)v9, (char *)v9 + 4, v9);
      if ( !updated )
        Size = 8;
      goto LABEL_139;
    case 0x28u:
      if ( v17 < 8 || v16 < 2 )
        goto LABEL_61;
      updated = EtwpQuerySessionDemuxObject(*v9, v9);
      if ( !updated )
        Size = 2;
      goto LABEL_139;
    case 0x29u:
      if ( v17 < 8 )
        goto LABEL_61;
      updated = EtwpSetProviderBinaryTracking(CurrentSiloState, *(unsigned int *)v9, *((unsigned __int8 *)v9 + 4));
      goto LABEL_139;
    case 0x2Au:
      v24 = v33;
      v23 = (void *)a4;
      if ( v16 < 4 )
        goto LABEL_135;
      *(_DWORD *)v9 = *(_DWORD *)(CurrentSiloState + 16);
      Size = 4;
      updated = 0;
      goto LABEL_140;
    case 0x2Bu:
      v24 = v33;
      v23 = (void *)a4;
      if ( v16 < 4 )
      {
LABEL_135:
        updated = -1073741811;
      }
      else
      {
        *(_DWORD *)v9 = EtwpMaxPmcCounter;
        Size = 4;
        updated = 0;
      }
      goto LABEL_140;
    default:
      updated = -1073741808;
      goto LABEL_139;
  }
}
