/*
 * XREFs of CmpValueEnumStackStartFromKcbStack @ 0x14087E22C
 * Callers:
 *     CmEnumerateValueFromLayeredKey @ 0x14086E630 (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14036BAA8 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmpCleanupKeyNodeStack @ 0x1406BDD50 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x1406BDE98 (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140878D3C (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmpValueEnumStackStartFromKcbStack(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  struct _LOOKASIDE_LIST_EX *v5; // r9
  int started; // ebx
  __int16 v8[40]; // [rsp+20h] [rbp-68h] BYREF

  memset(v8, 0, sizeof(v8));
  CmpInitializeKeyNodeStack((char *)v8);
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v8, a2, v4, v5);
  if ( started >= 0 )
  {
    started = CmpValueEnumStackStartFromKeyNodeStack(a1, v8);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack((__int64)v8);
  return (unsigned int)started;
}
