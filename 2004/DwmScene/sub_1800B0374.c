/*
 * XREFs of sub_1800B0374 @ 0x1800B0374
 * Callers:
 *     sub_1800AE5A8 @ 0x1800AE5A8 (sub_1800AE5A8.c)
 *     sub_180127539 @ 0x180127539 (sub_180127539.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B0374(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rcx

  v2 = *(volatile signed __int32 **)(a2 + 40);
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return j_j__o_free(a2);
}
