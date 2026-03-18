/*
 * XREFs of WPP_IFR_SF_DDid @ 0x1C0055F10
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005FD0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfRegistryOpenKey @ 0x1C0009970 (imp_WdfRegistryOpenKey.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C000B440 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 * Callees:
 *     FxIFR @ 0x1C000AA90 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00392A8 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_DDid(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        unsigned int globals_0,
        unsigned int level,
        __int64 flags,
        int id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x80000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_HandleAPI_cpp_Traceguids,
      0xAu,
      &globals_0,
      4LL,
      &level,
      4LL,
      &flags,
      8LL,
      &id,
      4LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0x14u,
    WPP_HandleAPI_cpp_Traceguids,
    0xAu,
    &globals_0,
    4LL,
    &level,
    4LL,
    &flags,
    8LL,
    &id,
    4LL,
    0LL);
}
