/*
 * XREFs of CmpGetSubKeyCountForKcbStack @ 0x14087A7C8
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404ED2B8 (CmDeleteLayeredKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpCleanupKeyNodeStack @ 0x1405F8DE8 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x1405F8F30 (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x14087680C (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14087A86C (CmpGetSubKeyCountForKeyNodeStack.c)
 */

__int64 __fastcall CmpGetSubKeyCountForKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  struct _LOOKASIDE_LIST_EX *v5; // r9
  int started; // ebx
  char v8[80]; // [rsp+20h] [rbp-68h] BYREF

  memset(v8, 0, sizeof(v8));
  CmpInitializeKeyNodeStack(v8);
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v8, a1, 0LL, v5);
  if ( started >= 0 )
  {
    started = CmpGetSubKeyCountForKeyNodeStack(v8, a3);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack((__int64)v8);
  return (unsigned int)started;
}
