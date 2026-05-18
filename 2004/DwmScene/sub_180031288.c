/*
 * XREFs of sub_180031288 @ 0x180031288
 * Callers:
 *     sub_180034B50 @ 0x180034B50 (sub_180034B50.c)
 *     sub_180037A70 @ 0x180037A70 (sub_180037A70.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180031288(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 176);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
