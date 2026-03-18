/*
 * XREFs of ?GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z @ 0x1802856C4
 * Callers:
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180283F0C (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1DDisplayTargetResources@@QEAA@XZ @ 0x180282874 (--1DDisplayTargetResources@@QEAA@XZ.c)
 *     ??4DDisplayTargetResources@@QEAAAEAU0@$$QEAU0@@Z @ 0x180282D30 (--4DDisplayTargetResources@@QEAAAEAU0@$$QEAU0@@Z.c)
 */

__int64 __fastcall CDDisplayManager::GetDisplayDeviceAndTarget(
        CDDisplayManager *this,
        struct _LUID a2,
        void *a3,
        int a4,
        struct DDisplayTargetResources *a5)
{
  DWORD LowPart; // edi
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // r14d
  LONG HighPart; // r15d
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, _QWORD, __int64 *); // rsi
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 (__fastcall *v28)(__int64, __int64, __int128 *); // rbx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 (__fastcall *v33)(__int64, void *, GUID *, __int128 *); // rbx
  unsigned int v35; // [rsp+28h] [rbp-91h]
  __int64 *v36; // [rsp+38h] [rbp-81h] BYREF
  __int64 v37; // [rsp+40h] [rbp-79h] BYREF
  __int64 v38; // [rsp+48h] [rbp-71h] BYREF
  __int64 v39; // [rsp+50h] [rbp-69h] BYREF
  __int128 v40; // [rsp+58h] [rbp-61h] BYREF
  __int128 v41; // [rsp+68h] [rbp-51h] BYREF
  __int64 v42[2]; // [rsp+78h] [rbp-41h] BYREF
  __int128 v43; // [rsp+88h] [rbp-31h] BYREF
  __int128 v44; // [rsp+98h] [rbp-21h] BYREF
  int v45; // [rsp+A8h] [rbp-11h] BYREF
  int v46; // [rsp+ACh] [rbp-Dh]
  int v47; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v48; // [rsp+C0h] [rbp+7h] BYREF
  GUID v49; // [rsp+C8h] [rbp+Fh] BYREF
  CDDisplayManager *v50; // [rsp+118h] [rbp+5Fh] BYREF
  struct _LUID v51; // [rsp+120h] [rbp+67h]

  v51 = a2;
  v50 = this;
  LowPart = a2.LowPart;
  v8 = *g_DDisplayManager;
  v39 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v8 + 48))(g_DDisplayManager, &v39);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0xE0u);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(__int64, CDDisplayManager **))(*(_QWORD *)v39 + 56LL))(v39, &v50);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0xE1u);
    }
    else
    {
      v14 = 0;
      if ( (_DWORD)v50 )
      {
        HighPart = v51.HighPart;
        while ( 1 )
        {
          v16 = v39;
          v36 = 0LL;
          v17 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v39 + 48LL);
          wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v36);
          v18 = v17(v16, v14, (__int64 *)&v36);
          v11 = v18;
          if ( v18 < 0 )
            break;
          v20 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v36 + 64))(v36, &v47);
          v11 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0xEBu);
            goto LABEL_50;
          }
          if ( a4 == v47 )
          {
            v22 = *v36;
            v37 = 0LL;
            v23 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v22 + 48))(v36, &v37);
            v11 = v23;
            if ( v23 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, v23, 0xF4u);
              goto LABEL_47;
            }
            v25 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 48LL))(v37, &v48);
            v11 = v25;
            if ( v25 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, v25, 0xF5u);
              goto LABEL_47;
            }
            v38 = v48;
            *(_QWORD *)&v49.Data1 = __PAIR64__(HighPart, LowPart);
            if ( __PAIR64__(HighPart, LowPart) == v48 )
            {
              v42[0] = 0LL;
              v40 = 0LL;
              v41 = 0LL;
              v43 = 0LL;
              v44 = 0LL;
              v45 = -1;
              v46 = -1;
              v42[1] = (__int64)v36;
              if ( v36 )
                (*(void (__fastcall **)(__int64 *))(*v36 + 8))(v36);
              v27 = g_DDisplayManager;
              v28 = *(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*g_DDisplayManager + 112LL);
              wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v40);
              v29 = v28(v27, v37, &v40);
              v11 = v29;
              if ( v29 < 0 )
              {
                v35 = 253;
              }
              else
              {
                wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v40 + 1);
                v29 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))v40)(
                        v40,
                        &GUID_3fefe50c_0940_54bd_a02f_f9c7a536ad60,
                        (char *)&v40 + 8);
                v11 = v29;
                if ( v29 < 0 )
                {
                  v35 = 254;
                }
                else
                {
                  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v41);
                  v29 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int128 *))v40)(
                          v40,
                          &GUID_54e1a93c_3c52_5efb_957e_4bf25c4bd20e,
                          &v41);
                  v11 = v29;
                  if ( v29 < 0 )
                  {
                    v35 = 255;
                  }
                  else
                  {
                    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v41 + 1);
                    v29 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))v40)(
                            v40,
                            &GUID_64338358_366a_471b_bd56_dd8ef48e439b,
                            (char *)&v41 + 8);
                    v11 = v29;
                    if ( v29 < 0 )
                    {
                      v35 = 256;
                    }
                    else
                    {
                      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v42);
                      v29 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v40)(
                              v40,
                              &GUID_4824eb1d_6525_4522_bae1_f7bad7168a94,
                              v42);
                      v11 = v29;
                      if ( v29 < 0 )
                      {
                        v35 = 257;
                      }
                      else
                      {
                        v31 = *((_QWORD *)&v44 + 1);
                        *((_QWORD *)&v44 + 1) = 0LL;
                        if ( v31 )
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
                        v29 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))v40)(
                                v40,
                                &GUID_89887184_7ca9_4645_b0ce_5b51a741fc80,
                                (char *)&v44 + 8);
                        v11 = v29;
                        if ( v29 < 0 )
                        {
                          v35 = 258;
                        }
                        else
                        {
                          v32 = *((_QWORD *)&v41 + 1);
                          v33 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int128 *))(**((_QWORD **)&v41 + 1)
                                                                                              + 32LL);
                          wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v43);
                          v49 = GUID_ecd15fc1_eadc_51bc_971d_3bc628db2dd4;
                          v29 = v33(v32, a3, &v49, &v43);
                          v11 = v29;
                          if ( v29 < 0 )
                          {
                            v35 = 269;
                          }
                          else
                          {
                            wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v43 + 1);
                            v29 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))v43)(
                                    v43,
                                    &GUID_71e18952_b321_5af4_bfe8_03fbea31e40d,
                                    (char *)&v43 + 8);
                            v11 = v29;
                            if ( v29 < 0 )
                            {
                              v35 = 272;
                            }
                            else
                            {
                              wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v44);
                              v29 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int128 *))v43)(
                                      v43,
                                      &GUID_c1696df6_9f38_5d52_ad5f_462a1d6926ed,
                                      &v44);
                              v11 = v29;
                              if ( v29 < 0 )
                              {
                                v35 = 275;
                              }
                              else
                              {
                                v29 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)&v43 + 1) + 48LL))(
                                        *((_QWORD *)&v43 + 1),
                                        &v38);
                                v11 = v29;
                                if ( v29 < 0 )
                                {
                                  v35 = 280;
                                }
                                else
                                {
                                  if ( (_DWORD)v38 )
                                  {
                                    v11 = -2003304309;
                                    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0LL, -2003304309, 0x11Bu);
                                    goto LABEL_44;
                                  }
                                  v29 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v43 + 56LL))(v43, &v45);
                                  v11 = v29;
                                  if ( v29 >= 0 )
                                  {
                                    v46 = a4;
                                    DDisplayTargetResources::operator=((__int64)a5, (__int64)&v40);
                                    ++dword_1803D39E0;
                                    goto LABEL_44;
                                  }
                                  v35 = 287;
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
              MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0LL, v29, v35);
LABEL_44:
              DDisplayTargetResources::~DDisplayTargetResources((DDisplayTargetResources *)&v40);
LABEL_47:
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v37);
              goto LABEL_50;
            }
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v37);
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v36);
          if ( ++v14 >= (unsigned int)v50 )
            goto LABEL_53;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0xEAu);
LABEL_50:
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v36);
      }
    }
  }
LABEL_53:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v39);
  return v11;
}
