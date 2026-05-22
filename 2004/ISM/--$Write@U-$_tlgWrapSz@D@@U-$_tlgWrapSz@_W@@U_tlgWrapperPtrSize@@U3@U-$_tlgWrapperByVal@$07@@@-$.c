/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@_W@@U_tlgWrapperPtrSize@@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@_W@@AEBU_tlgWrapperPtrSize@@5AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18014FA94
 * Callers:
 *     ?GetErrorStatuses_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@QEB_WAEBUHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@@Z @ 0x18015C9D8 (-GetErrorStatuses_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@QEB_WAEBUHOLOGRAPHIC_DE.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350C8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const unsigned __int16 **a5,
        const wchar_t **a6,
        __int64 *a7,
        __int64 *a8,
        __int64 a9)
{
  __int64 v11; // rcx
  const wchar_t *v12; // rdx
  __int64 v13; // rax
  int v14; // r8d
  const unsigned __int16 *v15; // rdx
  int v16; // ecx
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-51h] BYREF
  const unsigned __int16 *v19; // [rsp+50h] [rbp-31h]
  int v20; // [rsp+58h] [rbp-29h]
  int v21; // [rsp+5Ch] [rbp-25h]
  const wchar_t *v22; // [rsp+60h] [rbp-21h]
  int v23; // [rsp+68h] [rbp-19h]
  int v24; // [rsp+6Ch] [rbp-15h]
  __int64 v25; // [rsp+70h] [rbp-11h]
  int v26; // [rsp+78h] [rbp-9h]
  int v27; // [rsp+7Ch] [rbp-5h]
  __int64 v28; // [rsp+80h] [rbp-1h]
  int v29; // [rsp+88h] [rbp+7h]
  int v30; // [rsp+8Ch] [rbp+Bh]
  __int64 v31; // [rsp+90h] [rbp+Fh]
  __int64 v32; // [rsp+98h] [rbp+17h]

  v31 = a9;
  v32 = 8LL;
  v30 = 0;
  v28 = *a8;
  v29 = *((_DWORD *)a8 + 2);
  v27 = 0;
  v25 = *a7;
  v11 = -1LL;
  v26 = *((_DWORD *)a7 + 2);
  v12 = *a6;
  if ( *a6 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v12 = &word_1801C13DC;
    v14 = 2;
  }
  v22 = v12;
  v23 = v14;
  v24 = 0;
  v15 = *a5;
  if ( *a5 )
  {
    do
      ++v11;
    while ( *((_BYTE *)v15 + v11) );
    v16 = v11 + 1;
  }
  else
  {
    v15 = &word_1801C13D8;
    v16 = 1;
  }
  v19 = v15;
  v20 = v16;
  v21 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 7u, &v18);
}
