/*
 * XREFs of ?WindowWrapperFromWindow@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x1802B9DD4
 * Callers:
 *     ?OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z @ 0x18002C520 (-OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall WindowEventDispatcher::WindowWrapperFromWindow(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v5; // rbx
  __int64 *v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rcx

  *a2 = 0LL;
  v5 = *(__int64 **)(a1 + 368);
  v6 = *(__int64 **)(a1 + 376);
  while ( v5 != v6 )
  {
    if ( *v5 && a3 == (*(int (__fastcall **)(__int64))(*(_QWORD *)*v5 + 256LL))(*v5) )
    {
      v7 = *a2;
      v8 = *v5;
      *a2 = *v5;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      return a2;
    }
    ++v5;
  }
  return a2;
}
