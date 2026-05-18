/*
 * XREFs of sub_18012CF8D @ 0x18012CF8D
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18012CF8D(__int64 a1, __int64 a2)
{
  const char *v2; // rax

  v2 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 80) + 8LL))(*(_QWORD *)(a2 + 80));
  sub_18011BCAC(&qword_180213740, 3, "Exception in Display Destructor, message=%s", v2);
  return 0LL;
}
