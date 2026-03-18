/*
 * XREFs of Controller_AcquireWdfPowerReferenceForDebugger @ 0x1C0030B80
 * Callers:
 *     Controller_LPEEnterExitCallback @ 0x1C0032770 (Controller_LPEEnterExitCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0014644 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0035690 (McTemplateK0pt_EtwWriteTransfer.c)
 */

void __fastcall Controller_AcquireWdfPowerReferenceForDebugger(_QWORD *a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // [rsp+30h] [rbp-18h]

  if ( !*((_BYTE *)a1 + 552) )
  {
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64 (__fastcall *)(), int, const char *))(WdfFunctions_01023 + 3504))(
           WdfDriverGlobals,
           *a1,
           0LL,
           Controller_AcquireWdfPowerReferenceForDebugger,
           10205,
           "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
    if ( v2 >= 0 )
    {
      *((_BYTE *)a1 + 552) = 1;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 8) != 0 )
        McTemplateK0pt_EtwWriteTransfer(v4, v3, v5, a1, 1);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = v2;
      WPP_RECORDER_SF_qd(a1[9], 2u, 4u, 0x107u, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, *a1, v6);
    }
  }
}
