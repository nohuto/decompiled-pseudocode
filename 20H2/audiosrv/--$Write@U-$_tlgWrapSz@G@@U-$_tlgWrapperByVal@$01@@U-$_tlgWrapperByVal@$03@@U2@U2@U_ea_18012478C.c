/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U2@U2@U3@U?$_tlgWrapperByRef@$0BA@@@U2@U3@U2@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@445AEBU?$_tlgWrapperByRef@$0BA@@@454456@Z @ 0x18012478C
 * Callers:
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertykey@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x18005CEAC (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertyke.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180052318 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 *a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 *a17)
{
  __int64 v18; // rcx
  int v19; // edx
  __int64 v20; // rcx
  _WORD *v21; // rcx
  __int64 v22; // rax
  _BYTE v24[32]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD *v25; // [rsp+50h] [rbp-B0h]
  int v26; // [rsp+58h] [rbp-A8h]
  int v27; // [rsp+5Ch] [rbp-A4h]
  __int64 v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-98h]
  __int64 v30; // [rsp+70h] [rbp-90h]
  __int64 v31; // [rsp+78h] [rbp-88h]
  __int64 v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  __int64 v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  __int64 v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  __int64 v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  __int64 v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  __int64 v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  __int64 v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  __int64 v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  __int64 v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  __int64 v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]

  v51 = 16LL;
  v49 = 4LL;
  v43 = 4LL;
  v18 = *a17;
  v19 = 2;
  v48 = a16;
  v46 = a15;
  v44 = a14;
  v42 = a13;
  v40 = a12;
  v50 = v18;
  v47 = 2LL;
  v45 = 2LL;
  v20 = *a11;
  v36 = a10;
  v34 = a9;
  v32 = a8;
  v30 = a7;
  v28 = a6;
  v38 = v20;
  v41 = 2LL;
  v39 = 16LL;
  v21 = *a5;
  v37 = 4LL;
  v35 = 2LL;
  v33 = 2LL;
  v31 = 4LL;
  v29 = 2LL;
  if ( v21 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    v19 = 2 * v22 + 2;
  }
  else
  {
    v21 = &unk_18015C724;
  }
  v25 = v21;
  v26 = v19;
  v27 = 0;
  return tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_18019C448, a2, 0LL, 0LL, 15, (__int64)v24);
}
