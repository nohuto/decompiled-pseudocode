/*
 * XREFs of ?dllmain_crt_process_detach@@YAH_N@Z @ 0x180043EB4
 * Callers:
 *     ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x180043D40 (-dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x18004439C (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x1800444E8 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x180044520 (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_release_startup_lock @ 0x1800446E4 (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x180044710 (__scrt_uninitialize_crt.c)
 *     sub_180044CF8 @ 0x180044CF8 (sub_180044CF8.c)
 *     __scrt_fastfail @ 0x180044D50 (__scrt_fastfail.c)
 *     sub_180044EE8 @ 0x180044EE8 (sub_180044EE8.c)
 */

_BOOL8 __fastcall dllmain_crt_process_detach(char a1)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( dword_18005A4C0 <= 0 )
    return 0LL;
  --dword_18005A4C0;
  v2 = _scrt_acquire_startup_lock();
  if ( dword_18005AA44 != 2 )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x180043F37LL);
  }
  _scrt_dllmain_uninitialize_c();
  sub_180044CF8();
  sub_180044EE8();
  dword_18005AA44 = 0;
  _scrt_dllmain_uninitialize_critical();
  LOBYTE(v3) = v2;
  _scrt_release_startup_lock(v3);
  LOBYTE(v4) = a1;
  return (unsigned __int8)_scrt_uninitialize_crt(v4, 0LL) != 0;
}
