/*
 * XREFs of sub_1800312B8 @ 0x1800312B8
 * Callers:
 *     sub_180023360 @ 0x180023360 (sub_180023360.c)
 *     sub_180023940 @ 0x180023940 (sub_180023940.c)
 *     sub_18002C8D0 @ 0x18002C8D0 (sub_18002C8D0.c)
 *     sub_180033D40 @ 0x180033D40 (sub_180033D40.c)
 *     sub_1800343E0 @ 0x1800343E0 (sub_1800343E0.c)
 *     sub_180034B50 @ 0x180034B50 (sub_180034B50.c)
 *     sub_1800371F0 @ 0x1800371F0 (sub_1800371F0.c)
 *     sub_180037A70 @ 0x180037A70 (sub_180037A70.c)
 *     sub_180039880 @ 0x180039880 (sub_180039880.c)
 *     sub_18003A5A8 @ 0x18003A5A8 (sub_18003A5A8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800312B8(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 168);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
