/*
 * XREFs of ?Initialize@CInputSystemMetrics@@SAJXZ @ 0x1C0023704
 * Callers:
 *     InitializeInputComponents @ 0x1C0023A2C (InitializeInputComponents.c)
 * Callees:
 *     ?WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z @ 0x1C00237B4 (-WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z.c)
 *     ?WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z @ 0x1C0023900 (-WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputSystemMetrics::Initialize(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned int *v3; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  CInputSystemMetrics *v7; // rcx

  if ( gpInputSystemMetrics )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v1 = Win32AllocPoolZInit(0xCuLL);
  v3 = (unsigned int *)v1;
  if ( v1 )
  {
    *(_QWORD *)v1 = 0LL;
    *(_DWORD *)(v1 + 8) = 0;
  }
  else
  {
    v3 = 0LL;
  }
  gpInputSystemMetrics = (struct CInputSystemMetrics *)v3;
  if ( !v3 )
    return 3221225495LL;
  v5 = *v3;
  CInputSystemMetrics::WriteSystemMetricsKey(v2, *v3, 0LL);
  CInputSystemMetrics::WriteSystemMetricsKey(v6, v5, 1LL);
  CInputSystemMetrics::WritePointerDevicePresenceKey(v7, v3[1]);
  return 0LL;
}
