/*
 * XREFs of ?Initialize@CForegroundInfo@@SAJXZ @ 0x1C0050EA8
 * Callers:
 *     InitializeInputComponents @ 0x1C0023A2C (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CForegroundInfo::Initialize(__int64 a1)
{
  CInputDest *v1; // rax
  CInputDest *v2; // rbx

  if ( gpForegroundInfo )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v1 = (CInputDest *)Win32AllocPoolZInit(0x78uLL);
  v2 = v1;
  if ( v1 )
  {
    memset(v1, 0, 0x70uLL);
    *((_BYTE *)v2 + 112) = 0;
  }
  else
  {
    v2 = 0LL;
  }
  gpForegroundInfo = v2;
  return v2 == 0LL ? 0xC0000017 : 0;
}
