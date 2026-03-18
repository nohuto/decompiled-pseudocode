/*
 * XREFs of ?GetMultiplaneOverlayCaps@CDDisplaySwapChain@@UEBAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x180236FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x1800E5944 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?ResetCheckMPOCache@CD3DDevice@@QEAAXXZ @ 0x1800EB970 (-ResetCheckMPOCache@CD3DDevice@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDDisplaySwapChain::GetMultiplaneOverlayCaps(
        CDDisplaySwapChain *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  void (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  float v18; // xmm0_4
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  int v31; // edx
  bool v32; // cc
  double v33; // xmm0_8
  float v34; // xmm1_4
  char *****v35; // rcx
  __int64 v37; // [rsp+30h] [rbp-30h] BYREF
  double v38; // [rsp+38h] [rbp-28h] BYREF
  double v39; // [rsp+40h] [rbp-20h] BYREF
  double v40; // [rsp+48h] [rbp-18h] BYREF
  double v41[2]; // [rsp+50h] [rbp-10h] BYREF
  char v42; // [rsp+A0h] [rbp+40h] BYREF
  char v43; // [rsp+A8h] [rbp+48h] BYREF
  char v44; // [rsp+B0h] [rbp+50h] BYREF
  char v45; // [rsp+B8h] [rbp+58h] BYREF

  v3 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 15);
  v37 = 0LL;
  (**v3)(v3, &GUID_3b6aef30_2478_5e87_8ec8_023417543ce2, &v37);
  v38 = 0.0;
  v39 = 0.0;
  v5 = (*(__int64 (__fastcall **)(__int64, struct DXGI_MULTIPLANE_OVERLAY_CAPS *))(*(_QWORD *)v37 + 48LL))(v37, a2);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x19Bu, 0LL);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v37 + 56LL))(v37, (char *)a2 + 4);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x19Cu, 0LL);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v37 + 64LL))(v37, (char *)a2 + 8);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x19Du, 0LL);
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v37 + 72LL))(v37, &v40);
        v7 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x19Eu, 0LL);
        }
        else
        {
          v14 = v37;
          *((float *)a2 + 4) = v40;
          v15 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v14 + 80LL))(v14, v41);
          v7 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1A0u, 0LL);
          }
          else
          {
            v17 = v37;
            v18 = v41[0];
            *((_DWORD *)a2 + 3) = 0;
            v42 = 0;
            v43 = 0;
            v44 = 0;
            v45 = 0;
            *((float *)a2 + 5) = v18;
            v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v17 + 88LL))(v17, 0LL, &v42);
            v7 = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x1A9u, 0LL);
            }
            else
            {
              v21 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v37 + 88LL))(v37, 2LL, &v44);
              v7 = v21;
              if ( v21 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x1AAu, 0LL);
              }
              else
              {
                v23 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v37 + 88LL))(v37, 1LL, &v43);
                v7 = v23;
                if ( v23 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x1ABu, 0LL);
                }
                else
                {
                  v25 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 11) + 64LL))(
                          *((_QWORD *)this + 11),
                          2LL,
                          &v45);
                  v7 = v25;
                  if ( v25 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x1ACu, 0LL);
                  }
                  else
                  {
                    v27 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v37 + 96LL))(v37, &v38);
                    v7 = v27;
                    if ( v27 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x1AEu, 0LL);
                    }
                    else
                    {
                      v29 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v37 + 104LL))(v37, &v39);
                      v7 = v29;
                      if ( v29 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x1AFu, 0LL);
                      }
                      else
                      {
                        v31 = (v45 != 0 ? 0x40000 : 0) | (v44 != 0 ? 4 : 0) | (v42 != 0) | *((_DWORD *)a2 + 3) | (v43 != 0 ? 2 : 0);
                        v32 = *((_DWORD *)a2 + 1) <= 1u;
                        *((_DWORD *)a2 + 3) = v31;
                        if ( !v32 )
                        {
                          v31 |= 0x20u;
                          *((_DWORD *)a2 + 3) = v31;
                        }
                        if ( *((_DWORD *)a2 + 2) )
                          *((_DWORD *)a2 + 3) = v31 | 0x40;
                        v33 = v38;
                        if ( v38 > 1.0 )
                        {
                          v34 = v39;
                          *((_DWORD *)a2 + 6) = 1;
                          *((_DWORD *)a2 + 8) = 1024;
                          *((float *)a2 + 10) = v34;
                          *((float *)a2 + 9) = v33;
                        }
                        if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((_QWORD *)this + 3) )
                          CD3DDevice::ResetCheckMPOCache(*v35);
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
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v37);
  return v7;
}
