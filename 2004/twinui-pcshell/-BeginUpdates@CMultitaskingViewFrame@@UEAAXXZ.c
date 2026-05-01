/*
 * XREFs of ?BeginUpdates@CMultitaskingViewFrame@@UEAAXXZ @ 0x180399540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewFrame::BeginUpdates(CMultitaskingViewFrame *this)
{
  (*(void (__fastcall **)(_QWORD, GUID *))(**((_QWORD **)this + 307) + 24LL))(*((_QWORD *)this + 307), &GUID_NULL);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 315) + 56LL))(*((_QWORD *)this + 315));
}
