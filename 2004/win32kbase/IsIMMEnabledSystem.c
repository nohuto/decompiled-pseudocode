/*
 * XREFs of IsIMMEnabledSystem @ 0x1C002F7E0
 * Callers:
 *     Win32UserInitialize @ 0x1C0293AF8 (Win32UserInitialize.c)
 * Callees:
 *     ?AllowInteractiveServices@@YAHXZ @ 0x1C013BD2C (-AllowInteractiveServices@@YAHXZ.c)
 */

__int64 IsIMMEnabledSystem()
{
  if ( gSessionId == gServiceSessionId )
    return AllowInteractiveServices();
  else
    return 1LL;
}
