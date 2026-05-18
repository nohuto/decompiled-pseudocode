/*
 * XREFs of sub_18002D46C @ 0x18002D46C
 * Callers:
 *     sub_180033080 @ 0x180033080 (sub_180033080.c)
 *     sub_180035060 @ 0x180035060 (sub_180035060.c)
 *     sub_180035220 @ 0x180035220 (sub_180035220.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18002D46C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 128);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
