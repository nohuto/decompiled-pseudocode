/*
 * XREFs of sub_1800F1730 @ 0x1800F1730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F1730(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  return (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)qword_18019EE60 + 40LL))(qword_18019EE60, &v2);
}
