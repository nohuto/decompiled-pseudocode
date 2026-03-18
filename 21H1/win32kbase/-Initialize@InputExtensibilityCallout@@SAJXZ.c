/*
 * XREFs of ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1C0050588
 * Callers:
 *     InitializeInputComponents @ 0x1C0023A2C (InitializeInputComponents.c)
 * Callees:
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C001EA6C (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InputExtensibilityCallout::Initialize(__int64 a1)
{
  InputExtensibilityCallout *v1; // rcx
  _QWORD *v2; // rbx

  if ( gpInputExtensibilityCallout )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v2 = (_QWORD *)Win32AllocPoolZInit(0x318uLL);
  if ( v2 )
  {
    *v2 = 0LL;
    v2[2] = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    v2[3] = 0LL;
    memset(v2 + 4, 0, 0x2F8uLL);
  }
  else
  {
    v2 = 0LL;
  }
  gpInputExtensibilityCallout = (InputExtensibilityCallout *)v2;
  if ( !v2 )
    InputExtensibilityCallout::UnInitialize(v1);
  return v2 == 0LL ? 0xC0000017 : 0;
}
