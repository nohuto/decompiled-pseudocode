/*
 * XREFs of sub_18000D7DC @ 0x18000D7DC
 * Callers:
 *     sub_180131240 @ 0x180131240 (sub_180131240.c)
 * Callees:
 *     sub_18000C100 @ 0x18000C100 (sub_18000C100.c)
 *     sub_18000C578 @ 0x18000C578 (sub_18000C578.c)
 *     sub_18000C788 @ 0x18000C788 (sub_18000C788.c)
 *     sub_18000C8F4 @ 0x18000C8F4 (sub_18000C8F4.c)
 *     sub_18000D91C @ 0x18000D91C (sub_18000D91C.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_18000D7DC(LPVOID lpMem)
{
  int v2; // eax
  void *v3; // rsi
  DWORD v4; // eax
  bool v5; // zf
  int result; // eax
  DWORD LastError; // ebx
  void *v8; // rbx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  HANDLE ProcessHeap; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  if ( byte_18021F508 )
    goto LABEL_23;
  v2 = (int)qword_18021F500;
  if ( qword_18021F500 )
    v2 = (unsigned __int8)qword_18021F500();
  if ( v2 )
  {
LABEL_23:
    result = *(_DWORD *)lpMem - 1;
    *(_DWORD *)lpMem = result;
    return result;
  }
  v3 = (void *)*((_QWORD *)lpMem + 1);
  v4 = WaitForSingleObjectEx(v3, 0xFFFFFFFF, 0);
  if ( v4 == 258 )
    goto LABEL_8;
  if ( v4 )
  {
    if ( v4 != 128 )
    {
      sub_18000C8F4((int)retaddr, 2892, (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
      JUMPOUT(0x18000D91ALL);
    }
LABEL_8:
    if ( (v4 & 0xFFFFFF7F) != 0 )
      v3 = 0LL;
  }
  v5 = *(_DWORD *)lpMem == 1;
  result = *(_DWORD *)lpMem - 1;
  *(_DWORD *)lpMem = result;
  if ( v5 )
  {
    sub_18000C788((__int64)lpMem + 16);
    if ( v3 )
    {
      LastError = GetLastError();
      sub_18000D91C(v3);
      SetLastError(LastError);
    }
    v8 = 0LL;
    sub_18000C100((char **)lpMem + 5);
    v9 = (void *)*((_QWORD *)lpMem + 3);
    if ( v9 )
      sub_18000C578(v9);
    v10 = (void *)*((_QWORD *)lpMem + 2);
    if ( v10 )
      sub_18000C578(v10);
    v11 = (void *)*((_QWORD *)lpMem + 1);
    if ( v11 )
      sub_18000C578(v11);
    ProcessHeap = GetProcessHeap();
    result = HeapFree(ProcessHeap, 0, lpMem);
  }
  else
  {
    v8 = v3;
  }
  if ( v8 )
    return sub_18000D91C(v8);
  return result;
}
