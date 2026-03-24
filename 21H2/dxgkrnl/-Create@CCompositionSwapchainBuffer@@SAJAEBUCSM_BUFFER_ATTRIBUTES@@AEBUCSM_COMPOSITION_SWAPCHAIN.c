/*
 * XREFs of ?Create@CCompositionSwapchainBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@Z @ 0x1C006720C
 * Callers:
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z @ 0x1C001118C (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ValidateSwapChainInfo@@YAJAEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z @ 0x1C0011348 (-ValidateSwapChainInfo@@YAJAEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z.c)
 *     ??0CFlipExBuffer@@IEAA@XZ @ 0x1C0011978 (--0CFlipExBuffer@@IEAA@XZ.c)
 *     ?ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C0011AD4 (-ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CCompositionSwapchainBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C0067430 (-Initialize@CCompositionSwapchainBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWA.c)
 */

__int64 __fastcall CCompositionSwapchainBuffer::Create(
        const struct CSM_BUFFER_ATTRIBUTES *a1,
        const struct CSM_COMPOSITION_SWAPCHAIN_BUFFER_INFO *a2,
        __int64 a3,
        struct CCompositionSwapchainBuffer **a4)
{
  int v7; // ebx
  CFlipExBuffer *v8; // rax
  CCompositionSwapchainBuffer *v9; // rdi

  *a4 = 0LL;
  if ( (_BYTE)a3 )
  {
    v7 = ValidateBufferAttributes(a1, (__int64)a2, a3);
    if ( v7 >= 0 )
    {
      v7 = ValidateSwapChainInfo(a2);
      if ( v7 >= 0 )
      {
        v8 = (CFlipExBuffer *)operator new[](0x2A0uLL, 0x624D5343u, PagedPool);
        v9 = v8;
        if ( v8 )
        {
          CFlipExBuffer::CFlipExBuffer(v8);
          *(_QWORD *)v9 = &CCompositionSwapchainBuffer::`vftable';
        }
        else
        {
          v9 = 0LL;
        }
        if ( !v9 )
          v7 = -1073741801;
        if ( v7 >= 0 )
        {
          v7 = CCompositionSwapchainBuffer::Initialize(v9, a1, a2);
          if ( v7 >= 0 )
          {
            *a4 = v9;
            v9 = 0LL;
          }
        }
        if ( v9 )
          (**(void (__fastcall ***)(CCompositionSwapchainBuffer *, __int64))v9)(v9, 1LL);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
