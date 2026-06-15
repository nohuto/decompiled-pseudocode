/*
 * XREFs of sub_180004AC4 @ 0x180004AC4
 * Callers:
 *     sub_180004608 @ 0x180004608 (sub_180004608.c)
 * Callees:
 *     sub_18000210C @ 0x18000210C (sub_18000210C.c)
 *     sub_18000295C @ 0x18000295C (sub_18000295C.c)
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180003B38 @ 0x180003B38 (sub_180003B38.c)
 *     sub_180003B7C @ 0x180003B7C (sub_180003B7C.c)
 *     sub_180003B8C @ 0x180003B8C (sub_180003B8C.c)
 *     sub_180003BBC @ 0x180003BBC (sub_180003BBC.c)
 *     sub_180003C0C @ 0x180003C0C (sub_180003C0C.c)
 *     sub_180003FA4 @ 0x180003FA4 (sub_180003FA4.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     memset @ 0x18003A7D8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180004AC4(__int64 a1, unsigned __int64 *a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  void *v6; // rbx
  int v7; // edi
  DWORD v8; // eax
  __int64 v9; // rdx
  void *v10; // r14
  _DWORD *v11; // rsi
  __int64 v12; // r12
  int v13; // eax
  int v14; // edx
  HANDLE ProcessHeap; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // r8
  HANDLE v19; // rax
  int v20; // eax
  HANDLE v21; // rax
  __int128 v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE v24; // [rsp+48h] [rbp-B8h]
  void *v25; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v26; // [rsp+58h] [rbp-A8h]
  WCHAR Name[264]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 retaddr; // [rsp+2A8h] [rbp+1A8h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  sub_18000210C((char *)Name, 260LL, (const char *)L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 120, a1);
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  v6 = Mutex;
  v24 = Mutex;
  if ( !Mutex )
  {
    v7 = sub_18000295C();
    goto LABEL_22;
  }
  v8 = WaitForSingleObjectEx(Mutex, 0xFFFFFFFF, 0);
  if ( v8 != 258 )
  {
    if ( !v8 )
      goto LABEL_8;
    if ( v8 != 128 )
    {
      sub_180003B38(retaddr);
      JUMPOUT(0x180004E21LL);
    }
  }
  if ( (v8 & 0xFFFFFF7F) != 0 )
  {
    v10 = 0LL;
    goto LABEL_9;
  }
LABEL_8:
  v10 = v6;
LABEL_9:
  v25 = v10;
  v11 = 0LL;
  v12 = 0LL;
  v23 = 0LL;
  v13 = sub_180003FA4((__int64)Name, v9, &v23);
  v7 = v13;
  if ( v13 >= 0 )
  {
    v12 = v23;
    v7 = 0;
  }
  else
  {
    sub_180003AB0(retaddr, 98, (__int64)"wil", v13);
  }
  if ( v7 >= 0 )
  {
    v11 = (_DWORD *)(4 * v12);
    v7 = 0;
  }
  else
  {
    sub_180003AB0(retaddr, 107, (__int64)"wil", v7);
  }
  if ( v7 >= 0 )
  {
    if ( v11 )
    {
      *a2 = (unsigned __int64)v11;
      *(_DWORD *)*a2 = *v11 + 1;
      v6 = v24;
LABEL_19:
      v7 = 0;
      goto LABEL_20;
    }
    *a2 = 0LL;
    ProcessHeap = GetProcessHeap();
    v17 = (unsigned __int64)HeapAlloc(ProcessHeap, 8u, 0x78uLL);
    if ( qword_18004FD18 )
    {
      v19 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, unsigned __int64))qword_18004FD18)(v19, v17);
    }
    v26 = v17;
    if ( v17 )
    {
      v22 = 0LL;
      if ( (v17 & 3) != 0 )
        sub_180003B7C();
      v20 = sub_180003C0C((__int64)&v22, (__int64)Name, v18, v17 >> 2);
      v7 = v20;
      if ( v20 >= 0 )
      {
        *(_DWORD *)v17 = 1;
        *(_QWORD *)(v17 + 8) = v6;
        v6 = 0LL;
        v24 = 0LL;
        *(_QWORD *)(v17 + 16) = v22;
        *(_QWORD *)&v22 = 0LL;
        *(_QWORD *)(v17 + 24) = *((_QWORD *)&v22 + 1);
        *((_QWORD *)&v22 + 1) = 0LL;
        memset((void *)(v17 + 34), 0, 0x56uLL);
        *(_WORD *)(v17 + 32) = 88;
        *(_DWORD *)(v17 + 36) = 1;
        memset((void *)(v17 + 40), 0, 0x50uLL);
        *a2 = v17;
        v7 = 0;
      }
      else
      {
        sub_180003AB0(retaddr, 325, (__int64)"wil", v20);
        if ( *((_QWORD *)&v22 + 1) )
          sub_180003B8C(*((void **)&v22 + 1));
        if ( (_QWORD)v22 )
          sub_180003B8C((void *)v22);
        v21 = GetProcessHeap();
        HeapFree(v21, 0, (LPVOID)v17);
      }
      if ( v7 >= 0 )
        goto LABEL_19;
    }
    else
    {
      v7 = -2147024882;
      sub_180003AB0(retaddr, 322, (__int64)"wil", -2147024882);
    }
    v14 = 302;
    goto LABEL_39;
  }
  v14 = 294;
LABEL_39:
  sub_180003AB0(retaddr, v14, (__int64)"wil", v7);
LABEL_20:
  if ( v10 )
    sub_180003BBC(v10);
LABEL_22:
  if ( v6 )
    sub_180003B8C(v6);
  return (unsigned int)v7;
}
