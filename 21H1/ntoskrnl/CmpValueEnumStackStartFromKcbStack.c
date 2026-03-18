/*
 * XREFs of CmpValueEnumStackStartFromKcbStack @ 0x1408773CC
 * Callers:
 *     CmEnumerateValueFromLayeredKey @ 0x1408678C0 (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140369108 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmpCleanupKeyNodeStack @ 0x1406C8D18 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x1406C8E60 (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140871EFC (CmpStartKeyNodeStackFromKcbStack.c)
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
