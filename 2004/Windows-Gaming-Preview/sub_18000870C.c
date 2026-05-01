/*
 * XREFs of sub_18000870C @ 0x18000870C
 * Callers:
 *     sub_180003BA8 @ 0x180003BA8 (sub_180003BA8.c)
 * Callees:
 *     sub_180001B58 @ 0x180001B58 (sub_180001B58.c)
 *     sub_1800022EC @ 0x1800022EC (sub_1800022EC.c)
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_1800032E0 @ 0x1800032E0 (sub_1800032E0.c)
 *     sub_18000336C @ 0x18000336C (sub_18000336C.c)
 *     sub_18000339C @ 0x18000339C (sub_18000339C.c)
 *     sub_1800034C8 @ 0x1800034C8 (sub_1800034C8.c)
 *     sub_180008FFC @ 0x180008FFC (sub_180008FFC.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     memset @ 0x1800453CC (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18000870C(__int64 a1, _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  void *v6; // rbx
  int v7; // edi
  DWORD v8; // eax
  void *v9; // r14
  _DWORD *v10; // rsi
  int v11; // eax
  int v12; // edx
  HANDLE ProcessHeap; // rax
  _QWORD *v15; // rsi
  HANDLE v16; // rax
  int v17; // eax
  HANDLE v18; // rax
  __int128 v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE v21; // [rsp+48h] [rbp-B8h]
  void *v22; // [rsp+50h] [rbp-B0h]
  _QWORD *v23; // [rsp+58h] [rbp-A8h]
  WCHAR Name[264]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 retaddr; // [rsp+2A8h] [rbp+1A8h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  sub_180001B58((char *)Name, 260LL, (const char *)L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 120, a1);
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  v6 = Mutex;
  v21 = Mutex;
  if ( !Mutex )
  {
    v7 = sub_1800022EC();
    goto LABEL_19;
  }
  v8 = WaitForSingleObjectEx(Mutex, 0xFFFFFFFF, 0);
  if ( v8 != 258 )
  {
    if ( !v8 )
      goto LABEL_8;
    if ( v8 != 128 )
    {
      sub_1800032E0(retaddr);
      JUMPOUT(0x180008A25LL);
    }
  }
  if ( (v8 & 0xFFFFFF7F) != 0 )
  {
    v9 = 0LL;
    goto LABEL_9;
  }
LABEL_8:
  v9 = v6;
LABEL_9:
  v22 = v9;
  v10 = 0LL;
  v20 = 0LL;
  v11 = sub_180008FFC(Name, &v20);
  v7 = v11;
  if ( v11 >= 0 )
  {
    v10 = (_DWORD *)(4 * v20);
    v7 = 0;
  }
  else
  {
    sub_180003268(retaddr, 107, (__int64)"wil", v11);
  }
  if ( v7 >= 0 )
  {
    if ( v10 )
    {
      *a2 = v10;
      *(_DWORD *)*a2 = *v10 + 1;
      v6 = v21;
LABEL_16:
      v7 = 0;
      goto LABEL_17;
    }
    *a2 = 0LL;
    ProcessHeap = GetProcessHeap();
    v15 = HeapAlloc(ProcessHeap, 8u, 0x78uLL);
    if ( qword_18005ABD0 )
    {
      v16 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, _QWORD *))qword_18005ABD0)(v16, v15);
    }
    v23 = v15;
    if ( v15 )
    {
      v19 = 0LL;
      v17 = sub_1800034C8((__int64)&v19, (__int64)Name, (unsigned __int64)v15);
      v7 = v17;
      if ( v17 >= 0 )
      {
        *(_DWORD *)v15 = 1;
        v15[1] = v6;
        v6 = 0LL;
        v21 = 0LL;
        v15[2] = v19;
        *(_QWORD *)&v19 = 0LL;
        v15[3] = *((_QWORD *)&v19 + 1);
        *((_QWORD *)&v19 + 1) = 0LL;
        memset((char *)v15 + 34, 0, 0x56uLL);
        *((_WORD *)v15 + 16) = 88;
        *((_DWORD *)v15 + 9) = 1;
        memset(v15 + 5, 0, 0x50uLL);
        *a2 = v15;
        v7 = 0;
      }
      else
      {
        sub_180003268(retaddr, 325, (__int64)"wil", v17);
        if ( *((_QWORD *)&v19 + 1) )
          sub_18000336C(*((void **)&v19 + 1));
        if ( (_QWORD)v19 )
          sub_18000336C((void *)v19);
        v18 = GetProcessHeap();
        HeapFree(v18, 0, v15);
      }
      if ( v7 >= 0 )
        goto LABEL_16;
    }
    else
    {
      v7 = -2147024882;
      sub_180003268(retaddr, 322, (__int64)"wil", -2147024882);
    }
    v12 = 302;
    goto LABEL_35;
  }
  v12 = 294;
LABEL_35:
  sub_180003268(retaddr, v12, (__int64)"wil", v7);
LABEL_17:
  if ( v9 )
    sub_18000339C(v9);
LABEL_19:
  if ( v6 )
    sub_18000336C(v6);
  return (unsigned int)v7;
}
