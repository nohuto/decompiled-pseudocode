/*
 * XREFs of dllmain_crt_process_attach @ 0x18003B788
 * Callers:
 *     dllmain_crt_dispatch @ 0x18003B730 (dllmain_crt_dispatch.c)
 * Callees:
 *     ?__scrt_initialize_type_info@@YAXXZ @ 0x18003BB94 (-__scrt_initialize_type_info@@YAXXZ.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18003BBBC (__scrt_initialize_default_local_stdio_options.c)
 *     __scrt_acquire_startup_lock @ 0x18003BBE0 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x18003BC20 (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_before_initialize_c @ 0x18003BC5C (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_crt @ 0x18003BD80 (__scrt_initialize_crt.c)
 *     __scrt_is_nonwritable_in_current_image @ 0x18003BE88 (__scrt_is_nonwritable_in_current_image.c)
 *     __scrt_release_startup_lock @ 0x18003BF28 (__scrt_release_startup_lock.c)
 *     __scrt_get_dyn_tls_init_callback @ 0x18003BFFC (__scrt_get_dyn_tls_init_callback.c)
 *     __scrt_fastfail @ 0x18003C01C (__scrt_fastfail.c)
 *     _RTC_Initialize @ 0x18003C170 (_RTC_Initialize.c)
 *     _initterm_0 @ 0x18003C3B6 (_initterm_0.c)
 *     _initterm_e_0 @ 0x18003C3C2 (_initterm_e_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 dllmain_crt_process_attach()
{
  char v0; // bl
  char v1; // di
  __int64 v2; // rcx
  _QWORD *dyn_tls_init_callback; // rax

  if ( !(unsigned __int8)_scrt_initialize_crt(0LL) )
    return 0LL;
  v0 = _scrt_acquire_startup_lock();
  v1 = 1;
  if ( _scrt_current_native_startup_state )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x18003B89ELL);
  }
  _scrt_current_native_startup_state = 1;
  if ( (unsigned __int8)_scrt_dllmain_before_initialize_c() )
  {
    RTC_Initialize();
    __scrt_initialize_type_info();
    _scrt_initialize_default_local_stdio_options();
    if ( !initterm_e_0((_PIFV *)&_xi_a, (_PIFV *)&_xi_z) )
    {
      if ( (unsigned __int8)_scrt_dllmain_after_initialize_c() )
      {
        initterm_0((_PVFV *)&_xc_a, (_PVFV *)&_xc_z);
        _scrt_current_native_startup_state = 2;
        v1 = 0;
      }
    }
  }
  LOBYTE(v2) = v0;
  _scrt_release_startup_lock(v2);
  if ( v1 )
    return 0LL;
  dyn_tls_init_callback = (_QWORD *)_scrt_get_dyn_tls_init_callback();
  if ( *dyn_tls_init_callback )
  {
    if ( (unsigned __int8)_scrt_is_nonwritable_in_current_image(dyn_tls_init_callback) )
      _guard_dispatch_icall_fptr();
  }
  ++dword_180207B18;
  return 1LL;
}
