/*
 * XREFs of UserEnableConsoleMode @ 0x1C01F82C4
 * Callers:
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C005FF1C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C006011C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 UserEnableConsoleMode()
{
  if ( qword_1C02523E8 )
    return qword_1C02523E8();
  else
    return 3221225659LL;
}
