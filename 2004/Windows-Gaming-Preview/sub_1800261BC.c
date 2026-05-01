/*
 * XREFs of sub_1800261BC @ 0x1800261BC
 * Callers:
 *     sub_18001EC54 @ 0x18001EC54 (sub_18001EC54.c)
 * Callees:
 *     j_j_j__o_free @ 0x1800440F8 (j_j_j__o_free.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800442C0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     j_??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800447FC (j_--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180044870 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

__int64 __fastcall sub_1800261BC(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  bool v5; // cf
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // rax
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rax
  void *v10; // rax
  __int64 v11; // rdx
  char *v12; // rcx
  __int64 result; // rax
  char *v14; // rbx

  v4 = 8 * a2;
  if ( !is_mul_ok(a2, 8uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  v7 = (unsigned __int64 *)operator new(v6, (const struct std::nothrow_t *)&unk_18005AF88);
  if ( v7 )
  {
    v8 = v7 + 1;
    *v7 = a2;
    `eh vector constructor iterator'(
      v7 + 1,
      8uLL,
      a2,
      (void (*)(void *))__crt_deferred_errno_cache::__crt_deferred_errno_cache,
      (void (*)(void *))sub_1800081D0);
  }
  else
  {
    v8 = 0LL;
  }
  a1[2] = v8;
  v9 = 8 * a2;
  if ( !is_mul_ok(a2, 8uLL) )
    v9 = -1LL;
  v10 = operator new(v9, (const struct std::nothrow_t *)&unk_18005AF88);
  v12 = (char *)a1[2];
  a1[4] = v10;
  if ( v12 )
  {
    if ( v10 )
    {
      a1[3] = v12;
      return 0LL;
    }
    v14 = v12 - 8;
    `eh vector destructor iterator'(v12, 8uLL, *((_QWORD *)v12 - 1), (void (*)(void *))sub_1800081D0);
    j_j_j__o_free(v14, 8LL * *(_QWORD *)v14 + 8);
  }
  j_j__o_free(a1[4], v11);
  a1[2] = 0LL;
  result = 2147942414LL;
  a1[4] = 0LL;
  return result;
}
