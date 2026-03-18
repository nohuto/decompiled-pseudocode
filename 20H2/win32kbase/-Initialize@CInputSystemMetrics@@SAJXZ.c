/*
 * XREFs of ?Initialize@CInputSystemMetrics@@SAJXZ @ 0x1C009C4E0
 * Callers:
 *     InitializeInputComponents @ 0x1C009C80C (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     ?WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z @ 0x1C009C594 (-WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z.c)
 *     ?WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z @ 0x1C009C6E0 (-WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputSystemMetrics::Initialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rax
  __int64 v5; // rcx
  unsigned int *v6; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  CInputSystemMetrics *v10; // rcx

  if ( gpInputSystemMetrics )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v4 = (unsigned int *)Win32AllocPoolZInit(0xCuLL, 0x654D7953u);
  v6 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = 0LL;
    v4[2] = 0;
  }
  else
  {
    v6 = 0LL;
  }
  gpInputSystemMetrics = (struct CInputSystemMetrics *)v6;
  if ( !v6 )
    return 3221225495LL;
  v8 = *v6;
  CInputSystemMetrics::WriteSystemMetricsKey(v5, *v6, 0LL);
  CInputSystemMetrics::WriteSystemMetricsKey(v9, v8, 1LL);
  CInputSystemMetrics::WritePointerDevicePresenceKey(v10, v6[1]);
  return 0LL;
}
