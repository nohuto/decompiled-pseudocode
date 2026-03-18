/*
 * XREFs of ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C005B9E0
 * Callers:
 *     PowerOnMonitor @ 0x1C0053850 (PowerOnMonitor.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C005BCE0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0124E54 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWrite.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x1C0132438 (McTemplateK0x_EtwWriteTransfer.c)
 */

void __fastcall DisarmPowerWatchdog(__int64 a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  _QWORD InputBuffer[13]; // [rsp+40h] [rbp-68h] BYREF
  char v11; // [rsp+B0h] [rbp+8h] BYREF
  int v12; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v13; // [rsp+C8h] [rbp+20h] BYREF

  if ( a1 )
  {
    memset(InputBuffer, 0, 0x60uLL);
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = a1;
    LODWORD(InputBuffer[3]) = 412;
    ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, 0LL, 0);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0x_EtwWriteTransfer(v4, &StopPowerWatchdog, v5, a1);
    if ( (unsigned int)dword_1C0247378 > 5 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0247378, 0x400000000000LL, v5, v6) )
      {
        v12 = a2;
        v13 = a1;
        v11 = 0;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v7,
          (unsigned int)&unk_1C0219ECB,
          v8,
          v9,
          (__int64)&v11,
          (__int64)&v13,
          (__int64)&v12);
      }
    }
  }
}
