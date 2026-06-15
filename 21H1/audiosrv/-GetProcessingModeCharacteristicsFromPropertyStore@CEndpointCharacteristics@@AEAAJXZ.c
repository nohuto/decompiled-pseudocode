/*
 * XREFs of ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x1800597D0
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x180059744 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18001E890 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180023970 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_J@Z @ 0x180023AF0 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180038CF4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18004C254 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18005AC28 (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x18005AC8C (-ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800685BC (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore(
        CEndpointCharacteristics *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rax
  const struct _GUID *v7; // rdi
  __int64 v8; // rax
  signed int v9; // r15d
  signed int i; // r12d
  signed int v11; // eax
  bool v12; // zf
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  const struct _GUID *v21; // rbx
  __int64 v22; // rax
  signed int v23; // esi
  int v24; // r12d
  signed int j; // r15d
  signed int v26; // eax
  bool v27; // zf
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // [rsp+30h] [rbp-29h] BYREF
  int v32; // [rsp+38h] [rbp-21h]
  int v33; // [rsp+3Ch] [rbp-1Dh]
  __int64 v34; // [rsp+40h] [rbp-19h] BYREF
  __int64 v35; // [rsp+48h] [rbp-11h] BYREF
  __int64 v36; // [rsp+50h] [rbp-9h] BYREF
  int v37; // [rsp+58h] [rbp-1h]
  int v38; // [rsp+5Ch] [rbp+3h]
  __int128 v39; // [rsp+60h] [rbp+7h] BYREF
  GUID v40; // [rsp+70h] [rbp+17h] BYREF

  v2 = 0LL;
  v34 = 0LL;
  v3 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0;
  v38 = 0;
  if ( !*((_DWORD *)this + 54) )
  {
LABEL_2:
    v4 = CEndpointCharacteristics::ReadProcessingModeCharacteristics(this, 0LL, &v35);
    if ( v4 >= 0 )
    {
      v5 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 19, 0LL);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(&v36, v5);
      v6 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 19, 0LL);
      if ( v37 == *(_DWORD *)(v6 + 8) )
      {
        v7 = *(const struct _GUID **)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                       (unsigned __int64 *)this + 217,
                                       0LL);
        v8 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 217, 0LL);
        v4 = CAudioSignalProcessingModeArray::AddMultiple(
               (CAudioSignalProcessingModeArray *)&v36,
               *(_DWORD *)(v8 + 8),
               v7);
        if ( v4 >= 0 )
        {
          v9 = 0;
          v3 = v35;
          if ( v37 <= 0 )
          {
LABEL_14:
            v16 = v2;
            v2 = 0LL;
            *((_QWORD *)this + 29) = v16;
            v17 = v3;
            v3 = 0LL;
            *((_QWORD *)this + 28) = v17;
          }
          else
          {
            while ( 1 )
            {
              v39 = *(_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                 (__int64)&v36,
                                 v9);
              CEndpointCharacteristics::GetAliasedDeviceConnectorMode((__int64)this, &v40, 0, &v39, 0);
              for ( i = 0; ; ++i )
              {
                v11 = *(_DWORD *)(v3 + 8);
                v12 = i == v11;
                if ( i >= v11 )
                  break;
                v13 = (_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                                  v3,
                                  i);
                v14 = (_QWORD *)*v13;
                v15 = *(_QWORD *)*v13 - *(_QWORD *)&v40.Data1;
                if ( !v15 )
                  v15 = v14[1] - *(_QWORD *)v40.Data4;
                if ( !v15 )
                {
                  v12 = i == *(_DWORD *)(v3 + 8);
                  break;
                }
              }
              if ( v12 )
                break;
              if ( ++v9 >= v37 )
                goto LABEL_14;
            }
            v4 = -2147023728;
          }
          goto LABEL_15;
        }
      }
      else
      {
        v4 = -2147024882;
      }
    }
    v3 = v35;
    goto LABEL_15;
  }
  v31 = 0LL;
  v32 = 0;
  v33 = 0;
  v4 = CEndpointCharacteristics::ReadProcessingModeCharacteristics(this, 3LL, &v34);
  if ( v4 < 0 )
  {
LABEL_22:
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v31);
    v2 = v34;
    goto LABEL_15;
  }
  v19 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 19, 3uLL);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(&v31, v19);
  v20 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 19, 3uLL);
  if ( v32 != *(_DWORD *)(v20 + 8) )
  {
    v4 = -2147024882;
    goto LABEL_22;
  }
  v21 = *(const struct _GUID **)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                  (unsigned __int64 *)this + 217,
                                  3uLL);
  v22 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 217, 3uLL);
  v4 = CAudioSignalProcessingModeArray::AddMultiple((CAudioSignalProcessingModeArray *)&v31, *(_DWORD *)(v22 + 8), v21);
  if ( v4 < 0 )
    goto LABEL_22;
  v23 = 0;
  v2 = v34;
  v24 = v32;
  if ( v32 <= 0 )
  {
LABEL_34:
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v31);
    goto LABEL_2;
  }
  while ( 1 )
  {
    v39 = *(_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v31, v23);
    CEndpointCharacteristics::GetAliasedDeviceConnectorMode((__int64)this, &v40, 3, &v39, 0);
    for ( j = 0; ; ++j )
    {
      v26 = *(_DWORD *)(v2 + 8);
      v27 = j == v26;
      if ( j >= v26 )
        break;
      v28 = (_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                        v2,
                        j);
      v29 = (_QWORD *)*v28;
      v30 = *(_QWORD *)*v28 - *(_QWORD *)&v40.Data1;
      if ( !v30 )
        v30 = v29[1] - *(_QWORD *)v40.Data4;
      if ( !v30 )
      {
        v27 = j == *(_DWORD *)(v2 + 8);
        break;
      }
    }
    if ( v27 )
      break;
    if ( ++v23 >= v24 )
      goto LABEL_34;
  }
  v4 = -2147023728;
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v31);
LABEL_15:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v36);
  if ( v3 )
  {
    if ( *(_QWORD *)v3 )
    {
      free(*(void **)v3);
      *(_QWORD *)v3 = 0LL;
    }
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = 0;
    operator delete((void *)v3, (const struct std::nothrow_t *)0x10);
  }
  if ( v2 )
  {
    if ( *(_QWORD *)v2 )
    {
      free(*(void **)v2);
      *(_QWORD *)v2 = 0LL;
    }
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 12) = 0;
    operator delete((void *)v2, (const struct std::nothrow_t *)0x10);
  }
  return (unsigned int)v4;
}
