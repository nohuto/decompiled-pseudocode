/*
 * XREFs of CmpKeyEnumStackStartFromKcbStack @ 0x14087D2FC
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x1405D5580 (CmpEnumerateLayeredKey.c)
 *     CmpPartialPromoteSubkeys @ 0x140882B3C (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmpCleanupKeyNodeStack @ 0x1406BDD50 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x1406BDE98 (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140878D3C (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x14087D39C (CmpKeyEnumStackStartFromKeyNodeStack.c)
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
