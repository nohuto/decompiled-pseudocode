/*
 * XREFs of ?Initialize@CVisualTree@@MEAAJXZ @ 0x1800C7230
 * Callers:
 *     ?Initialize@CDesktopTree@@MEAAJXZ @ 0x1800C6AC0 (-Initialize@CDesktopTree@@MEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x1800C72C4 (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCVisualTree@@V?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCVisualTree@@_K0@Z @ 0x1800C730C (-reserve_region@-$vector_facade@PEAVCVisualTree@@V-$buffer_impl@PEAVCVisualTree@@$0BA@$00Vlibera.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualTree::Initialize(CVisualTree *this)
{
  CVisual *v1; // rbx
  __int64 v3; // rbx
  __int64 v4; // rdx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CVisual *)*((_QWORD *)this + 8);
  CVisual::SetVisualTreeNoRef(v1, this);
  *((_BYTE *)v1 + 96) |= 1u;
  v3 = *((_QWORD *)this + 2);
  v6 = (struct _RTL_CRITICAL_SECTION *)(v3 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 16));
  if ( (*(unsigned __int8 (__fastcall **)(CVisualTree *))(*(_QWORD *)this + 184LL))(this) )
    v4 = 0LL;
  else
    v4 = (__int64)(*(_QWORD *)(v3 + 64) - *(_QWORD *)(v3 + 56)) >> 3;
  *(_QWORD *)detail::vector_facade<CVisualTree *,detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>>::reserve_region(
               v3 + 56,
               v4) = this;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v6);
  return 0LL;
}
