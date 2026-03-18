/*
 * XREFs of _RTC_Initialize @ 0x1800E381C
 * Callers:
 *     dllmain_crt_process_attach @ 0x1800E2CF8 (dllmain_crt_process_attach.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __cdecl RTC_Initialize()
{
  void (**i)(void); // rbx

  for ( i = &_rtc_izz; i < &_rtc_izz; ++i )
  {
    if ( *i )
      (*i)();
  }
}
