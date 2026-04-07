/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18008DE74
 * Callers:
 *     ?ReportStopActivity@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800302C0 (-ReportStopActivity@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800057B8 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const unsigned __int16 **a8,
        wchar_t **a9)
{
  __int64 v11; // rcx
  wchar_t *v13; // rdx
  __int64 v14; // rax
  int v15; // r8d
  const unsigned __int16 *v16; // rdx
  int v17; // ecx
  _BYTE v19[32]; // [rsp+30h] [rbp-51h] BYREF
  __int64 v20; // [rsp+50h] [rbp-31h]
  __int64 v21; // [rsp+58h] [rbp-29h]
  __int64 v22; // [rsp+60h] [rbp-21h]
  __int64 v23; // [rsp+68h] [rbp-19h]
  __int64 v24; // [rsp+70h] [rbp-11h]
  __int64 v25; // [rsp+78h] [rbp-9h]
  const unsigned __int16 *v26; // [rsp+80h] [rbp-1h]
  int v27; // [rsp+88h] [rbp+7h]
  int v28; // [rsp+8Ch] [rbp+Bh]
  wchar_t *v29; // [rsp+90h] [rbp+Fh]
  int v30; // [rsp+98h] [rbp+17h]
  int v31; // [rsp+9Ch] [rbp+1Bh]

  v11 = -1LL;
  v13 = *a9;
  if ( *a9 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v13 = word_1800CBAFC;
    v15 = 2;
  }
  v29 = v13;
  v30 = v15;
  v31 = 0;
  v16 = *a8;
  if ( *a8 )
  {
    do
      ++v11;
    while ( *((_BYTE *)v16 + v11) );
    v17 = v11 + 1;
  }
  else
  {
    v16 = &word_1800CBAF8;
    v17 = 1;
  }
  v24 = a7;
  v22 = a6;
  v20 = a5;
  v26 = v16;
  v27 = v17;
  v28 = 0;
  v25 = 4LL;
  v23 = 4LL;
  v21 = 8LL;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, a3, 0LL, 7, (__int64)v19);
}
