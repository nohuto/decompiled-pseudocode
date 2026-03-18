/*
 * XREFs of NtTraceControl @ 0x1407954F0
 * Callers:
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140807EA4 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     PerfDiagpProxyWorker @ 0x140818A90 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1408603A8 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 * Callees:
 *     PtrToUlong @ 0x140251BD0 (PtrToUlong.c)
 *     PsGetCurrentThreadProcessId @ 0x1402A7BC0 (PsGetCurrentThreadProcessId.c)
 *     EtwpCreateActivityId @ 0x1402E10CC (EtwpCreateActivityId.c)
 *     EtwpQueryUsedProcessorCount @ 0x1402E1C80 (EtwpQueryUsedProcessorCount.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     EtwpGetCurrentSiloState @ 0x14045F8A6 (EtwpGetCurrentSiloState.c)
 *     WdiUpdateSem @ 0x14062C578 (WdiUpdateSem.c)
 *     EtwpGetPmcOwnership @ 0x14062CC44 (EtwpGetPmcOwnership.c)
 *     EtwpTransitionToRealtime @ 0x140630D00 (EtwpTransitionToRealtime.c)
 *     EtwpGetCompressionSettings @ 0x140635440 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1406356A0 (EtwpSetCompressionSettings.c)
 *     EtwpGetTraceGuidInfo @ 0x14065F10C (EtwpGetTraceGuidInfo.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406B9918 (EtwpReceiveReplyDataBlock.c)
 *     WdiDispatchControl @ 0x1406E6A28 (WdiDispatchControl.c)
 *     EtwpTrackProviderBinary @ 0x1406E80C4 (EtwpTrackProviderBinary.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x1406EC208 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpRealtimeConnect @ 0x1406EC524 (EtwpRealtimeConnect.c)
 *     EtwpFlushTrace @ 0x1406ECACC (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x1406ECE0C (EtwpUpdateTrace.c)
 *     EtwpStartTrace @ 0x1406EDF6C (EtwpStartTrace.c)
 *     EtwpStopTrace @ 0x1406EDFEC (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1406EEF3C (EtwpQueryTrace.c)
 *     EtwpValidateUserModeLoggerInfo @ 0x1406EF10C (EtwpValidateUserModeLoggerInfo.c)
 *     EtwpNotifyGuid @ 0x1406EF64C (EtwpNotifyGuid.c)
 *     EtwpSendReplyDataBlock @ 0x1406F2000 (EtwpSendReplyDataBlock.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     EtwpReceiveNotification @ 0x14078EF08 (EtwpReceiveNotification.c)
 *     EtwpEnableGuid @ 0x14079028C (EtwpEnableGuid.c)
 *     EtwpAddNotificationEvent @ 0x140791804 (EtwpAddNotificationEvent.c)
 *     EtwpEnumerateTraceGuids @ 0x1407949D4 (EtwpEnumerateTraceGuids.c)
 *     EtwpRegisterUMProvider @ 0x140796040 (EtwpRegisterUMProvider.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140797594 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpSetProviderTraitsUm @ 0x140797650 (EtwpSetProviderTraitsUm.c)
 *     EtwpReleaseLoggerContext @ 0x1407981E8 (EtwpReleaseLoggerContext.c)
 *     EtwpRegisterSecurityProvider @ 0x140865050 (EtwpRegisterSecurityProvider.c)
 *     EtwpGetGuidList @ 0x140883086 (EtwpGetGuidList.c)
 *     EtwpGetTraceGroupInfo @ 0x140883164 (EtwpGetTraceGroupInfo.c)
 *     EtwpUpdateDisallowList @ 0x1409E48B8 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1409E4B48 (EtwpGetDisallowList.c)
 *     EtwpGetTraceGuidList @ 0x1409E4C24 (EtwpGetTraceGuidList.c)
 *     EtwpUseDescriptorTypeUm @ 0x1409E4D1C (EtwpUseDescriptorTypeUm.c)
 *     EtwpIncrementTraceFile @ 0x1409E4DAC (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x1409E4E94 (EtwpQueryReferenceTime.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409EBB58 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpQuerySessionDemuxObject @ 0x1409EBD54 (EtwpQuerySessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x1409EBDD0 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409EC088 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpSetProviderBinaryTracking @ 0x1409F5378 (EtwpSetProviderBinaryTracking.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall NtTraceControl(
        unsigned int a1,
        unsigned int *a2,
        unsigned int a3,
        volatile signed __int64 *a4,
        unsigned int Length,
        _DWORD *a6)
{
  unsigned int v7; // esi
  unsigned int *v8; // r12
  int *v9; // rdi
  volatile void *v10; // r9
  __int64 CurrentSiloState; // r15
  int updated; // ebx
  char v13; // r8
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  unsigned int v17; // r14d
  unsigned int v18; // esi
  __int64 v19; // rdx
  int *Pool2; // rax
  __int64 v21; // r9
  void *v23; // rax
  volatile signed __int64 *v24; // rcx
  unsigned __int64 v25; // rsi
  void *v26; // rcx
  unsigned int v27; // edx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rsi
  _DWORD *v33; // rcx
  __int64 v34; // rdx
  unsigned int v36; // [rsp+30h] [rbp-68h]
  unsigned int v37; // [rsp+34h] [rbp-64h] BYREF
  unsigned int v38; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v39; // [rsp+3Ch] [rbp-5Ch]
  int v40; // [rsp+40h] [rbp-58h]
  void *Src; // [rsp+48h] [rbp-50h]
  void *v42; // [rsp+50h] [rbp-48h]
  void *v43; // [rsp+58h] [rbp-40h]

  v7 = a1;
  v36 = a1;
  v8 = 0LL;
  v9 = 0LL;
  Src = 0LL;
  v37 = 0;
  CurrentSiloState = EtwpGetCurrentSiloState();
  updated = 0;
  v40 = 0;
  LOBYTE(v39) = 0;
  if ( v13 )
  {
    v39 = v7 >> 31;
    v14 = v7 & 0x7FFFFFFF;
    if ( (v7 & 0x80000000) == 0 )
      v14 = v7;
    v7 = v14;
    v36 = v14;
    v15 = 0x7FFFFFFF0000LL;
    if ( a2 )
    {
      if ( a3 && ((unsigned __int64)a2 + a3 > 0x7FFFFFFF0000LL || (unsigned int *)((char *)a2 + a3) < a2) )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      a3 = 0;
    }
    if ( v10 )
      ProbeForWrite(v10, Length, 1u);
    else
      Length = 0;
    if ( !a6 )
    {
      updated = -1073741811;
      v40 = -1073741811;
      goto LABEL_161;
    }
    if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
      v15 = (__int64)a6;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    updated = v40;
  }
  if ( v7 <= 0x1B && (v16 = 134238208, _bittest(&v16, v7)) )
  {
    v17 = Length;
    v18 = a3;
  }
  else
  {
    v18 = a3;
    v17 = Length;
    if ( a3 || Length )
    {
      v19 = Length;
      if ( a3 > Length )
        v19 = a3;
      Pool2 = (int *)ExAllocatePool2(257LL, v19, 1350005829LL);
      v9 = Pool2;
      Src = Pool2;
      if ( !Pool2 )
      {
        updated = -1073741801;
        goto LABEL_161;
      }
      if ( a2 )
        memmove(Pool2, a2, a3);
    }
  }
  switch ( v36 )
  {
    case 1u:
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
      updated = EtwpValidateUserModeLoggerInfo((__int64)v9, v18, v17, v36 - 1);
      if ( updated >= 0 )
      {
        if ( (unsigned int)v21 <= 6 )
          __asm { jmp     rdx }
        v37 = 176;
      }
      goto LABEL_147;
    case 0xBu:
      if ( v18 != 96 || v17 != 96 )
        goto LABEL_61;
      updated = EtwpRealtimeConnect(v9);
      v37 = 96;
      goto LABEL_147;
    case 0xCu:
      if ( v17 != 16 )
        goto LABEL_61;
      updated = 0;
      EtwpCreateActivityId(a4);
      v25 = v36;
      goto LABEL_148;
    case 0xDu:
      if ( v18 != 48 || v17 )
        goto LABEL_61;
      updated = WdiDispatchControl((unsigned int *)v9);
      goto LABEL_147;
    case 0xEu:
      if ( v18 != 8 || v17 )
        goto LABEL_61;
      LODWORD(v23) = PtrToUlong((const void *)*a2);
      v42 = v23;
      updated = EtwpRealtimeDisconnectConsumerByHandle(v23);
      goto LABEL_147;
    case 0xFu:
      if ( v18 != 160 || v17 - 160 > 0xFF60 )
        goto LABEL_61;
      updated = EtwpRegisterUMProvider(CurrentSiloState, (_DWORD)v9, v17, (unsigned __int8)v39, (__int64)&v37);
      goto LABEL_147;
    case 0x10u:
      if ( v18 || v17 - 72 > 0xFFB8 )
        goto LABEL_61;
      updated = EtwpReceiveNotification(v9, v17, v39, &v37);
      goto LABEL_147;
    case 0x11u:
      if ( v18 < 0x48 || v17 != 72 || v9[1] != v18 )
        goto LABEL_61;
      if ( *v9 == 3 )
      {
        if ( v18 < 0x78 )
          goto LABEL_61;
        updated = EtwpEnableGuid(CurrentSiloState, (__int64)v9, 1);
        v37 = 72;
      }
      else
      {
        updated = EtwpNotifyGuid(CurrentSiloState, (__int64)v9, 1);
        v37 = 72;
      }
      goto LABEL_147;
    case 0x12u:
      if ( v18 < 0x48 || v9[1] != v18 )
        goto LABEL_61;
      v9[9] = PsGetCurrentThreadProcessId();
      updated = EtwpSendReplyDataBlock((__int64)v9);
      goto LABEL_147;
    case 0x13u:
      if ( v18 != 8 )
        goto LABEL_61;
      v38 = 0;
      updated = EtwpReceiveReplyDataBlock((unsigned int *)v9, v17, &v38);
      v37 = v38;
      goto LABEL_147;
    case 0x14u:
      if ( v18 || v17 )
        goto LABEL_61;
      updated = WdiUpdateSem();
      goto LABEL_147;
    case 0x15u:
      updated = EtwpGetTraceGuidList(CurrentSiloState, v9, v17 >> 4, &v37);
      v37 *= 16;
      goto LABEL_147;
    case 0x16u:
      if ( v18 != 16 )
        goto LABEL_61;
      v37 = v17;
      updated = EtwpGetTraceGuidInfo(CurrentSiloState, v9, v9, &v37);
      goto LABEL_147;
    case 0x17u:
      updated = EtwpEnumerateTraceGuids(CurrentSiloState, (__int64)v9, v17 / 0x24, &v37);
      v37 *= 36;
      goto LABEL_147;
    case 0x18u:
      if ( v18 || v17 )
        goto LABEL_61;
      updated = EtwpRegisterSecurityProvider(CurrentSiloState);
      goto LABEL_147;
    case 0x19u:
      if ( v18 != 4 || v17 != 16 )
        goto LABEL_61;
      updated = EtwpQueryReferenceTime(CurrentSiloState, (unsigned int)*v9, v9);
      v37 = 16;
      goto LABEL_147;
    case 0x1Au:
      if ( v18 != 8 )
        goto LABEL_61;
      updated = EtwpTrackProviderBinary(CurrentSiloState, (void **)v9);
      goto LABEL_147;
    case 0x1Bu:
      if ( v18 != 4 )
        goto LABEL_61;
      v26 = (void *)*a2;
      v43 = v26;
      if ( !v26 )
        goto LABEL_61;
      updated = EtwpAddNotificationEvent(v26, v39);
      goto LABEL_147;
    case 0x1Cu:
      if ( v18 < 8 )
        goto LABEL_61;
      v27 = v9[1];
      if ( 16LL * v27 + 8 != v18 )
        goto LABEL_61;
      if ( v27 )
        v8 = (unsigned int *)(v9 + 2);
      updated = EtwpUpdateDisallowList(CurrentSiloState, (unsigned int)*v9, v27, v8);
      goto LABEL_147;
    case 0x1Eu:
      if ( v18 != 24 || v17 - 120 > 0xFF88 )
        goto LABEL_61;
      updated = EtwpSetProviderTraitsUm(v9, v17, &v37);
      goto LABEL_147;
    case 0x1Fu:
      if ( v18 != 16 || v17 )
        goto LABEL_61;
      updated = EtwpUseDescriptorTypeUm(v9);
      goto LABEL_147;
    case 0x20u:
      updated = EtwpGetGuidList(CurrentSiloState, 2, (_DWORD)v9, v17 >> 4, (__int64)&v37);
      v37 *= 16;
      goto LABEL_147;
    case 0x21u:
      if ( v18 != 16 )
        goto LABEL_61;
      v37 = v17;
      updated = EtwpGetTraceGroupInfo(CurrentSiloState, v9, v9, &v37);
      goto LABEL_147;
    case 0x22u:
      if ( v18 != 8 )
        goto LABEL_61;
      v37 = v17;
      updated = EtwpGetDisallowList(CurrentSiloState, v9, v9, &v37);
      goto LABEL_147;
    case 0x23u:
      if ( v18 != 16 || v17 )
        goto LABEL_61;
      updated = EtwpSetCompressionSettings((unsigned int *)v9);
      goto LABEL_147;
    case 0x24u:
      if ( v18 != 8 || v17 != 16 )
        goto LABEL_61;
      v37 = 16;
      updated = EtwpGetCompressionSettings((unsigned __int16 *)v9, (unsigned int *)v9);
      goto LABEL_147;
    case 0x25u:
      if ( v18 < 0xC )
        goto LABEL_61;
      v28 = *((unsigned __int16 *)v9 + 4);
      if ( (unsigned int)v28 <= 0x10 )
      {
        v29 = (unsigned int)v9[1];
        if ( (unsigned int)(v29 - 1) <= 3 )
        {
          updated = -1073741811;
          goto LABEL_147;
        }
        if ( (_WORD)v28 )
        {
          if ( !(_DWORD)v29 )
          {
            updated = -1073741811;
            goto LABEL_147;
          }
        }
        else if ( (_DWORD)v29 )
        {
          goto LABEL_61;
        }
        if ( 16 * v28 + 12 == v18 )
        {
          if ( (_WORD)v28 )
            v8 = (unsigned int *)(v9 + 3);
          updated = EtwpUpdatePeriodicCaptureState((unsigned int)*v9, v29, v28, v8);
          goto LABEL_147;
        }
LABEL_61:
        updated = -1073741811;
        goto LABEL_147;
      }
      updated = -1073741811;
LABEL_147:
      v24 = a4;
      v25 = v36;
LABEL_148:
      if ( updated < 0 )
      {
        v33 = a6;
      }
      else
      {
        if ( v37 )
        {
          if ( v37 <= v17 )
          {
            memmove((void *)v24, v9, v37);
            v33 = a6;
            *a6 = v37;
            goto LABEL_155;
          }
          updated = -1073741789;
          v40 = -1073741789;
        }
        v33 = a6;
        *a6 = v37;
      }
LABEL_155:
      if ( updated == -1073741789 && ((unsigned int)(v25 - 15) <= 1 || (unsigned int)(v25 - 21) <= 1)
        || (unsigned int)v25 <= 0x28 && (v34 = 0x1D700880000LL, _bittest64(&v34, v25)) )
      {
        *v33 = v37;
      }
LABEL_161:
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      return (unsigned int)updated;
    case 0x26u:
      if ( v18 < 8 || (v18 & 7) != 0 || v17 < 2 )
        goto LABEL_61;
      LOWORD(v38) = 0;
      updated = EtwpGetPrivateSessionTraceHandle(v9, v18 >> 3, &v38);
      if ( !updated )
      {
        v37 = 2;
        *(_WORD *)v9 = v38;
      }
      goto LABEL_147;
    case 0x27u:
      if ( v18 < 2 || v17 < 8 )
        goto LABEL_61;
      updated = EtwpRegisterPrivateSession(CurrentSiloState, *(unsigned __int16 *)v9, v9 + 1, v9);
      if ( !updated )
        v37 = 8;
      goto LABEL_147;
    case 0x28u:
      if ( v18 < 8 || v17 < 2 )
        goto LABEL_61;
      updated = EtwpQuerySessionDemuxObject(*(_QWORD *)v9, v9);
      if ( !updated )
        v37 = 2;
      goto LABEL_147;
    case 0x29u:
      if ( v18 < 8 )
        goto LABEL_61;
      updated = EtwpSetProviderBinaryTracking(CurrentSiloState, (unsigned int)*v9, *((unsigned __int8 *)v9 + 4));
      goto LABEL_147;
    case 0x2Au:
      v25 = v36;
      v24 = a4;
      if ( v17 < 4 )
        goto LABEL_135;
      *v9 = *(_DWORD *)(CurrentSiloState + 16);
      v37 = 4;
      updated = 0;
      goto LABEL_148;
    case 0x2Bu:
      v25 = v36;
      v24 = a4;
      if ( v17 < 4 )
      {
LABEL_135:
        updated = -1073741811;
      }
      else
      {
        *v9 = *(_DWORD *)((char *)&NlsMbCodePageTag + 5);
        v37 = 4;
        updated = 0;
      }
      goto LABEL_148;
    case 0x2Cu:
      if ( v18 != 8 || v17 < 4 )
        goto LABEL_61;
      v30 = *(unsigned __int16 *)v9;
      if ( (_DWORD)v30 == 0xFFFF )
        v30 = *(unsigned __int8 *)(CurrentSiloState + 4232);
      v31 = EtwpAcquireLoggerContextByLoggerId(CurrentSiloState, v30, 0LL);
      v32 = v31;
      if ( v31 )
      {
        v37 = 4;
        *v9 = EtwpQueryUsedProcessorCount(v31);
        EtwpReleaseLoggerContext(v32, 0LL);
      }
      else
      {
        updated = -1073741811;
      }
      goto LABEL_147;
    case 0x2Du:
      v37 = v17;
      updated = EtwpGetPmcOwnership(v9, &v37);
      goto LABEL_147;
    default:
      updated = -1073741808;
      goto LABEL_147;
  }
}
