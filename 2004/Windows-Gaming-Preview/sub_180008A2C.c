/*
 * XREFs of sub_180008A2C @ 0x180008A2C
 * Callers:
 *     sub_180047090 @ 0x180047090 (sub_180047090.c)
 * Callees:
 *     sub_1800032E0 @ 0x1800032E0 (sub_1800032E0.c)
 *     sub_18000336C @ 0x18000336C (sub_18000336C.c)
 *     sub_18000339C @ 0x18000339C (sub_18000339C.c)
 *     sub_18000343C @ 0x18000343C (sub_18000343C.c)
 *     sub_180003818 @ 0x180003818 (sub_180003818.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall sub_180008A2C(_QWORD *lpMem)
{
  int v2; // eax
  void *v3; // rsi
  DWORD v4; // eax
  bool v5; // zf
  int result; // eax
  DWORD LastError; // ebx
  _QWORD *v8; // rsi
  void *v9; // rbx
  _QWORD *v10; // rbp
  void *v11; // rbx
  HANDLE ProcessHeap; // rax
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  HANDLE v16; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( byte_18005AC18 )
    goto LABEL_29;
  v2 = (int)qword_18005ABE0;
  if ( qword_18005ABE0 )
    v2 = (unsigned __int8)qword_18005ABE0();
  if ( v2 )
  {
LABEL_29:
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
      sub_1800032E0(retaddr);
      JUMPOUT(0x180008BD6LL);
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
    sub_18000343C((__int64)(lpMem + 2));
    if ( v3 )
    {
      LastError = GetLastError();
      sub_18000339C(v3);
      SetLastError(LastError);
    }
    v8 = lpMem + 5;
    v9 = 0LL;
    if ( lpMem + 5 != lpMem + 15 )
    {
      do
      {
        v10 = (_QWORD *)*v8;
        while ( v10 )
        {
          v11 = v10;
          v10 = (_QWORD *)v10[1];
          sub_180003818((__int64)v11 + 16);
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v11);
        }
        *v8++ = 0LL;
      }
      while ( v8 != lpMem + 15 );
      v9 = 0LL;
    }
    v13 = (void *)lpMem[3];
    if ( v13 )
      sub_18000336C(v13);
    v14 = (void *)lpMem[2];
    if ( v14 )
      sub_18000336C(v14);
    v15 = (void *)lpMem[1];
    if ( v15 )
      sub_18000336C(v15);
    v16 = GetProcessHeap();
    result = HeapFree(v16, 0, lpMem);
  }
  else
  {
    v9 = v3;
  }
  if ( v9 )
    return sub_18000339C(v9);
  return result;
}
