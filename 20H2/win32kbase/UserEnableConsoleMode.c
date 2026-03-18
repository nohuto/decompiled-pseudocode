/*
 * XREFs of UserEnableConsoleMode @ 0x1C01F6994
 * Callers:
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007491C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0074B1C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 UserEnableConsoleMode()
{
  if ( qword_1C02503E8 )
    return qword_1C02503E8();
  else
    return 3221225659LL;
}
