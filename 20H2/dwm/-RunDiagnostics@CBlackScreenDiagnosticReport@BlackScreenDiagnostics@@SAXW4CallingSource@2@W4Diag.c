/*
 * XREFs of ?RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x14000945C
 * Callers:
 *     ?RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ @ 0x1400095D8 (-RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ.c)
 *     ?RunDiagnosticsFromLongPowerButtonHold@BlackScreenDiagnostics@@YAXXZ @ 0x140009660 (-RunDiagnosticsFromLongPowerButtonHold@BlackScreenDiagnostics@@YAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140003190 (__security_check_cookie.c)
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x140009084 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x140009904 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     _tlgKeywordOn @ 0x140009A3C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x140009A68 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

void __fastcall BlackScreenDiagnostics::CBlackScreenDiagnosticReport::RunDiagnostics(unsigned int a1, unsigned int a2)
{
  BlackScreenDiagnostics::CBlackScreenDiagnosticReport *v4; // rcx
  const unsigned __int16 *v5; // r9
  REGHANDLE v6; // rcx
  unsigned int v7; // [rsp+38h] [rbp-29h] BYREF
  unsigned int v8; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 v9; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+48h] [rbp-19h] BYREF
  __int64 *v11; // [rsp+68h] [rbp+7h]
  int v12; // [rsp+70h] [rbp+Fh]
  int v13; // [rsp+74h] [rbp+13h]
  UUID *v14; // [rsp+78h] [rbp+17h]
  int v15; // [rsp+80h] [rbp+1Fh]
  int v16; // [rsp+84h] [rbp+23h]
  int *v17; // [rsp+88h] [rbp+27h]
  int v18; // [rsp+90h] [rbp+2Fh]
  int v19; // [rsp+94h] [rbp+33h]
  int *v20; // [rsp+98h] [rbp+37h]
  int v21; // [rsp+A0h] [rbp+3Fh]
  int v22; // [rsp+A4h] [rbp+43h]

  if ( TryAcquireSRWLockExclusive(&BlackScreenDiagnostics::CBlackScreenDiagnosticReport::s_srwLock) )
  {
    TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1400151C0);
    UuidCreate(&Uuid);
    if ( (unsigned int)dword_1400151C0 > 5 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1400151C0, 0x800000000000LL) )
      {
        v22 = 0;
        v19 = 0;
        v16 = 0;
        v13 = 0;
        v20 = (int *)&v7;
        v21 = 4;
        v17 = (int *)&v8;
        v11 = &v9;
        v18 = 4;
        v7 = a2;
        v8 = a1;
        v9 = 50331648LL;
        v14 = &Uuid;
        v15 = 16;
        v12 = 8;
        tlgWriteTransfer_EventWriteTransfer((int)&dword_1400151C0, (int)&dword_14000FCA9, 0, 0, 6u, &v10);
      }
    }
    BlackScreenDiagnostics::CBlackScreenDiagnosticReport::Run(
      v4,
      (const unsigned __int16 *)a1,
      (const unsigned __int16 *)a2,
      v5);
    v6 = RegHandle;
    RegHandle = 0LL;
    dword_1400151C0 = 0;
    EventUnregister(v6);
    ReleaseSRWLockExclusive(&BlackScreenDiagnostics::CBlackScreenDiagnosticReport::s_srwLock);
  }
}
