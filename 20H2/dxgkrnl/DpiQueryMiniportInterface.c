/*
 * XREFs of DpiQueryMiniportInterface @ 0x1C01808E0
 * Callers:
 *     DpiFdoInitializeMipiDsi @ 0x1C00214D8 (DpiFdoInitializeMipiDsi.c)
 *     DpiFdoInitializeDP @ 0x1C0021598 (DpiFdoInitializeDP.c)
 *     DpiFdoInitializeDisplayDiagnostics @ 0x1C002163C (DpiFdoInitializeDisplayDiagnostics.c)
 *     DpiGetAdapterInfo @ 0x1C0177B64 (DpiGetAdapterInfo.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C017DA5C (DpiFdoInitializeGpuVirtualization.c)
 *     ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C017DB9C (-DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C017DD1C (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFdoInitializeFdo @ 0x1C017FE94 (DpiFdoInitializeFdo.c)
 *     DpiFdoStartAdapter @ 0x1C01815E4 (DpiFdoStartAdapter.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x1C02D032C (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 *     DpiFdoHandleQueryIndirectDispInterface @ 0x1C02D2300 (DpiFdoHandleQueryIndirectDispInterface.c)
 *     DpiFdoHandleQueryThermalInterface @ 0x1C02D2860 (DpiFdoHandleQueryThermalInterface.c)
 * Callees:
 *     DpiDxgkDdiQueryInterface @ 0x1C0180974 (DpiDxgkDdiQueryInterface.c)
 */

__int64 __fastcall DpiQueryMiniportInterface(__int64 a1, __int64 a2, __int16 a3, __int16 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  __int16 v14; // [rsp+28h] [rbp-30h]
  __int16 v15; // [rsp+2Ah] [rbp-2Eh]
  int v16; // [rsp+2Ch] [rbp-2Ch]
  __int64 v17; // [rsp+30h] [rbp-28h]
  __int64 v18; // [rsp+38h] [rbp-20h]
  int v19; // [rsp+40h] [rbp-18h]
  int v20; // [rsp+44h] [rbp-14h]

  v16 = 0;
  LODWORD(v6) = -1073741637;
  v20 = 0;
  v7 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(*(_QWORD *)(v7 + 40) + 256LL) )
  {
    v18 = 0LL;
    v14 = a3;
    v17 = a6;
    v13 = a2;
    v15 = a4;
    v19 = -1;
    v8 = DpiDxgkDdiQueryInterface(*(_QWORD *)(v7 + 40), *(_QWORD *)(v7 + 48), &v13);
    v6 = v8;
    if ( v8 < 0 )
    {
      v11 = WdLogNewEntry5_WdEvent(v10, v9);
      *(_QWORD *)(v11 + 24) = v6;
      WdLogEvent5_WdEvent(v11);
    }
  }
  return (unsigned int)v6;
}
