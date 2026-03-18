/*
 * XREFs of UserEnableConsoleMode @ 0x1C01FDCD0
 * Callers:
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C005296C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0052B6C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 UserEnableConsoleMode()
{
  if ( qword_1C02583A8 )
    return qword_1C02583A8();
  else
    return 3221225659LL;
}
