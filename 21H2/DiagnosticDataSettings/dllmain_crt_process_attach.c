/*
 * XREFs of dllmain_crt_process_attach @ 0x10003F85
 * Callers:
 *     dllmain_crt_dispatch @ 0x10003F30 (dllmain_crt_dispatch.c)
 * Callees:
 *     dllmain_crt_process_attach @ 0x10003F85 (dllmain_crt_process_attach.c)
 *     ?__scrt_initialize_type_info@@YAXXZ @ 0x1000432B (-__scrt_initialize_type_info@@YAXXZ.c)
 *     ___scrt_initialize_default_local_stdio_options @ 0x10004343 (___scrt_initialize_default_local_stdio_options.c)
 *     ___scrt_acquire_startup_lock @ 0x100043A6 (___scrt_acquire_startup_lock.c)
 *     ___scrt_dllmain_after_initialize_c @ 0x100043DA (___scrt_dllmain_after_initialize_c.c)
 *     ___scrt_dllmain_before_initialize_c @ 0x10004405 (___scrt_dllmain_before_initialize_c.c)
 *     ___scrt_initialize_crt @ 0x100044A5 (___scrt_initialize_crt.c)
 *     ___scrt_is_nonwritable_in_current_image @ 0x1000457E (___scrt_is_nonwritable_in_current_image.c)
 *     ___scrt_release_startup_lock @ 0x10004612 (___scrt_release_startup_lock.c)
 *     ___scrt_get_dyn_tls_init_callback @ 0x1000465B (___scrt_get_dyn_tls_init_callback.c)
 *     ___scrt_fastfail @ 0x10004661 (___scrt_fastfail.c)
 *     __RTC_Initialize @ 0x10004786 (__RTC_Initialize.c)
 *     __SEH_prolog4 @ 0x100047F0 (__SEH_prolog4.c)
 *     @_guard_check_icall_nop@4 @ 0x10004890 (@_guard_check_icall_nop@4.c)
 *     __initterm @ 0x10004B8A (__initterm.c)
 *     __initterm_e @ 0x10004B90 (__initterm_e.c)
 */

int __cdecl dllmain_crt_process_attach(int a1, int a2)
{
  char v2; // bl
  _DWORD *dyn_tls_init_callback; // eax
  _DWORD *v4; // esi
  char v6; // [esp+13h] [ebp-1Dh]

  if ( !(unsigned __int8)__scrt_initialize_crt(0) )
    return 0;
  v6 = __scrt_acquire_startup_lock();
  v2 = 1;
  if ( __scrt_current_native_startup_state )
  {
    __scrt_fastfail(7);
    __debugbreak();
  }
  __scrt_current_native_startup_state = 1;
  if ( (unsigned __int8)__scrt_dllmain_before_initialize_c() )
  {
    _RTC_Initialize();
    __scrt_initialize_type_info();
    __scrt_initialize_default_local_stdio_options();
    if ( !_initterm_e((_PIFV *)&__xi_a, (_PIFV *)&__xi_z) )
    {
      if ( (unsigned __int8)__scrt_dllmain_after_initialize_c() )
      {
        _initterm((_PVFV *)&__xc_a, (_PVFV *)&__xc_z);
        __scrt_current_native_startup_state = 2;
        v2 = 0;
      }
    }
  }
  __scrt_release_startup_lock(v6);
  if ( v2 )
    return 0;
  dyn_tls_init_callback = (_DWORD *)__scrt_get_dyn_tls_init_callback();
  v4 = dyn_tls_init_callback;
  if ( *dyn_tls_init_callback )
  {
    if ( (unsigned __int8)__scrt_is_nonwritable_in_current_image(dyn_tls_init_callback) )
      ((void (__thiscall *)(_DWORD, int, int, int))*v4)(*v4, a1, 2, a2);
  }
  ++dword_10005090;
  return 1;
}
