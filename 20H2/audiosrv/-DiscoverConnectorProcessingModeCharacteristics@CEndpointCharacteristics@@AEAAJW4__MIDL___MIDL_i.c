/*
 * XREFs of ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x18011AB24
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x1800590A4 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18001E210 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180021EA0 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800232F0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_J@Z @ 0x180023470 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800385D4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18005A588 (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?Add@?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAHAEBQEAVCConnectorProcessingModeCharacteristics@@@Z @ 0x18005AA20 (-Add@-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAV.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180067D8C (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A33C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1800BA3C8 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_f36e01949351335f5e9acafaa1161a48___ @ 0x180116668 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_f36e01949351335f5e9acafaa1161a48.c)
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x180119BF8 (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 *     ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x18011BED4 (-GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__.c)
 *     ?LogEPCProductionAssert@@YAX_KPEBG@Z @ 0x180122114 (-LogEPCProductionAssert@@YAX_KPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
        CEndpointCharacteristics *this,
        int a2,
        int a3,
        unsigned int *a4,
        __int64 a5,
        char a6,
        __int64 a7,
        _QWORD *a8,
        __int64 a9)
{
  unsigned __int64 v9; // r12
  int v11; // esi
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  const struct _GUID *v15; // rbx
  __int64 v16; // rax
  int v17; // eax
  int v18; // ebx
  signed int v19; // edi
  signed int v20; // r15d
  char v21; // bl
  _QWORD *v22; // rbx
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  void *v25; // rax
  _QWORD *v26; // rbx
  __int64 v28; // [rsp+38h] [rbp-C8h]
  void *v29; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B0h]
  size_t Size; // [rsp+58h] [rbp-A8h]
  LPVOID pv[2]; // [rsp+60h] [rbp-A0h] BYREF
  GUID v34; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+80h] [rbp-80h]
  int cchMax[4]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v37; // [rsp+A0h] [rbp-60h]
  LPOLESTR lpsz; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD *v39; // [rsp+B0h] [rbp-50h]
  __int128 v40; // [rsp+C0h] [rbp-40h]
  __m256i v41; // [rsp+D0h] [rbp-30h]
  __int128 v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp+0h]
  __int64 v44[2]; // [rsp+110h] [rbp+10h] BYREF
  __m256i v45; // [rsp+120h] [rbp+20h]
  __int128 v46; // [rsp+140h] [rbp+40h]
  __int64 v47; // [rsp+150h] [rbp+50h]
  GUID rguid; // [rsp+160h] [rbp+60h] BYREF
  struct _GUID v49; // [rsp+170h] [rbp+70h] BYREF
  wchar_t pszDest[1024]; // [rsp+180h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+9D8h] [rbp+8D8h]

  v37 = a4;
  LODWORD(Size) = a3;
  v9 = a2;
  v35 = a5;
  v39 = a8;
  v11 = 0;
  v29 = 0LL;
  v49 = GUID_00000000_0000_0000_0000_000000000000;
  v30 = 0LL;
  v31 = 0LL;
  if ( !a2 )
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
      this,
      eHostProcessConnector,
      &v49,
      0LL,
      0LL);
  v12 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  *(_QWORD *)&v34.Data1 = v12;
  if ( v12 )
  {
    *v12 = 0LL;
    v12[1] = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  v29 = v12;
  if ( !v12 )
  {
    v11 = -2147024882;
    goto LABEL_32;
  }
  v13 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 19, v9);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=((__int64)&v30, v13);
  v14 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 19, v9);
  if ( (_DWORD)v31 != *(_DWORD *)(v14 + 8) )
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x104C,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_32;
  }
  v15 = *(const struct _GUID **)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                  (unsigned __int64 *)this + 217,
                                  v9);
  v16 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 217, v9);
  v17 = CAudioSignalProcessingModeArray::AddMultiple((CAudioSignalProcessingModeArray *)&v30, *(_DWORD *)(v16 + 8), v15);
  v18 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x104D,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v17);
    v11 = v18;
    goto LABEL_32;
  }
  v19 = 0;
  v20 = v31;
  if ( (int)v31 <= 0 )
  {
LABEL_31:
    v25 = v29;
    v29 = 0LL;
    *v39 = v25;
    goto LABEL_32;
  }
  v21 = a6;
  while ( 1 )
  {
    v34 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v30, v19);
    CEndpointCharacteristics::GetAliasedDeviceConnectorMode((__int64)this, &rguid, v9, &v34, 0);
    v34 = rguid;
    if ( !(unsigned int)CEndpointCharacteristics::GetConnectorProcessingModeCharacteristicsFromDriver(
                          (_DWORD)this,
                          (unsigned int)&v34,
                          v9,
                          v35,
                          v21,
                          a7,
                          (__int64)&v29) )
      goto LABEL_30;
    v22 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    *(_QWORD *)&v34.Data1 = v22;
    if ( v22 )
    {
      *(GUID *)v22 = rguid;
      v22[2] = 0LL;
      v22[3] = 0LL;
      v22[4] = 0LL;
      v22[5] = 0LL;
    }
    else
    {
      v22 = 0LL;
    }
    *(_QWORD *)&v34.Data1 = v22;
    if ( !v22 )
      break;
    *(_QWORD *)&v40 = v22;
    *((_QWORD *)&v40 + 1) = this;
    v41.m256i_i32[0] = v9;
    *(GUID *)((char *)v41.m256i_i64 + 4) = rguid;
    v41.m256i_i64[3] = v35;
    LOBYTE(v42) = a6;
    *((_QWORD *)&v42 + 1) = a7;
    v43 = a9;
    *(_OWORD *)v44 = v40;
    v45 = v41;
    v46 = v42;
    v47 = a9;
    *(GUID *)cchMax = rguid;
    v11 = CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_f36e01949351335f5e9acafaa1161a48___(
            this,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v9,
            (unsigned int)Size,
            v37,
            cchMax,
            (__int128 *)v44);
    if ( v11 < 0 )
      goto LABEL_38;
    if ( !*((_DWORD *)v22 + 6) )
    {
      pv[0] = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2), pv) >= 0 )
      {
        *(_QWORD *)cchMax = 0LL;
        LODWORD(v28) = v9;
        if ( (int)StringCchPrintfExW(
                    pszDest,
                    0x400uLL,
                    &lpsz,
                    (unsigned __int64 *)cchMax,
                    0,
                    L"[%s], connector [%d] has no supported formats for mode - ",
                    pv[0],
                    v28) >= 0 )
        {
          StringFromGUID2(&rguid, lpsz, cchMax[0]);
          LogEPCProductionAssert(v23, pszDest);
        }
      }
      CoTaskMemFree(pv[0]);
      *((_DWORD *)this + 55) = 1;
      v24 = *(_QWORD *)&v49.Data1 - *(_QWORD *)&rguid.Data1;
      if ( *(_QWORD *)&v49.Data1 == *(_QWORD *)&rguid.Data1 )
        v24 = *(_QWORD *)v49.Data4 - *(_QWORD *)rguid.Data4;
      if ( !v24 )
        *((_QWORD *)this + 24) = 0LL;
    }
    if ( !(unsigned int)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::Add(
                          (__int64)v29,
                          &v34) )
    {
      v11 = -2147024882;
LABEL_38:
      CConnectorProcessingModeCharacteristics::`scalar deleting destructor'((CConnectorProcessingModeCharacteristics *)v22);
      goto LABEL_32;
    }
    v21 = a6;
LABEL_30:
    if ( ++v19 >= v20 )
      goto LABEL_31;
  }
  v11 = -2147024882;
LABEL_32:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v30);
  v26 = v29;
  if ( v29 )
  {
    if ( *(_QWORD *)v29 )
    {
      free(*(void **)v29);
      *v26 = 0LL;
    }
    v26[1] = 0LL;
    operator delete(v26, (const struct std::nothrow_t *)0x10);
  }
  return (unsigned int)v11;
}
