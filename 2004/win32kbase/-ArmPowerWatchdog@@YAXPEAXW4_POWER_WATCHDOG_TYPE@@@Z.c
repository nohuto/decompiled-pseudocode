/*
 * XREFs of ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0063DF4
 * Callers:
 *     PowerOnMonitor @ 0x1C00636E0 (PowerOnMonitor.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00646C0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     QueuePowerRequest @ 0x1C0064F40 (QueuePowerRequest.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C011EF04 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWrite.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C012AF50 (McTemplateK0pq_EtwWriteTransfer.c)
 */

void __fastcall ArmPowerWatchdog(__int64 a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v4; // ecx
  _DWORD *v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  _QWORD InputBuffer[14]; // [rsp+40h] [rbp-19h] BYREF
  char v14; // [rsp+C0h] [rbp+67h] BYREF
  int v15; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v16; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( a1 )
  {
    v2 = a2;
    memset(InputBuffer, 0, 0x60uLL);
    v4 = 0;
    LODWORD(InputBuffer[0]) = 21;
    v5 = &gPowerWatchdogTimeouts;
    InputBuffer[1] = a1;
    while ( *v5 != (_DWORD)v2 )
    {
      ++v4;
      v5 += 6;
      if ( v4 >= 5 )
      {
        v6 = 30000;
        goto LABEL_7;
      }
    }
    v6 = v5[4];
LABEL_7:
    InputBuffer[2] = __PAIR64__(gSessionId, v6);
    LODWORD(InputBuffer[3]) = 412;
    InputBuffer[4] = v2;
    if ( gPowerWatchdogTest )
      InputBuffer[4] = v2 | 0xFFFFFFFF80000000uLL;
    if ( (_DWORD)v2 == 16 )
    {
      BYTE1(InputBuffer[8]) = 1;
      InputBuffer[5] = &gpPowerThread;
      InputBuffer[6] = gpresUser;
      InputBuffer[7] = &gpPowerRequestCurrent;
      BYTE3(InputBuffer[8]) = 1;
    }
    else
    {
      InputBuffer[6] = 0LL;
      InputBuffer[7] = 0LL;
      InputBuffer[5] = KeGetCurrentThread();
    }
    ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, 0LL, 0);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0pq_EtwWriteTransfer(v7, &StartPowerWatchdog, v8, a1, v2);
    if ( (unsigned int)dword_1C0241378 > 5 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0241378, 0x400000000000LL, v8, v9) )
      {
        v15 = v2;
        v16 = a1;
        v14 = 1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v10,
          (unsigned int)&unk_1C021435B,
          v11,
          v12,
          (__int64)&v14,
          (__int64)&v16,
          (__int64)&v15);
      }
    }
  }
}
