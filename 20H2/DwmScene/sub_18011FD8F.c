/*
 * XREFs of sub_18011FD8F @ 0x18011FD8F
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E8F0 @ 0x18000E8F0 (sub_18000E8F0.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18011FD8F(__int64 a1, __int64 a2)
{
  char *v3; // rbx
  __int64 v4; // rax

  v3 = *(char **)(a2 + 112);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 56) + 8LL))(*(_QWORD *)(a2 + 56));
    sub_18000E8F0(v3, *(_QWORD *)(a2 + 120), (const char *)L"std::exception: %hs", v4);
  }
  return 0LL;
}
