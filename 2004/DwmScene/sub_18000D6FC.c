/*
 * XREFs of sub_18000D6FC @ 0x18000D6FC
 * Callers:
 *     sub_18012B930 @ 0x18012B930 (sub_18012B930.c)
 * Callees:
 *     sub_18000C040 @ 0x18000C040 (sub_18000C040.c)
 *     sub_18000C498 @ 0x18000C498 (sub_18000C498.c)
 *     sub_18000C6A8 @ 0x18000C6A8 (sub_18000C6A8.c)
 *     sub_18000C814 @ 0x18000C814 (sub_18000C814.c)
 *     sub_18000D83C @ 0x18000D83C (sub_18000D83C.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_18000D6FC(LPVOID lpMem)
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

  if ( byte_1802183D8 )
    goto LABEL_23;
  v2 = (int)qword_1802183D0;
  if ( qword_1802183D0 )
    v2 = (unsigned __int8)qword_1802183D0();
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
      sub_18000C814((int)retaddr, 2892, (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
      JUMPOUT(0x18000D83ALL);
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
    sub_18000C6A8((__int64)lpMem + 16);
    if ( v3 )
    {
      LastError = GetLastError();
      sub_18000D83C(v3);
      SetLastError(LastError);
    }
    v8 = 0LL;
    sub_18000C040((char **)lpMem + 5);
    v9 = (void *)*((_QWORD *)lpMem + 3);
    if ( v9 )
      sub_18000C498(v9);
    v10 = (void *)*((_QWORD *)lpMem + 2);
    if ( v10 )
      sub_18000C498(v10);
    v11 = (void *)*((_QWORD *)lpMem + 1);
    if ( v11 )
      sub_18000C498(v11);
    ProcessHeap = GetProcessHeap();
    result = HeapFree(ProcessHeap, 0, lpMem);
  }
  else
  {
    v8 = v3;
  }
  if ( v8 )
    return sub_18000D83C(v8);
  return result;
}
