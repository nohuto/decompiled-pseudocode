/*
 * XREFs of sub_180037F08 @ 0x180037F08
 * Callers:
 *     sub_180037338 @ 0x180037338 (sub_180037338.c)
 * Callees:
 *     sub_180037780 @ 0x180037780 (sub_180037780.c)
 *     sub_18003785C @ 0x18003785C (sub_18003785C.c)
 *     sub_180037938 @ 0x180037938 (sub_180037938.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_180037F08(__int64 a1)
{
  void *v2; // rdi
  char v3; // r14
  void *v4; // rbx
  void *v5; // rsi
  _QWORD *v6; // r15
  __int64 v7; // r12
  HANDLE ProcessHeap; // rax
  HANDLE v9; // rax
  HANDLE v10; // rax
  HANDLE v11; // rax
  HANDLE v12; // rax
  HANDLE v13; // rax
  HANDLE v14; // rax
  HANDLE v15; // rax
  LPVOID lpMem; // [rsp+20h] [rbp-40h] BYREF
  LPVOID v18; // [rsp+28h] [rbp-38h] BYREF
  LPVOID v19; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v20[3]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h] BYREF

  sub_180037780(&v19);
  sub_18003785C(&v18);
  sub_180037938(&lpMem);
  v2 = v19;
  v3 = 0;
  v4 = v18;
  if ( v19 && v18 )
  {
    v5 = lpMem;
    if ( lpMem )
    {
      v20[0] = v19;
      v6 = v20;
      v20[1] = v18;
      v20[2] = lpMem;
      while ( 1 )
      {
        v7 = *v6;
        if ( *(_DWORD *)(a1 + 24) <= (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 24LL))(*v6) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7) )
            break;
        }
        if ( ++v6 == &v21 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v5);
          v9 = GetProcessHeap();
          HeapFree(v9, 0, v4);
          goto LABEL_15;
        }
      }
      v10 = GetProcessHeap();
      HeapFree(v10, 0, v5);
      v11 = GetProcessHeap();
      HeapFree(v11, 0, v4);
      v12 = GetProcessHeap();
      HeapFree(v12, 0, v2);
      return 1;
    }
  }
  else if ( lpMem )
  {
    v13 = GetProcessHeap();
    HeapFree(v13, 0, lpMem);
  }
  if ( v4 )
  {
    v14 = GetProcessHeap();
    HeapFree(v14, 0, v4);
  }
  if ( v2 )
  {
LABEL_15:
    v15 = GetProcessHeap();
    HeapFree(v15, 0, v2);
  }
  return v3;
}
