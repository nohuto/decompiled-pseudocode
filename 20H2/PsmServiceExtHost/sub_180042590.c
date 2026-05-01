/*
 * XREFs of sub_180042590 @ 0x180042590
 * Callers:
 *     sub_180041FAC @ 0x180041FAC (sub_180041FAC.c)
 *     sub_1800422A4 @ 0x1800422A4 (sub_1800422A4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180042590(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *a1 = a2;
  return result;
}
