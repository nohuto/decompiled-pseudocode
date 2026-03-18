/*
 * XREFs of ?AddDesktopTree@CComposition@@IEAAXPEAVCDesktopTree@@@Z @ 0x1800D9554
 * Callers:
 *     ?SetLuid@CDesktopTree@@AEAAJU_LUID@@@Z @ 0x1800D94E4 (-SetLuid@CDesktopTree@@AEAAJU_LUID@@@Z.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEBVCRenderingTechniqueFragment@@_K0@Z @ 0x180026794 (-reserve_region@-$vector_facade@PEBVCRenderingTechniqueFragment@@V-$buffer_impl@PEBVCRenderingTe.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18009EB7C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

void __fastcall CComposition::AddDesktopTree(CComposition *this, struct CDesktopTree *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *(_QWORD *)detail::vector_facade<CRenderingTechniqueFragment const *,detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>>::reserve_region(
               (CComposition *)((char *)this + 56),
               (__int64)(*((_QWORD *)this + 8) - *((_QWORD *)this + 7)) >> 3) = a2;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v4);
}
