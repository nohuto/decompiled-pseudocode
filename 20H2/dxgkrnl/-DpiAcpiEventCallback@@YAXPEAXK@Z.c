/*
 * XREFs of ?DpiAcpiEventCallback@@YAXPEAXK@Z @ 0x1C00586C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DpiAcpiCallAcpiEventHandler@@YAJPEAU_DEVICE_OBJECT@@W4_DXGK_EVENT_TYPE@@KPEAX@Z @ 0x1C0058424 (-DpiAcpiCallAcpiEventHandler@@YAJPEAU_DEVICE_OBJECT@@W4_DXGK_EVENT_TYPE@@KPEAX@Z.c)
 */

void __fastcall DpiAcpiEventCallback(PVOID Object, unsigned int a2, __int64 a3)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)Object, &EventACPIEvent, a3, a2);
  DpiAcpiCallAcpiEventHandler(Object, DxgkAcpiEvent, a2, 0LL);
}
