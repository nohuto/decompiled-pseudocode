/*
 * XREFs of CmpValueEnumStackStartFromKcbStack @ 0x14087BD0C
 * Callers:
 *     CmEnumerateValueFromLayeredKey @ 0x14086C3C0 (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14036BF08 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpCleanupKeyNodeStack @ 0x1405F8DE8 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x1405F8F30 (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x14087680C (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmpValueEnumStackStartFromKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  struct _LOOKASIDE_LIST_EX *v6; // r9
  int started; // ebx
  __int16 v9[40]; // [rsp+20h] [rbp-68h] BYREF

  memset(v9, 0, sizeof(v9));
  CmpInitializeKeyNodeStack((char *)v9);
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v9, a2, a3, v6);
  if ( started >= 0 )
  {
    started = CmpValueEnumStackStartFromKeyNodeStack(a1, v9);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack((__int64)v9);
  return (unsigned int)started;
}
