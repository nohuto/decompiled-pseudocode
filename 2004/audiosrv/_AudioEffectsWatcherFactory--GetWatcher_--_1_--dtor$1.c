/*
 * XREFs of _AudioEffectsWatcherFactory::GetWatcher_::_1_::dtor$1 @ 0x1800C5DB8
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall AudioEffectsWatcherFactory::GetWatcher_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 96), (const struct std::nothrow_t *)&std::nothrow);
}
