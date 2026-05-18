/*
 * XREFs of sub_1801254B2 @ 0x1801254B2
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E9D0 @ 0x18000E9D0 (sub_18000E9D0.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1801254B2(__int64 a1, __int64 a2)
{
  char *v3; // rbx
  __int64 v4; // rax
  int v5; // eax

  v3 = *(char **)(a2 + 64);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 32) + 8LL))(*(_QWORD *)(a2 + 32));
    sub_18000E9D0(v3, *(_QWORD *)(a2 + 72), (const char *)L"std::exception: %hs", v4);
  }
  v5 = *(_DWORD *)(a2 + 80);
  if ( v5 >= 0 )
    v5 = -2147024322;
  *(_DWORD *)(a2 + 80) = v5;
  return 0LL;
}
