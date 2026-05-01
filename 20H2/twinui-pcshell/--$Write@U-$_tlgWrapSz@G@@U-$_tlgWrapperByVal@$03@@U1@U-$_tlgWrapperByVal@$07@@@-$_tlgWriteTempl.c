/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18023D564
 * Callers:
 *     ??$Win32SlateViewConsideredForOwnership@PEBGIAEAY0BF@$$CBG@HolographicPositionerTelemetry@@SAX$$QEAPEBG$$QEAIAEAY0BF@$$CBG@Z @ 0x18023D3B8 (--$Win32SlateViewConsideredForOwnership@PEBGIAEAY0BF@$$CBG@HolographicPositionerTelemetry@@SAX$$.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AB5C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const WCHAR **a5,
        __int64 a6,
        const WCHAR **a7,
        __int64 a8)
{
  __int64 v10; // rcx
  int v11; // r9d
  const WCHAR *v12; // rdx
  __int64 v13; // rax
  int v14; // r8d
  const WCHAR *v15; // rdx
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-39h] BYREF
  const WCHAR *v18; // [rsp+50h] [rbp-19h]
  int v19; // [rsp+58h] [rbp-11h]
  int v20; // [rsp+5Ch] [rbp-Dh]
  __int64 v21; // [rsp+60h] [rbp-9h]
  __int64 v22; // [rsp+68h] [rbp-1h]
  const WCHAR *v23; // [rsp+70h] [rbp+7h]
  int v24; // [rsp+78h] [rbp+Fh]
  int v25; // [rsp+7Ch] [rbp+13h]
  __int64 v26; // [rsp+80h] [rbp+17h]
  __int64 v27; // [rsp+88h] [rbp+1Fh]

  v26 = a8;
  v10 = -1LL;
  v27 = 8LL;
  v11 = 2;
  v12 = *a7;
  if ( *a7 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v12 = &szAgent;
    v14 = 2;
  }
  v21 = a6;
  v23 = v12;
  v24 = v14;
  v25 = 0;
  v15 = *a5;
  v22 = 4LL;
  if ( v15 )
  {
    do
      ++v10;
    while ( v15[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v15 = &szAgent;
  }
  v18 = v15;
  v19 = v11;
  v20 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 6u, &v17);
}
