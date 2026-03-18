/*
 * XREFs of Bulk_MapStage @ 0x1C000D4EC
 * Callers:
 *     Bulk_MappingLoop @ 0x1C000CC80 (Bulk_MappingLoop.c)
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C000C124 (Bulk_Transfer_CompleteCancelable.c)
 *     StageQueue_Release @ 0x1C000C574 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C000C5AC (TR_ReleaseSegments.c)
 *     Bulk_Stage_MapIntoRing @ 0x1C000D560 (Bulk_Stage_MapIntoRing.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0036B5C (WPP_RECORDER_SF_sds.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C004FED8 (SecureDmaEnabler_PrepareMemoryForDma.c)
 */

__int64 __fastcall Bulk_MapStage(__int64 a1)
{
  unsigned __int8 *v1; // rbx
  char v2; // r15
  unsigned int v4; // esi
  __int64 v5; // rbp
  bool v7; // zf
  int v8; // r9d
  __int64 v9; // r10
  unsigned __int16 v10; // ax
  bool v11; // al
  _OWORD *v12; // r8
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // r14d
  __int64 v16; // rax
  __int128 v17; // xmm0
  _QWORD *v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // r12
  __int64 v22; // rsi
  bool v23; // [rsp+38h] [rbp-30h]

  v1 = *(unsigned __int8 **)(a1 + 360);
  v2 = 0;
  v4 = 1;
  v5 = *(_QWORD *)v1;
  if ( *(_DWORD *)(*(_QWORD *)v1 + 76LL) != 3 )
  {
    Bulk_Stage_MapIntoRing(*(_QWORD *)(a1 + 360));
    return 0;
  }
  if ( *(_BYTE *)(a1 + 280) )
  {
    v7 = (*(_DWORD *)(a1 + 296))++ == -1;
    v8 = *(_DWORD *)(a1 + 296);
    if ( v7 )
    {
      *(_DWORD *)(a1 + 296) = 1;
      v8 = 1;
    }
    *((_DWORD *)v1 + 40) = v8;
    v9 = *(_QWORD *)(v5 + 48);
    v10 = *(_WORD *)(v9 + 2);
    v11 = v10 > 0x38u && v10 <= 0x3Au;
    v12 = v1 + 128;
    if ( v11 )
    {
      v13 = *((_QWORD *)v1 + 7);
      v14 = *((_DWORD *)v1 + 10);
      v15 = 0;
      v16 = *(unsigned int *)(v5 + 112);
      *v12 = 0LL;
      *((_OWORD *)v1 + 9) = 0LL;
      *((_DWORD *)v1 + 34) = v14;
      *((_DWORD *)v1 + 33) = v16;
      *(_DWORD *)v13 = 1;
      *(_QWORD *)(v13 + 16) = v16;
      *(_DWORD *)(v13 + 24) = v14;
      *((_DWORD *)v1 + 35) = v8;
      v17 = *(_OWORD *)(v9 + 36);
      *(_DWORD *)v12 = 2;
      *((_OWORD *)v1 + 9) = v17;
    }
    else
    {
      v15 = SecureDmaEnabler_PrepareMemoryForDma(
              *(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL),
              *((_QWORD *)v1 + 6),
              (_DWORD)v12,
              *((_DWORD *)v1 + 10),
              v8,
              (__int64)(v1 + 128),
              *((_QWORD *)v1 + 7));
      if ( v15 < 0 )
      {
        *((_DWORD *)v1 + 40) = 0;
        goto LABEL_28;
      }
    }
    if ( **((_DWORD **)v1 + 7) != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v13, (_DWORD)v12, v8);
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
    Bulk_Stage_MapIntoRing(v1);
    v4 = 0;
LABEL_28:
    if ( v15 >= 0 )
      return v4;
    goto LABEL_29;
  }
  v18 = *(_QWORD **)(a1 + 40);
  v19 = *(_QWORD *)(v5 + 48);
  v20 = *(_QWORD *)(v18[12] + 24LL);
  v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 248))(WdfDriverGlobals, *v18);
  if ( KeGetCurrentIrql() != 2 )
    v2 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 40));
  v23 = (*(_BYTE *)(v19 + 32) & 1) == 0;
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int64 (__fastcall *)(), unsigned __int8 *, bool))(*(_QWORD *)(v20 + 8) + 88LL))(
          v20,
          v21,
          *((_QWORD *)v1 + 6),
          *(_QWORD *)(*((_QWORD *)v1 + 6) + 32LL) + *(unsigned int *)(*((_QWORD *)v1 + 6) + 44LL),
          *((_DWORD *)v1 + 10),
          Bulk_EvtDmaCallback,
          v1,
          v23);
  if ( v2 && KeGetCurrentIrql() == 2 )
    Controller_LowerAndTrackIrql(*(_QWORD **)(a1 + 40));
  if ( v15 >= 0 )
  {
    v4 = _InterlockedXor((volatile signed __int32 *)(a1 + 336), 1u) != 0 ? 2 : 0;
    goto LABEL_28;
  }
LABEL_29:
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v22 = *(_QWORD *)v1;
  if ( v1[44] )
  {
    IoFreeMdl(*((PMDL *)v1 + 6));
    *((_QWORD *)v1 + 6) = 0LL;
    v1[44] = 0;
  }
  TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 1, 1);
  TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 3, 0);
  StageQueue_Release((unsigned __int8 *)(v22 + 128), v1);
  if ( *(_DWORD *)(v5 + 120) == *(_DWORD *)(v5 + 116) )
  {
    Bulk_Transfer_CompleteCancelable(a1, (__int64 *)v5, 0xC0001000, 1);
    v4 = 3;
  }
  else
  {
    v4 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return v4;
}
