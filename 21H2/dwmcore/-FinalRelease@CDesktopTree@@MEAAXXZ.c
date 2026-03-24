/*
 * XREFs of ?FinalRelease@CDesktopTree@@MEAAXXZ @ 0x18016E530
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18005D6EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?clear_region@?$vector_facade@PEAVCDesktopTree@@V?$buffer_impl@PEAVCDesktopTree@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180156238 (-clear_region@-$vector_facade@PEAVCDesktopTree@@V-$buffer_impl@PEAVCDesktopTree@@$00$00Vliberal_.c)
 */

void __fastcall CDesktopTree::FinalRelease(CDesktopTree *this)
{
  __int64 v1; // rbx
  CDesktopTree **i; // rax
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 2);
  v4 = (struct _RTL_CRITICAL_SECTION *)(v1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 16));
  for ( i = *(CDesktopTree ***)(v1 + 56); i != *(CDesktopTree ***)(v1 + 64); ++i )
  {
    if ( *i == this )
    {
      if ( i != *(CDesktopTree ***)(v1 + 64) )
        detail::vector_facade<CDesktopTree *,detail::buffer_impl<CDesktopTree *,1,1,detail::liberal_expansion_policy>>::clear_region(
          (__int64 *)(v1 + 56),
          ((__int64)i - *(_QWORD *)(v1 + 56)) >> 3,
          1LL);
      break;
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v4);
}
