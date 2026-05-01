/*
 * XREFs of sub_18000BA30 @ 0x18000BA30
 * Callers:
 *     sub_180009FE4 @ 0x180009FE4 (sub_180009FE4.c)
 *     sub_18000BBB0 @ 0x18000BBB0 (sub_18000BBB0.c)
 *     sub_18000BC18 @ 0x18000BC18 (sub_18000BC18.c)
 *     sub_1800101D0 @ 0x1800101D0 (sub_1800101D0.c)
 *     sub_180010340 @ 0x180010340 (sub_180010340.c)
 *     sub_1800104A0 @ 0x1800104A0 (sub_1800104A0.c)
 *     sub_180012EF4 @ 0x180012EF4 (sub_180012EF4.c)
 *     sub_18001D640 @ 0x18001D640 (sub_18001D640.c)
 *     sub_18002A7E0 @ 0x18002A7E0 (sub_18002A7E0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000BA30(volatile signed __int64 *a1)
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
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 144))(a1, 1LL);
    if ( qword_18005ADB0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
  }
  return v2;
}
