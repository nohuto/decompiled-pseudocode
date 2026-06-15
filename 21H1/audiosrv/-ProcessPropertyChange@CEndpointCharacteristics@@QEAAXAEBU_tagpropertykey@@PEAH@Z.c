/*
 * XREFs of ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18001C5C0
 * Callers:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x18001C4C0 (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x180058BEC (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 * Callees:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18001DE50 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x180020010 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___.c)
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180023110 (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180023970 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z @ 0x180023A00 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z.c)
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002782C (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     GetSpatialSettingsMonitoringPKey @ 0x18005B9D4 (GetSpatialSettingsMonitoringPKey.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertykey@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x18005D54C (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertyke.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18006ADE0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18006AE48 (_Init_thread_header.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BBC68 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ @ 0x180120244 (-UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CEndpointCharacteristics::ProcessPropertyChange(
        CEndpointCharacteristics *this,
        const struct _tagpropertykey *a2,
        int *a3)
{
  const struct _tagpropertykey *v4; // r14
  CEndpointCharacteristics *v5; // rsi
  unsigned int v6; // edx
  __int128 *v7; // rcx
  int updated; // eax
  int v9; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v10; // r8d
  void *v11; // rcx
  int v12; // eax
  void *v13; // rcx
  __int128 *v14; // rcx
  unsigned int v15; // edx
  int v16; // r12d
  struct _GUID *v17; // r13
  char *v18; // rax
  __int64 Data1; // r15
  __int64 v20; // rax
  __int64 v21; // rbx
  struct _RTL_CRITICAL_SECTION *v22; // rdi
  signed int v23; // edx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdi
  struct _RTL_CRITICAL_SECTION *v28; // r14
  unsigned int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // r14
  struct _RTL_CRITICAL_SECTION *v32; // r15
  __int64 v33; // rdx
  int v34; // ebx
  __int64 v35; // rdi
  __int64 v36; // rax
  int v37; // [rsp+20h] [rbp-E0h]
  int v38; // [rsp+20h] [rbp-E0h]
  __int64 v39; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v41[24]; // [rsp+50h] [rbp-B0h] BYREF
  struct _GUID v42; // [rsp+68h] [rbp-98h] BYREF
  CEndpointCharacteristics *v43; // [rsp+78h] [rbp-88h]
  __m256i v44; // [rsp+80h] [rbp-80h] BYREF
  const struct _tagpropertykey *v45; // [rsp+A0h] [rbp-60h]
  __m256i v46; // [rsp+A8h] [rbp-58h] BYREF
  __m256i *v47; // [rsp+E0h] [rbp-20h]
  __int128 v48; // [rsp+F0h] [rbp-10h] BYREF
  int v49; // [rsp+100h] [rbp+0h]
  __int128 v50; // [rsp+104h] [rbp+4h]
  int v51; // [rsp+114h] [rbp+14h]
  __int128 v52; // [rsp+118h] [rbp+18h]
  int v53; // [rsp+128h] [rbp+28h]
  __int128 v54; // [rsp+12Ch] [rbp+2Ch]
  int v55; // [rsp+13Ch] [rbp+3Ch]
  __int128 v56; // [rsp+140h] [rbp+40h]
  int v57; // [rsp+150h] [rbp+50h]
  __int128 v58; // [rsp+154h] [rbp+54h]
  int v59; // [rsp+164h] [rbp+64h]
  PROPERTYKEY v60; // [rsp+168h] [rbp+68h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v4 = a2;
  v45 = a2;
  v5 = this;
  v43 = this;
  *a3 = 0;
  v48 = xmmword_18019E764;
  v49 = dword_18019E774;
  v50 = xmmword_18019E778;
  v51 = dword_18019E788;
  v52 = xmmword_18019E78C;
  v53 = dword_18019E79C;
  v54 = xmmword_18019E7B4;
  v55 = dword_18019E7C4;
  v56 = xmmword_18019E7C8;
  v57 = dword_18019E7D8;
  v58 = xmmword_18019E7DC;
  v59 = dword_18019E7EC;
  v60 = PKEY_AudioEndpoint_Disable_SysFx;
  v6 = 0;
  v7 = &v48;
  while ( v4->pid != *((_DWORD *)v7 + 4)
       || *(_QWORD *)&v4->fmtid.Data1 != *(_QWORD *)v7
       || *(_QWORD *)v4->fmtid.Data4 != *((_QWORD *)v7 + 1) )
  {
    ++v6;
    v7 = (__int128 *)((char *)v7 + 20);
    if ( v6 >= 7 )
      goto LABEL_9;
  }
  updated = CEndpointCharacteristics::UpdateAPOEnableStatus(v5);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D35,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)updated,
      v37);
LABEL_9:
  if ( !*((_DWORD *)v5 + 47) )
  {
    v9 = SpatialPolicy::OnPropertyChange(*((struct IMMDevice **)v5 + 2), v4);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D3C,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v9,
        v37);
    if ( !*((_DWORD *)v5 + 47)
      && (*(_QWORD *)&v4->fmtid.Data1 == *(_QWORD *)((char *)v5 + 1852)
       && *(_QWORD *)v4->fmtid.Data4 == *(_QWORD *)((char *)v5 + 1860)
       && v4->pid == *((_DWORD *)v5 + 467)
       || *(_QWORD *)&v4->fmtid.Data1 == *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1
       && *(_QWORD *)v4->fmtid.Data4 == *(_QWORD *)PKEY_AudioEngine_DeviceFormat.fmtid.Data4
       && !v4->pid) )
    {
      CEndpointCharacteristics::GetDefaultConnectorProcessingModeForSpatialStream(v5, &v42, v10);
      pv = 0LL;
      *(_QWORD *)v41 = &pv;
      *(_QWORD *)&v41[8] = 0LL;
      v41[16] = 1;
      CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(v5, &v44, 0LL, 1LL);
      v46.m256i_i64[0] = (__int64)v5;
      v46.m256i_i32[2] = 0;
      *(_OWORD *)((char *)&v46.m256i_u64[1] + 4) = *(_OWORD *)v44.m256i_i8;
      v44 = v46;
      CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___(
        v5,
        (__int64)&v44,
        (__int64)&v41[8]);
      if ( v41[16] )
      {
        v11 = **(void ***)v41;
        **(_QWORD **)v41 = *(_QWORD *)&v41[8];
        if ( v11 )
          CoTaskMemFree(v11);
      }
      *(_QWORD *)v41 = v5;
      *(struct _GUID *)&v41[8] = v42;
      LOBYTE(v39) = 0;
      v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)g_policyConfigInternal + 48LL))(
              g_policyConfigInternal,
              &v39);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1D58,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v12,
          v38);
      v46.m256i_i64[0] = (__int64)off_180156BF8;
      *(_OWORD *)&v46.m256i_u64[1] = *(_OWORD *)v41;
      v46.m256i_i64[3] = *(_QWORD *)&v41[16];
      v47 = &v46;
      CSpatialProperties::ProcessPropertyChange(
        (LPCRITICAL_SECTION)((char *)v5 + 1768),
        v5,
        (__int64)&v39,
        (struct tWAVEFORMATEX *)pv,
        (__int64)&v46,
        (__int64)a3);
      v13 = pv;
      pv = 0LL;
      if ( v13 )
        CoTaskMemFree(v13);
    }
  }
  if ( dword_18019FE28 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18019FE28);
    if ( dword_18019FE28 == -1 )
    {
      xmmword_18019F450 = (__int128)GUID_00000000_0000_0000_0000_000000000000;
      dword_18019F460 = 0;
      dword_18019F464 = 8;
      xmmword_18019F468 = (__int128)GUID_00000000_0000_0000_0000_000000000000;
      dword_18019F478 = 0;
      dword_18019F47C = 4;
      *(PROPERTYKEY *)byte_18019F480 = PKEY_AudioEngine_DeviceFormat;
      dword_18019F494 = 2;
      *(struct _tagpropertykey *)byte_18019F498 = PKEY_Endpoint_AllowOffloading;
      dword_18019F4AC = 16;
      Init_thread_footer(&dword_18019FE28);
    }
  }
  v14 = &xmmword_18019F450;
  v44.m256i_i64[0] = (__int64)&xmmword_18019F450;
  if ( xmmword_18019F450 == *(_OWORD *)&GUID_00000000_0000_0000_0000_000000000000 )
  {
    ((void (*)(void))GetSpatialSettingsMonitoringPKey)();
    GetSpatialSettingsMonitoringPKey(&xmmword_18019F468);
    v14 = &xmmword_18019F450;
  }
  v15 = 0;
  LODWORD(pv) = 0;
  do
  {
    if ( v4->pid == *((_DWORD *)v14 + 4)
      && *(_QWORD *)&v4->fmtid.Data1 == *(_QWORD *)v14
      && *(_QWORD *)v4->fmtid.Data4 == *((_QWORD *)v14 + 1) )
    {
      v16 = *((_DWORD *)v14 + 5);
      v42.Data1 = 0;
      *(_DWORD *)&v42.Data2 = 1;
      v17 = &v42;
      v18 = (char *)v5 + 1656;
      do
      {
        Data1 = (int)v17->Data1;
        v20 = gsl::span<SystemEffectDescriptor,-1>::operator[](v18, Data1);
        v21 = v20;
        if ( *(_BYTE *)(v20 + 52) )
        {
          v22 = (struct _RTL_CRITICAL_SECTION *)(v20 + 56);
          EnterCriticalSection((LPCRITICAL_SECTION)(v20 + 56));
          v23 = 0;
          if ( *(int *)(v21 + 40) > 0 )
          {
            v24 = 0LL;
            do
            {
              if ( v24 < 0 || v23 >= *(_DWORD *)(v21 + 40) )
              {
                ATL::_AtlRaiseException(0xC000008C, v23);
                __debugbreak();
              }
              v25 = *(_QWORD *)(v24 + *(_QWORD *)(v21 + 32));
              if ( (v16 & *(_DWORD *)(v25 + 16)) != 0 )
                *(_BYTE *)(v25 + 20) = 1;
              ++v23;
              v24 += 16LL;
            }
            while ( v23 < *(_DWORD *)(v21 + 40) );
          }
          if ( v22 )
            LeaveCriticalSection(v22);
        }
        v26 = gsl::span<SystemEffectDescriptor,-1>::operator[]((char *)v5 + 1672, Data1);
        v27 = v26;
        if ( *(_BYTE *)(v26 + 52) )
        {
          v28 = (struct _RTL_CRITICAL_SECTION *)(v26 + 56);
          EnterCriticalSection((LPCRITICAL_SECTION)(v26 + 56));
          v29 = 0;
          if ( *(int *)(v27 + 40) > 0 )
          {
            do
            {
              if ( (v16 & *(_DWORD *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                   v27 + 32,
                                                   v29)
                                    + 16LL)) != 0 )
                *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                        v27 + 32,
                                        v29)
                         + 20LL) = 1;
              ++v29;
            }
            while ( (signed int)v29 < *(_DWORD *)(v27 + 40) );
            v5 = v43;
          }
          if ( v28 )
            LeaveCriticalSection(v28);
        }
        v30 = gsl::span<SystemEffectDescriptor,-1>::operator[]((char *)v5 + 1688, Data1);
        v31 = v30;
        if ( *(_BYTE *)(v30 + 52) )
        {
          v32 = (struct _RTL_CRITICAL_SECTION *)(v30 + 56);
          EnterCriticalSection((LPCRITICAL_SECTION)(v30 + 56));
          v34 = 0;
          if ( *(int *)(v31 + 40) > 0 )
          {
            v35 = 0LL;
            do
            {
              if ( v34 < 0 || v34 >= *(_DWORD *)(v31 + 40) )
              {
                ATL::_AtlRaiseException(0xC000008C, v33);
                __debugbreak();
              }
              if ( (v16 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 32) + v35) + 16LL)) != 0 )
              {
                v36 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                        v31 + 32,
                        (unsigned int)v34);
                v33 = *(_QWORD *)v36;
                *(_BYTE *)(*(_QWORD *)v36 + 20LL) = 1;
              }
              ++v34;
              v35 += 16LL;
            }
            while ( v34 < *(_DWORD *)(v31 + 40) );
            v5 = v43;
          }
          if ( v32 )
            LeaveCriticalSection(v32);
        }
        v17 = (struct _GUID *)((char *)v17 + 4);
        v18 = (char *)v5 + 1656;
      }
      while ( v17 != (struct _GUID *)v42.Data4 );
      v14 = (__int128 *)v44.m256i_i64[0];
      v4 = v45;
      v15 = (unsigned int)pv;
    }
    LODWORD(pv) = ++v15;
    v14 = (__int128 *)((char *)v14 + 24);
    v44.m256i_i64[0] = (__int64)v14;
  }
  while ( v15 < 4 );
}
