/*
 * XREFs of Control_Transfer_Complete @ 0x1C00062CC
 * Callers:
 *     Control_Transfer_CompleteCancelable @ 0x1C0006218 (Control_Transfer_CompleteCancelable.c)
 *     Control_WdfDpcForCanceledOnQueueTransferCompletion @ 0x1C0040F50 (Control_WdfDpcForCanceledOnQueueTransferCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqdDD @ 0x1C000648C (WPP_RECORDER_SF_DDqdDD.c)
 *     TR_GetUsbdStatusFromTrbCompletionCode @ 0x1C0006570 (TR_GetUsbdStatusFromTrbCompletionCode.c)
 *     TR_ReleaseDoubleBuffer @ 0x1C000E678 (TR_ReleaseDoubleBuffer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     TR_SendCompleteStageRequest @ 0x1C003FE60 (TR_SendCompleteStageRequest.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x1C004FF90 (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 */

KIRQL __fastcall Control_Transfer_Complete(__int64 a1, __int64 a2)
{
  int v4; // r8d
  int UsbdStatusFromTrbCompletionCode; // r9d
  __int64 v6; // rdx
  __int64 v7; // r10
  int v8; // ebp
  __int64 v9; // r15
  __int64 v10; // r13
  KIRQL v11; // bl
  KIRQL result; // al
  int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rbx
  KIRQL v16; // di
  __int64 v17; // r8
  struct _MDL *v18; // rcx

  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  v6 = *(unsigned int *)(a2 + 124);
  v7 = *(_QWORD *)(a2 + 48);
  if ( (_DWORD)v6 )
  {
    UsbdStatusFromTrbCompletionCode = TR_GetUsbdStatusFromTrbCompletionCode(a1, v6, 0xFFFFFFFFLL);
    *(_DWORD *)(v7 + 4) = UsbdStatusFromTrbCompletionCode;
    if ( UsbdStatusFromTrbCompletionCode <= -1073738240 )
    {
      if ( UsbdStatusFromTrbCompletionCode == -1073738240 )
      {
        v8 = -1073741637;
        goto LABEL_8;
      }
      if ( UsbdStatusFromTrbCompletionCode == -2147483136
        || UsbdStatusFromTrbCompletionCode == -2147482880
        || UsbdStatusFromTrbCompletionCode == -2147482112
        || UsbdStatusFromTrbCompletionCode == -1073739264 )
      {
        v8 = -1073741811;
        goto LABEL_8;
      }
    }
    else
    {
      switch ( UsbdStatusFromTrbCompletionCode )
      {
        case -1073737728:
          v8 = -1073741670;
          goto LABEL_8;
        case -1073713152:
          v8 = -1073741810;
          goto LABEL_8;
        case -1073676288:
          v8 = -1073741536;
          goto LABEL_8;
      }
      if ( (unsigned int)UsbdStatusFromTrbCompletionCode <= 1 )
      {
        v8 = 0;
LABEL_8:
        *(_DWORD *)(a2 + 120) = v8;
        goto LABEL_9;
      }
    }
    v8 = -1073741823;
    goto LABEL_8;
  }
  if ( *(_DWORD *)(a2 + 112) == 3 || *(_DWORD *)(a2 + 116) == 3 )
  {
    *(_DWORD *)(a2 + 120) = -1073741536;
    goto LABEL_28;
  }
  v13 = *(_DWORD *)(a2 + 120);
  switch ( v13 )
  {
    case -1073741810:
      v14 = -1073713152;
      goto LABEL_29;
    case -1073741670:
      v14 = -1073737728;
      goto LABEL_29;
    case -1073741637:
      v14 = -1073738240;
      goto LABEL_29;
    case -1073741536:
LABEL_28:
      v14 = -1073676288;
      goto LABEL_29;
  }
  v14 = v13 != 0 ? 0x80000300 : 0;
LABEL_29:
  *(_DWORD *)(v7 + 4) = v14;
  v8 = *(_DWORD *)(a2 + 120);
LABEL_9:
  v9 = *(unsigned int *)(a2 + 108);
  *(_DWORD *)(v7 + 36) = v9;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqdDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      v4,
      UsbdStatusFromTrbCompletionCode);
  v10 = *(_QWORD *)(a2 + 48);
  if ( *(_DWORD *)(a2 + 64) == 2 )
  {
    TR_ReleaseDoubleBuffer(a1, *(_QWORD *)(a2 + 88));
    *(_QWORD *)(a2 + 88) = 0LL;
  }
  else if ( *(_DWORD *)(a2 + 64) == 3 )
  {
    if ( *(_BYTE *)(a1 + 280) )
    {
      if ( *(_DWORD *)(a2 + 200) )
      {
        TR_SendCompleteStageRequest(a1);
        SecureDmaEnabler_ReleaseResourcesAfterDma(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL), a2 + 168);
      }
    }
    else if ( *(_QWORD *)(a2 + 96) )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
      v16 = KfRaiseIrql(2u);
      LOBYTE(v17) = (*(_BYTE *)(v10 + 32) & 1) == 0;
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v15 + 8) + 96LL))(v15, *(_QWORD *)(a2 + 96), v17);
      KeLowerIrql(v16);
      *(_QWORD *)(a2 + 96) = 0LL;
    }
    v18 = *(struct _MDL **)(a2 + 72);
    if ( v18 && v18 != *(struct _MDL **)(v10 + 48) && v18 != *(struct _MDL **)(a1 + 120) )
    {
      IoFreeMdl(v18);
      *(_QWORD *)(a2 + 72) = 0LL;
    }
  }
  *(_BYTE *)(a2 + 16) = 0;
  v11 = KfRaiseIrql(2u);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2104))(
    WdfDriverGlobals,
    *(_QWORD *)(a2 + 24),
    (unsigned int)v8);
  KeLowerIrql(v11);
  result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  ++*(_DWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 248) += v9;
  *(_BYTE *)(a1 + 104) = result;
  if ( v8 < 0 )
    ++*(_DWORD *)(a1 + 244);
  return result;
}
