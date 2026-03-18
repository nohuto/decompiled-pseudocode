/*
 * XREFs of ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18002B3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x18002B454 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x18014C99C (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x18014D85C (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ?wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z @ 0x18014E39C (-wil_RtlStagingConfig_RecordFeatureUsage@@YAJIIH@Z.c)
 *     ?wil_StagingConfig_RecordFeatureUsage@@YAJIIH@Z @ 0x18014E40C (-wil_StagingConfig_RecordFeatureUsage@@YAJIIH@Z.c)
 */

void __fastcall wil::details::WilApiImpl_RecordFeatureUsage(wil::details *this, unsigned int a2, unsigned int a3)
{
  int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // edi

  v3 = a2 >> 31;
  v4 = a2 & 0x7FFFFFFF;
  v5 = (unsigned int)this;
  if ( (_DWORD)this || a3 || v4 )
  {
    if ( (a2 & 0x40000000) != 0 )
    {
      wil::details::FeatureStateManager::QueueBackgroundSRUMUsageReporting(
        &wil::details::g_featureStateManager,
        (unsigned int)this,
        a2,
        a3);
    }
    else if ( a3 || v4 == 254 )
    {
      wil::details::FeatureStateManager::RecordFeatureUsage(
        &wil::details::g_featureStateManager,
        (unsigned int)this,
        v4,
        a3);
    }
    else if ( (unsigned int)wil_RtlStagingConfig_RecordFeatureUsage((unsigned int)this, v4, v3) )
    {
      wil_StagingConfig_RecordFeatureUsage(v5, v4, v3);
    }
  }
  else
  {
    wil::details::FeatureStateManager::FlushUsage((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
  }
}
