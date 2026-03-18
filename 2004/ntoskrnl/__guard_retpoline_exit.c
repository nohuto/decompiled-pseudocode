/*
 * XREFs of __guard_retpoline_exit @ 0x140A14560
 * Callers:
 *     KeExitRetpoline @ 0x140329324 (KeExitRetpoline.c)
 *     __guard_retpoline_exit_indirect_rax @ 0x140A143A0 (__guard_retpoline_exit_indirect_rax.c)
 *     __guard_retpoline_import_r10 @ 0x140A14420 (__guard_retpoline_import_r10.c)
 * Callees:
 *     <none>
 */

void __spoils<rdx,rcx> _guard_retpoline_exit()
{
  unsigned __int8 BpbTrappedRetpolineExitSpecCtrl; // al
  signed __int64 v1; // [rsp+18h] [rbp-8h] BYREF

  _disable();
  BpbTrappedRetpolineExitSpecCtrl = KeGetPcr()->Prcb.BpbTrappedRetpolineExitSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbTrappedRetpolineExitSpecCtrl )
  {
    __writegsbyte(0x27Au, BpbTrappedRetpolineExitSpecCtrl);
    __writemsr(0x48u, BpbTrappedRetpolineExitSpecCtrl);
  }
  if ( (KeGetPcr()->Prcb.BpbTrappedBpbState & 0x10) != 0 )
    __writemsr(0x49u, 1uLL);
  else
    _mm_lfence();
  __writegsbyte(0x853u, KeGetPcr()->Prcb.BpbRetpolineState | 2);
  if ( _bittest64(&v1, 9u) )
    _enable();
}
