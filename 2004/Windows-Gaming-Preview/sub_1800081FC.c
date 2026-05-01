/*
 * XREFs of sub_1800081FC @ 0x1800081FC
 * Callers:
 *     sub_180006F98 @ 0x180006F98 (sub_180006F98.c)
 * Callees:
 *     sub_180001B58 @ 0x180001B58 (sub_180001B58.c)
 *     sub_1800022EC @ 0x1800022EC (sub_1800022EC.c)
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_1800032E0 @ 0x1800032E0 (sub_1800032E0.c)
 *     sub_18000336C @ 0x18000336C (sub_18000336C.c)
 *     sub_18000339C @ 0x18000339C (sub_18000339C.c)
 *     sub_1800034C8 @ 0x1800034C8 (sub_1800034C8.c)
 *     sub_1800062A8 @ 0x1800062A8 (sub_1800062A8.c)
 *     sub_180008FFC @ 0x180008FFC (sub_180008FFC.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     memset @ 0x1800453CC (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800081FC(__int64 a1, _QWORD *a2)
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
  char *v15; // rsi
  HANDLE v16; // rax
  int v17; // eax
  HANDLE v18; // rax
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE v20; // [rsp+38h] [rbp-C8h]
  __int128 v21; // [rsp+40h] [rbp-C0h] BYREF
  void *v22; // [rsp+50h] [rbp-B0h]
  char *v23; // [rsp+58h] [rbp-A8h]
  WCHAR Name[264]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 retaddr; // [rsp+2A8h] [rbp+1A8h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  sub_180001B58((char *)Name, 260LL, (const char *)L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 304, a1);
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  v6 = Mutex;
  v20 = Mutex;
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
      JUMPOUT(0x18000852FLL);
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
  v19 = 0LL;
  v11 = sub_180008FFC(Name, &v19);
  v7 = v11;
  if ( v11 >= 0 )
  {
    v10 = (_DWORD *)(4 * v19);
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
      v6 = v20;
LABEL_16:
      v7 = 0;
      goto LABEL_17;
    }
    *a2 = 0LL;
    ProcessHeap = GetProcessHeap();
    v15 = (char *)HeapAlloc(ProcessHeap, 8u, 0x130uLL);
    if ( qword_18005ABD0 )
    {
      v16 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, char *))qword_18005ABD0)(v16, v15);
    }
    v23 = v15;
    if ( v15 )
    {
      v21 = 0LL;
      v17 = sub_1800034C8((__int64)&v21, (__int64)Name, (unsigned __int64)v15);
      v7 = v17;
      if ( v17 >= 0 )
      {
        *(_DWORD *)v15 = 1;
        *((_QWORD *)v15 + 1) = v6;
        v6 = 0LL;
        v20 = 0LL;
        *((_OWORD *)v15 + 1) = v21;
        memset(v15 + 40, 0, 0x108uLL);
        *((_QWORD *)v15 + 4) = 0LL;
        sub_1800062A8((__int64)(v15 + 40));
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v15 + 232), 0, 0);
        *((_QWORD *)v15 + 34) = 0LL;
        *((_QWORD *)v15 + 35) = 0LL;
        *((_QWORD *)v15 + 36) = 0LL;
        *((_QWORD *)v15 + 37) = 0LL;
        *a2 = v15;
        v7 = 0;
      }
      else
      {
        sub_180003268(retaddr, 325, (__int64)"wil", v17);
        if ( *((_QWORD *)&v21 + 1) )
          sub_18000336C(*((void **)&v21 + 1));
        if ( (_QWORD)v21 )
          sub_18000336C((void *)v21);
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
