/*
 * XREFs of sub_18000A470 @ 0x18000A470
 * Callers:
 *     sub_180019780 @ 0x180019780 (sub_180019780.c)
 *     sub_1800197D0 @ 0x1800197D0 (sub_1800197D0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000A470(volatile signed __int32 *a1)
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
