/*
 * XREFs of ?DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXXZ @ 0x14000877C
 * Callers:
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x140009084 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     __security_check_cookie @ 0x140003190 (__security_check_cookie.c)
 *     BlackScreenDiagnostics::TriggerGraphicsCollection @ 0x140009674 (BlackScreenDiagnostics--TriggerGraphicsCollection.c)
 *     _tlgKeywordOn @ 0x140009A3C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x140009A68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14000A064 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

void __fastcall BlackScreenDiagnostics::CBlackScreenDiagnosticReport::DoDisplayModeReset(
        BlackScreenDiagnostics::CBlackScreenDiagnosticReport *this)
{
  __int64 v1; // rcx
  int v2; // eax
  __int64 v3; // rcx
  char v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+34h] [rbp-15h] BYREF
  __int64 v6; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v8; // [rsp+60h] [rbp+17h]
  int v9; // [rsp+68h] [rbp+1Fh]
  int v10; // [rsp+6Ch] [rbp+23h]
  UUID *v11; // [rsp+70h] [rbp+27h]
  int v12; // [rsp+78h] [rbp+2Fh]
  int v13; // [rsp+7Ch] [rbp+33h]
  char *v14; // [rsp+80h] [rbp+37h]
  int v15; // [rsp+88h] [rbp+3Fh]
  int v16; // [rsp+8Ch] [rbp+43h]

  v5 = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, &v5, 0LL);
  if ( v5 == 16 )
  {
    v2 = RtlPublishWnfStateData(WNF_DWM_DISPLAY_RESET_REQUEST, 0LL, 0LL, 0LL, 0LL) | 0x10000000;
    if ( v2 < 0 )
      MicrosoftTelemetryAssertTriggeredArgs(v3, (unsigned int)v2, 0LL);
  }
  else
  {
    if ( (unsigned int)dword_1400151C0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1400151C0, 0x800000000000LL) )
    {
      v16 = 0;
      v13 = 0;
      v10 = 0;
      v14 = &v4;
      v4 = 1;
      v11 = &Uuid;
      v8 = &v6;
      v6 = 50331648LL;
      v15 = 1;
      v12 = 16;
      v9 = 8;
      tlgWriteTransfer_EventWriteTransfer(v1, (int)&dword_14000FDA2, 0, 0, 5u, &v7);
    }
    LOBYTE(v1) = 1;
    BlackScreenDiagnostics::TriggerGraphicsCollection(v1, 0LL);
  }
}
