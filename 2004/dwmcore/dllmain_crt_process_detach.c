/*
 * XREFs of dllmain_crt_process_detach @ 0x1800E2E14
 * Callers:
 *     dllmain_crt_dispatch @ 0x1800E2CA0 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x1800E2880 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x1800E29CC (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x1800E2A04 (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_release_startup_lock @ 0x1800E2BC8 (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x1800E2BF4 (__scrt_uninitialize_crt.c)
 *     __scrt_fastfail @ 0x1800E3400 (__scrt_fastfail.c)
 *     ?__scrt_uninitialize_type_info@@YAXXZ @ 0x1800E37D4 (-__scrt_uninitialize_type_info@@YAXXZ.c)
 *     _RTC_Terminate @ 0x1800E3860 (_RTC_Terminate.c)
 */

_BOOL8 __fastcall dllmain_crt_process_detach(char a1)
{
  char v2; // bl
  __int64 v3; // rcx

  if ( dword_180344E54 <= 0 )
    return 0LL;
  --dword_180344E54;
  v2 = _scrt_acquire_startup_lock();
  if ( _scrt_current_native_startup_state != 2 )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x1800E2E97LL);
  }
  _scrt_dllmain_uninitialize_c();
  __scrt_uninitialize_type_info();
  RTC_Terminate();
  _scrt_current_native_startup_state = 0;
  _scrt_dllmain_uninitialize_critical();
  _scrt_release_startup_lock(v2);
  LOBYTE(v3) = a1;
  return _scrt_uninitialize_crt(v3, 0) != 0;
}
