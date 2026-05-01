/*
 * XREFs of ?HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x18003251C
 * Callers:
 *     ?OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z @ 0x180034F90 (-OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall WindowEventDispatcher::HandleForegroundWindow(WindowEventDispatcher *this, HWND a2)
{
  __int64 v4; // rbx
  bool v5; // r14
  _QWORD *v6; // rdi
  _QWORD *v7; // r15
  HWND v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rdi

  v4 = 0LL;
  if ( (unsigned int)IsShellManagedWindow(a2) )
  {
    v5 = 0;
    v6 = (_QWORD *)*((_QWORD *)this + 46);
    v7 = (_QWORD *)*((_QWORD *)this + 47);
    while ( v6 != v7 )
    {
      if ( *v6 )
      {
        v8 = (HWND)(*(int (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 256LL))(*v6);
        if ( a2 == (HWND)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 352LL))(*v6) || a2 == v8 )
        {
          v4 = *v6;
          if ( *v6 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
          v5 = a2 == v8;
          break;
        }
      }
      ++v6;
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 336LL))(v4);
  }
  v9 = *((_QWORD *)this + 57);
  if ( v9 != v4 )
  {
    if ( v9 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 344LL))(v9, 0LL);
    if ( v4 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 344LL))(v4, 1LL);
  }
  v10 = *((_QWORD *)this + 57);
  *((_QWORD *)this + 57) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  *((_QWORD *)this + 56) = a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
}
