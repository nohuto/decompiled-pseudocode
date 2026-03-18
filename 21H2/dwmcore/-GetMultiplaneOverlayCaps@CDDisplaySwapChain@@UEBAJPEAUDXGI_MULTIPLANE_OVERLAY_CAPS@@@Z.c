/*
 * XREFs of ?GetMultiplaneOverlayCaps@CDDisplaySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x18027B200
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@0@@Z @ 0x1800F3678 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDDisplaySwapChain::GetMultiplaneOverlayCaps(
        CDDisplaySwapChain *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  float v17; // xmm0_4
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // edx
  bool v31; // cc
  double v32; // xmm0_8
  float v33; // xmm1_4
  __int64 v34; // rdi
  __int64 v36; // [rsp+30h] [rbp-30h] BYREF
  double v37; // [rsp+38h] [rbp-28h] BYREF
  double v38; // [rsp+40h] [rbp-20h] BYREF
  double v39; // [rsp+48h] [rbp-18h] BYREF
  double v40[2]; // [rsp+50h] [rbp-10h] BYREF
  char v41; // [rsp+A0h] [rbp+40h] BYREF
  char v42; // [rsp+A8h] [rbp+48h] BYREF
  char v43; // [rsp+B0h] [rbp+50h] BYREF
  char v44; // [rsp+B8h] [rbp+58h] BYREF

  v36 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v36);
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 29))(
    *((_QWORD *)this + 29),
    &GUID_c1696df6_9f38_5d52_ad5f_462a1d6926ed,
    &v36);
  v37 = 0.0;
  v38 = 0.0;
  v4 = (*(__int64 (__fastcall **)(__int64, struct DXGI_MULTIPLANE_OVERLAY_CAPS *))(*(_QWORD *)v36 + 56LL))(v36, a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, v4, 0x284u);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v36 + 64LL))(v36, (char *)a2 + 4);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x285u);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v36 + 72LL))(v36, (char *)a2 + 8);
      v6 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x286u);
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v36 + 80LL))(v36, &v39);
        v6 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x287u);
        }
        else
        {
          v13 = v36;
          *((float *)a2 + 4) = v39;
          v14 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v13 + 88LL))(v13, v40);
          v6 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x289u);
          }
          else
          {
            v16 = v36;
            v17 = v40[0];
            *((_DWORD *)a2 + 3) = 0;
            v41 = 0;
            v42 = 0;
            v43 = 0;
            v44 = 0;
            *((float *)a2 + 5) = v17;
            v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v16 + 96LL))(v16, 0LL, &v41);
            v6 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0x292u);
            }
            else
            {
              v20 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v36 + 96LL))(v36, 2LL, &v43);
              v6 = v20;
              if ( v20 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0x293u);
              }
              else
              {
                v22 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v36 + 96LL))(v36, 1LL, &v42);
                v6 = v22;
                if ( v22 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0LL, v22, 0x294u);
                }
                else
                {
                  v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 25) + 56LL))(
                          *((_QWORD *)this + 25),
                          2LL,
                          &v44);
                  v6 = v24;
                  if ( v24 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, v24, 0x295u);
                  }
                  else
                  {
                    v26 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v36 + 104LL))(v36, &v37);
                    v6 = v26;
                    if ( v26 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0LL, v26, 0x297u);
                    }
                    else
                    {
                      v28 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v36 + 112LL))(v36, &v38);
                      v6 = v28;
                      if ( v28 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0LL, v28, 0x298u);
                      }
                      else
                      {
                        v30 = (v44 != 0 ? 0x40000 : 0) | (v43 != 0 ? 4 : 0) | *((_DWORD *)a2 + 3) | (v41 != 0) | (v42 != 0 ? 2 : 0);
                        v31 = *((_DWORD *)a2 + 1) <= 1u;
                        *((_DWORD *)a2 + 3) = v30;
                        if ( !v31 )
                        {
                          v30 |= 0x20u;
                          *((_DWORD *)a2 + 3) = v30;
                        }
                        if ( *((_DWORD *)a2 + 2) )
                          *((_DWORD *)a2 + 3) = v30 | 0x40;
                        v32 = v37;
                        if ( v37 > 1.0 )
                        {
                          v33 = v38;
                          *((_DWORD *)a2 + 6) = 1;
                          *((_DWORD *)a2 + 8) = 1024;
                          *((float *)a2 + 10) = v33;
                          *((float *)a2 + 9) = v32;
                        }
                        v34 = *((_QWORD *)this + 16);
                        if ( v34 )
                        {
                          std::_Destroy_range<std::allocator<std::unique_ptr<CCheckMPOCache>>>(
                            *(__int64 ***)(v34 + 1448),
                            *(_QWORD *)(v34 + 1456));
                          *(_QWORD *)(v34 + 1456) = *(_QWORD *)(v34 + 1448);
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
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v36);
  return v6;
}
