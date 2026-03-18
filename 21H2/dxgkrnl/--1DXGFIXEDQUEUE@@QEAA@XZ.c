/*
 * XREFs of ??1DXGFIXEDQUEUE@@QEAA@XZ @ 0x1C005AB6C
 * Callers:
 *     ?DestroySwapchainGlobal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C034A588 (-DestroySwapchainGlobal@DXGSWAPCHAIN@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGFIXEDQUEUE::~DXGFIXEDQUEUE(DXGFIXEDQUEUE *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *((_QWORD *)this + 2) = 0LL;
  }
}
