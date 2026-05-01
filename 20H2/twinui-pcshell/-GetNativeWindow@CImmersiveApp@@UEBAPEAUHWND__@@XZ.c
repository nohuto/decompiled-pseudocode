/*
 * XREFs of ?GetNativeWindow@CImmersiveApp@@UEBAPEAUHWND__@@XZ @ 0x18006A990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

HWND __fastcall CImmersiveApp::GetNativeWindow(CImmersiveApp *this)
{
  HWND result; // rax

  result = 0LL;
  if ( (*((_BYTE *)this + 472) & 1) != 0 )
  {
    if ( *((_QWORD *)this + 45) )
      return (HWND)(*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 44) + 32LL))(**((_QWORD **)this + 44));
  }
  return result;
}
