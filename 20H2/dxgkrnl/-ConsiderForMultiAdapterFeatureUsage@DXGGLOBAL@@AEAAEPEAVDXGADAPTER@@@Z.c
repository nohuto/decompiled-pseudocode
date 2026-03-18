/*
 * XREFs of ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1C017AEE8
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017775C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     ?RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C017AE70 (-RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DelayDestroyAdapterWork@DXGGLOBAL@@SAXPEAX@Z @ 0x1C0267BA0 (-DelayDestroyAdapterWork@DXGGLOBAL@@SAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage(DXGGLOBAL *this, struct DXGADAPTER *a2)
{
  bool result; // al
  int v3; // ecx

  result = 0;
  if ( *((_QWORD *)a2 + 338) )
  {
    v3 = *((_DWORD *)a2 + 87);
    if ( (v3 & 4) == 0 )
      return (v3 & 0x10) == 0;
  }
  return result;
}
