/*
 * XREFs of ?DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3@@@Z @ 0x1C002CB8C
 * Callers:
 *     VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3 @ 0x1C00F54F0 (VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DdiSetVidPnSourceAddressWithMultiPlaneOverlay3(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_DISPLAY *, struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *))DxgCoreInterface[63])(
           this,
           a2);
}
