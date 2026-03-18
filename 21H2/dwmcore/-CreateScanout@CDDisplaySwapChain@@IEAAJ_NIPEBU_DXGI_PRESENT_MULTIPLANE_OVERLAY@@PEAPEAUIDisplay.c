/*
 * XREFs of ?CreateScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x18027A708
 * Callers:
 *     ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x18027ADB4 (-FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPE.c)
 *     ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x18027AF28 (-FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAP.c)
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18027C130 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLAN.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDesktopPrimary@CDDisplaySwapChain@@IEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@_N@Z @ 0x18027B1C8 (-GetDesktopPrimary@CDDisplaySwapChain@@IEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@_N@.c)
 */

__int64 __fastcall CDDisplaySwapChain::CreateScanout(
        CDDisplaySwapChain *this,
        bool a2,
        unsigned int a3,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a4,
        struct Windows::Devices::Display::Core::IDisplayScanout **a5)
{
  __int64 *v6; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  struct Windows::Devices::Display::Core::IDisplaySurface *DesktopPrimary; // rbx
  __int64 (__fastcall *v26)(__int64, __int64, _QWORD, struct Windows::Devices::Display::Core::IDisplaySurface *, _DWORD, __int128 *, __int128 *, __int128 *, _DWORD, _DWORD, _QWORD); // r11
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  struct Windows::Devices::Display::Core::IDisplayScanout *v36; // rcx
  __int64 v38[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v39; // [rsp+70h] [rbp-90h]
  __int128 v40; // [rsp+80h] [rbp-80h]
  __int128 v41; // [rsp+90h] [rbp-70h]
  __int128 v42; // [rsp+A0h] [rbp-60h]
  _BYTE v43[64]; // [rsp+B0h] [rbp-50h]
  __int128 v44; // [rsp+F0h] [rbp-10h]
  __int128 v45; // [rsp+100h] [rbp+0h]
  __int128 v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+120h] [rbp+20h]
  __int128 v48; // [rsp+130h] [rbp+30h] BYREF
  __int128 v49; // [rsp+140h] [rbp+40h] BYREF
  __int128 v50; // [rsp+150h] [rbp+50h] BYREF
  __int64 v51; // [rsp+190h] [rbp+90h] BYREF

  v51 = 0LL;
  v6 = (__int64 *)*((_QWORD *)this + 25);
  v10 = *v6;
  v38[0] = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v10 + 48))(v6, *((_QWORD *)this + 29), v38);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x1BAu);
  }
  else
  {
    if ( v51 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v38[0])(
            v38[0],
            &GUID_56b76193_af04_5806_83a8_56be01847aad,
            &v51);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x1BBu);
    }
    else
    {
      v16 = 0;
      if ( a3 )
      {
        while ( 1 )
        {
          v17 = *((_QWORD *)a4 + 16);
          v18 = *((_OWORD *)a4 + 1);
          v42 = *(_OWORD *)a4;
          v19 = *((_OWORD *)a4 + 2);
          *(_OWORD *)v43 = v18;
          v20 = *((_OWORD *)a4 + 3);
          *(_OWORD *)&v43[16] = v19;
          v21 = *((_OWORD *)a4 + 4);
          *(_OWORD *)&v43[32] = v20;
          v22 = *((_OWORD *)a4 + 5);
          *(_OWORD *)&v43[48] = v21;
          v23 = *((_OWORD *)a4 + 6);
          v44 = v22;
          v24 = *((_OWORD *)a4 + 7);
          v45 = v23;
          v46 = v24;
          v47 = v17;
          DesktopPrimary = (struct Windows::Devices::Display::Core::IDisplaySurface *)*((_QWORD *)&v42 + 1);
          if ( !*((_QWORD *)&v42 + 1) )
            DesktopPrimary = CDDisplaySwapChain::GetDesktopPrimary(this, a2);
          *(_QWORD *)&v39 = *(_QWORD *)&v43[44];
          v26 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct Windows::Devices::Display::Core::IDisplaySurface *, _DWORD, __int128 *, __int128 *, __int128 *, _DWORD, _DWORD, _QWORD))(*(_QWORD *)v51 + 96LL);
          DWORD2(v39) = *(_DWORD *)&v43[52] - *(_DWORD *)&v43[44];
          HIDWORD(v39) = *(_DWORD *)&v43[56] - *(_DWORD *)&v43[48];
          DWORD2(v40) = *(_DWORD *)&v43[36] - *(_DWORD *)&v43[28];
          *(_QWORD *)&v40 = *(_QWORD *)&v43[28];
          v27 = *(unsigned int *)&v43[12];
          HIDWORD(v40) = *(_DWORD *)&v43[40] - *(_DWORD *)&v43[32];
          DWORD2(v41) = *(_DWORD *)&v43[20] - *(_DWORD *)&v43[12];
          *(_QWORD *)&v41 = *(_QWORD *)&v43[12];
          HIDWORD(v41) = *(_DWORD *)&v43[24] - *(_DWORD *)&v43[16];
          LOBYTE(v27) = DWORD1(v42) != 0;
          v48 = v39;
          v50 = v41;
          v49 = v40;
          v28 = v26(v51, v27, (unsigned int)v42, DesktopPrimary, *(_DWORD *)v43, &v50, &v49, &v48, v44, 0, 0LL);
          v13 = v28;
          if ( v28 < 0 )
            break;
          v30 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v51 + 56LL))(
                  v51,
                  (unsigned int)v42,
                  1LL,
                  0xFFFFFFFFLL);
          v13 = v30;
          if ( v30 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0LL, v30, 0x1DCu);
            goto LABEL_20;
          }
          v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v51 + 120LL))(
                  v51,
                  (unsigned int)v42,
                  DWORD1(v45));
          v13 = v32;
          if ( v32 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0LL, v32, 0x1DFu);
            goto LABEL_20;
          }
          ++v16;
          a4 = (const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *)((char *)a4 + 136);
          if ( v16 >= a3 )
            goto LABEL_12;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0LL, v28, 0x1D8u);
      }
      else
      {
LABEL_12:
        v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 72LL))(v51);
        v13 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0LL, v34, 0x1E2u);
        }
        else
        {
          v36 = (struct Windows::Devices::Display::Core::IDisplayScanout *)v38[0];
          v38[0] = 0LL;
          *a5 = v36;
        }
      }
    }
  }
LABEL_20:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v51);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v38);
  return v13;
}
