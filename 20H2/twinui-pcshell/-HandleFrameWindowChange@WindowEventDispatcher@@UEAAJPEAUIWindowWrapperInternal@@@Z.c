/*
 * XREFs of ?HandleFrameWindowChange@WindowEventDispatcher@@UEAAJPEAUIWindowWrapperInternal@@@Z @ 0x180059A60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowEventDispatcher::HandleFrameWindowChange(
        WindowEventDispatcher *this,
        struct IWindowWrapperInternal *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  bool v5; // r14
  __int64 v6; // r12
  _QWORD *v7; // rdi
  _QWORD *v8; // r15
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rdi

  v3 = 0LL;
  v4 = *((_QWORD *)this + 54);
  if ( v4 == (*(__int64 (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)a2 + 352LL))(a2) )
  {
    if ( (unsigned int)IsShellManagedWindow(v4) )
    {
      v5 = 0;
      v6 = 0LL;
      v7 = (_QWORD *)*((_QWORD *)this + 44);
      v8 = (_QWORD *)*((_QWORD *)this + 45);
      while ( v7 != v8 )
      {
        if ( *v7 )
        {
          v9 = (*(int (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 256LL))(*v7);
          if ( v4 == (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 352LL))(*v7) || v4 == v9 )
          {
            v6 = *v7;
            if ( *v7 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
            v5 = v4 == v9;
            break;
          }
          v5 = 0;
        }
        ++v7;
      }
      v3 = v6;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 336LL))(v6);
    }
    v10 = *((_QWORD *)this + 55);
    if ( v10 != v3 )
    {
      if ( v10 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 344LL))(v10, 0LL);
      if ( v3 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 344LL))(v3, 1LL);
    }
    v11 = *((_QWORD *)this + 55);
    *((_QWORD *)this + 55) = v3;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    *((_QWORD *)this + 54) = v4;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return 0LL;
}
