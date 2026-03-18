/*
 * XREFs of ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1C00E7628
 * Callers:
 *     ?StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEADPEAU_EPROCESS@@@Z @ 0x1C00E73CC (-StartCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEADPEAU_EPROCESS@@@Z.c)
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00E75A4 (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FBBA0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FBEC0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@0@Z @ 0x1C02BDBC0 (-AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@0@Z.c)
 *     ?AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@@Z @ 0x1C02BDC88 (-AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00F9DB0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 DXGGLOBAL::GetFirstProfilerInterface()
{
  unsigned int v0; // ebx
  struct DXGTHREAD *Current; // rax

  v0 = -1;
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
    return *((unsigned int *)Current + 10);
  return v0;
}
