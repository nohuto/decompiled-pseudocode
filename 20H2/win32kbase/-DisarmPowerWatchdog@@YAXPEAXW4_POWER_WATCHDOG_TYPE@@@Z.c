/*
 * XREFs of ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0070C80
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0070400 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C0070E70 (PowerOnMonitor.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C011CBB4 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWrite.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x1C012A0F8 (McTemplateK0x_EtwWriteTransfer.c)
 */

void __fastcall DisarmPowerWatchdog(__int64 a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  _QWORD InputBuffer[13]; // [rsp+40h] [rbp-68h] BYREF
  char v10; // [rsp+B0h] [rbp+8h] BYREF
  int v11; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v12; // [rsp+C8h] [rbp+20h] BYREF

  if ( a1 )
  {
    memset(InputBuffer, 0, 0x60uLL);
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = a1;
    LODWORD(InputBuffer[3]) = 412;
    ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, 0LL, 0);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0x_EtwWriteTransfer(v4, &StopPowerWatchdog, v5, a1);
    if ( (unsigned int)dword_1C023F378 > 5 && tlgKeywordOn((__int64)&dword_1C023F378, 0x400000000000LL) )
    {
      v11 = a2;
      v12 = a1;
      v10 = 0;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v6,
        (unsigned int)&unk_1C021235B,
        v7,
        v8,
        (__int64)&v10,
        (__int64)&v12,
        (__int64)&v11);
    }
  }
}
