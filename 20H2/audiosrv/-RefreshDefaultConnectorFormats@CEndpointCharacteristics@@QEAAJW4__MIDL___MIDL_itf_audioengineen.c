/*
 * XREFs of ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18011E5F4
 * Callers:
 *     ?RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ @ 0x18011E4F8 (-RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ.c)
 * Callees:
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18001E210 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180021EA0 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800385D4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18004BAE4 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180052318 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D390 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z @ 0x180119BBC (--_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z.c)
 *     ?RediscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18011E40C (-RediscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::RefreshDefaultConnectorFormats(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v3; // edx
  signed int i; // r14d
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rax
  signed int j; // esi
  LPVOID *v10; // rcx
  signed int k; // esi
  void **v12; // rax
  int v13; // eax
  char v15; // [rsp+38h] [rbp-29h] BYREF
  __int64 v16; // [rsp+40h] [rbp-21h]
  struct _GUID v17; // [rsp+48h] [rbp-19h] BYREF
  struct _GUID v18; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v19[32]; // [rsp+68h] [rbp+7h] BYREF
  char *v20; // [rsp+88h] [rbp+27h]
  int v21; // [rsp+90h] [rbp+2Fh]
  int v22; // [rsp+94h] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v16 = 0LL;
  if ( (unsigned int)dword_18019C448 > 4 )
  {
    v15 = 0;
    v20 = &v15;
    v21 = 1;
    v22 = 0;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_18019C448, byte_180169D78, 0LL, 0LL, 3, (__int64)v19);
  }
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(this, eHostProcessConnector, &v18, 0LL, 0LL);
  if ( *((_QWORD *)this + 28) )
  {
    v17 = v18;
    CEndpointCharacteristics::GetAliasedDeviceConnectorMode((__int64)this, &v18, 0, &v17, 0);
    for ( i = 0; ; ++i )
    {
      v5 = *((_QWORD *)this + 28);
      if ( i >= *(_DWORD *)(v5 + 8) )
        break;
      v6 = (_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                       v5,
                       i);
      v7 = (_QWORD *)*v6;
      v8 = *(_QWORD *)*v6 - *(_QWORD *)&v18.Data1;
      if ( !v8 )
        v8 = v7[1] - *(_QWORD *)v18.Data4;
      if ( !v8 )
      {
        for ( j = 0; j < *((_DWORD *)v7 + 6); ++j )
        {
          v10 = *(LPVOID **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                              (__int64)(v7 + 2),
                              j);
          if ( v10 )
            CConnectorFormatCharacteristics::`scalar deleting destructor'(v10);
        }
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)(v7 + 2));
        for ( k = 0; k < *((_DWORD *)v7 + 10); ++k )
        {
          v12 = (void **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                           (__int64)(v7 + 4),
                           k);
          operator delete(*v12, (const struct std::nothrow_t *)0x12);
        }
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)(v7 + 4));
      }
    }
  }
  v13 = CEndpointCharacteristics::RediscoverProcessingModeCharacteristics(this, v3);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      6438LL,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v13);
  return 0LL;
}
