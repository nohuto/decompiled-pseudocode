/*
 * XREFs of ?GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z @ 0x180243084
 * Callers:
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180241B04 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E1920 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??1DDisplayTargetResources@@QEAA@XZ @ 0x180240BF0 (--1DDisplayTargetResources@@QEAA@XZ.c)
 *     ??4DDisplayTargetResources@@QEAAAEAU0@$$QEAU0@@Z @ 0x180240EF4 (--4DDisplayTargetResources@@QEAAAEAU0@$$QEAU0@@Z.c)
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
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 (__fastcall *v27)(__int64, __int64, __int128 *); // rbx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 (__fastcall *v37)(__int64, void *, GUID *, __int64 *); // rbx
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  __int64 v43; // [rsp+38h] [rbp-61h] BYREF
  __int64 v44; // [rsp+40h] [rbp-59h] BYREF
  __int64 v45; // [rsp+48h] [rbp-51h] BYREF
  int v46; // [rsp+50h] [rbp-49h] BYREF
  __int128 v47; // [rsp+58h] [rbp-41h] BYREF
  __int128 v48; // [rsp+68h] [rbp-31h] BYREF
  __int64 v49; // [rsp+78h] [rbp-21h]
  __int64 v50; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v51[8]; // [rsp+88h] [rbp-11h] BYREF
  _QWORD v52[3]; // [rsp+90h] [rbp-9h] BYREF
  GUID v53; // [rsp+A8h] [rbp+Fh] BYREF
  CDDisplayManager *v54; // [rsp+F8h] [rbp+5Fh] BYREF
  struct _LUID v55; // [rsp+100h] [rbp+67h]

  v55 = a2;
  v54 = this;
  LowPart = a2.LowPart;
  v8 = *(_QWORD *)g_DDisplayManager;
  v45 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v8 + 48))(g_DDisplayManager, &v45);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x81u, 0LL);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(__int64, CDDisplayManager **))(*(_QWORD *)v45 + 56LL))(v45, &v54);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x82u, 0LL);
    }
    else
    {
      v14 = 0;
      if ( (_DWORD)v54 )
      {
        HighPart = v55.HighPart;
        while ( 1 )
        {
          v16 = v45;
          v43 = 0LL;
          v17 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v45 + 48LL);
          wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v43);
          v18 = v17(v16, v14, &v43);
          v11 = v18;
          if ( v18 < 0 )
            break;
          v20 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v43 + 64LL))(v43, &v46);
          v11 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x8Cu, 0LL);
            goto LABEL_35;
          }
          if ( a4 == v46 )
          {
            v44 = 0LL;
            v22 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v43 + 48LL))(v43, &v44);
            v11 = v22;
            if ( v22 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x95u, 0LL);
              goto LABEL_32;
            }
            v24 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v44 + 48LL))(v44, v52);
            v11 = v24;
            if ( v24 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x96u, 0LL);
LABEL_32:
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v44);
              goto LABEL_35;
            }
            v52[1] = v52[0];
            *(_QWORD *)&v53.Data1 = __PAIR64__(HighPart, LowPart);
            if ( __PAIR64__(HighPart, LowPart) == v52[0] )
            {
              v50 = 0LL;
              v49 = v43;
              v47 = 0LL;
              v48 = 0LL;
              if ( v43 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 8LL))(v43);
              v26 = g_DDisplayManager;
              v27 = *(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)g_DDisplayManager + 112LL);
              wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v47);
              v28 = v27(v26, v44, &v47);
              v11 = v28;
              if ( v28 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x9Eu, 0LL);
              }
              else
              {
                wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v47 + 1);
                v30 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))v47)(
                        v47,
                        &GUID_b05f4700_43c3_5bd7_942b_cc833a1ef83c,
                        (char *)&v47 + 8);
                v11 = v30;
                if ( v30 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x9Fu, 0LL);
                }
                else
                {
                  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v48);
                  v32 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int128 *))v47)(
                          v47,
                          &GUID_64338358_366a_471b_bd56_dd8ef48e439b,
                          &v48);
                  v11 = v32;
                  if ( v32 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0xA0u, 0LL);
                  }
                  else
                  {
                    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v48 + 1);
                    v34 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))v47)(
                            v47,
                            &GUID_4824eb1d_6525_4522_bae1_f7bad7168a94,
                            (char *)&v48 + 8);
                    v11 = v34;
                    if ( v34 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0xA1u, 0LL);
                    }
                    else
                    {
                      v36 = v48;
                      v37 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v48 + 32LL);
                      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v50);
                      v53 = GUID_ecd15fc1_eadc_51bc_971d_3bc628db2dd4;
                      v38 = v37(v36, a3, &v53, &v50);
                      v11 = v38;
                      if ( v38 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0xA6u, 0LL);
                      }
                      else
                      {
                        v40 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v50 + 56LL))(v50, v51);
                        v11 = v40;
                        if ( v40 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0xA9u, 0LL);
                        }
                        else
                        {
                          DDisplayTargetResources::operator=((__int64)a5, (__int64)&v47);
                          ++dword_1803495E0;
                        }
                      }
                    }
                  }
                }
              }
              DDisplayTargetResources::~DDisplayTargetResources((DDisplayTargetResources *)&v47);
              goto LABEL_32;
            }
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v44);
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v43);
          if ( ++v14 >= (unsigned int)v54 )
            goto LABEL_38;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x8Bu, 0LL);
LABEL_35:
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v43);
      }
    }
  }
LABEL_38:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v45);
  return v11;
}
