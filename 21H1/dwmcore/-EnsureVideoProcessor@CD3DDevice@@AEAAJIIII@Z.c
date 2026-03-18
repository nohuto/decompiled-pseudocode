/*
 * XREFs of ?EnsureVideoProcessor@CD3DDevice@@AEAAJIIII@Z @ 0x180240114
 * Callers:
 *     ?VideoProcessorBlt@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIAEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@0II2@Z @ 0x180241608 (-VideoProcessorBlt@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIAEBUtagRECT@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E04C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::EnsureVideoProcessor(
        CD3DDevice *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  __int64 *v6; // rbp
  int v7; // ebx
  unsigned int v8; // r13d
  unsigned int v9; // r12d
  unsigned int v10; // r15d
  __int64 *v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, _DWORD *, char *); // rbx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 (__fastcall *v27)(__int64, _QWORD, _QWORD, __int64 *); // rbx
  int v28; // eax
  __int64 v29; // rcx
  _DWORD v31[10]; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v32; // [rsp+D0h] [rbp+28h]

  v5 = a5;
  v6 = (__int64 *)((char *)this + 1048);
  v7 = 0;
  v8 = a4;
  v9 = a3;
  v10 = a2;
  if ( !*((_QWORD *)this + 131)
    || a2 > *((_DWORD *)this + 264)
    || a3 > *((_DWORD *)this + 265)
    || a4 > *((_DWORD *)this + 266)
    || a5 > *((_DWORD *)this + 267) )
  {
    v12 = (__int64 *)((char *)this + 1024);
    if ( *((_QWORD *)this + 128)
      || (wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 128),
          v13 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 74))(
                  *((_QWORD *)this + 74),
                  &GUID_10ec4d5b_975a_4689_b9e4_d0aac30fe333,
                  v12),
          v7 = v13,
          v13 >= 0) )
    {
      if ( *((_QWORD *)this + 129)
        || (wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 129),
            v15 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 75))(
                    *((_QWORD *)this + 75),
                    &GUID_a7f026da_a5f8_4487_a564_15e34357651e,
                    (char *)this + 1032),
            v7 = v15,
            v15 >= 0) )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 130);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v6);
        if ( v10 <= *((_DWORD *)this + 264) )
          v10 = *((_DWORD *)this + 264);
        v17 = *((_DWORD *)this + 265);
        v31[3] = v10;
        if ( v9 <= v17 )
          v9 = v17;
        v18 = *((_DWORD *)this + 266);
        v31[4] = v9;
        if ( v8 <= v18 )
          v8 = v18;
        v19 = *((_DWORD *)this + 267);
        v31[7] = v8;
        if ( a5 <= v19 )
          v5 = v19;
        v31[0] = 0;
        v31[9] = 0;
        v31[8] = v5;
        v31[1] = 1;
        v31[2] = 1;
        v31[5] = 1;
        v31[6] = 1;
        v32 = v5;
        v20 = *v12;
        v21 = *(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)*v12 + 80LL);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 130);
        v22 = v21(v20, v31, (char *)this + 1040);
        v7 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x9E0u, 0LL);
        }
        else
        {
          v24 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 130) + 72LL))(
                  *((_QWORD *)this + 130),
                  (char *)this + 984);
          v7 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x9E2u, 0LL);
          }
          else
          {
            v26 = *v12;
            v27 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)*v12 + 32LL);
            wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v6);
            v28 = v27(v26, *((_QWORD *)this + 130), 0LL, v6);
            v7 = v28;
            if ( v28 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x9E6u, 0LL);
            }
            else
            {
              *((_DWORD *)this + 267) = v32;
              *((_DWORD *)this + 264) = v10;
              *((_DWORD *)this + 265) = v9;
              *((_DWORD *)this + 266) = v8;
            }
          }
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x9C9u, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x9C4u, 0LL);
    }
    if ( v7 < 0 )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v6);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 130);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 129);
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v12);
      *((_DWORD *)this + 264) = 0;
      *((_DWORD *)this + 265) = 0;
      *((_DWORD *)this + 266) = 0;
      *((_DWORD *)this + 267) = 0;
    }
  }
  return (unsigned int)v7;
}
