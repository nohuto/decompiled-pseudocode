/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180068888
 * Callers:
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006804C (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x18000128C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@_W@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@_W@@@Z @ 0x180002328 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@_W@.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x180022DCC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 */

__int64 __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rdi
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  int v15; // [rsp+A0h] [rbp-19h] BYREF
  int v16; // [rsp+A4h] [rbp-15h] BYREF
  __int64 v17; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v18; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v19; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v22; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+1Fh] BYREF
  __int64 v24; // [rsp+E0h] [rbp+27h] BYREF
  __int64 v25; // [rsp+E8h] [rbp+2Fh] BYREF
  __int64 v26; // [rsp+120h] [rbp+67h] BYREF
  __int64 v27; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v28; // [rsp+130h] [rbp+77h] BYREF
  __int64 v29; // [rsp+138h] [rbp+7Fh] BYREF

  if ( a2 < 0 )
  {
    v4 = a1[6];
    v5 = *(_DWORD *)(v4 + 76);
    if ( v5 < 0 && v5 == *(_DWORD *)(v4 + 84) )
      v6 = v4 + 80;
    else
      v6 = 0LL;
    v7 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( v6 )
    {
      if ( *(_DWORD *)v7 > 2u
        && (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
        && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
      {
        v8 = a1[6];
        v18 = *(_QWORD *)(v6 + 112);
        v19 = *(_QWORD *)(v6 + 104);
        LODWORD(v27) = *(_DWORD *)(v6 + 96);
        v20 = *(_QWORD *)(v6 + 88);
        v21 = *(_QWORD *)(v6 + 80);
        LODWORD(v26) = *(_DWORD *)(v6 + 72);
        v22 = *(_QWORD *)(v6 + 64);
        LODWORD(v28) = *(_DWORD *)(v6 + 24);
        v23 = *(_QWORD *)(v6 + 16);
        LODWORD(v29) = *(_DWORD *)v6;
        v24 = *(_QWORD *)(v6 + 120);
        v15 = *(_DWORD *)(v6 + 56);
        v25 = *(_QWORD *)(v6 + 48);
        v16 = *(_DWORD *)(v6 + 4);
        v17 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          (__int64)v7,
          (unsigned __int8 *)dword_18017070D,
          (const GUID *)(v8 + 8),
          (__int64)v7,
          (__int64)&v17,
          (__int64)&v16,
          (const unsigned __int16 **)&v25,
          (__int64)&v15,
          (const unsigned __int16 **)&v24,
          (__int64)&v29,
          (const WCHAR **)&v23,
          (__int64)&v28,
          (const unsigned __int16 **)&v22,
          (__int64)&v26,
          (const unsigned __int16 **)&v21,
          (const WCHAR **)&v20,
          (__int64)&v27,
          (const unsigned __int16 **)&v19,
          (const WCHAR **)&v18);
      }
    }
    else
    {
      v9 = (__int64)v7;
      if ( *(_DWORD *)v7 > 2u
        && (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
        && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
      {
        v10 = a1[6];
        v28 = *(_QWORD *)(v10 + 56);
        v29 = *(_QWORD *)(v10 + 48);
        CurrentThreadId = GetCurrentThreadId();
        v12 = a1[6];
        LODWORD(v27) = CurrentThreadId;
        LODWORD(v26) = a2;
        v17 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
          v9,
          (unsigned __int8 *)dword_180170942,
          (const GUID *)(v12 + 8),
          v13,
          (__int64)&v17,
          (__int64)&v26,
          (__int64)&v27,
          (const unsigned __int16 **)&v29,
          (const WCHAR **)&v28);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
