/*
 * XREFs of sub_18002C3EC @ 0x18002C3EC
 * Callers:
 *     sub_18002C458 @ 0x18002C458 (sub_18002C458.c)
 *     sub_180069B94 @ 0x180069B94 (sub_180069B94.c)
 *     sub_1800E9EF8 @ 0x1800E9EF8 (sub_1800E9EF8.c)
 *     sub_1800ED79C @ 0x1800ED79C (sub_1800ED79C.c)
 *     sub_180122E60 @ 0x180122E60 (sub_180122E60.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18002C3EC(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      v6 = *(_QWORD *)(a2 + 56);
      if ( v6 )
      {
        LOBYTE(v5) = v6 != a2;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, v5);
        *(_QWORD *)(a2 + 56) = 0LL;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}
