/*
 * XREFs of _CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor$1 @ 0x1800B9DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 72), (const struct std::nothrow_t *)&std::nothrow);
}
