/*
 * XREFs of atexit @ 0x180005284
 * Callers:
 *     _dynamic_initializer_for__gDwmStateLock__ @ 0x1800012D0 (_dynamic_initializer_for__gDwmStateLock__.c)
 *     _dynamic_initializer_for__g_PortClient__ @ 0x1800012F0 (_dynamic_initializer_for__g_PortClient__.c)
 * Callees:
 *     _onexit @ 0x18000522C (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
