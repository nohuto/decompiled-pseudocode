/*
 * XREFs of sub_18000EB20 @ 0x18000EB20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

double __fastcall sub_18000EB20(__int64 a1)
{
  double result; // xmm0_8

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24)) )
    return 0.0;
  *(_QWORD *)&result = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 8LL);
  return result;
}
