/*
 * XREFs of __security_check_cookie @ 0x1C0002FD0
 * Callers:
 *     sub_1C00021A0 @ 0x1C00021A0 (sub_1C00021A0.c)
 *     sub_1C000306C @ 0x1C000306C (sub_1C000306C.c)
 *     sub_1C0003C20 @ 0x1C0003C20 (sub_1C0003C20.c)
 *     sub_1C0003D0C @ 0x1C0003D0C (sub_1C0003D0C.c)
 *     sub_1C0003D90 @ 0x1C0003D90 (sub_1C0003D90.c)
 *     sub_1C0003E00 @ 0x1C0003E00 (sub_1C0003E00.c)
 *     sub_1C0003E84 @ 0x1C0003E84 (sub_1C0003E84.c)
 *     sub_1C0003EF4 @ 0x1C0003EF4 (sub_1C0003EF4.c)
 *     sub_1C0003F64 @ 0x1C0003F64 (sub_1C0003F64.c)
 *     sub_1C0003FD4 @ 0x1C0003FD4 (sub_1C0003FD4.c)
 *     sub_1C000406C @ 0x1C000406C (sub_1C000406C.c)
 *     sub_1C0004100 @ 0x1C0004100 (sub_1C0004100.c)
 *     sub_1C0004254 @ 0x1C0004254 (sub_1C0004254.c)
 *     sub_1C00042F0 @ 0x1C00042F0 (sub_1C00042F0.c)
 *     WorkerRoutine @ 0x1C000A0D0 (WorkerRoutine.c)
 *     sub_1C000B290 @ 0x1C000B290 (sub_1C000B290.c)
 *     sub_1C000D080 @ 0x1C000D080 (sub_1C000D080.c)
 *     sub_1C000D7E0 @ 0x1C000D7E0 (sub_1C000D7E0.c)
 *     sub_1C000DD00 @ 0x1C000DD00 (sub_1C000DD00.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  if ( StackCookie != _security_cookie || (unsigned __int16)__ROL8__(StackCookie, 16) )
    __fastfail(2u);
}
