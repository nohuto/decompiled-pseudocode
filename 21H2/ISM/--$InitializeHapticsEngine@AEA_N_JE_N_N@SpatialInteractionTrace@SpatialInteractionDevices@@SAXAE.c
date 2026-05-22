/*
 * XREFs of ??$InitializeHapticsEngine@AEA_N_JE_N_N@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEA_N$$QEA_J$$QEAE$$QEA_N3@Z @ 0x180168644
 * Callers:
 *     ?RuntimeClassInitialize@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJ_N_J1E00V?$function@$$A6AXE@Z@std@@PEAUIHapticsTimerProvider@234@@Z @ 0x18016EA48 (-RuntimeClassInitialize@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJ_N_J1E00V-$func.c)
 * Callees:
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C65E8 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7254 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?InitializeHapticsEngine_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAX_N_JE00@Z @ 0x18016CF10 (-InitializeHapticsEngine_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAX_N_JE00@Z.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::InitializeHapticsEngine<bool &,__int64,unsigned char,bool,bool>(
        bool *a1,
        __int64 *a2,
        unsigned __int8 *a3,
        bool *a4,
        bool *a5)
{
  __int64 v9; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v10; // rcx

  if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v9,
      _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTrace::InitializeHapticsEngine_(v10, *a1, *a2, *a3, *a4, *a5);
  }
}
