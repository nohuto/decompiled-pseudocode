/*
 * XREFs of Isoch_MapStage @ 0x1C0003780
 * Callers:
 *     Isoch_MappingLoop @ 0x1C0001D7C (Isoch_MappingLoop.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001F10 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0002AE0 (Isoch_WdfEvtIoQueueReadyNotification.c)
 * Callees:
 *     Isoch_Stage_MapIntoRing @ 0x1C0001050 (Isoch_Stage_MapIntoRing.c)
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     StageQueue_Release @ 0x1C000C574 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C000C5AC (TR_ReleaseSegments.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0035E5C (WPP_RECORDER_SF_sds.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0042800 (Isoch_Transfer_CompleteCancelable.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C004F278 (SecureDmaEnabler_PrepareMemoryForDma.c)
 */

__int64 __fastcall Isoch_MapStage(__int64 a1)
{
  __int64 v1; // r14
  char v2; // bp
  unsigned int v4; // edi
  __int64 v5; // r15
  _QWORD *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r12
  int v10; // esi
  bool v12; // zf
  int v13; // r8d
  __int64 v14; // r10
  char v15; // al
  _OWORD *v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // ecx
  __int128 v20; // xmm0
  __int64 v21; // r8
  __int64 v22; // rsi
  int v23; // [rsp+20h] [rbp-48h]
  bool v24; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 368);
  v2 = 0;
  v4 = 1;
  v5 = *(_QWORD *)v1;
  *(_DWORD *)(a1 + 352) = 0;
  if ( *(_BYTE *)(a1 + 280) )
  {
    v12 = (*(_DWORD *)(a1 + 296))++ == -1;
    v13 = *(_DWORD *)(a1 + 296);
    if ( v12 )
    {
      *(_DWORD *)(a1 + 296) = 1;
      v13 = 1;
    }
    *(_DWORD *)(v1 + 160) = v13;
    v14 = *(_QWORD *)(v5 + 48);
    switch ( *(_WORD *)(v14 + 2) )
    {
      case '9':
      case ':':
        v15 = 1;
        break;
      default:
        v15 = 0;
        break;
    }
    v16 = (_OWORD *)(v1 + 128);
    if ( v15 )
    {
      v17 = (unsigned int)(*(_DWORD *)(v5 + 88) + *(_DWORD *)(v5 + 92));
      v18 = *(_QWORD *)(v1 + 72);
      v10 = 0;
      v19 = *(_DWORD *)(v1 + 52);
      *v16 = 0LL;
      *(_OWORD *)(v1 + 144) = 0LL;
      *(_DWORD *)(v1 + 136) = v19;
      *(_DWORD *)(v1 + 132) = v17;
      *(_DWORD *)v18 = 1;
      *(_QWORD *)(v18 + 16) = v17;
      *(_DWORD *)(v18 + 24) = v19;
      *(_DWORD *)(v1 + 140) = v13;
      v20 = *(_OWORD *)(v14 + 36);
      *(_DWORD *)v16 = 2;
      *(_OWORD *)(v1 + 144) = v20;
    }
    else
    {
      v10 = SecureDmaEnabler_PrepareMemoryForDma(
              *(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL),
              *(_QWORD *)(v1 + 64),
              v13,
              *(_DWORD *)(v1 + 52),
              v13,
              v1 + 128,
              *(_QWORD *)(v1 + 72));
      if ( v10 < 0 )
      {
        *(_DWORD *)(v1 + 160) = 0;
        goto LABEL_9;
      }
    }
    if ( **(_DWORD **)(v1 + 72) != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(
          WPP_GLOBAL_Control->DeviceExtension,
          v18,
          v13,
          (_DWORD)v16,
          v23,
          (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\isoch.c",
          170,
          (__int64)"ScatterGatherList->NumberOfElements must be 1");
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
    Isoch_Stage_MapIntoRing((__int64 *)v1);
    v4 = *(_DWORD *)(a1 + 352) != 0 ? 4 : 0;
  }
  else
  {
    v6 = *(_QWORD **)(a1 + 40);
    v7 = *(_QWORD *)(v5 + 48);
    v8 = *(_QWORD *)(v6[12] + 24LL);
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 248))(WdfDriverGlobals, *v6);
    if ( KeGetCurrentIrql() != 2 )
      v2 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 40));
    v24 = (*(_DWORD *)(v7 + 32) & 1) == 0;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *), __int64, bool))(*(_QWORD *)(v8 + 8) + 88LL))(
            v8,
            v9,
            *(_QWORD *)(v1 + 64),
            *(_QWORD *)(*(_QWORD *)(v1 + 64) + 32LL) + *(unsigned int *)(*(_QWORD *)(v1 + 64) + 44LL),
            *(_DWORD *)(v1 + 52),
            Isoch_EvtDmaCallback,
            v1,
            v24);
    if ( v2 && KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD *)(a1 + 40));
    if ( v10 < 0 )
      goto LABEL_30;
    if ( _InterlockedXor((volatile signed __int32 *)(a1 + 340), 1u) )
    {
      v4 = 2;
    }
    else if ( *(_DWORD *)(a1 + 352) )
    {
      v4 = 4;
    }
    else
    {
      v4 = 0;
    }
  }
LABEL_9:
  if ( v10 >= 0 )
    return v4;
LABEL_30:
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v22 = *(_QWORD *)v1;
  if ( *(_BYTE *)(v1 + 56) )
  {
    IoFreeMdl(*(PMDL *)(v1 + 64));
    *(_QWORD *)(v1 + 64) = 0LL;
    *(_BYTE *)(v1 + 56) = 0;
  }
  LOBYTE(v21) = 1;
  TR_ReleaseSegments(a1, v1 + 8, v21);
  TR_ReleaseSegments(a1, v1 + 24, 0LL);
  StageQueue_Release(v22 + 128, v1);
  if ( *(_DWORD *)(v5 + 112) == *(_DWORD *)(v5 + 116) )
    Isoch_Transfer_CompleteCancelable(a1, v5, -1, -1073737728, 0, 0);
  else
    *(_DWORD *)(v5 + 108) = *(_DWORD *)(v5 + 96) - *(_DWORD *)(v5 + 104);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return 1LL;
}
