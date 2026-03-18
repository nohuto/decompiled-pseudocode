/*
 * XREFs of ?SerializeFrequencyRangesToBuffer@MonitorModes@DxgMonitor@@QEBAXPEAU_DMM_MONITORFREQUENCYRANGESET_SERIALIZATION@@I@Z @ 0x1C03B7BAC
 * Callers:
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x1C03B59EC (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 * Callees:
 *     ?GetFrequencyRangeSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ @ 0x1C03B7AF0 (-GetFrequencyRangeSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ.c)
 */

void __fastcall DxgMonitor::MonitorModes::SerializeFrequencyRangesToBuffer(
        struct _ERESOURCE *this,
        struct _DMM_MONITORFREQUENCYRANGESET_SERIALIZATION *a2,
        unsigned int a3)
{
  DxgMonitor::MonitorModes *v5; // rax
  char *v6; // rdx
  ULONG v7; // r8d
  __int64 v8; // rcx
  DxgMonitor::MonitorModes *v9; // rax

  if ( (unsigned int)DxgMonitor::MonitorModes::GetFrequencyRangeSerializationSizeInBytes(this) > a3 )
    WdLogSingleEntry0(1LL);
  *(_BYTE *)a2 = this[1].ActiveEntries;
  v5 = *(DxgMonitor::MonitorModes **)&this[1].NumberOfSharedWaiters;
  if ( v5 != (DxgMonitor::MonitorModes *)&this[1].NumberOfSharedWaiters )
  {
    v6 = (char *)v5 - 48;
    v7 = 0;
    if ( !v5 )
      v6 = 0LL;
    while ( v6 )
    {
      if ( v7 >= this[1].ActiveEntries )
        break;
      v8 = 6LL * v7;
      *(_OWORD *)((char *)a2 + 8 * v8 + 8) = *(_OWORD *)v6;
      *(_OWORD *)((char *)a2 + 8 * v8 + 24) = *((_OWORD *)v6 + 1);
      *(_OWORD *)((char *)a2 + 8 * v8 + 40) = *((_OWORD *)v6 + 2);
      v9 = (DxgMonitor::MonitorModes *)*((_QWORD *)v6 + 6);
      if ( v9 == (DxgMonitor::MonitorModes *)&this[1].NumberOfSharedWaiters )
        break;
      v6 = (char *)v9 - 48;
      if ( !v9 )
        v6 = 0LL;
      ++v7;
    }
  }
}
