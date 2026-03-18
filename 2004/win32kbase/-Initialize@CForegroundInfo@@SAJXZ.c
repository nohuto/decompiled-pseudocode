/*
 * XREFs of ?Initialize@CForegroundInfo@@SAJXZ @ 0x1C0034974
 * Callers:
 *     InitializeInputComponents @ 0x1C0034DBC (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CForegroundInfo::Initialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CInputDest *v4; // rax
  CInputDest *v5; // rbx

  if ( gpForegroundInfo )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v4 = (CInputDest *)Win32AllocPoolZInit(0x78uLL, 1919964227LL);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x70uLL);
    *((_BYTE *)v5 + 112) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  gpForegroundInfo = v5;
  return v5 == 0LL ? 0xC0000017 : 0;
}
