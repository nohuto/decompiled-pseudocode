/*
 * XREFs of ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800EE318
 * Callers:
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800ED34C (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x1800139B0 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AB54 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AD8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D58 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_370e4a00b6cb03b6fca683a12302c177___ @ 0x18006FBF4 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006FBF4.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_a3c8d91d619fcfed7730a17cd5b84197___ @ 0x18006FF94 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006FF94.c)
 *     _lambda_d4b2d08f096e200be5494970f4d857ee_::_lambda_d4b2d08f096e200be5494970f4d857ee_ @ 0x180070218 (_lambda_d4b2d08f096e200be5494970f4d857ee_--_lambda_d4b2d08f096e200be5494970f4d857ee_.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180070318 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     wil::details::lambda_call__lambda_cf3fe5f6ab2d3cdd08d7d42a4dfb9aaa___::_lambda_call__lambda_cf3fe5f6ab2d3cdd08d7d42a4dfb9aaa___ @ 0x180070348 (wil--details--lambda_call__lambda_cf3fe5f6ab2d3cdd08d7d42a4dfb9aaa___--_lambda_call__lambda_cf3f.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800BBF40 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800BE26C (WPP_SF_q.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800CE04C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800E479C (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?ReleaseAudioResourceHandle@@YAX_K@Z @ 0x1800EDB4C (-ReleaseAudioResourceHandle@@YAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAudioResourceManager::SwitchStreamGroupsToNewSaDevice(
        __int64 a1,
        struct CEndpointCharacteristics *a2,
        __int64 a3,
        struct tWAVEFORMATEX *a4,
        struct tWAVEFORMATEX *Src,
        __int64 a6,
        __int64 *a7)
{
  __int64 *v10; // rsi
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  int v14; // eax
  LPVOID *v15; // rbx
  int v16; // eax
  __int64 *v17; // r14
  LPVOID v18; // rsi
  __int64 v19; // rdi
  unsigned int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 *v23; // rax
  void *v24; // rbx
  LPVOID pv; // [rsp+50h] [rbp-81h] BYREF
  __int64 v27; // [rsp+58h] [rbp-79h] BYREF
  struct _GUID v28; // [rsp+60h] [rbp-71h] BYREF
  __int128 v29; // [rsp+70h] [rbp-61h] BYREF
  __int64 v30; // [rsp+80h] [rbp-51h]
  struct _GUID v31; // [rsp+90h] [rbp-41h] BYREF
  SaDeviceParams *v32; // [rsp+A0h] [rbp-31h] BYREF
  unsigned __int64 v33; // [rsp+A8h] [rbp-29h] BYREF
  int v34; // [rsp+B0h] [rbp-21h]
  _QWORD v35[6]; // [rsp+B8h] [rbp-19h] BYREF
  char v36; // [rsp+E8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+47h]
  struct CEndpointCharacteristics *v38; // [rsp+128h] [rbp+57h] BYREF
  SaDeviceParams *v39; // [rsp+130h] [rbp+5Fh] BYREF

  v38 = a2;
  v10 = a7;
  LODWORD(a7) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a7 + 184LL))(*a7);
  v29 = 0LL;
  v30 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)a3 + 104LL))(a3, *v10, &v29);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA45,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_44;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x23u,
      (__int64)&WPP_276a5657edfd3c3fe0681675fccda4ef_Traceguids,
      (__int64)(*((_QWORD *)&v29 + 1) - v29) >> 3);
  }
  if ( !((__int64)(*((_QWORD *)&v29 + 1) - v29) >> 3) )
    goto LABEL_43;
  v39 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)*v10 + 104LL))(*v10, &v39);
  v12 = v13;
  if ( v13 >= 0 )
  {
    v32 = 0LL;
    v28 = (struct _GUID)*((_OWORD *)v39 + 4);
    v31 = (struct _GUID)*((_OWORD *)v39 + 3);
    v14 = DeriveSaDeviceParametersForStream(
            v38,
            AUDCLNT_SHAREMODE_SHARED,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)v39 + 2),
            &v31,
            &v28,
            a4,
            Src,
            a6,
            &v32);
    v12 = v14;
    v15 = (LPVOID *)v32;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA59,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_27:
      if ( v15 )
        SaDeviceParams::`scalar deleting destructor'(v15);
      goto LABEL_29;
    }
    *(_QWORD *)&v31.Data1 = *v10;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v31);
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_a3c8d91d619fcfed7730a17cd5b84197___(
      (__int64 *)&v28,
      (_QWORD *)v29,
      *((_QWORD **)&v29 + 1),
      (__int64 *)&v31);
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)&v28);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x25u, (__int64)&WPP_276a5657edfd3c3fe0681675fccda4ef_Traceguids);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v10);
    pv = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    v16 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)v38 + 2) + 40LL))(*((_QWORD *)v38 + 2), &pv);
    v12 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA6C,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v16);
LABEL_25:
      if ( pv )
        CoTaskMemFree(pv);
      goto LABEL_27;
    }
    v35[0] = &a7;
    v35[1] = a1;
    v35[2] = &pv;
    v35[3] = &v38;
    v35[4] = &v39;
    v35[5] = &v29;
    v36 = 1;
    v33 = 0LL;
    v34 = (int)a7;
    v28 = (struct _GUID)*((_OWORD *)v39 + 3);
    v17 = *(__int64 **)(a1 + 48);
    v18 = pv;
    v19 = *v17;
    v20 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v38 + 56LL))(v38);
    v21 = (*(__int64 (__fastcall **)(__int64 *, LPVOID, _QWORD, struct _GUID *, _DWORD, _DWORD, unsigned __int64 *))(v19 + 56))(
            v17,
            v18,
            v20,
            &v28,
            *((_DWORD *)v39 + 2),
            (_DWORD)a7,
            &v33);
    v12 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA99,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v21);
LABEL_22:
      if ( v33 )
        ReleaseAudioResourceHandle(v33);
      wil::details::lambda_call__lambda_cf3fe5f6ab2d3cdd08d7d42a4dfb9aaa___::_lambda_call__lambda_cf3fe5f6ab2d3cdd08d7d42a4dfb9aaa___((__int64)v35);
      goto LABEL_25;
    }
    v27 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v27);
    v22 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, LPVOID *, __int64, _DWORD, unsigned __int64 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            v38,
            v15,
            2LL,
            0,
            &v33,
            0LL,
            0LL,
            &v27);
    v12 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAA4,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v22);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v27);
      goto LABEL_22;
    }
    v23 = lambda_d4b2d08f096e200be5494970f4d857ee_::_lambda_d4b2d08f096e200be5494970f4d857ee_((__int64 *)&v28, &v27);
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_370e4a00b6cb03b6fca683a12302c177___(
      (__int64 *)&v31,
      v29,
      *((__int64 *)&v29 + 1),
      v23);
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)&v31);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x29u, (__int64)&WPP_276a5657edfd3c3fe0681675fccda4ef_Traceguids);
    }
    v36 = 0;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v27);
    if ( v33 )
      ReleaseAudioResourceHandle(v33);
    wil::details::lambda_call__lambda_cf3fe5f6ab2d3cdd08d7d42a4dfb9aaa___::_lambda_call__lambda_cf3fe5f6ab2d3cdd08d7d42a4dfb9aaa___((__int64)v35);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v15 )
      SaDeviceParams::`scalar deleting destructor'(v15);
    if ( v39 )
      SaDeviceParams::`scalar deleting destructor'((LPVOID *)v39);
LABEL_43:
    v12 = 0;
    goto LABEL_44;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA4C,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v13);
LABEL_29:
  if ( v39 )
    SaDeviceParams::`scalar deleting destructor'((LPVOID *)v39);
LABEL_44:
  v24 = (void *)v29;
  if ( (_QWORD)v29 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
      (__int64 *)v29,
      *((__int64 **)&v29 + 1));
    std::_Deallocate<16,0>(v24, (const struct std::nothrow_t *)((v30 - (_QWORD)v24) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  return v12;
}
