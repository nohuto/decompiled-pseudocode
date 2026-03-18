/*
 * XREFs of ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x18019B154
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800464F8 (-Update@CSecondaryD2DBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x18003EE28 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CC168 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x18019B8D4 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::CreateScaledLock(
        __int64 a1,
        int *a2,
        void (__fastcall ***a3)(_QWORD, _QWORD),
        _QWORD *a4)
{
  void (__fastcall **v5)(_QWORD, _QWORD); // rax
  void (__fastcall *v9)(_QWORD, _DWORD *); // rax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // eax
  void (__fastcall **v14)(_QWORD, _QWORD); // rax
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  unsigned __int8 *v22; // rbx
  unsigned int v23; // edi
  unsigned int v24; // esi
  const struct PixelFormatInfo *v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  char *v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 (__fastcall *v34)(__int64, struct IWICBitmapSource **); // rdi
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  char *v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  char *v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  __int64 v48; // [rsp+40h] [rbp-69h] BYREF
  struct IWICBitmapSource *v49; // [rsp+48h] [rbp-61h] BYREF
  __int64 v50; // [rsp+50h] [rbp-59h] BYREF
  struct IBitmapSource *v51; // [rsp+58h] [rbp-51h] BYREF
  __int64 v52; // [rsp+60h] [rbp-49h] BYREF
  __int64 v53; // [rsp+68h] [rbp-41h] BYREF
  unsigned int v54; // [rsp+70h] [rbp-39h] BYREF
  unsigned int v55; // [rsp+74h] [rbp-35h] BYREF
  struct IBitmapSource *v56; // [rsp+78h] [rbp-31h] BYREF
  _DWORD v57[2]; // [rsp+80h] [rbp-29h] BYREF
  unsigned __int8 *v58; // [rsp+88h] [rbp-21h] BYREF
  __int64 v59; // [rsp+90h] [rbp-19h] BYREF
  int v60; // [rsp+98h] [rbp-11h]
  int v61; // [rsp+9Ch] [rbp-Dh]
  _DWORD v62[4]; // [rsp+A0h] [rbp-9h] BYREF
  _BYTE v63[16]; // [rsp+B0h] [rbp+7h] BYREF

  *a4 = 0LL;
  v5 = *a3;
  v48 = 0LL;
  v56 = 0LL;
  v53 = 0LL;
  v9 = (void (__fastcall *)(_QWORD, _DWORD *))*v5;
  v52 = 0LL;
  v49 = 0LL;
  v51 = 0LL;
  v50 = 0LL;
  v9(a3, v57);
  v10 = *a2;
  v11 = a2[1];
  v60 = v57[0];
  v61 = v57[1];
  v12 = a2[2] - v10;
  v59 = 0LL;
  v62[2] = v12;
  v13 = a2[3] - v11;
  v62[0] = v10;
  v62[3] = v13;
  v14 = *a3;
  v62[1] = v11;
  v15 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD), __int64 *, __int64 *))v14[4])(a3, &v59, &v48);
  v17 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x90u, 0LL);
  }
  else
  {
    v18 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v48 + 16LL))(v48, &v55);
    v17 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x93u, 0LL);
    }
    else
    {
      v20 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v48 + 24LL))(
              v48,
              &v54,
              &v58);
      v17 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x97u, 0LL);
      }
      else
      {
        v22 = v58;
        v23 = v54;
        v24 = v55;
        v25 = (const struct PixelFormatInfo *)(**(__int64 (__fastcall ***)(__int64, _BYTE *))v48)(v48, v63);
        v26 = HrCreateBitmapFromMemoryEx(v60 - (int)v59, v61 - HIDWORD(v59), v25, v24, v23, v22, 0LL, &v56);
        v17 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xA1u, 0LL);
        }
        else
        {
          if ( v53 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
          v28 = (char *)v56 + *(int *)(*((_QWORD *)v56 + 1) + 4LL) + 8;
          v29 = (**(__int64 (__fastcall ***)(char *, GUID *, __int64 *))v28)(
                  v28,
                  &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94,
                  &v53);
          v17 = v29;
          if ( v29 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0xA3u, 0LL);
          }
          else
          {
            if ( v52 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
            v31 = WICCreateImagingFactory_Proxy(567LL, &v52);
            v17 = v31;
            if ( v31 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0xA7u, 0LL);
            }
            else
            {
              v33 = v52;
              v34 = *(__int64 (__fastcall **)(__int64, struct IWICBitmapSource **))(*(_QWORD *)v52 + 88LL);
              if ( v49 )
                ((void (__fastcall *)(struct IWICBitmapSource *))v49->lpVtbl->Release)(v49);
              v35 = v34(v33, &v49);
              v17 = v35;
              if ( v35 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0xA9u, 0LL);
              }
              else
              {
                v37 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, __int64, _QWORD, _QWORD, int))v49->lpVtbl[1].QueryInterface)(
                        v49,
                        v53,
                        *(unsigned int *)(a1 + 152),
                        *(unsigned int *)(a1 + 156),
                        3);
                v17 = v37;
                if ( v37 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0xAFu, 0LL);
                }
                else
                {
                  if ( v51 )
                  {
                    v39 = (char *)v51 + *(int *)(*((_QWORD *)v51 + 1) + 4LL) + 8;
                    (*(void (__fastcall **)(char *))(*(_QWORD *)v39 + 16LL))(v39);
                  }
                  v40 = HrCreateBitmapFromWICBitmapSource(v49, &v51);
                  v17 = v40;
                  if ( v40 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0xB3u, 0LL);
                  }
                  else
                  {
                    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v50);
                    v42 = (char *)v51 + *(int *)(*((_QWORD *)v51 + 1) + 4LL) + 8;
                    v43 = (**(__int64 (__fastcall ***)(char *, GUID *, __int64 *))v42)(
                            v42,
                            &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
                            &v50);
                    v17 = v43;
                    if ( v43 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0xB5u, 0LL);
                    }
                    else
                    {
                      v45 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, _QWORD *))(*(_QWORD *)v50 + 24LL))(
                              v50,
                              v62,
                              1LL,
                              a4);
                      v17 = v45;
                      if ( v45 < 0 )
                        MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0xB9u, 0LL);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v50);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v51);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v49);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v52);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v53);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v56);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v48);
  return v17;
}
