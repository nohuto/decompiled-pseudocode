/*
 * XREFs of sub_1800120A0 @ 0x1800120A0
 * Callers:
 *     sub_18000A924 @ 0x18000A924 (sub_18000A924.c)
 *     sub_18000B2BC @ 0x18000B2BC (sub_18000B2BC.c)
 *     sub_18000BD4C @ 0x18000BD4C (sub_18000BD4C.c)
 *     sub_18000CE50 @ 0x18000CE50 (sub_18000CE50.c)
 *     sub_18000CFF4 @ 0x18000CFF4 (sub_18000CFF4.c)
 *     sub_18000D0F8 @ 0x18000D0F8 (sub_18000D0F8.c)
 *     sub_18000D998 @ 0x18000D998 (sub_18000D998.c)
 *     sub_18000EE78 @ 0x18000EE78 (sub_18000EE78.c)
 *     sub_18000F3E0 @ 0x18000F3E0 (sub_18000F3E0.c)
 *     sub_1800105F0 @ 0x1800105F0 (sub_1800105F0.c)
 *     sub_180010610 @ 0x180010610 (sub_180010610.c)
 *     sub_180010630 @ 0x180010630 (sub_180010630.c)
 *     sub_180010650 @ 0x180010650 (sub_180010650.c)
 *     sub_1800106A0 @ 0x1800106A0 (sub_1800106A0.c)
 *     sub_1800106D0 @ 0x1800106D0 (sub_1800106D0.c)
 *     sub_1800106F0 @ 0x1800106F0 (sub_1800106F0.c)
 *     sub_180012110 @ 0x180012110 (sub_180012110.c)
 *     sub_18001BFA0 @ 0x18001BFA0 (sub_18001BFA0.c)
 *     sub_18001CC34 @ 0x18001CC34 (sub_18001CC34.c)
 *     sub_18001D120 @ 0x18001D120 (sub_18001D120.c)
 *     sub_18001D640 @ 0x18001D640 (sub_18001D640.c)
 *     sub_18001E990 @ 0x18001E990 (sub_18001E990.c)
 *     sub_18001EA64 @ 0x18001EA64 (sub_18001EA64.c)
 *     sub_18001F89C @ 0x18001F89C (sub_18001F89C.c)
 *     sub_18001F930 @ 0x18001F930 (sub_18001F930.c)
 *     sub_180020294 @ 0x180020294 (sub_180020294.c)
 *     sub_180029DC0 @ 0x180029DC0 (sub_180029DC0.c)
 *     sub_18002BA10 @ 0x18002BA10 (sub_18002BA10.c)
 *     sub_18002BB10 @ 0x18002BB10 (sub_18002BB10.c)
 *     sub_18002BE50 @ 0x18002BE50 (sub_18002BE50.c)
 *     sub_18002C390 @ 0x18002C390 (sub_18002C390.c)
 *     sub_180032EA0 @ 0x180032EA0 (sub_180032EA0.c)
 *     sub_180032F10 @ 0x180032F10 (sub_180032F10.c)
 *     sub_180032F80 @ 0x180032F80 (sub_180032F80.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800120A0(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // ebx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)a1 + 17);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64(a1 + 17, v1 - 1, v1);
    if ( v3 == v1 )
      goto LABEL_5;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_5:
  if ( !v2 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 88))(a1, 1LL);
    if ( qword_18005ADB0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
  }
  return v2;
}
