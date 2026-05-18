/*
 * XREFs of _alloca_probe @ 0x18011E680
 * Callers:
 *     sub_18000D868 @ 0x18000D868 (sub_18000D868.c)
 *     sub_18000EED0 @ 0x18000EED0 (sub_18000EED0.c)
 *     sub_180043F74 @ 0x180043F74 (sub_180043F74.c)
 *     sub_18007DA58 @ 0x18007DA58 (sub_18007DA58.c)
 *     sub_18008DDD8 @ 0x18008DDD8 (sub_18008DDD8.c)
 *     sub_1800DD8FC @ 0x1800DD8FC (sub_1800DD8FC.c)
 *     sub_180101AE4 @ 0x180101AE4 (sub_180101AE4.c)
 *     sub_180101BB4 @ 0x180101BB4 (sub_180101BB4.c)
 *     sub_1801160F8 @ 0x1801160F8 (sub_1801160F8.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall alloca_probe()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *StackLimit; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result;
  if ( (unsigned __int64)&v3 < result )
    v1 = 0LL;
  StackLimit = (char *)NtCurrentTeb()->NtTib.StackLimit;
  if ( v1 < StackLimit )
  {
    LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
    do
    {
      StackLimit -= 4096;
      *StackLimit = 0;
    }
    while ( v1 != StackLimit );
  }
  return result;
}
