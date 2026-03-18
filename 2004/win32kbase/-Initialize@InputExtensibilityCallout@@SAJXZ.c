/*
 * XREFs of ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1C0034850
 * Callers:
 *     InitializeInputComponents @ 0x1C0034DBC (InitializeInputComponents.c)
 * Callees:
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C0007810 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InputExtensibilityCallout::Initialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  InputExtensibilityCallout *v4; // rcx
  _QWORD *v5; // rbx

  if ( gpInputExtensibilityCallout )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v5 = Win32AllocPoolZInit(0x318uLL, 1883524675LL);
  if ( v5 )
  {
    *v5 = 0LL;
    v5[2] = 0LL;
    v5[1] = 0LL;
    v5[2] = 0LL;
    v5[3] = 0LL;
    memset(v5 + 4, 0, 0x2F8uLL);
  }
  else
  {
    v5 = 0LL;
  }
  gpInputExtensibilityCallout = (InputExtensibilityCallout *)v5;
  if ( !v5 )
    InputExtensibilityCallout::UnInitialize(v4);
  return v5 == 0LL ? 0xC0000017 : 0;
}
