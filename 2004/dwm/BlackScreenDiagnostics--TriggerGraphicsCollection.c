/*
 * XREFs of BlackScreenDiagnostics::TriggerGraphicsCollection @ 0x140009674
 * Callers:
 *     ?DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXXZ @ 0x14000877C (-DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXXZ.c)
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x140009084 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     __security_check_cookie @ 0x140003190 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14000A064 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

__int64 __fastcall BlackScreenDiagnostics::TriggerGraphicsCollection(unsigned __int8 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  _DWORD v4[4]; // [rsp+20h] [rbp-40h] BYREF
  int *v5; // [rsp+30h] [rbp-30h]
  int v6; // [rsp+38h] [rbp-28h]
  int v7; // [rsp+3Ch] [rbp-24h]
  int v8; // [rsp+40h] [rbp-20h] BYREF
  UUID v9; // [rsp+44h] [rbp-1Ch]
  unsigned int v10; // [rsp+54h] [rbp-Ch]

  v4[1] = 0;
  v7 = 0;
  v4[0] = 0;
  v4[3] = 0;
  v4[2] = 1031;
  v5 = &v8;
  v6 = 24;
  v10 = a2 | (2 * a1);
  v9 = Uuid;
  v8 = 2;
  result = D3DKMTEscape(v4);
  if ( (int)result < 0 )
    return MicrosoftTelemetryAssertTriggeredArgs(v3, (unsigned int)result, (v10 >> 1) & 1);
  return result;
}
