/*
 * XREFs of sub_180044458 @ 0x180044458
 * Callers:
 *     sub_180044364 @ 0x180044364 (sub_180044364.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180044458(volatile signed __int32 *a1)
{
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 8LL))(a1);
  return (unsigned int)_InterlockedIncrement(a1 + 6);
}
