/*
 * XREFs of ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1C01A99A8
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C00116E0 (xxxSystemParametersInfo.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C0051AA0 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     EnablePTPDevices @ 0x1C0128AB0 (EnablePTPDevices.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C013EC10 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     ?OnUserLogin@PTPTelemetry@@SAXXZ @ 0x1C01A9970 (-OnUserLogin@PTPTelemetry@@SAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ?GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z @ 0x1C0158D60 (-GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z.c)
 *     ?GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z @ 0x1C01A8BB0 (-GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z.c)
 *     ?TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z @ 0x1C01AA7AC (-TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PTPTelemetry::PTPConfigUpdateEx(struct DEVICEINFO *const a1)
{
  bool v2; // bl
  unsigned int v3; // edi
  bool v4; // r14
  bool v5; // r15
  struct tagRECT v6; // xmm6
  struct tagRECT v7; // xmm7
  __int64 v8; // rax
  __int64 v9; // rcx
  struct DEVICEINFO *i; // rdx
  bool v11[8]; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v12; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v13; // [rsp+70h] [rbp-98h] BYREF
  struct tagRECT v14; // [rsp+88h] [rbp-80h] BYREF
  struct tagRECT v15; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v16[8]; // [rsp+A8h] [rbp-60h] BYREF
  char v17; // [rsp+C8h] [rbp-40h] BYREF
  char v18; // [rsp+D8h] [rbp-30h] BYREF

  *(_QWORD *)&v13.Length = 0x100000LL;
  *(_DWORD *)&v11[4] = 0;
  v13.Buffer = (PWSTR)&v17;
  v2 = 0;
  *(_QWORD *)&v12.Length = 0x100000LL;
  v12.Buffer = (PWSTR)&v18;
  v11[0] = 1;
  v11[1] = 0;
  v11[2] = 0;
  v16[1] = -__CFSHR__(HIDWORD(gTouchPadParameters), 3);
  v3 = 0;
  v4 = 0;
  v14 = 0LL;
  v16[2] = -__CFSHR__(HIDWORD(gTouchPadParameters), 4);
  v16[0] = gPTPEnabled;
  v16[3] = DWORD2(gTouchPadParameters);
  v16[4] = -__CFSHR__(HIDWORD(gTouchPadParameters), 10);
  v15 = 0LL;
  v16[5] = -__CFSHR__(*(&qword_1C0250FC0 + 1), 3);
  v16[6] = -__CFSHR__(*(&qword_1C0250FC0 + 1), 5);
  v16[7] = qword_1C0250FC0;
  if ( a1 )
  {
    v8 = *((_QWORD *)a1 + 60);
    v5 = 0;
    PTPTelemetry::s_HasTpDevice = 1;
    v9 = *(unsigned int *)(v8 + 904);
    switch ( (_DWORD)v9 )
    {
      case 1:
        v3 = 1;
        break;
      case 2:
        v3 = 2;
        break;
      case 3:
        v3 = 3;
        break;
      case 0:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
        v8 = *((_QWORD *)a1 + 60);
        break;
    }
    v6 = *(struct tagRECT *)(v8 + 124);
    v7 = *(struct tagRECT *)(v8 + 140);
    RimTelemetry::GetHidVidPidStrings(a1, &v13, &v12);
    for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    {
      if ( (*((_DWORD *)i + 50) & 0x80u) == 0 )
      {
        if ( !*((_BYTE *)i + 48) && !*((_WORD *)i + 444) )
          v2 = 1;
      }
      else if ( (unsigned int)(*(_DWORD *)(*((_QWORD *)i + 60) + 24LL) - 1) <= 3 )
      {
        v4 = 1;
      }
    }
  }
  else
  {
    PTPTelemetry::GetDeviceData(&v13, &v12, &v11[1], &v11[2], (unsigned int *)&v11[4], v11, &v14, &v15);
    v3 = *(_DWORD *)&v11[4];
    v5 = v11[0];
    v2 = v11[1];
    v4 = v11[2];
    v6 = v14;
    v7 = v15;
  }
  if ( PTPTelemetry::s_HasTpDevice )
  {
    v15 = v7;
    v14 = v6;
    TraceLoggingPTPSettingsConfigEvent((struct tagTPSETTINGS *)v16, v3, v5, v13.Buffer, v12.Buffer, v2, v4, &v14, &v15);
  }
}
