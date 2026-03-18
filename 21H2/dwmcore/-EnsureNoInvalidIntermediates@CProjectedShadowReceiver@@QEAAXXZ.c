/*
 * XREFs of ?EnsureNoInvalidIntermediates@CProjectedShadowReceiver@@QEAAXXZ @ 0x1802354CC
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180235174 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x180235858 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowReceiver::EnsureNoInvalidIntermediates(CProjectedShadowReceiver *this)
{
  __int64 v2; // rcx
  int (__fastcall ***v3)(_QWORD); // rcx

  v2 = *((_QWORD *)this + 14);
  if ( v2 )
  {
    v3 = (int (__fastcall ***)(_QWORD))(*(int *)(*(_QWORD *)(v2 + 8) + 8LL) + v2 + 8);
    if ( (**v3)(v3) < 0 )
      CProjectedShadowReceiver::InvalidateMaskContent(this);
  }
}
