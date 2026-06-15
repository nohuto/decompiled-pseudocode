/*
 * XREFs of sub_1800C6588 @ 0x1800C6588
 * Callers:
 *     sub_1800C99E4 @ 0x1800C99E4 (sub_1800C99E4.c)
 *     sub_1800D3CD4 @ 0x1800D3CD4 (sub_1800D3CD4.c)
 *     sub_1800D407C @ 0x1800D407C (sub_1800D407C.c)
 * Callees:
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_1800C6108 @ 0x1800C6108 (sub_1800C6108.c)
 *     sub_1800C6940 @ 0x1800C6940 (sub_1800C6940.c)
 *     sub_1800C7FC4 @ 0x1800C7FC4 (sub_1800C7FC4.c)
 */

char __fastcall sub_1800C6588(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = sub_1800C7FC4();
  sub_1800C6108(&v6, v4, v3);
  LOBYTE(a1) = (unsigned int)sub_1800C6940(a1, v6) != 0;
  sub_180006A30((volatile signed __int32 *)(v6 - 24));
  return a1;
}
