/*
 * XREFs of ?dllmain_crt_process_detach@@YAH_N@Z @ 0x18011E918
 * Callers:
 *     ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x18011E7B0 (-dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x18011E1B4 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x18011E2DC (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x18011E30C (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_release_startup_lock @ 0x18011E4B4 (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x18011E4D8 (__scrt_uninitialize_crt.c)
 *     sub_18011F080 @ 0x18011F080 (sub_18011F080.c)
 *     __scrt_fastfail @ 0x18011F270 (__scrt_fastfail.c)
 *     sub_18011F718 @ 0x18011F718 (sub_18011F718.c)
 */

_BOOL8 __fastcall dllmain_crt_process_detach(char a1)
{
  char v2; // bl
  __int64 v3; // rcx

  if ( dword_18021ACF4 <= 0 )
    return 0LL;
  --dword_18021ACF4;
  v2 = _scrt_acquire_startup_lock();
  if ( dword_18021ACB0 != 2 )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x18011E99BLL);
  }
  _scrt_dllmain_uninitialize_c();
  sub_18011F080();
  sub_18011F718();
  dword_18021ACB0 = 0;
  _scrt_dllmain_uninitialize_critical();
  _scrt_release_startup_lock(v2);
  LOBYTE(v3) = a1;
  return _scrt_uninitialize_crt(v3, 0) != 0;
}
