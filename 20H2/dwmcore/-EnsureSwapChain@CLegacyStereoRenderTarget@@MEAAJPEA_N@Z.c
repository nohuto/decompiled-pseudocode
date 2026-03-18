/*
 * XREFs of ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJPEA_N@Z @ 0x18018D410
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?OnSwapChainCreated@COverlayContext@@QEAAJXZ @ 0x180031EB8 (-OnSwapChainCreated@COverlayContext@@QEAAJXZ.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z @ 0x180032994 (-GetDXGIOutput@CDisplayManager@@QEAAJIPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006A610 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18006AEF0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18006AF20 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801848CC (-reset@-$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$?4VILegacyStereoSwapChain@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VILegacySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VILegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@1@@Z @ 0x18018D388 (--$-4VILegacyStereoSwapChain@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VILegacySwapChain@@Uerr_.c)
 *     ?CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVILegacyStereoSwapChain@@@Z @ 0x18023BBD0 (-CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatIn.c)
 */

__int64 __fastcall CLegacyStereoRenderTarget::EnsureSwapChain(CLegacyStereoRenderTarget *this, bool *a2)
{
  __int64 *v2; // r15
  __int64 v4; // r8
  __int64 (__fastcall ***v6)(_QWORD); // rcx
  int v7; // eax
  __int64 v8; // rcx
  int DXGIOutput; // edi
  unsigned int v10; // edx
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  __int16 v14; // cx
  char v15; // al
  struct IDXGIOutput *v16; // rcx
  CDeviceManager *v17; // rcx
  int Device; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  CD3DDevice *v22; // rbx
  int LegacyStereoSwapChain; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  CD3DDevice *v28; // rcx
  int v29; // r9d
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v34; // [rsp+20h] [rbp-E0h]
  struct IDXGIOutput *v35; // [rsp+40h] [rbp-C0h] BYREF
  CD3DDevice *v36; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v37; // [rsp+50h] [rbp-B0h]
  struct IDXGIOutputDWM *v38; // [rsp+58h] [rbp-A8h] BYREF
  char v39; // [rsp+60h] [rbp-A0h]
  _BYTE v40[28]; // [rsp+70h] [rbp-90h] BYREF
  int v41; // [rsp+8Ch] [rbp-74h]
  int v42; // [rsp+90h] [rbp-70h]
  int v43; // [rsp+C8h] [rbp-38h]
  int v44; // [rsp+110h] [rbp+10h]

  v2 = (__int64 *)((char *)this + 160);
  *a2 = 0;
  v4 = *((_QWORD *)this + 20);
  if ( !v4 )
  {
    v10 = *((_DWORD *)this + 55);
    v11 = (_QWORD *)((char *)this + 152);
    v37 = (__int64 *)((char *)this + 152);
    v35 = 0LL;
    v36 = 0LL;
    v38 = 0LL;
    v39 = 1;
    DXGIOutput = CDisplayManager::GetDXGIOutput(this, v10, &v38);
    if ( v39 )
    {
      v12 = *v37;
      *v37 = (__int64)v38;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( DXGIOutput < 0 )
    {
      v29 = DXGIOutput;
      v34 = 89;
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v11 + 32LL))(*v11, v40);
      DXGIOutput = v13;
      if ( v13 < 0 )
      {
        v34 = 92;
      }
      else
      {
        v14 = v43;
        *((_DWORD *)this + 20) = v41;
        *((_DWORD *)this + 21) = v42;
        *((_DWORD *)this + 4642) = v44;
        v15 = HIBYTE(v14) & 1;
        *((_BYTE *)this + 18585) = (v14 & 8) != 0;
        v16 = v35;
        *((_BYTE *)this + 18584) = v15;
        *((_BYTE *)this + 18591) = 0;
        if ( v16 )
          ((void (__fastcall *)(struct IDXGIOutput *))v16->lpVtbl->Release)(v16);
        v13 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, struct IDXGIOutput **))*v11)(
                *v11,
                &GUID_ae02eedb_c735_4690_8d52_5a8dc20213aa,
                &v35);
        DXGIOutput = v13;
        if ( v13 >= 0 )
        {
          wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v36);
          Device = CDeviceManager::GetDevice(v17, *(struct _LUID *)((char *)this + 228), &v36);
          DXGIOutput = Device;
          if ( Device < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_1802EDC40, 3u, Device, 0x6Bu, 0LL);
            v28 = v36;
            if ( !v36 )
              goto LABEL_31;
          }
          else
          {
            v20 = *((_QWORD *)this + 2327);
            *((_QWORD *)this + 2327) = 0LL;
            if ( v20 )
            {
              v21 = v20 + 8 + *(int *)(*(_QWORD *)(v20 + 8) + 4LL);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
            }
            v22 = v36;
            LegacyStereoSwapChain = CD3DDevice::CreateLegacyStereoSwapChain(
                                      v36,
                                      v35,
                                      (const struct D2D_SIZE_U *)this + 10,
                                      (CLegacyStereoRenderTarget *)((char *)this + 88),
                                      (CLegacyStereoRenderTarget *)((char *)this + 228),
                                      *((_DWORD *)this + 56),
                                      (struct ILegacyStereoSwapChain **)this + 2327);
            DXGIOutput = LegacyStereoSwapChain;
            if ( LegacyStereoSwapChain < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v24, &dword_1802EDC40, 3u, LegacyStereoSwapChain, 0x72u, 0LL);
            }
            else
            {
              wil::com_ptr_t<ILegacySwapChain,wil::err_returncode_policy>::operator=<ILegacyStereoSwapChain,wil::err_returncode_policy,void>(
                v2,
                (__int64)this + 18616);
              v25 = COverlayContext::OnSwapChainCreated((CLegacyStereoRenderTarget *)((char *)this + 472));
              DXGIOutput = v25;
              if ( v25 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v26, &dword_1802EDC40, 3u, v25, 0x76u, 0LL);
              }
              else
              {
                v27 = *((_QWORD *)this + 2327);
                *((_BYTE *)this + 129) = 1;
                *((_BYTE *)this + 18588) = 1;
                *((_BYTE *)this + 18624) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
                *a2 = 1;
              }
            }
            if ( !v22 )
              goto LABEL_31;
            v28 = v22;
          }
          CD3DDevice::Release(v28);
LABEL_31:
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
          goto LABEL_32;
        }
        v34 = 105;
      }
      v29 = v13;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_1802EDC40, 3u, v29, v34, 0LL);
    goto LABEL_31;
  }
  v6 = (__int64 (__fastcall ***)(_QWORD))(v4 + 8 + *(int *)(*(_QWORD *)(v4 + 8) + 12LL));
  v7 = (**v6)(v6);
  DXGIOutput = v7;
  if ( v7 >= 0 )
    return (unsigned int)DXGIOutput;
  MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802EDC40, 3u, v7, 0x4Fu, 0LL);
LABEL_32:
  if ( DXGIOutput < 0 )
  {
    if ( DXGIOutput == -2003304306 && *((_BYTE *)this + 18591) )
      *((_BYTE *)this + 18591) = 0;
    v30 = *((_QWORD *)this + 19);
    *((_QWORD *)this + 19) = 0LL;
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    v31 = *v2;
    *v2 = 0LL;
    if ( v31 )
    {
      v32 = v31 + 8 + *(int *)(*(_QWORD *)(v31 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    wil::com_ptr_t<CDDisplaySwapChain,wil::err_returncode_policy>::reset((CRenderTargetBitmap **)this + 21);
    *((_BYTE *)this + 18590) = 0;
  }
  return (unsigned int)DXGIOutput;
}
