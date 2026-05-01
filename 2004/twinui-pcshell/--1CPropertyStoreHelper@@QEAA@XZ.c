/*
 * XREFs of ??1CPropertyStoreHelper@@QEAA@XZ @ 0x1801A4CC4
 * Callers:
 *     _CDesktopPositioner::_IsViewManaged_::_1_::dtor$3 @ 0x180102813 (_CDesktopPositioner--_IsViewManaged_--_1_--dtor$3.c)
 *     _FullScreenPositioner::ApplyPresentationChanges_::_1_::dtor$2 @ 0x1801A5571 (_FullScreenPositioner--ApplyPresentationChanges_--_1_--dtor$2.c)
 *     _FullScreenPositioner::IsLightweightFullScreen_::_1_::dtor$2 @ 0x1801A6D1C (_FullScreenPositioner--IsLightweightFullScreen_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPropertyStoreHelper::~CPropertyStoreHelper(CPropertyStoreHelper *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *(_QWORD *)this = 0LL;
  }
}
