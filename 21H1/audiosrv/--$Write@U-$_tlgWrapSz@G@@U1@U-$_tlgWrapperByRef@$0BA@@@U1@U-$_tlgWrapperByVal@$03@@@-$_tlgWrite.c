/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180124738
 * Callers:
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyStore@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUSpatialAudioSettings@@@Z @ 0x18004A824 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyS.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18005DD60 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFOR.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800529B8 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        void **a6,
        __int64 *a7,
        void **a8,
        __int64 a9)
{
  __int64 v10; // rdx
  int v11; // r8d
  _WORD *v12; // rcx
  __int64 v13; // rax
  int v14; // r9d
  _WORD *v15; // rcx
  __int64 v16; // rax
  int v17; // r9d
  _WORD *v18; // rcx
  _BYTE v20[32]; // [rsp+30h] [rbp-51h] BYREF
  _WORD *v21; // [rsp+50h] [rbp-31h]
  int v22; // [rsp+58h] [rbp-29h]
  int v23; // [rsp+5Ch] [rbp-25h]
  _WORD *v24; // [rsp+60h] [rbp-21h]
  int v25; // [rsp+68h] [rbp-19h]
  int v26; // [rsp+6Ch] [rbp-15h]
  __int64 v27; // [rsp+70h] [rbp-11h]
  __int64 v28; // [rsp+78h] [rbp-9h]
  _WORD *v29; // [rsp+80h] [rbp-1h]
  int v30; // [rsp+88h] [rbp+7h]
  int v31; // [rsp+8Ch] [rbp+Bh]
  __int64 v32; // [rsp+90h] [rbp+Fh]
  __int64 v33; // [rsp+98h] [rbp+17h]

  v32 = a9;
  v10 = -1LL;
  v33 = 4LL;
  v11 = 2;
  v12 = *a8;
  if ( *a8 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v12 = &unk_18015D744;
    v14 = 2;
  }
  v29 = v12;
  v30 = v14;
  v31 = 0;
  v27 = *a7;
  v28 = 16LL;
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
    v15 = &unk_18015D744;
    v17 = 2;
  }
  v24 = v15;
  v25 = v17;
  v26 = 0;
  v18 = *a5;
  if ( *a5 )
  {
    do
      ++v10;
    while ( v18[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v18 = &unk_18015D744;
  }
  v21 = v18;
  v22 = v11;
  v23 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_18019D478, a2, 0LL, 0LL, 7, (__int64)v20);
}
