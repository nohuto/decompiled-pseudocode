/*
 * XREFs of ??1?$CAutoPtr@VCChildSubmixInstance@@@ATL@@QEAA@XZ @ 0x1400440B8
 * Callers:
 *     _CSubmixImpl::OnLeftSubmixConnected_::_1_::dtor$1 @ 0x1400216AF (_CSubmixImpl--OnLeftSubmixConnected_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C938 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoPtr<CChildSubmixInstance>::~CAutoPtr<CChildSubmixInstance>(void **a1)
{
  operator delete(*a1);
  *a1 = 0LL;
}
