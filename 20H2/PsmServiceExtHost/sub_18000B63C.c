/*
 * XREFs of sub_18000B63C @ 0x18000B63C
 * Callers:
 *     sub_180004CDC @ 0x180004CDC (sub_180004CDC.c)
 *     sub_1800072AC @ 0x1800072AC (sub_1800072AC.c)
 *     sub_180007740 @ 0x180007740 (sub_180007740.c)
 *     sub_180036BA0 @ 0x180036BA0 (sub_180036BA0.c)
 *     sub_180068544 @ 0x180068544 (sub_180068544.c)
 *     sub_180068764 @ 0x180068764 (sub_180068764.c)
 *     sub_1800688D8 @ 0x1800688D8 (sub_1800688D8.c)
 *     sub_180068B10 @ 0x180068B10 (sub_180068B10.c)
 *     sub_180068C98 @ 0x180068C98 (sub_180068C98.c)
 *     sub_180068E54 @ 0x180068E54 (sub_180068E54.c)
 *     sub_180068FA8 @ 0x180068FA8 (sub_180068FA8.c)
 *     sub_180069190 @ 0x180069190 (sub_180069190.c)
 *     sub_1800692E4 @ 0x1800692E4 (sub_1800692E4.c)
 *     sub_1800695BC @ 0x1800695BC (sub_1800695BC.c)
 *     sub_180069868 @ 0x180069868 (sub_180069868.c)
 *     sub_180069BA4 @ 0x180069BA4 (sub_180069BA4.c)
 * Callees:
 *     sub_18000B7C0 @ 0x18000B7C0 (sub_18000B7C0.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 */

__int64 __fastcall sub_18000B63C(int *a1, void *a2)
{
  __int64 result; // rax
  int v5; // r8d

  result = sub_18000B7C0();
  v5 = 0;
  if ( !(_DWORD)result )
  {
    result = sub_18000B7F8(a2);
    v5 = 1;
  }
  *a1 = v5;
  return result;
}
