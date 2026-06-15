/*
 * XREFs of sub_1800361E8 @ 0x1800361E8
 * Callers:
 *     sub_1800337FC @ 0x1800337FC (sub_1800337FC.c)
 *     sub_180033834 @ 0x180033834 (sub_180033834.c)
 *     sub_1800338E0 @ 0x1800338E0 (sub_1800338E0.c)
 *     sub_180033A40 @ 0x180033A40 (sub_180033A40.c)
 *     sub_180033AA0 @ 0x180033AA0 (sub_180033AA0.c)
 *     sub_180033B5C @ 0x180033B5C (sub_180033B5C.c)
 *     sub_180034C58 @ 0x180034C58 (sub_180034C58.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800361E8(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 i; // rbx
  __int64 (__fastcall ***v5)(_QWORD, __int64); // rcx
  __int64 result; // rax

  if ( a2 )
  {
    for ( i = 0LL; i < a2; ++i )
    {
      v5 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 8 * i);
      if ( v5 )
        result = (**v5)(v5, 1LL);
      *(_QWORD *)(a1 + 8 * i) = 0LL;
    }
  }
  return result;
}
