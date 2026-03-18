/*
 * XREFs of ?GetLastPresentCount@CCompSwapChain@@UEBAIXZ @ 0x18024F530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompSwapChain::GetLastPresentCount(CCompSwapChain *this)
{
  __int64 v1; // rcx
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 4);
  v3 = 0;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 136LL))(v1, &v3);
  return v3;
}
