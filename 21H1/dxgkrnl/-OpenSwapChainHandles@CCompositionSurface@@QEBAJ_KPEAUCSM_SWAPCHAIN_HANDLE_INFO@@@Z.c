/*
 * XREFs of ?OpenSwapChainHandles@CCompositionSurface@@QEBAJ_KPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z @ 0x1C0002E60
 * Callers:
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C0002C10 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0004758 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::OpenSwapChainHandles(
        CCompositionSurface *this,
        unsigned __int64 a2,
        struct CSM_SWAPCHAIN_HANDLE_INFO *a3)
{
  __int64 result; // rax
  struct CCompositionBuffer *v5; // rbx
  struct CCompositionBuffer *v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  result = CCompositionSurface::FindBuffer(this, a2, &v6);
  if ( (int)result >= 0 )
  {
    v5 = v6;
    if ( (*(unsigned __int8 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v6 + 80LL))(v6) )
      return (*(__int64 (__fastcall **)(struct CCompositionBuffer *, struct CSM_SWAPCHAIN_HANDLE_INFO *))(*(_QWORD *)v5 + 72LL))(
               v5,
               a3);
    else
      return 3221225485LL;
  }
  return result;
}
