/*
 * XREFs of ?SetFocused@CMultitaskingViewFrameElement@@UEAAX_N@Z @ 0x18038AC70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z @ 0x180382F90 (-SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z.c)
 */

void __fastcall CMultitaskingViewFrameElement::SetFocused(CMultitaskingViewFrameElement *this, char a2)
{
  CMultitaskingViewElementBase::SetFocused(this, a2);
  if ( *((_BYTE *)this + 176) && !*((_QWORD *)this + 21) )
  {
    if ( *((_QWORD *)this + 33) )
      (*(void (__fastcall **)(CMultitaskingViewFrameElement *))(*(_QWORD *)this + 288LL))(this);
  }
}
