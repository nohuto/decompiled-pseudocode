/*
 * XREFs of ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0208FF8
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208B34 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C001C71C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?OpenMonitorDataStore@DXGMONITOR@@UEBAJ_NPEAPEAX@Z @ 0x1C01DC750 (-OpenMonitorDataStore@DXGMONITOR@@UEBAJ_NPEAPEAX@Z.c)
 *     ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x1C020CB18 (-_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorConfigurationFromMonitorStore(DXGMONITOR *this)
{
  __int64 v1; // rax
  int MonitorConfigurationFromRegistry; // ebx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 25);
  v5 = 0LL;
  if ( *(_BYTE *)(v1 + 16) )
  {
    MonitorConfigurationFromRegistry = DXGMONITOR::OpenMonitorDataStore((DXGMONITOR *)((char *)this + 8), 1, &v5);
    if ( MonitorConfigurationFromRegistry >= 0 )
      MonitorConfigurationFromRegistry = DXGMONITOR::_RetrieveMonitorConfigurationFromRegistry(this, v5, 0);
  }
  else
  {
    MonitorConfigurationFromRegistry = -1073741275;
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v5);
  return (unsigned int)MonitorConfigurationFromRegistry;
}
