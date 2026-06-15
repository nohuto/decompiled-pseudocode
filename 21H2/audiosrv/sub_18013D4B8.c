/*
 * XREFs of sub_18013D4B8 @ 0x18013D4B8
 * Callers:
 *     sub_18013DD70 @ 0x18013DD70 (sub_18013DD70.c)
 *     sub_18013DDD8 @ 0x18013DDD8 (sub_18013DDD8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013DD70 @ 0x18013DD70 (sub_18013DD70.c)
 */

__int64 __fastcall sub_18013D4B8(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  bool v6; // zf

  v4 = a2[2];
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1LL);
  a2[2] = 0LL;
  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v6 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v6 )
    return sub_18013DD70(a1);
  return result;
}
