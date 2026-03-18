/*
 * XREFs of ?RimDeviceFlags@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C015AC60
 * Callers:
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C00A324C (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444444444444444444444444444444444@Z @ 0x1C015A710 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 */

void __fastcall InputTraceLogging::RIM::RimDeviceFlags(const struct RIMDEV *a1)
{
  _DWORD *v1; // r8
  __int64 v2; // r9
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // [rsp+170h] [rbp-80h] BYREF
  int v7; // [rsp+174h] [rbp-7Ch] BYREF
  int v8; // [rsp+178h] [rbp-78h] BYREF
  int v9; // [rsp+17Ch] [rbp-74h] BYREF
  int v10; // [rsp+180h] [rbp-70h] BYREF
  int v11; // [rsp+184h] [rbp-6Ch] BYREF
  int v12; // [rsp+188h] [rbp-68h] BYREF
  int v13; // [rsp+18Ch] [rbp-64h] BYREF
  int v14; // [rsp+190h] [rbp-60h] BYREF
  int v15; // [rsp+194h] [rbp-5Ch] BYREF
  int v16; // [rsp+198h] [rbp-58h] BYREF
  int v17; // [rsp+19Ch] [rbp-54h] BYREF
  int v18; // [rsp+1A0h] [rbp-50h] BYREF
  int v19; // [rsp+1A4h] [rbp-4Ch] BYREF
  int v20; // [rsp+1A8h] [rbp-48h] BYREF
  int v21; // [rsp+1ACh] [rbp-44h] BYREF
  int v22; // [rsp+1B0h] [rbp-40h] BYREF
  int v23; // [rsp+1B4h] [rbp-3Ch] BYREF
  int v24; // [rsp+1B8h] [rbp-38h] BYREF
  int v25; // [rsp+1BCh] [rbp-34h] BYREF
  int v26; // [rsp+1C0h] [rbp-30h] BYREF
  int v27; // [rsp+1C4h] [rbp-2Ch] BYREF
  int v28; // [rsp+1C8h] [rbp-28h] BYREF
  int v29; // [rsp+1CCh] [rbp-24h] BYREF
  int v30; // [rsp+1D0h] [rbp-20h] BYREF
  int v31; // [rsp+1D4h] [rbp-1Ch] BYREF
  int v32; // [rsp+1D8h] [rbp-18h] BYREF
  int v33; // [rsp+1DCh] [rbp-14h] BYREF
  int v34; // [rsp+1E0h] [rbp-10h] BYREF
  int v35; // [rsp+1E4h] [rbp-Ch] BYREF
  int v36; // [rsp+1E8h] [rbp-8h] BYREF
  int v37; // [rsp+1ECh] [rbp-4h] BYREF
  int v38; // [rsp+1F0h] [rbp+0h] BYREF
  int v39; // [rsp+1F4h] [rbp+4h] BYREF
  int v40; // [rsp+1F8h] [rbp+8h] BYREF
  int v41; // [rsp+1FCh] [rbp+Ch] BYREF
  int v42; // [rsp+200h] [rbp+10h] BYREF
  _DWORD *v43; // [rsp+208h] [rbp+18h] BYREF
  int v44; // [rsp+228h] [rbp+38h] BYREF
  int v45; // [rsp+230h] [rbp+40h] BYREF
  int v46; // [rsp+238h] [rbp+48h] BYREF

  if ( (unsigned int)dword_1C024C960 > 4 && tlgKeywordOn((__int64)&dword_1C024C960, 256LL) )
  {
    v3 = v1[50];
    v44 = -__CFSHR__(v3, 10);
    v45 = -__CFSHR__(v3, 9);
    v46 = -__CFSHR__(v3, 8);
    v6 = -__CFSHR__(v3, 7);
    v7 = -__CFSHR__(v3, 6);
    v8 = -__CFSHR__(v3, 5);
    v9 = -__CFSHR__(v3, 4);
    v10 = -__CFSHR__(v3, 3);
    v11 = -__CFSHR__(v3, 2);
    v12 = -(v3 & 1);
    v4 = v1[47];
    v13 = -__CFSHR__(v4, 2);
    v14 = -(v4 & 1);
    v5 = v1[46];
    v15 = v5 >> 31;
    v16 = -__CFSHR__(v5, 29);
    v17 = -__CFSHR__(v5, 28);
    v18 = -__CFSHR__(v5, 27);
    v19 = -__CFSHR__(v5, 26);
    v20 = -__CFSHR__(v5, 25);
    v21 = -__CFSHR__(v5, 24);
    v22 = -__CFSHR__(v5, 23);
    v43 = v1;
    v23 = -__CFSHR__(v5, 22);
    v24 = -__CFSHR__(v5, 21);
    v25 = -__CFSHR__(v5, 20);
    v26 = -__CFSHR__(v5, 19);
    v27 = -__CFSHR__(v5, 18);
    v28 = -__CFSHR__(v5, 17);
    v29 = -__CFSHR__(v5, 15);
    v30 = -__CFSHR__(v5, 14);
    v31 = -__CFSHR__(v5, 13);
    v32 = -__CFSHR__(v5, 12);
    v33 = -__CFSHR__(v5, 11);
    v34 = -__CFSHR__(v5, 10);
    v35 = -__CFSHR__(v5, 9);
    v36 = -__CFSHR__(v5, 8);
    v37 = -__CFSHR__(v5, 6);
    v38 = -__CFSHR__(v5, 5);
    v39 = -__CFSHR__(v5, 4);
    v40 = -__CFSHR__(v5, 3);
    v41 = -__CFSHR__(v5, 2);
    v42 = -(v5 & 1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C024C960,
      byte_1C021B594,
      (__int64)v1,
      v2,
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
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44);
  }
}
