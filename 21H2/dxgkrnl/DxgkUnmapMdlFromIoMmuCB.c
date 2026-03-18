/*
 * XREFs of DxgkUnmapMdlFromIoMmuCB @ 0x1C0054C70
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x1C001B450 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     ?SysMmClosePhysicalObjectByAdapter@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x1C001B538 (-SysMmClosePhysicalObjectByAdapter@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 *     DpiGetSysMmAdapterFromDevice @ 0x1C001BAD0 (DpiGetSysMmAdapterFromDevice.c)
 */

void __fastcall DxgkUnmapMdlFromIoMmuCB(__int64 a1, struct SYSMM_ADAPTER ***a2)
{
  struct SYSMM_ADAPTER *SysMmAdapterFromDevice; // rax
  struct SYSMM_ADAPTER **v4; // rbx
  int v5; // r8d

  SysMmAdapterFromDevice = (struct SYSMM_ADAPTER *)DpiGetSysMmAdapterFromDevice();
  v4 = *a2;
  SysMmClosePhysicalObjectByAdapter(v4, SysMmAdapterFromDevice, v5);
  SysMmUnreferencePhysicalObject((struct SYSMM_PHYSICAL_OBJECT *)v4);
}
