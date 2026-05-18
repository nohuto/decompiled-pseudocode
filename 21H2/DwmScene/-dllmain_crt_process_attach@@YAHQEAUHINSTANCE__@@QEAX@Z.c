/*
 * XREFs of ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x1801240D0
 * Callers:
 *     ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x180124080 (-dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x180123A84 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x180123AC0 (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_before_initialize_c @ 0x180123AF4 (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_crt @ 0x180123BF0 (__scrt_initialize_crt.c)
 *     __scrt_is_nonwritable_in_current_image @ 0x180123CEC (__scrt_is_nonwritable_in_current_image.c)
 *     __scrt_release_startup_lock @ 0x180123D84 (__scrt_release_startup_lock.c)
 *     sub_180124940 @ 0x180124940 (sub_180124940.c)
 *     __scrt_fastfail @ 0x180124B40 (__scrt_fastfail.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180124F88 (__scrt_initialize_default_local_stdio_options.c)
 *     sub_180124FA4 @ 0x180124FA4 (sub_180124FA4.c)
 *     sub_180124FAC @ 0x180124FAC (sub_180124FAC.c)
 *     _initterm @ 0x180125066 (_initterm.c)
 *     _initterm_e @ 0x18012506C (_initterm_e.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall dllmain_crt_process_attach(HINSTANCE a1, void *const a2)
{
  char v2; // bl
  char v3; // di
  _QWORD *v4; // rax

  if ( !_scrt_initialize_crt(0) )
    return 0LL;
  v2 = _scrt_acquire_startup_lock();
  v3 = 1;
  if ( dword_180221FE0 )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x1801241E6LL);
  }
  dword_180221FE0 = 1;
  if ( _scrt_dllmain_before_initialize_c() )
  {
    sub_180124FAC();
    sub_180124940();
    _scrt_initialize_default_local_stdio_options();
    if ( !initterm_e((_PIFV *)&First, (_PIFV *)&Last) )
    {
      if ( _scrt_dllmain_after_initialize_c() )
      {
        initterm((_PVFV *)&qword_18013A920, (_PVFV *)&qword_18013C528);
        dword_180221FE0 = 2;
        v3 = 0;
      }
    }
  }
  _scrt_release_startup_lock(v2);
  if ( v3 )
    return 0LL;
  v4 = (_QWORD *)sub_180124FA4();
  if ( *v4 )
  {
    if ( _scrt_is_nonwritable_in_current_image((__int64)v4) )
      _guard_dispatch_icall_fptr();
  }
  ++dword_180222024;
  return 1LL;
}
