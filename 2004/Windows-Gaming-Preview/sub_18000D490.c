/*
 * XREFs of sub_18000D490 @ 0x18000D490
 * Callers:
 *     sub_18000C280 @ 0x18000C280 (sub_18000C280.c)
 *     sub_18000D5E0 @ 0x18000D5E0 (sub_18000D5E0.c)
 *     sub_1800102A0 @ 0x1800102A0 (sub_1800102A0.c)
 *     sub_1800103F0 @ 0x1800103F0 (sub_1800103F0.c)
 *     sub_1800104F0 @ 0x1800104F0 (sub_1800104F0.c)
 *     sub_180013BB0 @ 0x180013BB0 (sub_180013BB0.c)
 *     sub_18002D480 @ 0x18002D480 (sub_18002D480.c)
 *     sub_18002DD10 @ 0x18002DD10 (sub_18002DD10.c)
 *     sub_180030810 @ 0x180030810 (sub_180030810.c)
 *     sub_1800318F4 @ 0x1800318F4 (sub_1800318F4.c)
 *     sub_180032108 @ 0x180032108 (sub_180032108.c)
 *     sub_18003240C @ 0x18003240C (sub_18003240C.c)
 *     sub_180032430 @ 0x180032430 (sub_180032430.c)
 *     sub_1800342D0 @ 0x1800342D0 (sub_1800342D0.c)
 *     sub_1800344B0 @ 0x1800344B0 (sub_1800344B0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000D490(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // ebx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)a1 + 8);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64(a1 + 8, v1 - 1, v1);
    if ( v3 == v1 )
      goto LABEL_5;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_5:
  if ( !v2 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 80))(a1, 1LL);
    if ( qword_18005ADB0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
  }
  return v2;
}
