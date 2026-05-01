/*
 * XREFs of sub_180025350 @ 0x180025350
 * Callers:
 *     sub_180024E40 @ 0x180024E40 (sub_180024E40.c)
 *     sub_180025240 @ 0x180025240 (sub_180025240.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180025350(__int64 a1, int *a2)
{
  __int64 v2; // rax
  int v4; // eax

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
    v4 = (*(__int64 (**)(void))(v2 + 16))();
  else
    v4 = 2;
  *a2 = v4;
  return 0LL;
}
