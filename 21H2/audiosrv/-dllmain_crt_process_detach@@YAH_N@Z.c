/*
 * XREFs of ?dllmain_crt_process_detach@@YAH_N@Z @ 0x180069854
 * Callers:
 *     ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x1800696E0 (-dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x180069D2C (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x180069E78 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x180069EB0 (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_release_startup_lock @ 0x18006A074 (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x18006A0A0 (__scrt_uninitialize_crt.c)
 *     sub_18006A648 @ 0x18006A648 (sub_18006A648.c)
 *     __scrt_fastfail @ 0x18006A6A0 (__scrt_fastfail.c)
 *     sub_18006A838 @ 0x18006A838 (sub_18006A838.c)
 */

_BOOL8 __fastcall dllmain_crt_process_detach(char a1)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( dword_18019DBD0 <= 0 )
    return 0LL;
  --dword_18019DBD0;
  v2 = _scrt_acquire_startup_lock();
  if ( dword_18019E154 != 2 )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x1800698D7LL);
  }
  _scrt_dllmain_uninitialize_c();
  sub_18006A648();
  sub_18006A838();
  dword_18019E154 = 0;
  _scrt_dllmain_uninitialize_critical();
  LOBYTE(v3) = v2;
  _scrt_release_startup_lock(v3);
  LOBYTE(v4) = a1;
  return (unsigned __int8)_scrt_uninitialize_crt(v4, 0LL) != 0;
}
