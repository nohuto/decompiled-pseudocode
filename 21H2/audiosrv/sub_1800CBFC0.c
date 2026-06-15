/*
 * XREFs of sub_1800CBFC0 @ 0x1800CBFC0
 * Callers:
 *     sub_18004FEF0 @ 0x18004FEF0 (sub_18004FEF0.c)
 *     sub_1800CC250 @ 0x1800CC250 (sub_1800CC250.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CBFC0(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(a1 + 6);
  if ( !v2 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 104LL))(a1);
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 16LL))(a1);
  return v2;
}
