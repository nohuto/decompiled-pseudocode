/*
 * XREFs of ?ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z @ 0x1C00239C0
 * Callers:
 *     DxgkReportAdapterPowerRapidHpdTrigerEvent @ 0x1C0023838 (DxgkReportAdapterPowerRapidHpdTrigerEvent.c)
 *     DxgkReportMonitorPowerRapidHpdTrigerEvent @ 0x1C002397C (DxgkReportMonitorPowerRapidHpdTrigerEvent.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02FF2BC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C00123E4 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4434AEBU?$_tlgWrapperByRef@$0BA@@@44@Z @ 0x1C0023BE8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U1@U2@U-$_tlgWrapperByRef@$0BA@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByRef@$0BA@@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByRef@$0BA@@@33@Z @ 0x1C0023CDC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByRef@$0BA@@@U1@U.c)
 *     ?InRapidHPDPeriod@RAPID_HPD_MANAGER@@AEAAXW4RAPID_HPD_PERIOD_UPDATE@1@AEA_N1@Z @ 0x1C0025A34 (-InRapidHPDPeriod@RAPID_HPD_MANAGER@@AEAAXW4RAPID_HPD_PERIOD_UPDATE@1@AEA_N1@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0025B34 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?CheckVelocitySetting@RAPID_HPD_MANAGER@@AEAAXXZ @ 0x1C00281E8 (-CheckVelocitySetting@RAPID_HPD_MANAGER@@AEAAXXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall RAPID_HPD_MANAGER::ReportTriggerEvent(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v9; // r15d
  __int64 v10; // r14
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  bool v14; // zf
  __int64 v15; // rcx
  int v16; // edx
  int v17; // [rsp+70h] [rbp-9h] BYREF
  int v18; // [rsp+74h] [rbp-5h] BYREF
  int v19; // [rsp+78h] [rbp-1h] BYREF
  __int64 v20; // [rsp+80h] [rbp+7h] BYREF
  __int64 v21; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v22; // [rsp+90h] [rbp+17h] BYREF
  __int64 v23; // [rsp+98h] [rbp+1Fh] BYREF
  char v24; // [rsp+A0h] [rbp+27h]
  int v25; // [rsp+E0h] [rbp+67h] BYREF
  int v26; // [rsp+E8h] [rbp+6Fh] BYREF
  int v27; // [rsp+F8h] [rbp+7Fh] BYREF

  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v23,
    (struct DXGPUSHLOCKFAST *)a1,
    a3);
  if ( a2 == 4 )
    RAPID_HPD_MANAGER::CheckVelocitySetting((RAPID_HPD_MANAGER *)a1);
  LOBYTE(v25) = 0;
  LOBYTE(v26) = 0;
  RAPID_HPD_MANAGER::InRapidHPDPeriod(a1, 1LL, &v25, &v26);
  v9 = (unsigned __int8)v25;
  v10 = a1 + 36;
  if ( !(_BYTE)v25 )
  {
    if ( ExUuidCreate((UUID *)(a1 + 36)) < 0 )
    {
      WdLogSingleEntry1(2LL, 34LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v6,
          v16,
          v7,
          0,
          0,
          -1,
          (__int64)L"Failed to create new activity ID, hack to just increment current Id to make new",
          34LL,
          0LL,
          0LL,
          0LL,
          0LL);
      ++*(_BYTE *)(a1 + 44);
      v10 = a1 + 36;
    }
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 80) = a2;
  }
  *(_DWORD *)(a1 + 52) = 1;
  if ( a2 == 3 )
  {
    if ( (unsigned int)dword_1C012F8E0 > 5 )
    {
      v26 = (unsigned __int8)v26;
      v27 = *(unsigned __int8 *)(a1 + 32);
      v19 = *(_DWORD *)(a1 + 80);
      v25 = v9;
      v22 = v10;
      v21 = a3;
      v18 = 3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v6,
        (unsigned int)&unk_1C0099848,
        v7,
        v8,
        (__int64)&v18,
        (__int64)&v19,
        (__int64)&v21,
        (__int64)&v27,
        (__int64)&v22,
        (__int64)&v25,
        (__int64)&v26);
    }
  }
  else if ( (unsigned int)dword_1C012F8E0 > 5 && tlgKeywordOn((__int64)&dword_1C012F8E0, 0x400000000002LL) )
  {
    v26 = (unsigned __int8)v26;
    v20 = a1 + 36;
    v27 = *(unsigned __int8 *)(a1 + 32);
    v17 = *(_DWORD *)(a1 + 80);
    v25 = v9;
    v21 = a3;
    v18 = a2;
    v19 = 2;
    v22 = 16779264LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      (unsigned int)&unk_1C00998CB,
      v12,
      v13,
      (__int64)&v22,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v21,
      (__int64)&v27,
      (__int64)&v20,
      (__int64)&v25,
      (__int64)&v26);
  }
  if ( g_IsInternalRelease && a2 != 3 )
    DxgkLogCodePointPacket(
      0x75u,
      a2,
      *(_DWORD *)(a1 + 88) + (v9 << 16) + (*(unsigned __int8 *)(a1 + 32) << 8),
      *(_DWORD *)(a1 + 36),
      a3);
  v14 = v24 == 0;
  *(_DWORD *)(a1 + 64) = a2;
  if ( !v14 )
  {
    v15 = v23;
    *(_QWORD *)(v23 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v15, 0LL);
    KeLeaveCriticalRegion();
  }
}
