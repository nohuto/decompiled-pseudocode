/*
 * XREFs of SmmIommuMapIdentityRange @ 0x1C002FB4C
 * Callers:
 *     SmmMapIommu @ 0x1C002FBA0 (SmmMapIommu.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SmmIommuMapIdentityRange(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64))qword_1C0130A98)(a1, 3LL);
}
