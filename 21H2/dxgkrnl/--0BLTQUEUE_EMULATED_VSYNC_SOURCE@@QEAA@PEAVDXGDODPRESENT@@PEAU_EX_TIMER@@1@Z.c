/*
 * XREFs of ??0BLTQUEUE_EMULATED_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_EX_TIMER@@1@Z @ 0x1C0160768
 * Callers:
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x1C01606B8 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C0002624 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

BLTQUEUE_EMULATED_VSYNC_SOURCE *__fastcall BLTQUEUE_EMULATED_VSYNC_SOURCE::BLTQUEUE_EMULATED_VSYNC_SOURCE(
        BLTQUEUE_EMULATED_VSYNC_SOURCE *this,
        struct DXGDODPRESENT *a2,
        struct _EX_TIMER *a3,
        struct _EX_TIMER *a4)
{
  char v8; // al
  bool v9; // zf
  BLTQUEUE_EMULATED_VSYNC_SOURCE *result; // rax
  DXGDODPRESENT *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &BLTQUEUE_EMULATED_VSYNC_SOURCE::`vftable';
  *((_BYTE *)this + 8) = 0;
  KeInitializeEvent((PRKEVENT)this + 1, SynchronizationEvent, 0);
  v8 = 0;
  *((_BYTE *)this + 8) = 0;
  if ( a2 )
  {
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(a2) + 109) & 0x100) != 0 )
    {
      if ( *((_QWORD *)DXGDODPRESENT::GetAdapter(v11) + 568) && g_bSkuSupportMultipleUsers )
      {
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation__private_reporting,
          0x1C274AEu,
          v12,
          v13,
          (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
          0);
        v8 = *((_BYTE *)this + 8);
      }
      else
      {
        *((_BYTE *)this + 8) = 1;
        v8 = 1;
      }
    }
    else
    {
      v8 = 0;
    }
  }
  v9 = v8 == 0;
  result = this;
  if ( v9 )
    a3 = a4;
  *((_QWORD *)this + 2) = a3;
  return result;
}
