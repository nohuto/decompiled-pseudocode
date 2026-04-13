/*
 * XREFs of ??_GLaunchUriService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x18008B0A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

CreativeFramework::Actions::LaunchUriService *__fastcall CreativeFramework::Actions::LaunchUriService::`scalar deleting destructor'(
        CreativeFramework::Actions::LaunchUriService *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 13);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( *((_QWORD *)this + 12) >= 8uLL )
    operator delete(*((void **)this + 9));
  *((_QWORD *)this + 12) = 7LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_WORD *)this + 36) = 0;
  if ( *((_QWORD *)this + 8) >= 8uLL )
    operator delete(*((void **)this + 5));
  *((_QWORD *)this + 8) = 7LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_WORD *)this + 20) = 0;
  if ( *((_QWORD *)this + 4) >= 8uLL )
    operator delete(*((void **)this + 1));
  *((_QWORD *)this + 4) = 7LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 4) = 0;
  *(_QWORD *)this = &CreativeFramework::Actions::IActionService::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
