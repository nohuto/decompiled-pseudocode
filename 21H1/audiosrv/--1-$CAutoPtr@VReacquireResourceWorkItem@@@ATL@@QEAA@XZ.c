/*
 * XREFs of ??1?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@QEAA@XZ @ 0x1800F2E6C
 * Callers:
 *     _CConstraintModelResourceManager::AddWorkItemToQueue_::_1_::dtor$1 @ 0x1800F3553 (_CConstraintModelResourceManager--AddWorkItemToQueue_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoPtr<ReacquireResourceWorkItem>::~CAutoPtr<ReacquireResourceWorkItem>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    operator delete(v2, (const struct std::nothrow_t *)0x18);
  *a1 = 0LL;
}
