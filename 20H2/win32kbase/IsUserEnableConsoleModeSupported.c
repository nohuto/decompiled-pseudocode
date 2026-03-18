/*
 * XREFs of IsUserEnableConsoleModeSupported @ 0x1C0074FFC
 * Callers:
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007491C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0074B1C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUserEnableConsoleModeSupported()
{
  if ( qword_1C02503E0 )
    return qword_1C02503E0();
  else
    return 3221225659LL;
}
