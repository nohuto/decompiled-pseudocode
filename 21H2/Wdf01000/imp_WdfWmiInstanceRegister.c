/*
 * XREFs of imp_WdfWmiInstanceRegister @ 0x1C005DD50
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C001D0E8 (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 */

__int64 __fastcall imp_WdfWmiInstanceRegister(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWMIINSTANCE__ *WmiInstance)
{
  FxWmiInstanceExternal *pInstance; // [rsp+30h] [rbp+8h] BYREF

  pInstance = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)WmiInstance,
    0x1034u,
    (void **)&pInstance);
  return FxWmiProvider::AddInstance(pInstance->m_Provider, pInstance, 0);
}
