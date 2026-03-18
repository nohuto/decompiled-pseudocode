/*
 * XREFs of ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1C009C2A0
 * Callers:
 *     InitializeInputComponents @ 0x1C009C80C (InitializeInputComponents.c)
 * Callees:
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C0007E00 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InputExtensibilityCallout::Initialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  InputExtensibilityCallout *v4; // rcx
  _QWORD *v5; // rbx

  if ( gpInputExtensibilityCallout )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v5 = Win32AllocPoolZInit(0x318uLL, 0x70444E43u);
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
