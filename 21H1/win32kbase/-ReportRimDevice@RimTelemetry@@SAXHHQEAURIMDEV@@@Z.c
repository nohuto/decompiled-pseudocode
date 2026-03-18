/*
 * XREFs of ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x1C0047F70
 * Callers:
 *     RIMCreateDev @ 0x1C00A1B30 (RIMCreateDev.c)
 *     RIMFreeDev @ 0x1C0159410 (RIMFreeDev.c)
 * Callees:
 *     RimDeviceTypeToRimInputTypeString @ 0x1C004813C (RimDeviceTypeToRimInputTypeString.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U6@U6@U5@U3@U3@U3@U5@U5@U3@U3@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@88755577557@Z @ 0x1C0158AE0 (--$Write@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@U_ea_1C0158AE0.c)
 *     ?GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z @ 0x1C0158D60 (-GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z.c)
 *     ?LogPointerDeviceStateChange@RimTelemetry@@CAXHGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH0KHQEAU_UNICODE_STRING@@400AEBUtagRECT@@5@Z @ 0x1C0158DD4 (-LogPointerDeviceStateChange@RimTelemetry@@CAXHGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH0KHQEAU_UNICO.c)
 *     ?PointerDeviceTypeToString@RimTelemetry@@CAPEBGW4tagHPD_TYPE@@@Z @ 0x1C015937C (-PointerDeviceTypeToString@RimTelemetry@@CAPEBGW4tagHPD_TYPE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  int v15; // r12d
  int v16; // r10d
  __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // rbx
  const unsigned __int16 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  void *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  char v27; // [rsp+F8h] [rbp-80h]
  char v28; // [rsp+F9h] [rbp-7Fh]
  char v29; // [rsp+FAh] [rbp-7Eh]
  unsigned __int16 v30; // [rsp+FCh] [rbp-7Ch]
  int v31; // [rsp+100h] [rbp-78h]
  int v32; // [rsp+104h] [rbp-74h]
  int v33; // [rsp+108h] [rbp-70h]
  int v34; // [rsp+10Ch] [rbp-6Ch]
  void *v36; // [rsp+118h] [rbp-60h]
  unsigned __int64 v37; // [rsp+120h] [rbp-58h]
  unsigned __int64 v38; // [rsp+128h] [rbp-50h]
  unsigned __int16 *v39; // [rsp+130h] [rbp-48h]
  unsigned __int16 *v40; // [rsp+138h] [rbp-40h]
  unsigned __int64 v41; // [rsp+158h] [rbp-20h]
  struct _UNICODE_STRING v43; // [rsp+170h] [rbp-8h] BYREF
  struct _UNICODE_STRING v44; // [rsp+180h] [rbp+8h] BYREF
  __int64 v45; // [rsp+190h] [rbp+18h]
  __int64 v46; // [rsp+198h] [rbp+20h]
  __int64 v47; // [rsp+1A0h] [rbp+28h]
  void *v48; // [rsp+1A8h] [rbp+30h]
  char *v49; // [rsp+1B0h] [rbp+38h]
  const unsigned __int16 *v50; // [rsp+1B8h] [rbp+40h]
  __int64 v51; // [rsp+1C0h] [rbp+48h]
  __int64 v52; // [rsp+1C8h] [rbp+50h]
  __int64 v53; // [rsp+1D0h] [rbp+58h]
  void *v54; // [rsp+1D8h] [rbp+60h]
  unsigned __int64 v55; // [rsp+1E0h] [rbp+68h]
  char *v56; // [rsp+1E8h] [rbp+70h]
  const unsigned __int16 *v57; // [rsp+1F0h] [rbp+78h]
  unsigned __int16 *v58; // [rsp+1F8h] [rbp+80h]
  unsigned __int16 *v59; // [rsp+200h] [rbp+88h]
  char v60; // [rsp+208h] [rbp+90h] BYREF
  char v61; // [rsp+218h] [rbp+A0h] BYREF

  v4 = 0;
  v5 = 0;
  v30 = 0;
  v40 = (unsigned __int16 *)RimDeviceTypeToRimInputTypeString(
                              a3,
                              *((unsigned __int8 *)a3 + 48),
                              *((unsigned __int8 *)a3 + 48),
                              (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
  v39 = (unsigned __int16 *)*((_QWORD *)a3 + 27);
  if ( v8 == 2 )
  {
    v17 = *((_QWORD *)a3 + 59);
    v5 = *(_WORD *)(v17 + 16);
    v30 = *(_WORD *)(v17 + 18);
  }
  v9 = *((_DWORD *)a3 + 530);
  v10 = *((_DWORD *)a3 + 46);
  v11 = -__CFSHR__(v10, 14);
  if ( v9 )
  {
    v18 = v9 - 1;
    if ( v18 )
    {
      if ( v18 == 1 )
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
  v13 = v6 - *((_QWORD *)a3 + 8);
  v14 = v6 - *((_QWORD *)a3 + 9);
  v38 = *((_QWORD *)a3 + 24);
  v29 = *((_BYTE *)a3 + 204);
  v28 = *((_BYTE *)a3 + 205);
  v27 = *((_BYTE *)a3 + 206);
  v36 = (void *)*((_QWORD *)a3 + 31);
  v31 = *((_DWORD *)a3 + 72);
  v15 = -__CFSHR__(v10, 8);
  v32 = *((_DWORD *)a3 + 68);
  v33 = *((_DWORD *)a3 + 38);
  v41 = v13;
  v37 = v14;
  if ( (v10 & 0x100) != 0 || (v16 = 1, !__CFSHR__(v10, 8)) )
    v16 = 0;
  v34 = v16;
  if ( a2 )
  {
    v19 = *(_QWORD *)(*((_QWORD *)a3 + 4) + 568LL);
    v44.Buffer = (PWSTR)&v60;
    v43.Buffer = (PWSTR)&v61;
    *(_QWORD *)&v44.Length = 0x100000LL;
    *(_QWORD *)&v43.Length = 0x100000LL;
    RimTelemetry::GetHidVidPidStrings(a3, &v44, &v43);
    v20 = (const unsigned __int16 *)RimTelemetry::PointerDeviceTypeToString(*(unsigned int *)(v19 + 24));
    LOBYTE(v4) = *(_DWORD *)(v19 + 24) == 6;
    RimTelemetry::LogPointerDeviceStateChange(
      a1,
      v30,
      v5,
      v40,
      v39,
      v11,
      v12,
      (const struct _GUID *)((char *)a3 + 2104),
      v38,
      v29,
      v28,
      v27,
      v36,
      v31,
      v32,
      v33,
      v41,
      v37,
      v15,
      v34,
      v20,
      *(_DWORD *)(v19 + 720),
      v4,
      (struct _UNICODE_STRING *const)(v19 + 320),
      (struct _UNICODE_STRING *const)(v19 + 848),
      v44.Buffer,
      v43.Buffer,
      (const struct tagRECT *)(v19 + 140),
      (const struct tagRECT *)(v19 + 124));
    return;
  }
  if ( v5 < 0xFF00u )
  {
    if ( v7 )
    {
      if ( (unsigned int)dword_1C024B170 > 5
        && (unsigned __int8)tlgKeywordOn(&dword_1C024B170, 0x800000000000LL, v13, v14) )
      {
        v24 = &unk_1C021B08A;
        v48 = v36;
        v49 = (char *)a3 + 2104;
        v45 = 2048LL;
        v46 = v23;
        v47 = v22;
        v50 = v12;
LABEL_24:
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v21,
          v24);
      }
    }
    else if ( (unsigned int)dword_1C024B170 > 5
           && (unsigned __int8)tlgKeywordOn(&dword_1C024B170, 0x800000000000LL, v13, v14) )
    {
      v24 = &unk_1C021AC77;
      v54 = v36;
      v55 = v38;
      v56 = (char *)a3 + 2104;
      v58 = v39;
      v59 = v40;
      v51 = 2048LL;
      v52 = v26;
      v53 = v25;
      v57 = v12;
      goto LABEL_24;
    }
  }
}
