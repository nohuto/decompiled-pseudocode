/*
 * XREFs of ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1C0001818
 * Callers:
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXPEAUtagQMSG@@_N@Z @ 0x1C00017B0 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXPEAUtagQMSG@@_N@Z.c)
 * Callees:
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C0001B30 (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1C013D7E4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 */

void __fastcall KeyboardInputTelemetry::_UpdateTelemetryBuffer(
        KeyboardInputTelemetry *this,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // ebx
  unsigned __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned int v9; // edx
  __int64 v10; // rcx
  _DWORD v11[8]; // [rsp+58h] [rbp-28h] BYREF

  v11[7] = -1;
  v4 = v11;
  v5 = 0;
  v11[0] = 10;
  v6 = a3;
  v11[1] = 20;
  v11[2] = 30;
  v11[3] = 40;
  v11[4] = 50;
  v11[5] = 60;
  v11[6] = 100;
  while ( (unsigned int)a3 > *v4 )
  {
    ++v5;
    ++v4;
    if ( v5 >= 8 )
      goto LABEL_7;
  }
  v7 = a2;
  v8 = (int)v5 + 8LL * a2;
  v9 = *((_DWORD *)&gKeyboardInputTelemetry + 2 * v8 + 10);
  if ( v9 + 1 < v9
    || (v7 = *((unsigned int *)&gKeyboardInputTelemetry + 2 * v8 + 11), (int)v7 + (int)a3 < (unsigned int)v7)
    || v9 >= 0x3E8 )
  {
    KeyboardInputTelemetry::_UploadTelemetryData((KeyboardInputTelemetry *)v7);
    v9 = *((_DWORD *)&gKeyboardInputTelemetry + 2 * v8 + 10);
  }
  *((_DWORD *)&gKeyboardInputTelemetry + 2 * v8 + 11) += v6;
  *((_DWORD *)&gKeyboardInputTelemetry + 2 * v8 + 10) = v9 + 1;
LABEL_7:
  if ( v6 > 0xC8 && (unsigned int)dword_1C0243250 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C0243250, 0x400000000000LL, a3, a4) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        &unk_1C021300A);
  }
}
