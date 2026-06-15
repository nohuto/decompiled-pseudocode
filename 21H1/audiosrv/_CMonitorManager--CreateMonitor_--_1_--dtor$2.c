/*
 * XREFs of _CMonitorManager::CreateMonitor_::_1_::dtor$2 @ 0x1800FB19C
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CMonitorManager::CreateMonitor_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 48), (const struct std::nothrow_t *)&std::nothrow);
}
