/*
 * XREFs of sub_180068E94 @ 0x180068E94
 * Callers:
 *     sub_1800655F4 @ 0x1800655F4 (sub_1800655F4.c)
 *     sub_1800B4914 @ 0x1800B4914 (sub_1800B4914.c)
 *     sub_1800B52D0 @ 0x1800B52D0 (sub_1800B52D0.c)
 *     sub_1800B5FF8 @ 0x1800B5FF8 (sub_1800B5FF8.c)
 * Callees:
 *     sub_1800B5EF4 @ 0x1800B5EF4 (sub_1800B5EF4.c)
 */

BOOL __fastcall sub_180068E94(void *a1)
{
  BOOL result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = ReleaseMutex(a1);
  if ( !result )
  {
    sub_1800B5EF4(retaddr, 2352LL, "onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h");
    JUMPOUT(0x1800B44ECLL);
  }
  return result;
}
