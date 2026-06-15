/*
 * XREFs of sub_1800D3024 @ 0x1800D3024
 * Callers:
 *     sub_1800D32F4 @ 0x1800D32F4 (sub_1800D32F4.c)
 *     sub_1800D38A0 @ 0x1800D38A0 (sub_1800D38A0.c)
 * Callees:
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_1800C6108 @ 0x1800C6108 (sub_1800C6108.c)
 *     sub_1800C6940 @ 0x1800C6940 (sub_1800C6940.c)
 *     sub_1800C7FC4 @ 0x1800C7FC4 (sub_1800C7FC4.c)
 */

char __fastcall sub_1800D3024(unsigned __int16 *a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int16 *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  v2 = a2;
  v3 = sub_1800C7FC4(a2);
  sub_1800C6108(&v6, v4, v3);
  LOBYTE(v2) = (unsigned int)sub_1800C6940(&v6, *v2) != 0;
  sub_180006A30((volatile signed __int32 *)v6 - 6);
  return (char)v2;
}
