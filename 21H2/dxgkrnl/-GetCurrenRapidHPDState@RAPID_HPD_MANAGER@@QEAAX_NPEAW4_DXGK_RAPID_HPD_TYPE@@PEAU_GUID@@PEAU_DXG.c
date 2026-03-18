/*
 * XREFs of ?GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXGK_RAPID_HPD_DIAG@@@Z @ 0x1C002A02C
 * Callers:
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F3F00 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?ProcessHPDFiltering@VIDPN_MGR@@QEAA?AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEAU_DMM_HPD_FILTER_INFO@@EPEAU_GUID@@@Z @ 0x1C0206274 (-ProcessHPDFiltering@VIDPN_MGR@@QEAA-AW4_DMM_HPD_FILTER_RESULT@@PEAU_DXGK_CONNECTION_CHANGE@@AEA.c)
 *     DxgkProcessDisplayCalloutBatch @ 0x1C02F3490 (DxgkProcessDisplayCalloutBatch.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02FF2BC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?InRapidHPDPeriod@RAPID_HPD_MANAGER@@AEAAXW4RAPID_HPD_PERIOD_UPDATE@1@AEA_N1@Z @ 0x1C0025A34 (-InRapidHPDPeriod@RAPID_HPD_MANAGER@@AEAAXW4RAPID_HPD_PERIOD_UPDATE@1@AEA_N1@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1C002A174 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByRef@$0BA@@@@-$_tlgWriteTemplate@$$A6A.c)
 *     ??0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C002A224 (--0DXGAUTOPUSHLOCKFASTSHARED@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall RAPID_HPD_MANAGER::GetCurrenRapidHPDState(
        RAPID_HPD_MANAGER *this,
        unsigned __int8 a2,
        enum _DXGK_RAPID_HPD_TYPE *a3,
        struct _GUID *a4,
        struct _DXGK_RAPID_HPD_DIAG *a5)
{
  int v5; // r12d
  int v9; // edi
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rax
  int v12; // edx
  struct _DXGK_RAPID_HPD_DIAG *v13; // rcx
  int v14; // r8d
  int v15; // r9d
  struct _DXGK_RAPID_HPD_DIAG *v16; // rax
  int v17; // edx
  int v18; // ecx
  bool v19; // [rsp+68h] [rbp+Fh] BYREF
  BOOL v20; // [rsp+6Ch] [rbp+13h] BYREF
  int v21; // [rsp+70h] [rbp+17h] BYREF
  int v22; // [rsp+74h] [rbp+1Bh] BYREF
  struct _GUID *v23; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v24; // [rsp+80h] [rbp+27h] BYREF
  char v25; // [rsp+88h] [rbp+2Fh]
  int v26; // [rsp+B8h] [rbp+5Fh] BYREF

  v5 = a2;
  DXGAUTOPUSHLOCKFASTSHARED::DXGAUTOPUSHLOCKFASTSHARED((DXGAUTOPUSHLOCKFASTSHARED *)&v24, this, (bool)a3);
  v9 = 0;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v11 = *((_QWORD *)Current + 11);
    if ( v11 )
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v11 + 224))(0LL, 0LL, 0LL);
  }
  LOBYTE(v26) = 0;
  v19 = 0;
  RAPID_HPD_MANAGER::InRapidHPDPeriod((__int64)this, 0, (bool *)&v26, &v19);
  if ( v9 || (_BYTE)v26 == (_BYTE)v12 || *((_BYTE *)this + 32) == (_BYTE)v12 )
  {
    *(_DWORD *)a3 &= v12;
    v16 = a5;
    *a4 = 0LL;
    if ( v16 )
      *(_OWORD *)v16 = 0LL;
  }
  else
  {
    if ( *((_DWORD *)this + 13) == v12 )
    {
      WdLogSingleEntry1(1LL, 192LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v18,
            v17,
            v14,
            0,
            2,
            -1,
            (__int64)L"m_CurrentType != DXGK_RAPID_HPD_NONE",
            192LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    *(_DWORD *)a3 = *((_DWORD *)this + 13);
    *a4 = *(struct _GUID *)((char *)this + 36);
    if ( *((_DWORD *)this + 22) == 1 )
    {
      *((_DWORD *)this + 13) = 1;
    }
    else if ( (_BYTE)v5 )
    {
      *((_DWORD *)this + 13) = 2;
    }
    v13 = a5;
    if ( a5 )
    {
      *((_QWORD *)a5 + 1) = *((_QWORD *)this + 9);
      *(_DWORD *)v13 = *((_DWORD *)this + 20);
    }
  }
  if ( (unsigned int)dword_1C012F8E0 > 5 )
  {
    v26 = (unsigned __int8)v26;
    v20 = v19;
    v21 = *(_DWORD *)a3;
    v23 = a4;
    v22 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
      (_DWORD)v13,
      (unsigned int)&unk_1C0099693,
      v14,
      v15,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v26,
      (__int64)&v23);
  }
  if ( v25 )
  {
    ExReleasePushLockSharedEx(v24, 0LL);
    KeLeaveCriticalRegion();
  }
}
