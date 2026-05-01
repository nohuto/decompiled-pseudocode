/*
 * XREFs of sub_18000334C @ 0x18000334C
 * Callers:
 *     sub_180003250 @ 0x180003250 (sub_180003250.c)
 *     sub_18000806C @ 0x18000806C (sub_18000806C.c)
 *     sub_1800673E8 @ 0x1800673E8 (sub_1800673E8.c)
 *     sub_1800679F4 @ 0x1800679F4 (sub_1800679F4.c)
 * Callees:
 *     sub_180002BC0 @ 0x180002BC0 (sub_180002BC0.c)
 *     sub_180002C8C @ 0x180002C8C (sub_180002C8C.c)
 *     sub_1800033E4 @ 0x1800033E4 (sub_1800033E4.c)
 *     sub_180010810 @ 0x180010810 (sub_180010810.c)
 */

__int64 **__fastcall sub_18000334C(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 *v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  CloseHandle(*(HANDLE *)(a1 + 1304));
  *(_QWORD *)(a1 + 1304) = 0LL;
  sub_1800033E4(a1);
  sub_180010810(a1);
  v6 = 0LL;
  v5 = 0LL;
  v7 = a1;
  v2 = *(_QWORD *)(a1 + 24);
  sub_180002C8C(v2 + 88, v3, &v7, &v6, &v5, &v8);
  return sub_180002BC0(v2 + 88, &v5, v6, v5);
}
