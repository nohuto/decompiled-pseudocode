/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18001232C
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180108D10 (-CheckMultiplaneOverlaySupport@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NPEBUDXGI_CHECK_MULTIPLANEOVER.c)
 * Callees:
 *     ?CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18001244C (-CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 *     ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x180012500 (-AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CLegacySwapChain::CheckMultiplaneOverlaySupport(
        CLegacySwapChain *this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  bool v4; // bl
  bool v7; // zf
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ecx
  DWORD v13; // ebx
  bool result; // al
  bool v15; // [rsp+30h] [rbp-99h] BYREF
  int v16; // [rsp+34h] [rbp-95h] BYREF
  int v17; // [rsp+38h] [rbp-91h] BYREF
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-89h] BYREF

  v4 = 0;
  *a4 = 0;
  v7 = *((_QWORD *)this - 41) == 0LL;
  v15 = 0;
  if ( v7 || *((int *)this - 41) < 1 )
    return v4;
  if ( !CD3DDevice::CheckMPOCache(*((CD3DDevice **)this - 42), a2, a3, &v15) )
  {
    v10 = *((_QWORD *)this - 41);
    v16 = 0;
    v17 = 0;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *, int *, int *))(*(_QWORD *)v10 + 176LL))(
            v10,
            a3,
            a2,
            &v16,
            &v17);
    v13 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x38Cu, 0LL);
      if ( v13 == -2005270527 || v13 == -2147024809 )
      {
        memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
        pExceptionRecord.ExceptionCode = v13;
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
      return v15;
    }
    else
    {
      v4 = v15;
      if ( v16 )
        v4 = 1;
      if ( v17 )
        *a4 = 1;
      CD3DDevice::AddCheckMPOCache(*((CD3DDevice **)this - 42), a2, a3, v4);
    }
    return v4;
  }
  result = v15;
  *a4 = 1;
  return result;
}
