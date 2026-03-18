/*
 * XREFs of ?Pop@CLightStack@@QEAAJXZ @ 0x180014384
 * Callers:
 *     ?PopLight@CDrawingContext@@AEAAJXZ @ 0x180014344 (-PopLight@CDrawingContext@@AEAAJXZ.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090300 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009CC10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLightStack::Pop(CLightStack *this)
{
  __int128 v1; // xmm0

  v1 = *(_OWORD *)(*(_QWORD *)this + 16LL * (unsigned int)--*((_DWORD *)this + 6));
  if ( (_QWORD)v1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 16LL))(v1);
  return 0LL;
}
