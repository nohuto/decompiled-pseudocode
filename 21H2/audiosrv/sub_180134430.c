/*
 * XREFs of sub_180134430 @ 0x180134430
 * Callers:
 *     sub_180073BA4 @ 0x180073BA4 (sub_180073BA4.c)
 *     sub_1801345B0 @ 0x1801345B0 (sub_1801345B0.c)
 *     sub_180136978 @ 0x180136978 (sub_180136978.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180134430(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}
