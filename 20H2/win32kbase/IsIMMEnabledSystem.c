/*
 * XREFs of IsIMMEnabledSystem @ 0x1C008FAA0
 * Callers:
 *     Win32UserInitialize @ 0x1C0291A10 (Win32UserInitialize.c)
 * Callees:
 *     ?AllowInteractiveServices@@YAHXZ @ 0x1C01399DC (-AllowInteractiveServices@@YAHXZ.c)
 */

__int64 IsIMMEnabledSystem()
{
  if ( gSessionId == gServiceSessionId )
    return AllowInteractiveServices();
  else
    return 1LL;
}
