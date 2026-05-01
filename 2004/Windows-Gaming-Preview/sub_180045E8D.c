/*
 * XREFs of sub_180045E8D @ 0x180045E8D
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001B58 @ 0x180001B58 (sub_180001B58.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180045E8D(__int64 a1, __int64 a2)
{
  char *v3; // rbx
  __int64 v4; // rax

  v3 = *(char **)(a2 + 32);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 80) + 8LL))(*(_QWORD *)(a2 + 80));
    sub_180001B58(v3, *(_QWORD *)(a2 + 40), (const char *)L"std::exception: %hs", v4);
  }
  return 0LL;
}
