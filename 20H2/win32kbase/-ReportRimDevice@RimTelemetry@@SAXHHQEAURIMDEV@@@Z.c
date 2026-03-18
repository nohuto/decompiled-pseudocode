/*
 * XREFs of ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x1C00B5ABC
 * Callers:
 *     RIMCreateDev @ 0x1C0027880 (RIMCreateDev.c)
 *     RIMFreeDev @ 0x1C0150B40 (RIMFreeDev.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C00B5C88 (RimDeviceTypeToRimInputTypeString.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U6@U6@U5@U3@U3@U3@U5@U5@U3@U3@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@88755577557@Z @ 0x1C0150208 (--$Write@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@U_ea_1C0150208.c)
 *     ?GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z @ 0x1C0150490 (-GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z.c)
 *     ?LogPointerDeviceStateChange@RimTelemetry@@CAXHGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH0KHQEAU_UNICODE_STRING@@400AEBUtagRECT@@5@Z @ 0x1C0150504 (-LogPointerDeviceStateChange@RimTelemetry@@CAXHGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH0KHQEAU_UNICO.c)
 *     ?PointerDeviceTypeToString@RimTelemetry@@CAPEBGW4tagHPD_TYPE@@@Z @ 0x1C0150AAC (-PointerDeviceTypeToString@RimTelemetry@@CAPEBGW4tagHPD_TYPE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RimTelemetry::ReportRimDevice(int a1, int a2, struct RIMDEV *const a3)
{
  int v4; // esi
  unsigned __int16 v5; // r13
  __int64 v6; // r9
  int v7; // r11d
  char v8; // r8
  int v9; // edx
  int v10; // ecx
  int v11; // r14d
  const unsigned __int16 *v12; // r15
  int v13; // r12d
  int v14; // r10d
  __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // rbx
  const unsigned __int16 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  void *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // [rsp+F8h] [rbp-80h]
  char v26; // [rsp+F9h] [rbp-7Fh]
  char v27; // [rsp+FAh] [rbp-7Eh]
  unsigned __int16 v28; // [rsp+FCh] [rbp-7Ch]
  int v29; // [rsp+100h] [rbp-78h]
  int v30; // [rsp+104h] [rbp-74h]
  int v31; // [rsp+108h] [rbp-70h]
  int v32; // [rsp+10Ch] [rbp-6Ch]
  void *v34; // [rsp+118h] [rbp-60h]
  unsigned __int64 v35; // [rsp+120h] [rbp-58h]
  unsigned __int64 v36; // [rsp+128h] [rbp-50h]
  unsigned __int16 *v37; // [rsp+130h] [rbp-48h]
  unsigned __int16 *v38; // [rsp+138h] [rbp-40h]
  unsigned __int64 v39; // [rsp+158h] [rbp-20h]
  struct _UNICODE_STRING v41; // [rsp+170h] [rbp-8h] BYREF
  struct _UNICODE_STRING v42; // [rsp+180h] [rbp+8h] BYREF
  __int64 v43; // [rsp+190h] [rbp+18h]
  __int64 v44; // [rsp+198h] [rbp+20h]
  __int64 v45; // [rsp+1A0h] [rbp+28h]
  void *v46; // [rsp+1A8h] [rbp+30h]
  char *v47; // [rsp+1B0h] [rbp+38h]
  const unsigned __int16 *v48; // [rsp+1B8h] [rbp+40h]
  __int64 v49; // [rsp+1C0h] [rbp+48h]
  __int64 v50; // [rsp+1C8h] [rbp+50h]
  __int64 v51; // [rsp+1D0h] [rbp+58h]
  void *v52; // [rsp+1D8h] [rbp+60h]
  unsigned __int64 v53; // [rsp+1E0h] [rbp+68h]
  char *v54; // [rsp+1E8h] [rbp+70h]
  const unsigned __int16 *v55; // [rsp+1F0h] [rbp+78h]
  unsigned __int16 *v56; // [rsp+1F8h] [rbp+80h]
  unsigned __int16 *v57; // [rsp+200h] [rbp+88h]
  char v58; // [rsp+208h] [rbp+90h] BYREF
  char v59; // [rsp+218h] [rbp+A0h] BYREF

  v4 = 0;
  v5 = 0;
  v28 = 0;
  v38 = (unsigned __int16 *)RimDeviceTypeToRimInputTypeString(a3, *((unsigned __int8 *)a3 + 48));
  v37 = (unsigned __int16 *)*((_QWORD *)a3 + 27);
  if ( v8 == 2 )
  {
    v15 = *((_QWORD *)a3 + 59);
    v5 = *(_WORD *)(v15 + 16);
    v28 = *(_WORD *)(v15 + 18);
  }
  v9 = *((_DWORD *)a3 + 532);
  v10 = *((_DWORD *)a3 + 46);
  v11 = -__CFSHR__(v10, 14);
  if ( v9 )
  {
    v16 = v9 - 1;
    if ( v16 )
    {
      if ( v16 == 1 )
        v12 = L"Unknown";
      else
        v12 = L"Unexpected Value";
    }
    else
    {
      v12 = L"External";
    }
  }
  else
  {
    v12 = L"Integrated";
  }
  v36 = *((_QWORD *)a3 + 24);
  v27 = *((_BYTE *)a3 + 204);
  v26 = *((_BYTE *)a3 + 205);
  v25 = *((_BYTE *)a3 + 206);
  v34 = (void *)*((_QWORD *)a3 + 31);
  v29 = *((_DWORD *)a3 + 72);
  v13 = -__CFSHR__(v10, 8);
  v30 = *((_DWORD *)a3 + 68);
  v31 = *((_DWORD *)a3 + 38);
  v39 = v6 - *((_QWORD *)a3 + 8);
  v35 = v6 - *((_QWORD *)a3 + 9);
  if ( (v10 & 0x100) != 0 || (v14 = 1, !__CFSHR__(v10, 8)) )
    v14 = 0;
  v32 = v14;
  if ( a2 )
  {
    v17 = *(_QWORD *)(*((_QWORD *)a3 + 4) + 568LL);
    v42.Buffer = (PWSTR)&v58;
    v41.Buffer = (PWSTR)&v59;
    *(_QWORD *)&v42.Length = 0x100000LL;
    *(_QWORD *)&v41.Length = 0x100000LL;
    RimTelemetry::GetHidVidPidStrings(a3, &v42, &v41);
    v18 = (const unsigned __int16 *)RimTelemetry::PointerDeviceTypeToString(*(unsigned int *)(v17 + 24));
    LOBYTE(v4) = *(_DWORD *)(v17 + 24) == 6;
    RimTelemetry::LogPointerDeviceStateChange(
      a1,
      v28,
      v5,
      v38,
      v37,
      v11,
      v12,
      (const struct _GUID *)a3 + 132,
      v36,
      v27,
      v26,
      v25,
      v34,
      v29,
      v30,
      v31,
      v39,
      v35,
      v13,
      v32,
      v18,
      *(_DWORD *)(v17 + 720),
      v4,
      (struct _UNICODE_STRING *const)(v17 + 320),
      (struct _UNICODE_STRING *const)(v17 + 848),
      v42.Buffer,
      v41.Buffer,
      (const struct tagRECT *)(v17 + 140),
      (const struct tagRECT *)(v17 + 124));
    return;
  }
  if ( v5 < 0xFF00u )
  {
    if ( v7 )
    {
      if ( (unsigned int)dword_1C0243170 > 5 && tlgKeywordOn((__int64)&dword_1C0243170, 0x800000000000LL) )
      {
        v22 = &unk_1C02136AB;
        v46 = v34;
        v47 = (char *)a3 + 2112;
        v43 = 2048LL;
        v44 = v21;
        v45 = v20;
        v48 = v12;
LABEL_24:
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v19,
          v22);
      }
    }
    else if ( (unsigned int)dword_1C0243170 > 5 && tlgKeywordOn((__int64)&dword_1C0243170, 0x800000000000LL) )
    {
      v22 = &unk_1C0213298;
      v52 = v34;
      v53 = v36;
      v54 = (char *)a3 + 2112;
      v56 = v37;
      v57 = v38;
      v49 = 2048LL;
      v50 = v24;
      v51 = v23;
      v55 = v12;
      goto LABEL_24;
    }
  }
}
