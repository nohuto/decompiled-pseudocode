/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18027A060
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18001244C (-CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 *     ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x180012500 (-AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CDDisplaySwapChain::CheckMultiplaneOverlaySupport(
        CDDisplaySwapChain *this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // esi
  const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *v13; // r15
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 (__fastcall *v22)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int128 *, __int128 *, __int128 *, _DWORD, _DWORD, _QWORD); // r11
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  bool v29; // cl
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp-98h] BYREF
  __int128 v33; // [rsp+70h] [rbp-90h]
  __int128 v34; // [rsp+80h] [rbp-80h]
  __int128 v35; // [rsp+90h] [rbp-70h]
  __int128 v36; // [rsp+A0h] [rbp-60h]
  __int128 v37; // [rsp+B0h] [rbp-50h]
  __int128 v38; // [rsp+C0h] [rbp-40h]
  __int128 v39; // [rsp+D0h] [rbp-30h]
  __int128 v40; // [rsp+E0h] [rbp-20h]
  __int128 v41; // [rsp+F0h] [rbp-10h]
  __int128 v42; // [rsp+100h] [rbp+0h]
  __int128 v43; // [rsp+110h] [rbp+10h]
  __int128 v44; // [rsp+120h] [rbp+20h]
  __int128 v45; // [rsp+130h] [rbp+30h] BYREF
  __int128 v46; // [rsp+140h] [rbp+40h] BYREF
  __int128 v47; // [rsp+150h] [rbp+50h] BYREF
  bool v48; // [rsp+190h] [rbp+90h] BYREF

  v32 = 0LL;
  v31 = 0LL;
  v48 = 0;
  if ( CD3DDevice::CheckMPOCache(*((CD3DDevice **)this + 16), a2, a3, &v48) )
  {
    *a4 = 1;
  }
  else
  {
    *a4 = 0;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 25) + 48LL))(
           *((_QWORD *)this + 25),
           *((_QWORD *)this + 29),
           &v32);
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x249u);
    }
    else
    {
      if ( v31 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      v10 = (**v32)(v32, &GUID_56b76193_af04_5806_83a8_56be01847aad, &v31);
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x24Bu);
      }
      else
      {
        v12 = 0;
        if ( a3 )
        {
          v13 = a2;
          while ( 1 )
          {
            v14 = *((_OWORD *)v13 + 1);
            v36 = *(_OWORD *)v13;
            v15 = *((_OWORD *)v13 + 2);
            v37 = v14;
            v16 = *((_OWORD *)v13 + 3);
            v38 = v15;
            v17 = *((_OWORD *)v13 + 4);
            v39 = v16;
            v18 = *((_OWORD *)v13 + 5);
            v40 = v17;
            v19 = *((_OWORD *)v13 + 6);
            v41 = v18;
            v20 = *((_OWORD *)v13 + 7);
            v42 = v19;
            v21 = *((_OWORD *)v13 + 8);
            v43 = v20;
            v44 = v21;
            *(_QWORD *)&v33 = *(_QWORD *)((char *)&v40 + 4);
            v22 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int128 *, __int128 *, __int128 *, _DWORD, _DWORD, _QWORD))(*(_QWORD *)v31 + 96LL);
            DWORD2(v33) = HIDWORD(v40) - DWORD1(v40);
            *(_QWORD *)&v34 = *(_QWORD *)((char *)&v39 + 4);
            HIDWORD(v33) = v41 - DWORD2(v40);
            DWORD2(v34) = HIDWORD(v39) - DWORD1(v39);
            *(_QWORD *)&v35 = *(_QWORD *)((char *)&v38 + 4);
            HIDWORD(v34) = v40 - DWORD2(v39);
            DWORD2(v35) = HIDWORD(v38) - DWORD1(v38);
            HIDWORD(v35) = v39 - DWORD2(v38);
            v45 = v33;
            v47 = v35;
            v46 = v34;
            v23 = DWORD2(v41);
            LOBYTE(v23) = 1;
            v24 = v22(
                    v31,
                    v23,
                    (unsigned int)v36,
                    *((_QWORD *)&v36 + 1),
                    HIDWORD(v37),
                    &v47,
                    &v46,
                    &v45,
                    DWORD2(v41),
                    0,
                    0LL);
            if ( v24 < 0 )
              break;
            v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v31 + 120LL))(
                    v31,
                    (unsigned int)v36,
                    HIDWORD(v42));
            if ( v26 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0LL, v26, 0x266u);
              goto LABEL_19;
            }
            ++v12;
            v13 = (const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *)((char *)v13 + 144);
            if ( v12 >= a3 )
              goto LABEL_12;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, v24, 0x263u);
        }
        else
        {
LABEL_12:
          v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 72LL))(v31);
          v29 = v48;
          if ( v28 >= 0 )
            v29 = 1;
          v48 = v29;
          CD3DDevice::AddCheckMPOCache(*((CD3DDevice **)this + 16), a2, a3, v29);
        }
      }
    }
  }
LABEL_19:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v31);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
  return v48;
}
