/*
 * XREFs of Controller_AcquireWdfPowerReferenceForDebugger @ 0x1C00315D0
 * Callers:
 *     Controller_LPEEnterExitCallback @ 0x1C00333F0 (Controller_LPEEnterExitCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0014518 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C00360F0 (McTemplateK0pt_EtwWriteTransfer.c)
 */

void __fastcall Controller_AcquireWdfPowerReferenceForDebugger(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  if ( !*(_BYTE *)(a1 + 552) )
  {
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64 (__fastcall *)(), int, const char *))(WdfFunctions_01023 + 3504))(
           WdfDriverGlobals,
           *(_QWORD *)a1,
           0LL,
           Controller_AcquireWdfPowerReferenceForDebugger,
           10165,
           "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
    if ( v2 >= 0 )
    {
      *(_BYTE *)(a1 + 552) = 1;
      if ( (WPP_MAIN_CB.AlignmentRequirement & 8) != 0 )
        McTemplateK0pt_EtwWriteTransfer(v4, v3, v5, a1, 1);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(a1 + 72),
        v3,
        4,
        262,
        (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
        *(_QWORD *)a1,
        v2);
    }
  }
}
