/*
 * XREFs of CmpKeyEnumStackStartFromKcbStack @ 0x140877780
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1405CF0D0 (CmpEnumerateLayeredKey.c)
 *     CmpPartialPromoteSubkeys @ 0x14087CF8C (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpCleanupKeyNodeStack @ 0x1406E93D8 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x1406E9520 (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x1408731EC (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x140877820 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 */

__int64 __fastcall CmpKeyEnumStackStartFromKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  struct _LOOKASIDE_LIST_EX *v7; // r9
  int started; // ebx
  char v10[80]; // [rsp+20h] [rbp-78h] BYREF

  memset(v10, 0, sizeof(v10));
  CmpInitializeKeyNodeStack(v10);
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v10, a2, v6, v7);
  if ( started >= 0 )
  {
    started = CmpKeyEnumStackStartFromKeyNodeStack(a1, v10, a3);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack((__int64)v10);
  return (unsigned int)started;
}
