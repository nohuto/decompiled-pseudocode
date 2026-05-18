/*
 * XREFs of sub_180031248 @ 0x180031248
 * Callers:
 *     sub_180036A50 @ 0x180036A50 (sub_180036A50.c)
 * Callees:
 *     sub_180030110 @ 0x180030110 (sub_180030110.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180031248(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx

  sub_180030110(a1);
  v4 = a1[20];
  *a2 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a2;
}
