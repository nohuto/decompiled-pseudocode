/*
 * XREFs of ?dllmain_crt_process_attach@@YAHQEAUHINSTANCE__@@QEAX@Z @ 0x180043D98
 * Callers:
 *     ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x180043D40 (-dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x18004439C (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x1800443DC (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_before_initialize_c @ 0x180044418 (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_crt @ 0x18004453C (__scrt_initialize_crt.c)
 *     __scrt_is_nonwritable_in_current_image @ 0x180044644 (__scrt_is_nonwritable_in_current_image.c)
 *     __scrt_release_startup_lock @ 0x1800446E4 (__scrt_release_startup_lock.c)
 *     sub_180044CE4 @ 0x180044CE4 (sub_180044CE4.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180044D0C (__scrt_initialize_default_local_stdio_options.c)
 *     sub_180044D30 @ 0x180044D30 (sub_180044D30.c)
 *     __scrt_fastfail @ 0x180044D50 (__scrt_fastfail.c)
 *     sub_180044EA4 @ 0x180044EA4 (sub_180044EA4.c)
 *     _initterm @ 0x180045276 (_initterm.c)
 *     _initterm_e @ 0x180045282 (_initterm_e.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall dllmain_crt_process_attach(HINSTANCE a1, void *const a2)
{
  char v2; // bl
  char v3; // di
  __int64 v4; // rcx
  _QWORD *v5; // rax

  if ( !(unsigned __int8)_scrt_initialize_crt(0LL) )
    return 0LL;
  v2 = _scrt_acquire_startup_lock();
  v3 = 1;
  if ( dword_18005AA44 )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x180043EAELL);
  }
  dword_18005AA44 = 1;
  if ( (unsigned __int8)_scrt_dllmain_before_initialize_c() )
  {
    sub_180044EA4();
    sub_180044CE4();
    _scrt_initialize_default_local_stdio_options();
    if ( !initterm_e((_PIFV *)&First, (_PIFV *)&Last) )
    {
      if ( (unsigned __int8)_scrt_dllmain_after_initialize_c() )
      {
        initterm((_PVFV *)&qword_18004E688, (_PVFV *)&qword_18004E798);
        dword_18005AA44 = 2;
        v3 = 0;
      }
    }
  }
  LOBYTE(v4) = v2;
  _scrt_release_startup_lock(v4);
  if ( v3 )
    return 0LL;
  v5 = (_QWORD *)sub_180044D30();
  if ( *v5 )
  {
    if ( (unsigned __int8)_scrt_is_nonwritable_in_current_image(v5) )
      _guard_dispatch_icall_fptr();
  }
  ++dword_18005A4C0;
  return 1LL;
}
