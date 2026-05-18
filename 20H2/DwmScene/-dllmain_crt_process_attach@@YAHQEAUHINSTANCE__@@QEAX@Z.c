/*
 * XREFs of ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x18011E800
 * Callers:
 *     ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x18011E7B0 (-dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x18011E1B4 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x18011E1F0 (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_before_initialize_c @ 0x18011E224 (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_crt @ 0x18011E320 (__scrt_initialize_crt.c)
 *     __scrt_is_nonwritable_in_current_image @ 0x18011E41C (__scrt_is_nonwritable_in_current_image.c)
 *     __scrt_release_startup_lock @ 0x18011E4B4 (__scrt_release_startup_lock.c)
 *     sub_18011F070 @ 0x18011F070 (sub_18011F070.c)
 *     __scrt_fastfail @ 0x18011F270 (__scrt_fastfail.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18011F6B8 (__scrt_initialize_default_local_stdio_options.c)
 *     sub_18011F6D4 @ 0x18011F6D4 (sub_18011F6D4.c)
 *     sub_18011F6DC @ 0x18011F6DC (sub_18011F6DC.c)
 *     _initterm @ 0x18011F796 (_initterm.c)
 *     _initterm_e @ 0x18011F79C (_initterm_e.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
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
  if ( dword_18021ACB0 )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x18011E916LL);
  }
  dword_18021ACB0 = 1;
  if ( _scrt_dllmain_before_initialize_c() )
  {
    sub_18011F6DC();
    sub_18011F070();
    _scrt_initialize_default_local_stdio_options();
    if ( !initterm_e((_PIFV *)&First, (_PIFV *)&Last) )
    {
      if ( _scrt_dllmain_after_initialize_c() )
      {
        initterm((_PVFV *)&qword_1801348D0, (_PVFV *)&qword_1801364B8);
        dword_18021ACB0 = 2;
        v3 = 0;
      }
    }
  }
  _scrt_release_startup_lock(v2);
  if ( v3 )
    return 0LL;
  v4 = (_QWORD *)sub_18011F6D4();
  if ( *v4 )
  {
    if ( _scrt_is_nonwritable_in_current_image((__int64)v4) )
      _guard_dispatch_icall_fptr();
  }
  ++dword_18021ACF4;
  return 1LL;
}
