/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180239FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_27737997@@@details@wil@@QEAA_NXZ @ 0x1800E5E04 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_27737997@@@detail.c)
 *     ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x1800EAD58 (-AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z.c)
 *     ?CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1800EADF0 (-CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CDDisplaySwapChain::CheckMultiplaneOverlaySupport(
        CDDisplaySwapChain *this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  bool v5; // di
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, _QWORD); // rsi
  int v13; // eax
  __int64 v14; // rcx
  int v15; // ebx
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // r12d
  const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int64 (__fastcall *v28)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int128 *, __int128 *, __int128 *, _DWORD, _DWORD, _QWORD); // r10
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  bool v34; // zf
  __int64 (*v35)(void); // rax
  bool v37; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+68h] [rbp-98h] BYREF
  __int64 (__fastcall ***v39)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp-90h] BYREF
  const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *v40; // [rsp+78h] [rbp-88h]
  __int128 v41; // [rsp+80h] [rbp-80h]
  __int128 v42; // [rsp+90h] [rbp-70h]
  __int128 v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v45; // [rsp+C0h] [rbp-40h]
  __int128 v46; // [rsp+D0h] [rbp-30h]
  __int128 v47; // [rsp+E0h] [rbp-20h]
  __int128 v48; // [rsp+F0h] [rbp-10h]
  __int128 v49; // [rsp+100h] [rbp+0h]
  __int128 v50; // [rsp+110h] [rbp+10h]
  __int128 v51; // [rsp+120h] [rbp+20h]
  __int128 v52; // [rsp+130h] [rbp+30h]
  __int128 v53; // [rsp+140h] [rbp+40h]
  __int128 v54; // [rsp+150h] [rbp+50h] BYREF
  __int128 v55; // [rsp+160h] [rbp+60h] BYREF
  __int128 v56; // [rsp+170h] [rbp+70h] BYREF

  v39 = 0LL;
  v38 = 0LL;
  v44 = 0LL;
  v5 = 0;
  v37 = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::GetImpl'::`2'::impl)
    && (v9 = CD3DDevice::CheckMPOCache(*((CD3DDevice **)this + 3), a2, a3, &v37), v5 = v37, v9) )
  {
    *a4 = 1;
  }
  else
  {
    v10 = (__int64)v39;
    *a4 = 0;
    v11 = *((_QWORD *)this + 11);
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 56LL);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v13 = v12(v11, *((_QWORD *)this + 15), &v39);
    v15 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x162u, 0LL);
    }
    else
    {
      if ( v38 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      v16 = (**v39)(v39, &GUID_56b76193_af04_5806_83a8_56be01847aad, &v38);
      v15 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x164u, 0LL);
      }
      else
      {
        v18 = 0;
        if ( a3 )
        {
          v19 = a2;
          v40 = a2;
          while ( 1 )
          {
            v20 = *((_OWORD *)v19 + 1);
            v45 = *(_OWORD *)v19;
            v21 = *((_OWORD *)v19 + 2);
            v46 = v20;
            v22 = *((_OWORD *)v19 + 3);
            v47 = v21;
            v23 = *((_OWORD *)v19 + 4);
            v48 = v22;
            v24 = *((_OWORD *)v19 + 5);
            v49 = v23;
            v25 = *((_OWORD *)v19 + 6);
            v50 = v24;
            v26 = *((_OWORD *)v19 + 7);
            v51 = v25;
            v27 = *((_OWORD *)v19 + 8);
            v52 = v26;
            v53 = v27;
            *(_QWORD *)&v41 = *(_QWORD *)((char *)&v49 + 4);
            v28 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int128 *, __int128 *, __int128 *, _DWORD, _DWORD, _QWORD))(*(_QWORD *)v38 + 96LL);
            DWORD2(v41) = HIDWORD(v49) - DWORD1(v49);
            *(_QWORD *)&v42 = *(_QWORD *)((char *)&v48 + 4);
            HIDWORD(v41) = v50 - DWORD2(v49);
            DWORD2(v42) = HIDWORD(v48) - DWORD1(v48);
            *(_QWORD *)&v43 = *(_QWORD *)((char *)&v47 + 4);
            HIDWORD(v42) = v49 - DWORD2(v48);
            v29 = DWORD2(v50);
            DWORD2(v43) = HIDWORD(v47) - DWORD1(v47);
            LOBYTE(v29) = 1;
            HIDWORD(v43) = v48 - DWORD2(v47);
            v54 = v41;
            v55 = v42;
            v56 = v43;
            v30 = v28(
                    v38,
                    v29,
                    (unsigned int)v45,
                    *((_QWORD *)&v45 + 1),
                    HIDWORD(v46),
                    &v56,
                    &v55,
                    &v54,
                    DWORD2(v50),
                    0,
                    0LL);
            v15 = v30;
            if ( v30 < 0 )
              break;
            v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v38 + 120LL))(
                    v38,
                    (unsigned int)v45,
                    HIDWORD(v51));
            v15 = v32;
            if ( v32 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x17Fu, 0LL);
              goto LABEL_24;
            }
            ++v18;
            v19 = (const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *)((char *)v40 + 144);
            v40 = (const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *)((char *)v40 + 144);
            if ( v18 >= a3 )
              goto LABEL_15;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x17Cu, 0LL);
        }
        else
        {
LABEL_15:
          v34 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::GetImpl'::`2'::impl) == 0;
          v35 = *(__int64 (**)(void))(*(_QWORD *)v38 + 72LL);
          if ( v34 )
          {
            v15 = v35();
          }
          else
          {
            if ( (int)v35() >= 0 )
              v5 = 1;
            CD3DDevice::AddCheckMPOCache(*((CD3DDevice **)this + 3), a2);
          }
        }
      }
    }
LABEL_24:
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::GetImpl'::`2'::impl) )
      v5 = v15 >= 0;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v44);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v38);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v39);
  return v5;
}
