/*
 * XREFs of sub_180004E28 @ 0x180004E28
 * Callers:
 *     sub_18003D090 @ 0x18003D090 (sub_18003D090.c)
 * Callees:
 *     sub_180003B38 @ 0x180003B38 (sub_180003B38.c)
 *     sub_180003B8C @ 0x180003B8C (sub_180003B8C.c)
 *     sub_180003BBC @ 0x180003BBC (sub_180003BBC.c)
 *     sub_1800043F8 @ 0x1800043F8 (sub_1800043F8.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

int __fastcall sub_180004E28(_QWORD *lpMem)
{
  int v2; // eax
  void *v3; // rsi
  DWORD v4; // eax
  bool v5; // zf
  int result; // eax
  void *v7; // rbp
  DWORD LastError; // ebx
  void *v9; // rbp
  DWORD v10; // ebx
  DWORD v11; // ebx
  _QWORD *v12; // rsi
  void *v13; // rbx
  _QWORD *v14; // rbp
  void *v15; // rbx
  HANDLE ProcessHeap; // rax
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  HANDLE v20; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( byte_18004FD60 )
    goto LABEL_33;
  v2 = (int)qword_18004FD28;
  if ( qword_18004FD28 )
    v2 = (unsigned __int8)qword_18004FD28();
  if ( v2 )
  {
LABEL_33:
    result = *(_DWORD *)lpMem - 1;
    *(_DWORD *)lpMem = result;
    return result;
  }
  v3 = (void *)lpMem[1];
  v4 = WaitForSingleObjectEx(v3, 0xFFFFFFFF, 0);
  if ( v4 == 258 )
    goto LABEL_8;
  if ( v4 )
  {
    if ( v4 != 128 )
    {
      sub_180003B38(retaddr);
      JUMPOUT(0x180005021LL);
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
    v7 = (void *)lpMem[2];
    if ( v7 )
    {
      LastError = GetLastError();
      sub_180003B8C(v7);
      SetLastError(LastError);
    }
    lpMem[2] = 0LL;
    v9 = (void *)lpMem[3];
    if ( v9 )
    {
      v10 = GetLastError();
      sub_180003B8C(v9);
      SetLastError(v10);
    }
    lpMem[3] = 0LL;
    if ( v3 )
    {
      v11 = GetLastError();
      sub_180003BBC(v3);
      SetLastError(v11);
    }
    v12 = lpMem + 5;
    v13 = 0LL;
    if ( lpMem + 5 != lpMem + 15 )
    {
      do
      {
        v14 = (_QWORD *)*v12;
        while ( v14 )
        {
          v15 = v14;
          v14 = (_QWORD *)v14[1];
          sub_1800043F8((__int64)v15 + 16);
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v15);
        }
        *v12++ = 0LL;
      }
      while ( v12 != lpMem + 15 );
      v13 = 0LL;
    }
    v17 = (void *)lpMem[3];
    if ( v17 )
      sub_180003B8C(v17);
    v18 = (void *)lpMem[2];
    if ( v18 )
      sub_180003B8C(v18);
    v19 = (void *)lpMem[1];
    if ( v19 )
      sub_180003B8C(v19);
    v20 = GetProcessHeap();
    result = HeapFree(v20, 0, lpMem);
  }
  else
  {
    v13 = v3;
  }
  if ( v13 )
    return sub_180003BBC(v13);
  return result;
}
