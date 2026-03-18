/*
 * XREFs of Isoch_MapStage @ 0x1C0008740
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0006DF0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C00079C0 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_MappingLoop @ 0x1C000A6A0 (Isoch_MappingLoop.c)
 * Callees:
 *     Controller_RaiseAndTrackIrql @ 0x1C0005C20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x1C0005CB4 (Controller_LowerAndTrackIrql.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C00090A0 (Isoch_Stage_MapIntoRing.c)
 *     StageQueue_Release @ 0x1C000E344 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C000E380 (TR_ReleaseSegments.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C004320C (Isoch_Transfer_CompleteCancelable.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C004FE30 (SecureDmaEnabler_PrepareMemoryForDma.c)
 */

__int64 __fastcall Isoch_MapStage(__int64 a1)
{
  __int64 *v1; // rdi
  char v2; // r14
  __int64 v4; // rbp
  _QWORD *v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // r12
  int v9; // esi
  __int64 result; // rax
  bool v11; // zf
  int v12; // r8d
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // ecx
  __int128 v17; // xmm0
  __int64 v18; // r8
  __int64 v19; // r14
  bool v20; // [rsp+38h] [rbp-30h]

  v1 = *(__int64 **)(a1 + 368);
  v2 = 0;
  v4 = *v1;
  *(_DWORD *)(a1 + 352) = 0;
  if ( *(_BYTE *)(a1 + 280) )
  {
    v11 = (*(_DWORD *)(a1 + 296))++ == -1;
    v12 = *(_DWORD *)(a1 + 296);
    if ( v11 )
    {
      *(_DWORD *)(a1 + 296) = 1;
      v12 = 1;
    }
    *((_DWORD *)v1 + 40) = v12;
    v13 = *(_QWORD *)(v4 + 48);
    switch ( *(_WORD *)(v13 + 2) )
    {
      case '9':
      case ':':
        v14 = v1[9];
        v15 = (unsigned int)(*(_DWORD *)(v4 + 88) + *(_DWORD *)(v4 + 92));
        v16 = *((_DWORD *)v1 + 13);
        *((_OWORD *)v1 + 8) = 0LL;
        *((_OWORD *)v1 + 9) = 0LL;
        *((_DWORD *)v1 + 34) = v16;
        *((_DWORD *)v1 + 33) = v15;
        *(_DWORD *)v14 = 1;
        *(_QWORD *)(v14 + 16) = v15;
        *(_DWORD *)(v14 + 24) = v16;
        *((_DWORD *)v1 + 35) = v12;
        v17 = *(_OWORD *)(v13 + 36);
        *((_DWORD *)v1 + 32) = 2;
        *((_OWORD *)v1 + 9) = v17;
        goto LABEL_15;
      default:
        if ( (int)SecureDmaEnabler_PrepareMemoryForDma(
                    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL),
                    v1[8],
                    v12,
                    *((_DWORD *)v1 + 13),
                    v12,
                    (__int64)(v1 + 16),
                    v1[9]) < 0 )
        {
          *((_DWORD *)v1 + 40) = 0;
          goto LABEL_23;
        }
LABEL_15:
        if ( *(_DWORD *)v1[9] != 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v14, v12, v13);
          if ( !KdRefreshDebuggerNotPresent() )
            __debugbreak();
        }
        Isoch_Stage_MapIntoRing(v1);
        result = *(_DWORD *)(a1 + 352) != 0 ? 4 : 0;
        break;
    }
  }
  else
  {
    v5 = *(_QWORD **)(a1 + 40);
    v6 = *(_QWORD *)(v4 + 48);
    v7 = *(_QWORD *)(v5[12] + 24LL);
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 248))(WdfDriverGlobals, *v5);
    if ( KeGetCurrentIrql() != 2 )
      v2 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 40));
    v20 = (*(_DWORD *)(v6 + 32) & 1) == 0;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _DWORD, __int64 (__fastcall *)(), __int64 *, bool))(*(_QWORD *)(v7 + 8) + 88LL))(
           v7,
           v8,
           v1[8],
           *(_QWORD *)(v1[8] + 32) + *(unsigned int *)(v1[8] + 44),
           *((_DWORD *)v1 + 13),
           Isoch_EvtDmaCallback,
           v1,
           v20);
    if ( v2 && KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD **)(a1 + 40));
    if ( v9 < 0 )
    {
LABEL_23:
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      v19 = *v1;
      if ( *((_BYTE *)v1 + 56) )
      {
        IoFreeMdl((PMDL)v1[8]);
        v1[8] = 0LL;
        *((_BYTE *)v1 + 56) = 0;
      }
      LOBYTE(v18) = 1;
      TR_ReleaseSegments(a1, v1 + 1, v18);
      TR_ReleaseSegments(a1, v1 + 3, 0LL);
      StageQueue_Release(v19 + 128, v1);
      if ( *(_DWORD *)(v4 + 112) == *(_DWORD *)(v4 + 116) )
        Isoch_Transfer_CompleteCancelable(a1, v4, -1, -1073737728, 0, 0);
      else
        *(_DWORD *)(v4 + 108) = *(_DWORD *)(v4 + 96) - *(_DWORD *)(v4 + 104);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
      return 1LL;
    }
    else if ( _InterlockedXor((volatile signed __int32 *)(a1 + 340), 1u) )
    {
      return 2LL;
    }
    else if ( *(_DWORD *)(a1 + 352) )
    {
      return 4LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
