/*
 * XREFs of ?Create@CDDASwapChain@@SAJPEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDDASwapChain@@@Z @ 0x180293930
 * Callers:
 *     ?CreateDDASwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDDASwapChain@@@Z @ 0x1802804B0 (-CreateDDASwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDDASwapChain@@IEAA@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x180293648 (--0CDDASwapChain@@IEAA@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z.c)
 *     ??4?$com_ptr_t@VCDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDDASwapChain@@@Z @ 0x180293818 (--4-$com_ptr_t@VCDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDDASwapChain@@@.c)
 *     ?Initialize@CDDASwapChain@@IEAAJPEAVCD3DDevice@@@Z @ 0x180293BC0 (-Initialize@CDDASwapChain@@IEAAJPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CDDASwapChain::Create(
        struct CD3DDevice *a1,
        struct IDXGISwapChainDWM1 *a2,
        const struct PixelFormatInfo *a3,
        const struct RenderTargetInfo *a4,
        struct IDDASwapChain **a5)
{
  CDDASwapChain *v9; // rax
  __int64 v10; // rcx
  CDDASwapChain *v11; // rdi
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  CDDASwapChain *v15; // rcx
  CDDASwapChain *v17; // [rsp+30h] [rbp-18h] BYREF

  v17 = 0LL;
  *a5 = 0LL;
  v9 = (CDDASwapChain *)DefaultHeap::Alloc(0xD8uLL);
  if ( v9 )
    v9 = CDDASwapChain::CDDASwapChain(v9, a2, a3, a4);
  wil::com_ptr_t<CDDASwapChain,wil::err_returncode_policy>::operator=(
    (volatile signed __int32 **)&v17,
    (volatile signed __int32 *)v9);
  v11 = v17;
  if ( v17 )
  {
    v13 = CDDASwapChain::Initialize(v17, a1);
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x1Du);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 4, 0xFFFFFFFF) == 1 )
      {
        CMILRefCountImpl::AddReference((CDDASwapChain *)((char *)v11 + 16));
        (*(void (__fastcall **)(CDDASwapChain *))(*(_QWORD *)v17 + 64LL))(v17);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 4, 0xFFFFFFFF) == 1 )
        {
          v15 = v17;
          --*((_DWORD *)v11 + 4);
          (*(void (__fastcall **)(CDDASwapChain *, __int64))(*(_QWORD *)v15 + 56LL))(v15, 1LL);
        }
      }
    }
    else
    {
      *a5 = v11;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, -2147024882, 0x1Bu);
  }
  return v12;
}
