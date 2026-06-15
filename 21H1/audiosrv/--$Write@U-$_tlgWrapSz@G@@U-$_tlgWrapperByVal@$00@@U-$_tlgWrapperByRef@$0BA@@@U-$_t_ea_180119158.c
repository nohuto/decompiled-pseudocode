/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@U1@U4@U?$_tlgWrapperByVal@$03@@U5@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@36AEBU?$_tlgWrapperByVal@$03@@75@Z @ 0x180119158
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180048918 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800529B8 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        void **a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 *a13)
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r8d
  _WORD *v17; // rcx
  __int64 v18; // rax
  int v19; // r9d
  __int64 v20; // rcx
  _WORD *v21; // rcx
  _BYTE v23[32]; // [rsp+30h] [rbp-B1h] BYREF
  _WORD *v24; // [rsp+50h] [rbp-91h]
  int v25; // [rsp+58h] [rbp-89h]
  int v26; // [rsp+5Ch] [rbp-85h]
  __int64 v27; // [rsp+60h] [rbp-81h]
  __int64 v28; // [rsp+68h] [rbp-79h]
  __int64 v29; // [rsp+70h] [rbp-71h]
  __int64 v30; // [rsp+78h] [rbp-69h]
  __int64 v31; // [rsp+80h] [rbp-61h]
  __int64 v32; // [rsp+88h] [rbp-59h]
  _WORD *v33; // [rsp+90h] [rbp-51h]
  int v34; // [rsp+98h] [rbp-49h]
  int v35; // [rsp+9Ch] [rbp-45h]
  __int64 v36; // [rsp+A0h] [rbp-41h]
  __int64 v37; // [rsp+A8h] [rbp-39h]
  __int64 v38; // [rsp+B0h] [rbp-31h]
  __int64 v39; // [rsp+B8h] [rbp-29h]
  __int64 v40; // [rsp+C0h] [rbp-21h]
  __int64 v41; // [rsp+C8h] [rbp-19h]
  __int64 v42; // [rsp+D0h] [rbp-11h]
  __int64 v43; // [rsp+D8h] [rbp-9h]

  v43 = 16LL;
  v14 = -1LL;
  v41 = 4LL;
  v39 = 4LL;
  v15 = *a13;
  v16 = 2;
  v40 = a12;
  v38 = a11;
  v36 = a10;
  v42 = v15;
  v37 = 2LL;
  v17 = *a9;
  if ( *a9 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v17 = &unk_18015D744;
    v19 = 2;
  }
  v31 = a8;
  v33 = v17;
  v34 = v19;
  v35 = 0;
  v20 = *a7;
  v27 = a6;
  v29 = v20;
  v32 = 2LL;
  v30 = 16LL;
  v21 = *a5;
  v28 = 1LL;
  if ( v21 )
  {
    do
      ++v14;
    while ( v21[v14] );
    v16 = 2 * v14 + 2;
  }
  else
  {
    v21 = &unk_18015D744;
  }
  v24 = v21;
  v25 = v16;
  v26 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_18019D478, a2, 0LL, 0LL, 11, (__int64)v23);
}
