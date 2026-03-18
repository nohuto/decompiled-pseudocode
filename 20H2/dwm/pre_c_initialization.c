/*
 * XREFs of pre_c_initialization @ 0x140002EF0
 * Callers:
 *     <none>
 * Callees:
 *     __scrt_initialize_onexit_tables @ 0x140003410 (__scrt_initialize_onexit_tables.c)
 *     atexit @ 0x14000361C (atexit.c)
 *     _get_startup_argv_mode @ 0x140003A58 (_get_startup_argv_mode.c)
 *     __scrt_initialize_winrt @ 0x140003A64 (__scrt_initialize_winrt.c)
 *     _get_startup_file_mode @ 0x140003A70 (_get_startup_file_mode.c)
 *     ?__scrt_initialize_type_info@@YAXXZ @ 0x140003A7C (-__scrt_initialize_type_info@@YAXXZ.c)
 *     __scrt_stub_for_acrt_uninitialize @ 0x140003A90 (__scrt_stub_for_acrt_uninitialize.c)
 *     _guard_check_icall_nop @ 0x140003AA0 (_guard_check_icall_nop.c)
 *     __scrt_fastfail @ 0x140003B00 (__scrt_fastfail.c)
 *     __scrt_initialize_mta @ 0x140003C94 (__scrt_initialize_mta.c)
 *     _RTC_Initialize @ 0x140003D50 (_RTC_Initialize.c)
 *     __p__commode @ 0x1400041CC (__p__commode.c)
 *     _configthreadlocale @ 0x140004208 (_configthreadlocale.c)
 *     _o__configure_wide_argv_0 @ 0x140004214 (_o__configure_wide_argv_0.c)
 *     _o__initialize_wide_environment_0 @ 0x140004250 (_o__initialize_wide_environment_0.c)
 *     _set_app_type @ 0x140004294 (_set_app_type.c)
 *     _o__set_fmode_0 @ 0x1400042A0 (_o__set_fmode_0.c)
 */

__int64 pre_c_initialization()
{
  unsigned int startup_file_mode; // eax
  int v1; // ebx
  _crt_argv_mode startup_argv_mode; // eax
  int v3; // eax
  __int64 result; // rax

  set_app_type(_crt_gui_app);
  startup_file_mode = get_startup_file_mode();
  o__set_fmode_0(startup_file_mode);
  v1 = _scrt_initialize_winrt();
  *_p__commode() = v1;
  if ( !(unsigned __int8)_scrt_initialize_onexit_tables(1LL) )
    goto LABEL_6;
  RTC_Initialize();
  atexit(RTC_Terminate);
  startup_argv_mode = get_startup_argv_mode();
  if ( (unsigned int)o__configure_wide_argv_0((unsigned int)startup_argv_mode) )
    goto LABEL_6;
  __scrt_initialize_type_info();
  v3 = _scrt_initialize_winrt();
  configthreadlocale(v3);
  if ( (unsigned __int8)_scrt_stub_for_acrt_uninitialize() )
    o__initialize_wide_environment_0();
  _scrt_initialize_winrt();
  result = _scrt_initialize_mta();
  if ( (_DWORD)result )
  {
LABEL_6:
    _scrt_fastfail(7LL);
    JUMPOUT(0x140002F90LL);
  }
  return result;
}
