/*
 * XREFs of Control_Transfer_Map @ 0x1C00040AC
 * Callers:
 *     Control_MapTransfer @ 0x1C0003F9C (Control_MapTransfer.c)
 * Callees:
 *     Control_Transfer_MapIntoRing @ 0x1C0004610 (Control_Transfer_MapIntoRing.c)
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0016684 (WPP_RECORDER_SF_ddL.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003567C (WPP_RECORDER_SF_sds.c)
 *     TR_EnsureInputBufferForTrbs @ 0x1C003E9BC (TR_EnsureInputBufferForTrbs.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C004F368 (SecureDmaEnabler_PrepareMemoryForDma.c)
 */

__int64 __fastcall Control_Transfer_Map(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // esi
  char v3; // r15
  __int64 v5; // r14
  __int64 v6; // rax
  __int16 v7; // dx
  __int64 v9; // rcx
  bool v10; // zf
  int v11; // r8d
  int v12; // r9d
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  int v16; // edx
  _QWORD *v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // r12
  int v20; // [rsp+20h] [rbp-48h]
  bool v21; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 344);
  v2 = 0;
  v3 = 0;
  v5 = *(_QWORD *)(v1 + 48);
  if ( *(_WORD *)(v5 + 2) == 50 && *(_DWORD *)(v5 + 56) )
  {
    *(_DWORD *)(v1 + 116) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 336),
      -10000LL * *(unsigned int *)(v5 + 56));
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
  if ( *(_DWORD *)(v6 + 24) <= 1u || (v9 = *(unsigned int *)(v5 + 64), (unsigned int)v9 >= *(_DWORD *)(v6 + 48)) )
    v7 = 0;
  else
    v7 = *(_WORD *)(*(_QWORD *)(v6 + 56) + 2 * v9);
  *(_WORD *)(a1 + 112) = v7;
  if ( *(_BYTE *)(a1 + 280) )
  {
    v2 = TR_EnsureInputBufferForTrbs(a1, (unsigned int)(*(_DWORD *)(a1 + 196) + 1));
    if ( v2 < 0 )
      return (unsigned int)-1073741670;
  }
  if ( *(_DWORD *)(v1 + 64) != 3 )
  {
    Control_Transfer_MapIntoRing(a1);
    return (unsigned int)v2;
  }
  if ( !*(_BYTE *)(a1 + 280) )
  {
    v17 = *(_QWORD **)(a1 + 40);
    v18 = *(_QWORD *)(v17[12] + 24LL);
    v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 248))(WdfDriverGlobals, *v17);
    if ( KeGetCurrentIrql() != 2 )
      v3 = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 40));
    v21 = (*(_BYTE *)(v5 + 32) & 1) == 0;
    v2 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int64 (__fastcall *)(), __int64, bool))(*(_QWORD *)(v18 + 8) + 88LL))(
           v18,
           v19,
           *(_QWORD *)(v1 + 72),
           *(_QWORD *)(*(_QWORD *)(v1 + 72) + 32LL) + *(unsigned int *)(*(_QWORD *)(v1 + 72) + 44LL),
           *(_DWORD *)(v1 + 104),
           Control_EvtDmaCallback,
           a1,
           v21);
    if ( v3 && KeGetCurrentIrql() == 2 )
      Controller_LowerAndTrackIrql(*(_QWORD *)(a1 + 40));
    goto LABEL_33;
  }
  v10 = (*(_DWORD *)(a1 + 296))++ == -1;
  v11 = *(_DWORD *)(a1 + 296);
  if ( v10 )
  {
    *(_DWORD *)(a1 + 296) = 1;
    v11 = 1;
  }
  v12 = *(_DWORD *)(v1 + 104);
  *(_DWORD *)(v1 + 200) = v11;
  v2 = SecureDmaEnabler_PrepareMemoryForDma(
         *(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL),
         *(_QWORD *)(v1 + 72),
         v11,
         v12,
         v11,
         v1 + 168,
         *(_QWORD *)(v1 + 96));
  if ( v2 >= 0 )
  {
    if ( **(_DWORD **)(v1 + 96) != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(
          WPP_GLOBAL_Control->DeviceExtension,
          v13,
          v14,
          v15,
          v20,
          (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\control.c",
          39,
          (__int64)"ScatterGatherList->NumberOfElements must be 1");
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
    Control_Transfer_MapIntoRing(a1);
LABEL_33:
    if ( v2 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v16,
        14,
        36,
        (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        v2);
    }
    return (unsigned int)v2;
  }
  *(_DWORD *)(v1 + 200) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_sds(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      v14,
      v15,
      v20,
      (__int64)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\control.c",
      46,
      (__int64)"SecureDmaEnabler_PrepareMemoryForDma has failed");
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  return (unsigned int)v2;
}
