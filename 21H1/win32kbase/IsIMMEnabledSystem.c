/*
 * XREFs of IsIMMEnabledSystem @ 0x1C0010290
 * Callers:
 *     Win32UserInitialize @ 0x1C0299728 (Win32UserInitialize.c)
 * Callees:
 *     ?AllowInteractiveServices@@YAHXZ @ 0x1C0142078 (-AllowInteractiveServices@@YAHXZ.c)
 */

__int64 IsIMMEnabledSystem()
{
  if ( gSessionId == gServiceSessionId )
    return AllowInteractiveServices();
  else
    return 1LL;
}
