/*
 * XREFs of ?BeginPreCompute@CVisualTree@@QEAAXXZ @ 0x18008DA94
 * Callers:
 *     ?BeginWalk@SubTreeContext@CPreComputeContext@@QEAA_NPEBVCVisualTree@@@Z @ 0x18008DC18 (-BeginWalk@SubTreeContext@CPreComputeContext@@QEAA_NPEBVCVisualTree@@@Z.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x18008F144 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 * Callees:
 *     ?Initialize@CDirtyRegion@@IEAAX_N@Z @ 0x1800A5860 (-Initialize@CDirtyRegion@@IEAAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisualTree::BeginPreCompute(CVisualTree *this)
{
  char v2; // al
  __int64 v3; // rax

  (*(void (__fastcall **)(CVisualTree *))(*(_QWORD *)this + 232LL))(this);
  v2 = (*(__int64 (__fastcall **)(CVisualTree *))(*(_QWORD *)this + 224LL))(this);
  CDirtyRegion::Initialize((CVisualTree *)((char *)this + 104), v2);
  v3 = (*(__int64 (__fastcall **)(CVisualTree *))(*(_QWORD *)this + 208LL))(this);
  if ( v3 )
    (*(void (__fastcall **)(__int64, CVisualTree *))(*(_QWORD *)v3 + 24LL))(v3, this);
}
