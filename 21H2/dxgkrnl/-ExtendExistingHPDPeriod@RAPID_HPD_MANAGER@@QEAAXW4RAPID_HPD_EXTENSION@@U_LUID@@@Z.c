/*
 * XREFs of ?ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z @ 0x1C0058354
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02F07A8 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     DxgkProcessDisplayCalloutBatch @ 0x1C02F3490 (DxgkProcessDisplayCalloutBatch.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02FF2BC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C00123E4 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     ?InRapidHPDPeriod@RAPID_HPD_MANAGER@@AEAAXW4RAPID_HPD_PERIOD_UPDATE@1@AEA_N1@Z @ 0x1C0025A34 (-InRapidHPDPeriod@RAPID_HPD_MANAGER@@AEAAXW4RAPID_HPD_PERIOD_UPDATE@1@AEA_N1@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C002A224 (--0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByRef@$0BA@@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByRef@$0BA@@@333@Z @ 0x1C0058190 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByRef@$0BA@@@U1@U1@U.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@434AEBU?$_tlgWrapperByRef@$0BA@@@444@Z @ 0x1C0058260 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U1@U2@U-$_tlgWrapperByRef@$0BA@@@U.c)
 */

void __fastcall RAPID_HPD_MANAGER::ExtendExistingHPDPeriod(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v13; // [rsp+74h] [rbp+Bh] BYREF
  unsigned int v14; // [rsp+78h] [rbp+Fh] BYREF
  int v15; // [rsp+7Ch] [rbp+13h] BYREF
  __int64 v16; // [rsp+80h] [rbp+17h] BYREF
  __int64 v17; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v18; // [rsp+90h] [rbp+27h] BYREF
  __int64 v19; // [rsp+98h] [rbp+2Fh] BYREF
  char v20; // [rsp+A0h] [rbp+37h]
  int v21; // [rsp+D0h] [rbp+67h] BYREF
  int v22; // [rsp+E8h] [rbp+7Fh] BYREF

  DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED((DXGAUTOPUSHLOCKFASTSHARED *)&v19, (struct DXGPUSHLOCKFAST *)a1);
  LOBYTE(v22) = 0;
  LOBYTE(v21) = 0;
  RAPID_HPD_MANAGER::InRapidHPDPeriod(a1, 2, (bool *)&v22, (bool *)&v21);
  if ( (_BYTE)v22 )
  {
    if ( (unsigned int)dword_1C012F8E0 > 5 && tlgKeywordOn((__int64)&dword_1C012F8E0, 0x400000000002LL) )
    {
      v10 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 72);
      v17 = a3;
      v14 = a2;
      v15 = 1;
      v18 = 16779264LL;
      v12 = *(_DWORD *)(a1 + 80);
      v21 = (unsigned __int8)v21;
      v16 = a1 + 36;
      v13 = *(unsigned __int8 *)(a1 + 32);
      v22 = (int)v10 / 10000;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        byte_1C009979E,
        v8,
        v9,
        (__int64)&v18,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v17,
        (__int64)&v13,
        &v16,
        (__int64)&v21,
        (__int64)&v12,
        (__int64)&v22);
    }
    DxgkLogCodePointPacket(
      0x76u,
      a2,
      *(_DWORD *)(a1 + 88) + (*(unsigned __int8 *)(a1 + 32) << 8),
      *(_DWORD *)(a1 + 36),
      a3);
  }
  else if ( (unsigned int)dword_1C012F8E0 > 5 )
  {
    v11 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 72);
    v17 = a3;
    v13 = a2;
    v15 = *(_DWORD *)(a1 + 80);
    v21 = (unsigned __int8)v21;
    v18 = a1 + 36;
    v14 = *(unsigned __int8 *)(a1 + 32);
    v22 = (int)v11 / 10000;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      byte_1C0099706,
      v6,
      v7,
      (__int64)&v13,
      (__int64)&v17,
      (__int64)&v14,
      &v18,
      (__int64)&v21,
      (__int64)&v15,
      (__int64)&v22);
  }
  if ( v20 )
  {
    ExReleasePushLockSharedEx(v19, 0LL);
    KeLeaveCriticalRegion();
  }
}
