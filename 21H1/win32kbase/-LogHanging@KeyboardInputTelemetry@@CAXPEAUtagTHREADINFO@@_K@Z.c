/*
 * XREFs of ?LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z @ 0x1C01462E8
 * Callers:
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXPEAUtagQMSG@@_N@Z @ 0x1C0001660 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXPEAUtagQMSG@@_N@Z.c)
 * Callees:
 *     ?GetKeyboardInputLatency@KeyboardInputTelemetry@@CAK_K@Z @ 0x1C00017E8 (-GetKeyboardInputLatency@KeyboardInputTelemetry@@CAK_K@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0069980 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0145DB4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

void __fastcall KeyboardInputTelemetry::LogHanging(struct tagTHREADINFO *a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // ebx
  size_t *v5; // r8
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // [rsp+40h] [rbp-48h] BYREF
  int v11; // [rsp+44h] [rbp-44h] BYREF
  const WCHAR *v12; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int16 v13[16]; // [rsp+50h] [rbp-38h] BYREF

  if ( (unsigned int)KeyboardInputTelemetry::GetKeyboardInputLatency(a2) > 0x2710 )
  {
    v3 = *((_QWORD *)a1 + 52);
    v4 = 0;
    v5 = (size_t *)(v3 + 992);
    if ( !v3 )
      v5 = (size_t *)L"Unknown";
    RtlStringCchCopyW(v13, 0x10uLL, v5);
    if ( (unsigned int)dword_1C024B250 > 5 && tlgKeywordOn((__int64)&dword_1C024B250, 0x400000000000LL) )
    {
      v8 = *((_QWORD *)a1 + 52);
      if ( v8 )
        v9 = *(unsigned int *)(v8 + 56);
      else
        v9 = 0LL;
      if ( v8 )
        v4 = *(_DWORD *)(v8 + 56);
      v10 = v9;
      v12 = v13;
      v11 = v4;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v9,
        byte_1C021A7E3,
        v6,
        v7,
        &v12,
        (__int64)&v11,
        (__int64)&v10);
    }
  }
}
