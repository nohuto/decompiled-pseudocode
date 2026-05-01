/*
 * XREFs of ?GetWindowForThumbnail@CSwitchItemElement@@UEAAPEAUHWND__@@XZ @ 0x1803A11D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

HWND __fastcall CSwitchItemElement::GetWindowForThumbnail(CSwitchItemElement *this)
{
  return *(HWND *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 45) + 40LL))(*((_QWORD *)this + 45));
}
