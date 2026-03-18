/*
 * XREFs of ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C005155C
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C00A46B0 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C00A5628 (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapSz@D@@U3@U3@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U1@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4344444444444444444AEBU?$_tlgWrapSz@D@@55444444444444344444@Z @ 0x1C01B5520 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@U2@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 *     ?OrientationToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01B5EFC (-OrientationToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?ScalingToString@InputTraceLogging@@CAPEBDW4DISPLAYCONFIG_SCALING@@@Z @ 0x1C01B5F44 (-ScalingToString@InputTraceLogging@@CAPEBDW4DISPLAYCONFIG_SCALING@@@Z.c)
 */

void __fastcall InputTraceLogging::InputConfig::DisplayPath(
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned int v11; // ecx
  __int64 v12; // r8
  int v13; // [rsp+180h] [rbp-80h] BYREF
  int v14; // [rsp+184h] [rbp-7Ch] BYREF
  int v15; // [rsp+188h] [rbp-78h] BYREF
  int v16; // [rsp+18Ch] [rbp-74h] BYREF
  int v17; // [rsp+190h] [rbp-70h] BYREF
  int v18; // [rsp+194h] [rbp-6Ch] BYREF
  int v19; // [rsp+198h] [rbp-68h] BYREF
  int v20; // [rsp+19Ch] [rbp-64h] BYREF
  int v21; // [rsp+1A0h] [rbp-60h] BYREF
  int v22; // [rsp+1A4h] [rbp-5Ch] BYREF
  int v23; // [rsp+1A8h] [rbp-58h] BYREF
  int v24; // [rsp+1ACh] [rbp-54h] BYREF
  int v25; // [rsp+1B0h] [rbp-50h] BYREF
  int v26; // [rsp+1B4h] [rbp-4Ch] BYREF
  int v27; // [rsp+1B8h] [rbp-48h] BYREF
  int v28; // [rsp+1BCh] [rbp-44h] BYREF
  int v29; // [rsp+1C0h] [rbp-40h] BYREF
  int v30; // [rsp+1C4h] [rbp-3Ch] BYREF
  int v31; // [rsp+1C8h] [rbp-38h] BYREF
  int v32; // [rsp+1CCh] [rbp-34h] BYREF
  int v33; // [rsp+1D0h] [rbp-30h] BYREF
  int v34; // [rsp+1D4h] [rbp-2Ch] BYREF
  int v35; // [rsp+1D8h] [rbp-28h] BYREF
  int v36; // [rsp+1DCh] [rbp-24h] BYREF
  int v37; // [rsp+1E0h] [rbp-20h] BYREF
  int v38; // [rsp+1E4h] [rbp-1Ch] BYREF
  int v39; // [rsp+1E8h] [rbp-18h] BYREF
  int v40; // [rsp+1ECh] [rbp-14h] BYREF
  int v41; // [rsp+1F0h] [rbp-10h] BYREF
  int v42; // [rsp+1F4h] [rbp-Ch] BYREF
  int v43; // [rsp+1F8h] [rbp-8h] BYREF
  int v44; // [rsp+1FCh] [rbp-4h] BYREF
  int v45; // [rsp+200h] [rbp+0h] BYREF
  __int64 v46; // [rsp+208h] [rbp+8h] BYREF
  __int64 v47; // [rsp+210h] [rbp+10h] BYREF
  __int64 v48; // [rsp+218h] [rbp+18h] BYREF
  __int64 v49; // [rsp+220h] [rbp+20h] BYREF
  __int64 v50; // [rsp+228h] [rbp+28h] BYREF
  __int64 v51; // [rsp+230h] [rbp+30h] BYREF
  __int64 v52; // [rsp+238h] [rbp+38h] BYREF
  __int64 v53; // [rsp+258h] [rbp+58h] BYREF
  __int64 v54; // [rsp+260h] [rbp+60h] BYREF
  __int64 v55; // [rsp+268h] [rbp+68h] BYREF

  if ( (unsigned int)dword_1C024C960 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 2LL, a1, a4) )
    {
      v5 = *(unsigned int *)(v4 + 112);
      LODWORD(v53) = *(_DWORD *)(v4 + 192);
      LODWORD(v54) = *(_DWORD *)(v4 + 188);
      LODWORD(v55) = *(_DWORD *)(v4 + 184);
      v13 = *(_DWORD *)(v4 + 180);
      v14 = *(_DWORD *)(v4 + 176);
      v46 = *(_QWORD *)(v4 + 168);
      v15 = *(_DWORD *)(v4 + 164);
      v16 = *(_DWORD *)(v4 + 160);
      v17 = *(_DWORD *)(v4 + 152);
      v18 = *(_DWORD *)(v4 + 148);
      v19 = *(_DWORD *)(v4 + 144);
      v20 = *(_DWORD *)(v4 + 140);
      v21 = *(_DWORD *)(v4 + 136);
      v22 = *(_DWORD *)(v4 + 132);
      v23 = *(_DWORD *)(v4 + 128);
      v24 = *(_DWORD *)(v4 + 124);
      v25 = *(_DWORD *)(v4 + 120);
      v26 = *(_DWORD *)(v4 + 116);
      v6 = InputTraceLogging::ScalingToString(v5);
      v8 = *(unsigned int *)(v7 + 108);
      v47 = v6;
      v9 = InputTraceLogging::ScalingToString(v8);
      v11 = *(_DWORD *)(v10 + 104);
      v48 = v9;
      v49 = (__int64)InputTraceLogging::OrientationToString(v11);
      v27 = *(unsigned __int8 *)(v12 + 101);
      v28 = *(unsigned __int8 *)(v12 + 100);
      v29 = *(_DWORD *)(v12 + 96);
      v30 = *(_DWORD *)(v12 + 92);
      v31 = *(_DWORD *)(v12 + 88);
      v32 = *(_DWORD *)(v12 + 84);
      v33 = *(_DWORD *)(v12 + 80);
      v34 = *(_DWORD *)(v12 + 76);
      v35 = *(_DWORD *)(v12 + 72);
      v36 = *(_DWORD *)(v12 + 68);
      v37 = *(_DWORD *)(v12 + 64);
      v38 = *(_DWORD *)(v12 + 60);
      v39 = *(_DWORD *)(v12 + 56);
      v40 = *(_DWORD *)(v12 + 52);
      v41 = *(_DWORD *)(v12 + 48);
      v42 = *(_DWORD *)(v12 + 44);
      v43 = *(_DWORD *)(v12 + 40);
      v50 = *(_QWORD *)(v12 + 32);
      v44 = *(_DWORD *)(v12 + 28);
      v45 = *(_DWORD *)(v12 + 24);
      v51 = *(_QWORD *)(v12 + 8);
      v52 = *(_QWORD *)v12;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_1C024C960,
        (int)&dword_1C0220AFC,
        (__int64)&v52,
        (__int64)&v51,
        (__int64)&v45,
        (__int64)&v44,
        (__int64)&v50,
        (__int64)&v43,
        (__int64)&v42,
        (__int64)&v41,
        (__int64)&v40,
        (__int64)&v39,
        (__int64)&v38,
        (__int64)&v37,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v49,
        (__int64)&v48,
        (__int64)&v47,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v46,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v55,
        (__int64)&v54,
        (__int64)&v53);
    }
  }
}
