/*
 * XREFs of ?Create@CLegacyStereoSwapChain@@KAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVILegacyStereoSwapChain@@@Z @ 0x18024E818
 * Callers:
 *     ?CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVILegacyStereoSwapChain@@@Z @ 0x18023F590 (-CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatIn.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??0CLegacyStereoSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IIUDXGI_RATIONAL@@@Z @ 0x18024E4D0 (--0CLegacyStereoSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEB.c)
 */

__int64 __fastcall CLegacyStereoSwapChain::Create(
        struct CD3DDevice *a1,
        struct IDXGISwapChainDWM1 *a2,
        const struct PixelFormatInfo *a3,
        const struct RenderTargetInfo *a4,
        unsigned int a5,
        struct ILegacyStereoSwapChain **a6)
{
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  CLegacyStereoSwapChain *v13; // rax
  __int64 v14; // rcx
  CLegacyStereoSwapChain *v15; // rbx
  unsigned int v17; // [rsp+20h] [rbp-C8h]
  CLegacyStereoSwapChain *v18; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v19[8]; // [rsp+60h] [rbp-88h] BYREF
  struct DXGI_RATIONAL v20; // [rsp+68h] [rbp-80h]
  unsigned int v21; // [rsp+88h] [rbp-60h]

  v18 = 0LL;
  *a6 = 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, _BYTE *))(*(_QWORD *)a2 + 80LL))(a2, v19);
  v12 = v10;
  if ( v10 < 0 )
  {
    v17 = 26;
    goto LABEL_11;
  }
  v13 = (CLegacyStereoSwapChain *)DefaultHeap::Alloc(0x188uLL);
  if ( v13 )
    v15 = CLegacyStereoSwapChain::CLegacyStereoSwapChain(v13, a1, a2, a3, a4, v21, a5, v20);
  else
    v15 = 0LL;
  v18 = v15;
  if ( !v15 )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0x26u, 0LL);
    goto LABEL_12;
  }
  (*(void (__fastcall **)(CLegacyStereoSwapChain *))(*(_QWORD *)v15 + 8LL))(v15);
  v10 = (*(__int64 (__fastcall **)(CLegacyStereoSwapChain *))(*(_QWORD *)v15 + 48LL))(v15);
  v12 = v10;
  if ( v10 < 0 )
  {
    v17 = 40;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, v17, 0LL);
    goto LABEL_12;
  }
  v18 = 0LL;
  *a6 = (CLegacyStereoSwapChain *)((char *)v15 + 280);
LABEL_12:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
  return v12;
}
