/*
 * XREFs of ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x18011CAA4
 * Callers:
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x18011B6F4 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180048FB8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x18005AF20 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?Add@?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAHAEBQEAVCConnectorProcessingModeCharacteristics@@@Z @ 0x18005B0C0 (-Add@-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAV.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CBC04 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x18011A7C8 (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x18011BB88 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CEndpointCharacteristics::GetConnectorProcessingModeCharacteristicsFromDriver(
        CEndpointCharacteristics *a1,
        struct _GUID *a2,
        int a3,
        struct PacketSizeConstraints *a4,
        bool a5,
        __int64 a6,
        __int64 *a7)
{
  int v9; // r15d
  int v10; // eax
  int v11; // edi
  int v12; // eax
  HRESULT v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  void *v18; // rcx
  char *v19; // r12
  __int64 v20; // r13
  CConnectorProcessingModeCharacteristics *v21; // rax
  CConnectorProcessingModeCharacteristics *v22; // rbx
  int v23; // r14d
  char *v24; // rcx
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  LPVOID v30; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-98h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v32; // [rsp+70h] [rbp-90h]
  LPVOID ppv; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v34; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v35; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v36; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v37; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v38; // [rsp+90h] [rbp-70h] BYREF
  __int64 v39; // [rsp+98h] [rbp-68h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-60h] BYREF
  int v41[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-50h] BYREF
  CEndpointCharacteristics *v43; // [rsp+B8h] [rbp-48h]
  struct _GUID v44; // [rsp+C0h] [rbp-40h] BYREF
  char v45; // [rsp+D0h] [rbp-30h]
  struct _GUID v46; // [rsp+E0h] [rbp-20h] BYREF
  LPVOID *p_pv; // [rsp+F0h] [rbp-10h]
  struct tWAVEFORMATEX *v48; // [rsp+F8h] [rbp-8h] BYREF
  char v49; // [rsp+100h] [rbp+0h]
  struct _GUID *v50; // [rsp+108h] [rbp+8h]
  struct PacketSizeConstraints *v51; // [rsp+110h] [rbp+10h]
  PROPVARIANT pvar[2]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v53; // [rsp+128h] [rbp+28h]
  PROPVARIANT v54[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v55; // [rsp+140h] [rbp+40h]
  _DWORD v56[6]; // [rsp+148h] [rbp+48h] BYREF
  struct _tagpropertykey v57; // [rsp+160h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v51 = a4;
  v50 = a2;
  v43 = a1;
  v32 = eKeywordDetectorConnector;
  v56[0] = 590439624;
  v56[1] = 1283267372;
  v56[2] = 1907779772;
  v56[3] = 1730509416;
  v56[4] = 1;
  if ( a3 == 3 )
  {
    v57 = PKEY_Endpoint_KeywordDetector_ConnectorId;
    v9 = 0;
  }
  else
  {
    v9 = 0;
    v32 = eHostProcessConnector;
    *(_QWORD *)&v57.fmtid.Data1 = 0x41B43EBB9A82A7DBLL;
    *(_QWORD *)v57.fmtid.Data4 = 0xFC181731B718BA83uLL;
    v57.pid = 1;
  }
  *(_OWORD *)v54 = 0LL;
  v55 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD *, _DWORD *, PROPVARIANT *))(**((_QWORD **)a1 + 5) + 40LL))(
          *((_QWORD **)a1 + 5),
          v56,
          v54);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFE6,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_56;
  }
  *(_OWORD *)pvar = 0LL;
  v53 = 0LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD *, struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)a1 + 5) + 40LL))(
          *((_QWORD **)a1 + 5),
          &v57,
          pvar);
  v11 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFE9,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_55;
  }
  ppv = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&ppv);
  v13 = CoCreateInstance(
          &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
          0LL,
          0x17u,
          &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
          &ppv);
  v11 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFEC,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_54;
  }
  v42 = 0LL;
  v14 = (*(__int64 (__fastcall **)(LPVOID, PROPVARIANT, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, v54[1], &v42);
  v11 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFEF,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_53;
  }
  *(_QWORD *)v41 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v42 + 24LL))(
          v42,
          &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
          1LL);
  v11 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFF2,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_52;
  }
  v40 = 0LL;
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)v41 + 56LL))(
          *(_QWORD *)v41,
          LODWORD(pvar[1]),
          &v40);
  v11 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFF5,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_51;
  }
  v39 = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v40 + 104LL))(
          v40,
          23LL,
          &GUID_915aed0f_c782_41d6_b0dc_1ed22d1ee5cb,
          &v39);
  v11 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFF8,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_50;
  }
  v30 = 0LL;
  v46 = *a2;
  *(_QWORD *)&v44.Data1 = &v30;
  *(_QWORD *)v44.Data4 = 0LL;
  v45 = 1;
  v11 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, unsigned __int8 *))(*(_QWORD *)v39 + 32LL))(
          v39,
          &v46,
          v44.Data4);
  if ( v45 )
  {
    v18 = **(void ***)&v44.Data1;
    **(_QWORD **)&v44.Data1 = *(_QWORD *)v44.Data4;
    if ( v18 )
      CoTaskMemFree(v18);
  }
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFFB,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_48;
  }
  if ( !*((_DWORD *)v30 + 1) )
  {
    v11 = -2147023728;
    goto LABEL_48;
  }
  v19 = (char *)v30 + 8;
  v20 = *a7;
  v21 = (CConnectorProcessingModeCharacteristics *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v22 = v21;
  *(_QWORD *)&v46.Data1 = v21;
  if ( v21 )
  {
    *(struct _GUID *)v21 = *a2;
    *((_QWORD *)v21 + 2) = 0LL;
    *((_QWORD *)v21 + 3) = 0LL;
    *((_QWORD *)v21 + 4) = 0LL;
    *((_QWORD *)v21 + 5) = 0LL;
  }
  else
  {
    v22 = 0LL;
  }
  *(_QWORD *)&v46.Data1 = v22;
  v23 = 0;
  if ( !*((_DWORD *)v30 + 1) )
  {
LABEL_43:
    if ( v23 != *((_DWORD *)v30 + 1) )
      *((_DWORD *)v43 + 55) = 1;
    v11 = 0;
    goto LABEL_46;
  }
  while ( 1 )
  {
    v24 = &v19[*(unsigned int *)&v19[4 * v9]];
    if ( *(_DWORD *)v24 >= 0x52u )
      break;
LABEL_38:
    if ( (unsigned int)++v9 >= *((_DWORD *)v30 + 1) )
    {
      if ( v23 )
      {
        ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::Add(
          v20,
          &v46);
        v22 = 0LL;
      }
      goto LABEL_43;
    }
  }
  pv = 0LL;
  p_pv = &pv;
  v48 = 0LL;
  v49 = 1;
  v11 = CloneWaveFormat((const struct tWAVEFORMATEX *)(v24 + 64), &v48);
  if ( v49 )
  {
    v25 = *p_pv;
    *p_pv = v48;
    if ( v25 )
      CoTaskMemFree(v25);
  }
  if ( v11 >= 0 )
  {
    v44 = *v50;
    if ( (int)CEndpointCharacteristics::DiscoverPeriodicityCharacteristicsForFormat(
                v43,
                v32,
                &v44,
                (const struct tWAVEFORMATEX *)pv,
                v51,
                a5,
                a6,
                &v38,
                &v37,
                &v36,
                &v35,
                &v34) >= 0 )
    {
      CConnectorProcessingModeCharacteristics::AddConnectorFormat(
        v22,
        (const struct tWAVEFORMATEX *)pv,
        v38,
        v37,
        v36,
        v35,
        v34);
      ++v23;
    }
    v26 = pv;
    pv = 0LL;
    if ( v26 )
      CoTaskMemFree(v26);
    goto LABEL_38;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x100D,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v11);
  v27 = pv;
  pv = 0LL;
  if ( v27 )
    CoTaskMemFree(v27);
LABEL_46:
  if ( v22 )
    CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v22);
LABEL_48:
  v28 = v30;
  v30 = 0LL;
  if ( v28 )
    CoTaskMemFree(v28);
LABEL_50:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v39);
LABEL_51:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v40);
LABEL_52:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v41);
LABEL_53:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v42);
LABEL_54:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
LABEL_55:
  PropVariantClear(pvar);
LABEL_56:
  PropVariantClear(v54);
  return (unsigned int)v11;
}
