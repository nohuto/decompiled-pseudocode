/*
 * XREFs of ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x1802551D8
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJIII@Z @ 0x180259340 (-FrameUpdate@CHolographicClient@@UEAAJIII@Z.c)
 *     ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025A084 (-ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025A2A4 (-ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicExclusiveView::DeactivateView(
        CHolographicExclusiveView *this,
        struct CHolographicClient *a2)
{
  if ( !*((_BYTE *)this + 72) || *((_BYTE *)this + 75) )
  {
    *((_BYTE *)this + 72) = 0;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)a2 + 3) + 128LL))(
      *((_QWORD *)a2 + 3),
      *((unsigned int *)this + 36),
      (char *)this + 152);
    CHolographicExclusiveView::DeactivateSwapChain(this);
  }
}
