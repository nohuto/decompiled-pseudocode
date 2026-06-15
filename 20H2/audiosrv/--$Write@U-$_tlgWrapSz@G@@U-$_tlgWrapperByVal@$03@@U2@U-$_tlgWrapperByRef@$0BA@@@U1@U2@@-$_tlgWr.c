/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@34@Z @ 0x180124CE8
 * Callers:
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudioEncoderDescriptor@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@50V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEBGKPEAU3@AEAK9999PEAU2@@Z @ 0x18001D9B0 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudio.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180052318 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        void **a9,
        __int64 a10)
{
  __int64 v11; // rdx
  int v12; // r8d
  _WORD *v13; // rcx
  __int64 v14; // rax
  int v15; // r9d
  __int64 v16; // rcx
  _WORD *v17; // rcx
  _BYTE v19[32]; // [rsp+30h] [rbp-69h] BYREF
  _WORD *v20; // [rsp+50h] [rbp-49h]
  int v21; // [rsp+58h] [rbp-41h]
  int v22; // [rsp+5Ch] [rbp-3Dh]
  __int64 v23; // [rsp+60h] [rbp-39h]
  __int64 v24; // [rsp+68h] [rbp-31h]
  __int64 v25; // [rsp+70h] [rbp-29h]
  __int64 v26; // [rsp+78h] [rbp-21h]
  __int64 v27; // [rsp+80h] [rbp-19h]
  __int64 v28; // [rsp+88h] [rbp-11h]
  _WORD *v29; // [rsp+90h] [rbp-9h]
  int v30; // [rsp+98h] [rbp-1h]
  int v31; // [rsp+9Ch] [rbp+3h]
  __int64 v32; // [rsp+A0h] [rbp+7h]
  __int64 v33; // [rsp+A8h] [rbp+Fh]

  v32 = a10;
  v11 = -1LL;
  v33 = 4LL;
  v12 = 2;
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
    v13 = &unk_18015C724;
    v15 = 2;
  }
  v29 = v13;
  v30 = v15;
  v31 = 0;
  v16 = *a8;
  v25 = a7;
  v23 = a6;
  v27 = v16;
  v28 = 16LL;
  v26 = 4LL;
  v17 = *a5;
  v24 = 4LL;
  if ( v17 )
  {
    do
      ++v11;
    while ( v17[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v17 = &unk_18015C724;
  }
  v20 = v17;
  v21 = v12;
  v22 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_18019C448, a2, 0LL, 0LL, 8, (__int64)v19);
}
