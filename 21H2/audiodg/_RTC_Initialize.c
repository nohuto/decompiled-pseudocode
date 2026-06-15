/*
 * XREFs of _RTC_Initialize @ 0x14001DAD0
 * Callers:
 *     pre_c_initialization @ 0x14001CD70 (pre_c_initialization.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
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
