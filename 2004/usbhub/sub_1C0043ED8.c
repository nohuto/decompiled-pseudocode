/*
 * XREFs of sub_1C0043ED8 @ 0x1C0043ED8
 * Callers:
 *     sub_1C000E9B0 @ 0x1C000E9B0 (sub_1C000E9B0.c)
 *     sub_1C0041990 @ 0x1C0041990 (sub_1C0041990.c)
 *     sub_1C0042BA0 @ 0x1C0042BA0 (sub_1C0042BA0.c)
 *     sub_1C0042DB0 @ 0x1C0042DB0 (sub_1C0042DB0.c)
 *     sub_1C0042FD0 @ 0x1C0042FD0 (sub_1C0042FD0.c)
 *     sub_1C0043060 @ 0x1C0043060 (sub_1C0043060.c)
 *     sub_1C0043450 @ 0x1C0043450 (sub_1C0043450.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C0031714 @ 0x1C0031714 (sub_1C0031714.c)
 */

__int64 __fastcall sub_1C0043ED8(__int64 a1, int a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rbx
  __int64 result; // rax

  v3 = a2;
  v4 = sub_1C000F050(*(_QWORD *)(a1 + 8));
  sub_1C000FD80(*(_QWORD *)(a1 + 8), 2, 1398031678, *((_QWORD *)v4 + 171), v3);
  sub_1C0031714(*(_QWORD *)(a1 + 8), a1, v3, 0, 0);
  *((_QWORD *)v4 + 169) = *(_QWORD *)(a1 + 24);
  result = (*((__int64 (__fastcall **)(__int64, _QWORD))v4 + 171))(a1, (unsigned int)v3);
  *((_QWORD *)v4 + 169) = 0LL;
  return result;
}
