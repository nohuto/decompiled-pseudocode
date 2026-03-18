/*
 * XREFs of ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01A3C48
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0025210 (xxxSystemParametersInfo.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C005F5D0 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     EnablePTPDevices @ 0x1C0122AD0 (EnablePTPDevices.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0138F70 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     ?OnUserLogin@PTPTelemetry@@SAXXZ @ 0x1C01A3C10 (-OnUserLogin@PTPTelemetry@@SAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ?GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z @ 0x1C0152A10 (-GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z.c)
 *     ?GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z @ 0x1C01A2E50 (-GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z.c)
 *     ?TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z @ 0x1C01A4A4C (-TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PTPTelemetry::PTPConfigUpdateEx(struct DEVICEINFO *const a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v5; // bl
  unsigned int v6; // edi
  bool v7; // r14
  bool v8; // r15
  struct tagRECT v9; // xmm6
  struct tagRECT v10; // xmm7
  __int64 v11; // rax
  __int64 v12; // rcx
  struct DEVICEINFO *i; // rdx
  bool v14[8]; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v15; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v16; // [rsp+70h] [rbp-98h] BYREF
  struct tagRECT v17; // [rsp+88h] [rbp-80h] BYREF
  struct tagRECT v18; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v19[8]; // [rsp+A8h] [rbp-60h] BYREF
  char v20; // [rsp+C8h] [rbp-40h] BYREF
  char v21; // [rsp+D8h] [rbp-30h] BYREF

  *(_QWORD *)&v16.Length = 0x100000LL;
  *(_DWORD *)&v14[4] = 0;
  v16.Buffer = (PWSTR)&v20;
  v5 = 0;
  *(_QWORD *)&v15.Length = 0x100000LL;
  v15.Buffer = (PWSTR)&v21;
  v14[0] = 1;
  v14[1] = 0;
  v14[2] = 0;
  v19[1] = -__CFSHR__(HIDWORD(gTouchPadParameters), 3);
  v6 = 0;
  v7 = 0;
  v17 = 0LL;
  v19[2] = -__CFSHR__(HIDWORD(gTouchPadParameters), 4);
  v19[0] = gPTPEnabled;
  v19[3] = DWORD2(gTouchPadParameters);
  v19[4] = -__CFSHR__(HIDWORD(gTouchPadParameters), 10);
  v18 = 0LL;
  v19[5] = -__CFSHR__(*(&qword_1C024AFC0 + 1), 3);
  v19[6] = -__CFSHR__(*(&qword_1C024AFC0 + 1), 5);
  v19[7] = qword_1C024AFC0;
  if ( a1 )
  {
    v11 = *((_QWORD *)a1 + 60);
    v8 = 0;
    PTPTelemetry::s_HasTpDevice = 1;
    v12 = *(unsigned int *)(v11 + 904);
    switch ( (_DWORD)v12 )
    {
      case 1:
        v6 = 1;
        break;
      case 2:
        v6 = 2;
        break;
      case 3:
        v6 = 3;
        break;
      case 0:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, a2, a3, a4);
        v11 = *((_QWORD *)a1 + 60);
        break;
    }
    v9 = *(struct tagRECT *)(v11 + 124);
    v10 = *(struct tagRECT *)(v11 + 140);
    RimTelemetry::GetHidVidPidStrings(a1, &v16, &v15);
    for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    {
      if ( (*((_DWORD *)i + 50) & 0x80u) == 0 )
      {
        if ( !*((_BYTE *)i + 48) && !*((_WORD *)i + 444) )
          v5 = 1;
      }
      else if ( (unsigned int)(*(_DWORD *)(*((_QWORD *)i + 60) + 24LL) - 1) <= 3 )
      {
        v7 = 1;
      }
    }
  }
  else
  {
    PTPTelemetry::GetDeviceData(&v16, &v15, &v14[1], &v14[2], (unsigned int *)&v14[4], v14, &v17, &v18);
    v6 = *(_DWORD *)&v14[4];
    v8 = v14[0];
    v5 = v14[1];
    v7 = v14[2];
    v9 = v17;
    v10 = v18;
  }
  if ( PTPTelemetry::s_HasTpDevice )
  {
    v18 = v10;
    v17 = v9;
    TraceLoggingPTPSettingsConfigEvent((struct tagTPSETTINGS *)v19, v6, v8, v16.Buffer, v15.Buffer, v5, v7, &v17, &v18);
  }
}
