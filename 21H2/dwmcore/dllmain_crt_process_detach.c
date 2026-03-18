/*
 * XREFs of dllmain_crt_process_detach @ 0x180100D90
 * Callers:
 *     dllmain_crt_dispatch @ 0x180100C10 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x180100810 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x180100964 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x18010099C (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_release_startup_lock @ 0x180100B3C (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x180100B68 (__scrt_uninitialize_crt.c)
 *     __scrt_fastfail @ 0x180101484 (__scrt_fastfail.c)
 *     ?__scrt_uninitialize_type_info@@YAXXZ @ 0x1801016B4 (-__scrt_uninitialize_type_info@@YAXXZ.c)
 *     _RTC_Terminate @ 0x180101748 (_RTC_Terminate.c)
 */

_BOOL8 __fastcall dllmain_crt_process_detach(char a1)
{
  char v3; // bl
  __int64 v4; // rcx
  BOOL v5; // ebx

  if ( dword_1803D2DA4 <= 0 )
    return 0LL;
  --dword_1803D2DA4;
  v3 = _scrt_acquire_startup_lock();
  if ( _scrt_current_native_startup_state != 2 )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x180100E14LL);
  }
  _scrt_dllmain_uninitialize_c();
  __scrt_uninitialize_type_info();
  RTC_Terminate();
  _scrt_current_native_startup_state = 0;
  _scrt_release_startup_lock(v3);
  LOBYTE(v4) = a1;
  v5 = _scrt_uninitialize_crt(v4, 0) != 0;
  _scrt_dllmain_uninitialize_critical();
  return v5;
}
