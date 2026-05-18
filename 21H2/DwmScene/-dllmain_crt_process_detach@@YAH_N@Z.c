/*
 * XREFs of ?dllmain_crt_process_detach@@YAH_N@Z @ 0x1801241E8
 * Callers:
 *     ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x180124080 (-dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x180123A84 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x180123BAC (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x180123BDC (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_release_startup_lock @ 0x180123D84 (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x180123DA8 (__scrt_uninitialize_crt.c)
 *     sub_180124950 @ 0x180124950 (sub_180124950.c)
 *     __scrt_fastfail @ 0x180124B40 (__scrt_fastfail.c)
 *     sub_180124FE8 @ 0x180124FE8 (sub_180124FE8.c)
 */

_BOOL8 __fastcall dllmain_crt_process_detach(char a1)
{
  char v2; // bl
  __int64 v3; // rcx

  if ( dword_180222024 <= 0 )
    return 0LL;
  --dword_180222024;
  v2 = _scrt_acquire_startup_lock();
  if ( dword_180221FE0 != 2 )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x18012426BLL);
  }
  _scrt_dllmain_uninitialize_c();
  sub_180124950();
  sub_180124FE8();
  dword_180221FE0 = 0;
  _scrt_dllmain_uninitialize_critical();
  _scrt_release_startup_lock(v2);
  LOBYTE(v3) = a1;
  return _scrt_uninitialize_crt(v3, 0) != 0;
}
