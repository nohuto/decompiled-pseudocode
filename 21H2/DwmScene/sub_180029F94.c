/*
 * XREFs of sub_180029F94 @ 0x180029F94
 * Callers:
 *     sub_180035AD0 @ 0x180035AD0 (sub_180035AD0.c)
 *     sub_180044720 @ 0x180044720 (sub_180044720.c)
 *     sub_1800491D4 @ 0x1800491D4 (sub_1800491D4.c)
 * Callees:
 *     sub_18006714C @ 0x18006714C (sub_18006714C.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180029F94(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx

  sub_18006714C(a1 + 24);
  v4 = *(_QWORD *)(a1 + 4264);
  *a2 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}
