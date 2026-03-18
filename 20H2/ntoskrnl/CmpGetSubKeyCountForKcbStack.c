/*
 * XREFs of CmpGetSubKeyCountForKcbStack @ 0x14087CCF0
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404EB788 (CmDeleteLayeredKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmpCleanupKeyNodeStack @ 0x1406BDD50 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x1406BDE98 (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140878D3C (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14087CD90 (CmpGetSubKeyCountForKeyNodeStack.c)
 */

__int64 __fastcall CmpGetSubKeyCountForKcbStack(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  struct _LOOKASIDE_LIST_EX *v5; // r9
  int started; // ebx
  char v8[80]; // [rsp+20h] [rbp-68h] BYREF

  memset(v8, 0, sizeof(v8));
  CmpInitializeKeyNodeStack(v8);
  started = CmpStartKeyNodeStackFromKcbStack((__int64)v8, a1, v4, v5);
  if ( started >= 0 )
  {
    started = CmpGetSubKeyCountForKeyNodeStack(v8, a2);
    if ( started >= 0 )
      started = 0;
  }
  CmpCleanupKeyNodeStack((__int64)v8);
  return (unsigned int)started;
}
