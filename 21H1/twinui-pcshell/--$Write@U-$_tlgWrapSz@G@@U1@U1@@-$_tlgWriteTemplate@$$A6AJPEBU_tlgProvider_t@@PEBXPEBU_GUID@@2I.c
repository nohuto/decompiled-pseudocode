/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33@Z @ 0x18044F418
 * Callers:
 *     ??$EventQueued@PEBGPEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG00@Z @ 0x1800107CC (--$EventQueued@PEBGPEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG00@Z.c)
 *     ??$OnEventQueued_EventName@PEBGPEBGPEBG@OnEventQueued@SingleViewExperienceTelemetry@@SAX$$QEAPEBG00@Z @ 0x180010858 (--$OnEventQueued_EventName@PEBGPEBGPEBG@OnEventQueued@SingleViewExperienceTelemetry@@SAX$$QEAPEB.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        const WCHAR **a5,
        const WCHAR **a6,
        const WCHAR **a7)
{
  __int64 v9; // rcx
  int v11; // r9d
  const WCHAR *v12; // rdx
  __int64 v13; // rax
  int v14; // r8d
  const WCHAR *v15; // rdx
  __int64 v16; // rax
  int v17; // r8d
  const WCHAR *v18; // rdx
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+30h] [rbp-68h] BYREF
  const WCHAR *v21; // [rsp+50h] [rbp-48h]
  int v22; // [rsp+58h] [rbp-40h]
  int v23; // [rsp+5Ch] [rbp-3Ch]
  const WCHAR *v24; // [rsp+60h] [rbp-38h]
  int v25; // [rsp+68h] [rbp-30h]
  int v26; // [rsp+6Ch] [rbp-2Ch]
  const WCHAR *v27; // [rsp+70h] [rbp-28h]
  int v28; // [rsp+78h] [rbp-20h]
  int v29; // [rsp+7Ch] [rbp-1Ch]

  v9 = -1LL;
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
    v12 = &word_1804BE2A8;
    v14 = 2;
  }
  v27 = v12;
  v28 = v14;
  v29 = 0;
  v15 = *a6;
  if ( *a6 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v15 = &word_1804BE2A8;
    v17 = 2;
  }
  v24 = v15;
  v25 = v17;
  v26 = 0;
  v18 = *a5;
  if ( *a5 )
  {
    do
      ++v9;
    while ( v18[v9] );
    v11 = 2 * v9 + 2;
  }
  else
  {
    v18 = &word_1804BE2A8;
  }
  v21 = v18;
  v22 = v11;
  v23 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 5u, &v20);
}
