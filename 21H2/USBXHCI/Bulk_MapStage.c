/*
 * XREFs of Bulk_MapStage @ 0x1C000F118
 * Callers:
 *     Bulk_MappingLoop @ 0x1C000E8C4 (Bulk_MappingLoop.c)
 * Callees:
 *     Controller_RaiseAndTrackIrql @ 0x1C0005C20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x1C0005CB4 (Controller_LowerAndTrackIrql.c)
 *     StageQueue_Release @ 0x1C000E344 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C000E380 (TR_ReleaseSegments.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C000E3C8 (Bulk_Transfer_CompleteCancelable.c)
 *     Bulk_Stage_MapIntoRing @ 0x1C000F180 (Bulk_Stage_MapIntoRing.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C004FE30 (SecureDmaEnabler_PrepareMemoryForDma.c)
 */

__int64 __fastcall Bulk_MapStage(__int64 a1)
{
  unsigned __int8 *v1; // rsi
  unsigned int v2; // ebx
  char v4; // r15
  __int64 v5; // r14
  bool v7; // zf
  int v8; // r8d
  __int64 v9; // rcx
  unsigned __int16 v10; // ax
  bool v11; // cc
  char v12; // al
  __int64 v13; // r9
  _OWORD *v14; // rdx
  int v15; // r10d
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int64 v18; // r13
  _QWORD *v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // r13
  __int64 v22; // r12
  int v23; // r12d
  bool v24; // [rsp+38h] [rbp-40h]

  v1 = *(unsigned __int8 **)(a1 + 360);
  v2 = 0;
  v4 = 0;
  v5 = *(_QWORD *)v1;
  if ( *(_DWORD *)(*(_QWORD *)v1 + 76LL) != 3 )
  {
LABEL_2:
    Bulk_Stage_MapIntoRing(v1);
    return v2;
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
    if ( v10 <= 0x38u || (v11 = v10 <= 0x3Au, v12 = 1, !v11) )
      v12 = 0;
    v13 = *((_QWORD *)v1 + 7);
    v14 = v1 + 128;
    v15 = *((_DWORD *)v1 + 10);
    if ( v12 )
    {
      v16 = *(unsigned int *)(v5 + 112);
      *v14 = 0LL;
      *((_OWORD *)v1 + 9) = 0LL;
      *((_DWORD *)v1 + 34) = v15;
      *((_DWORD *)v1 + 33) = v16;
      *(_DWORD *)v13 = 1;
      *(_QWORD *)(v13 + 16) = v16;
      *(_DWORD *)(v13 + 24) = v15;
      *((_DWORD *)v1 + 35) = v8;
      v17 = *(_OWORD *)(v9 + 36);
      *(_DWORD *)v14 = 2;
      *((_OWORD *)v1 + 9) = v17;
      goto LABEL_12;
    }
    if ( (int)SecureDmaEnabler_PrepareMemoryForDma(
                *(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL),
                *((_QWORD *)v1 + 6),
                v8,
                v15,
                v8,
                (__int64)(v1 + 128),
                *((_QWORD *)v1 + 7)) >= 0 )
    {
LABEL_12:
      if ( **((_DWORD **)v1 + 7) != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v14, v8, v13);
        if ( !KdRefreshDebuggerNotPresent() )
          __debugbreak();
      }
      goto LABEL_2;
    }
    *((_DWORD *)v1 + 40) = 0;
  }
  else
  {
    v19 = *(_QWORD **)(a1 + 40);
    v20 = *(_QWORD *)(v5 + 48);
    v21 = *(_QWORD *)(v19[12] + 24LL);
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 248))(WdfDriverGlobals, *v19);
    if ( KeGetCurrentIrql() != 2 )
      v4 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 40));
    v24 = (*(_BYTE *)(v20 + 32) & 1) == 0;
    v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int64 (__fastcall *)(), unsigned __int8 *, bool))(*(_QWORD *)(v21 + 8) + 88LL))(
            v21,
            v22,
            *((_QWORD *)v1 + 6),
            *(_QWORD *)(*((_QWORD *)v1 + 6) + 32LL) + *(unsigned int *)(*((_QWORD *)v1 + 6) + 44LL),
            *((_DWORD *)v1 + 10),
            Bulk_EvtDmaCallback,
            v1,
            v24);
    if ( v4 && KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD **)(a1 + 40));
    if ( v23 >= 0 )
      return _InterlockedXor((volatile signed __int32 *)(a1 + 336), 1u) != 0 ? 2 : 0;
  }
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v18 = *(_QWORD *)v1;
  if ( v1[44] )
  {
    IoFreeMdl(*((PMDL *)v1 + 6));
    *((_QWORD *)v1 + 6) = 0LL;
    v1[44] = 0;
  }
  TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 1, 1);
  TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 3, 0);
  StageQueue_Release((unsigned __int8 *)(v18 + 128), v1);
  if ( *(_DWORD *)(v5 + 120) == *(_DWORD *)(v5 + 116) )
  {
    Bulk_Transfer_CompleteCancelable(a1, (__int64 *)v5, 0xC0001000, 1);
    v2 = 3;
  }
  else
  {
    v2 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return v2;
}
