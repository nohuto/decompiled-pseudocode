/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1802496C0
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1800F7490 (-CheckMultiplaneOverlaySupport@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NPEBUDXGI_CHECK_MULTIPLANEOVER.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x1800EAB54 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x1800F1F28 (-AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z.c)
 *     ?CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1800F1FC0 (-CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CLegacySwapChain::CheckMultiplaneOverlaySupport(
        CD3DDevice **this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  bool v4; // bl
  CD3DDevice **v5; // r12
  const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *v10; // rdx
  unsigned int v11; // r8d
  CD3DDevice *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  DWORD v16; // ebx
  bool v17; // [rsp+30h] [rbp-99h] BYREF
  int v18; // [rsp+34h] [rbp-95h] BYREF
  int v19; // [rsp+38h] [rbp-91h] BYREF
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-89h] BYREF

  v4 = 0;
  v5 = this - 35;
  v17 = 0;
  *a4 = 0;
  if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(this - 35) && *((int *)this - 41) >= 1 )
  {
    if ( CD3DDevice::CheckMPOCache(*(this - 36), v10, v11, &v17) )
    {
      *a4 = 1;
      return v17;
    }
    v13 = *v5;
    v18 = 0;
    v19 = 0;
    v14 = (*(__int64 (__fastcall **)(CD3DDevice *, _QWORD, const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *, int *, int *))(*(_QWORD *)v13 + 176LL))(
            v13,
            a3,
            a2,
            &v18,
            &v19);
    v16 = v14;
    if ( v14 >= 0 )
    {
      v4 = v17;
      if ( v18 )
        v4 = 1;
      if ( v19 )
        *a4 = 1;
      CD3DDevice::AddCheckMPOCache(*(this - 36), a2);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x25Bu, 0LL);
      if ( v16 == -2005270527 || v16 == -2147024809 )
      {
        memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
        pExceptionRecord.ExceptionCode = v16;
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
      return v17;
    }
  }
  return v4;
}
