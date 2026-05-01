/*
 * XREFs of ?v_WndProc@TabletModeInputHandler@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1803964D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

LRESULT __fastcall TabletModeInputHandler::v_WndProc(
        TabletModeInputHandler *this,
        HWND a2,
        UINT a3,
        WPARAM a4,
        LPARAM lParam)
{
  __int64 v5; // rbx
  __int64 v7; // rcx
  char v10; // bp
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+44h] [rbp+Ch]

  v5 = 0LL;
  v7 = *((_QWORD *)this + 2);
  v10 = 0;
  if ( !v7 )
    return DefWindowProcW(*((HWND *)this + 1), a3, a4, lParam);
  v12 = (__int16)lParam;
  v13 = SWORD1(lParam);
  switch ( a3 )
  {
    case 0x100u:
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 56LL))(v7, (unsigned int)a4);
      break;
    case 0x101u:
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, (unsigned int)a4);
      return DefWindowProcW(*((HWND *)this + 1), a3, a4, lParam);
    case 0x200u:
      (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v7 + 32LL))(v7, 0LL, &v12);
      return v5;
    case 0x201u:
      (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v7 + 24LL))(v7, 0LL, &v12);
      return v5;
    case 0x202u:
      (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v7 + 40LL))(v7, 0LL, &v12);
      return v5;
    case 0x215u:
      (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v7 + 72LL))(v7, a2);
      v10 = 1;
      break;
  }
  if ( !v10 )
    return DefWindowProcW(*((HWND *)this + 1), a3, a4, lParam);
  return v5;
}
