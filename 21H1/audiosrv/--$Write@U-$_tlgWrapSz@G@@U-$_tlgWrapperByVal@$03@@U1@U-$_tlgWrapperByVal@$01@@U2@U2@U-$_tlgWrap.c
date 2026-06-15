/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1800D51AC
 * Callers:
 *     PolicyConfigSetDeviceFormat @ 0x1800DA5E0 (PolicyConfigSetDeviceFormat.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800529B8 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        void **a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 *a11)
{
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rcx
  _WORD *v16; // rdx
  __int64 v17; // rax
  int v18; // r9d
  _WORD *v19; // rdx
  _BYTE v21[32]; // [rsp+30h] [rbp-81h] BYREF
  _WORD *v22; // [rsp+50h] [rbp-61h]
  int v23; // [rsp+58h] [rbp-59h]
  int v24; // [rsp+5Ch] [rbp-55h]
  __int64 v25; // [rsp+60h] [rbp-51h]
  __int64 v26; // [rsp+68h] [rbp-49h]
  _WORD *v27; // [rsp+70h] [rbp-41h]
  int v28; // [rsp+78h] [rbp-39h]
  int v29; // [rsp+7Ch] [rbp-35h]
  __int64 v30; // [rsp+80h] [rbp-31h]
  __int64 v31; // [rsp+88h] [rbp-29h]
  __int64 v32; // [rsp+90h] [rbp-21h]
  __int64 v33; // [rsp+98h] [rbp-19h]
  __int64 v34; // [rsp+A0h] [rbp-11h]
  __int64 v35; // [rsp+A8h] [rbp-9h]
  __int64 v36; // [rsp+B0h] [rbp-1h]
  __int64 v37; // [rsp+B8h] [rbp+7h]

  v37 = 16LL;
  v35 = 4LL;
  v33 = 4LL;
  v13 = *a11;
  v14 = 2;
  v34 = a10;
  v32 = a9;
  v30 = a8;
  v36 = v13;
  v15 = -1LL;
  v31 = 2LL;
  v16 = *a7;
  if ( *a7 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v16 = &unk_18015D744;
    v18 = 2;
  }
  v25 = a6;
  v27 = v16;
  v28 = v18;
  v29 = 0;
  v19 = *a5;
  v26 = 4LL;
  if ( v19 )
  {
    do
      ++v15;
    while ( v19[v15] );
    v14 = 2 * v15 + 2;
  }
  else
  {
    v19 = &unk_18015D744;
  }
  v22 = v19;
  v23 = v14;
  v24 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, 0LL, 0LL, 9, (__int64)v21);
}
