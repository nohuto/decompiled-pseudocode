/*
 * XREFs of ?OnSwapChainAttach@CHolographicExclusiveView@@QEAAXXZ @ 0x180257170
 * Callers:
 *     ?ProcessAttachExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025BAF4 (-ProcessAttachExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicExclusiveView::OnSwapChainAttach(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  PVOID Ptr; // rcx

  v1 = this + 50;
  AcquireSRWLockExclusive(this + 50);
  Ptr = this[10].Ptr;
  if ( Ptr )
  {
    this[11].Ptr = Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    BYTE2(this[9].Ptr) = 1;
  }
  ReleaseSRWLockExclusive(v1);
}
