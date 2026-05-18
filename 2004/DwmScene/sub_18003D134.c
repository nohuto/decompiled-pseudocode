/*
 * XREFs of sub_18003D134 @ 0x18003D134
 * Callers:
 *     sub_180034930 @ 0x180034930 (sub_180034930.c)
 *     sub_180036E70 @ 0x180036E70 (sub_180036E70.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18003D134(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 104);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
