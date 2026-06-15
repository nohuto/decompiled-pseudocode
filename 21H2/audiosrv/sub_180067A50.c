/*
 * XREFs of sub_180067A50 @ 0x180067A50
 * Callers:
 *     sub_18002EACC @ 0x18002EACC (sub_18002EACC.c)
 *     sub_180067A20 @ 0x180067A20 (sub_180067A20.c)
 *     sub_180067A30 @ 0x180067A30 (sub_180067A30.c)
 *     sub_180067A40 @ 0x180067A40 (sub_180067A40.c)
 *     sub_1800C91E0 @ 0x1800C91E0 (sub_1800C91E0.c)
 *     sub_1800C9970 @ 0x1800C9970 (sub_1800C9970.c)
 *     sub_1800CA550 @ 0x1800CA550 (sub_1800CA550.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180067A50(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(a1 + 2);
  if ( !v2 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 32LL))(a1);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 24LL))(a1, 1LL);
  }
  return v2;
}
