/*
 * XREFs of ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAUIMMDevice@@@Z @ 0x18000DF40
 * Callers:
 *     s_rtgGetDefaultAudioEndpoint @ 0x18000DB90 (s_rtgGetDefaultAudioEndpoint.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x180112834 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ?GetDefaultAudioEndpoint@RemapPolicyRule@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAG@Z @ 0x180114AA0 (-GetDefaultAudioEndpoint@RemapPolicyRule@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006A00 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAV?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@PEAPEAUIMMDevice@@@Z @ 0x18000E0E0 (-GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002A4D4 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x1800525EC (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8410 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800B8FA0 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?Find@?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEBAPEAU__POSITION@@PEBGPEAU3@@Z @ 0x180111B50 (-Find@-$CAtlList@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTrait.c)
 *     ?GetDeviceFromDeviceId@DynamicAudioEndpointManager@@CAJPEBGPEAPEAUIMMDevice@@@Z @ 0x180111CB0 (-GetDeviceFromDeviceId@DynamicAudioEndpointManager@@CAJPEBGPEAPEAUIMMDevice@@@Z.c)
 *     ?NewNode@?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@AEAAPEAVCNode@12@PEBGPEAV312@1@Z @ 0x1801122BC (-NewNode@-$CAtlList@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTr.c)
 *     ?RemoveAll@?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEAAXXZ @ 0x180112A6C (-RemoveAll@-$CAtlList@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElement.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DynamicAudioEndpointManager::GetDefaultAudioEndpoint(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        _BYTE *a5,
        struct IMMDevice **a6)
{
  __int64 v6; // r12
  __int64 v7; // r15
  struct _RTL_CRITICAL_SECTION *v10; // rdi
  unsigned __int16 *v11; // rbx
  __int64 v12; // rcx
  _BYTE *v13; // r14
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  int v16; // eax
  void *v17; // r11
  int DefaultEndpoint; // ebx
  __int64 v20; // rax
  void *v21; // r11
  unsigned int DeviceFromDeviceId; // esi
  ATL::CAtlPlex *v23; // rsi
  __int64 v24; // rax
  int v25; // [rsp+20h] [rbp-59h]
  unsigned __int16 *v26; // [rsp+40h] [rbp-39h] BYREF
  __int64 v27; // [rsp+48h] [rbp-31h] BYREF
  __int64 v28; // [rsp+50h] [rbp-29h] BYREF
  __int64 v29; // [rsp+58h] [rbp-21h]
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+60h] [rbp-19h]
  __int128 v31; // [rsp+68h] [rbp-11h] BYREF
  __int64 v32; // [rsp+78h] [rbp-1h]
  ATL::CAtlPlex *v33[2]; // [rsp+80h] [rbp+7h]
  int v34; // [rsp+90h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+4Fh]
  LPVOID pv; // [rsp+D0h] [rbp+57h] BYREF

  v6 = a4;
  v7 = a3;
  v10 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v30 = v10;
  v31 = 0LL;
  v32 = 0LL;
  *(_OWORD *)v33 = 0LL;
  v34 = 10;
  v11 = 0LL;
  v26 = 0LL;
  if ( (unsigned int)v6 > 8 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x89,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)0x80070057LL,
      v25);
    ATL::CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::RemoveAll(&v31);
    if ( !v10 )
      return 2147942487LL;
    goto LABEL_23;
  }
  if ( (unsigned int)v7 > 1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)0x80070057LL,
      v25);
    ATL::CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::RemoveAll(&v31);
    if ( !v10 )
      return 2147942487LL;
LABEL_23:
    LeaveCriticalSection(v10);
    return 2147942487LL;
  }
  v12 = *(_QWORD *)(a1 + 48 * (v6 + 9 * v7) + 56);
  v27 = v12;
  v13 = a5;
  if ( v12 )
  {
    while ( 1 )
    {
      v29 = *(_QWORD *)ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v12, &v27);
      pv = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 32LL))(v29, &v28) >= 0 )
        break;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        &pv,
        0LL);
      if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _BYTE *, LPVOID *))(*(_QWORD *)v29 + 24LL))(
             v29,
             a2,
             (unsigned int)v7,
             (unsigned int)v6,
             v13,
             &pv) < 0 )
        goto LABEL_30;
      v21 = pv;
      if ( pv
        && !ATL::CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::Find(
              &v31,
              pv) )
      {
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &v26,
          v21);
        v11 = v26;
        if ( v26 )
          goto LABEL_39;
        goto LABEL_4;
      }
LABEL_31:
      if ( v21 )
        CoTaskMemFree(v21);
      if ( !v27 )
        goto LABEL_4;
    }
    v20 = ATL::CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::NewNode(
            &v31,
            v28,
            *((_QWORD *)&v31 + 1));
    v12 = *((_QWORD *)&v31 + 1);
    if ( *((_QWORD *)&v31 + 1) )
      **((_QWORD **)&v31 + 1) = v20;
    else
      *(_QWORD *)&v31 = v20;
    *((_QWORD *)&v31 + 1) = v20;
LABEL_30:
    v21 = pv;
    goto LABEL_31;
  }
LABEL_4:
  v14 = *(_QWORD **)(a1 + 920);
  if ( v14 )
  {
    while ( 1 )
    {
      v15 = v14[2];
      v14 = (_QWORD *)*v14;
      pv = 0LL;
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _BYTE *, LPVOID *))(*(_QWORD *)v15 + 24LL))(
              v15,
              a2,
              (unsigned int)v7,
              (unsigned int)v6,
              v13,
              &pv);
      v17 = pv;
      if ( v16 >= 0
        && pv
        && !ATL::CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::Find(
              &v31,
              pv) )
      {
        break;
      }
      if ( v17 )
        CoTaskMemFree(v17);
      if ( !v14 )
        goto LABEL_10;
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v26,
      v17);
    v11 = v26;
  }
LABEL_10:
  if ( v11 )
  {
LABEL_39:
    DeviceFromDeviceId = DynamicAudioEndpointManager::GetDeviceFromDeviceId(v11, a6);
    CoTaskMemFree(v11);
    ATL::CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::RemoveAll(&v31);
    if ( v10 )
      LeaveCriticalSection(v10);
    return DeviceFromDeviceId;
  }
  else
  {
    DefaultEndpoint = CDefaultDeviceManager::GetDefaultEndpoint(v12, v7, v6, (unsigned int)&v31, (__int64)a6);
    if ( DefaultEndpoint >= 0 && v13 )
      *v13 = 0;
    if ( v32 )
    {
      do
      {
        v23 = (ATL::CAtlPlex *)v31;
        if ( !(_QWORD)v31 )
          ATL::AtlThrowImpl(-2147467259);
        *(_QWORD *)&v31 = *(_QWORD *)v31;
        ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)v23 + 2) - 24LL));
        *(ATL::CAtlPlex **)v23 = v33[1];
        v33[1] = v23;
        v24 = --v32;
        if ( !v32 )
        {
          ATL::CAtlList<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::RemoveAll(&v31);
          v24 = v32;
        }
      }
      while ( v24 );
    }
    v31 = 0LL;
    v33[1] = 0LL;
    if ( v33[0] )
    {
      ATL::CAtlPlex::FreeDataChain(v33[0]);
      v33[0] = 0LL;
    }
    if ( v10 )
      LeaveCriticalSection(v10);
    return (unsigned int)DefaultEndpoint;
  }
}
