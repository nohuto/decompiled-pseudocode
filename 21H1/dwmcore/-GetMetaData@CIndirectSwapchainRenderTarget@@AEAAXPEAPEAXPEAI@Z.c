/*
 * XREFs of ?GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z @ 0x18018DD80
 * Callers:
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18018E274 (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18018E4B0 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CIndirectSwapchainRenderTarget::GetMetaData(
        CIndirectSwapchainRenderTarget *this,
        void **a2,
        unsigned int *a3)
{
  unsigned int v3; // r9d
  void *v4; // rax

  v3 = *((_DWORD *)this + 484);
  v4 = 0LL;
  if ( v3 )
    v4 = (void *)*((_QWORD *)this + 239);
  *a2 = v4;
  *a3 = v3;
}
