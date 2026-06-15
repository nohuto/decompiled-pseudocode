/*
 * XREFs of sub_18003B01D @ 0x18003B01D
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000210C @ 0x18000210C (sub_18000210C.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003B01D(__int64 a1, __int64 a2)
{
  char *v3; // rbx
  __int64 v4; // rax

  v3 = *(char **)(a2 + 32);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 80) + 8LL))(*(_QWORD *)(a2 + 80));
    sub_18000210C(v3, *(_QWORD *)(a2 + 40), (const char *)L"std::exception: %hs", v4);
  }
  return 0LL;
}
