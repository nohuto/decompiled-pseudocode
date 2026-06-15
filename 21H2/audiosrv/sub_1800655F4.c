/*
 * XREFs of sub_1800655F4 @ 0x1800655F4
 * Callers:
 *     sub_1800384DC @ 0x1800384DC (sub_1800384DC.c)
 * Callees:
 *     sub_18000E660 @ 0x18000E660 (sub_18000E660.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005262C @ 0x18005262C (sub_18005262C.c)
 *     sub_180065760 @ 0x180065760 (sub_180065760.c)
 *     sub_1800658CC @ 0x1800658CC (sub_1800658CC.c)
 *     sub_180065C3C @ 0x180065C3C (sub_180065C3C.c)
 *     sub_180065C84 @ 0x180065C84 (sub_180065C84.c)
 *     sub_180068E94 @ 0x180068E94 (sub_180068E94.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800B4E2C @ 0x1800B4E2C (sub_1800B4E2C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800655F4(__int64 a1, _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _DWORD *v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rdx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v16; // r9d
  int v17; // edx
  void *v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  _UNKNOWN *retaddr; // [rsp+288h] [rbp+188h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  sub_18000E660((char *)Name, 260LL, (const char *)L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 120, a1);
  v18 = 0LL;
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  sub_180065C3C(&v18, Mutex);
  if ( !v18 )
  {
    v13 = sub_1800B4E2C(v7, v6, v8);
    goto LABEL_12;
  }
  sub_180065C84(&v18, &v20);
  v9 = 0LL;
  v10 = 0LL;
  v19 = 0LL;
  v12 = sub_1800658CC(Name, v11, &v19);
  v13 = v12;
  if ( v12 < 0 )
  {
    sub_18004BD84((int)retaddr, 98, (int)"wil", v12);
  }
  else
  {
    v10 = v19;
    v13 = 0;
  }
  if ( v13 < 0 )
  {
    sub_18004BD84((int)retaddr, 107, (int)"wil", v13);
  }
  else
  {
    v9 = (_DWORD *)(4 * v10);
    v13 = 0;
  }
  if ( v13 < 0 )
  {
    v16 = v13;
    v17 = 294;
  }
  else
  {
    if ( v9 )
    {
      *a2 = v9;
      *(_DWORD *)*a2 = *v9 + 1;
      goto LABEL_9;
    }
    v14 = sub_180065760(Name, &v18, a2);
    v13 = v14;
    if ( v14 >= 0 )
    {
LABEL_9:
      v13 = 0;
      goto LABEL_10;
    }
    v16 = v14;
    v17 = 302;
  }
  sub_18004BD84((int)retaddr, v17, (int)"wil", v16);
LABEL_10:
  if ( v20 )
    sub_180068E94();
LABEL_12:
  sub_18005262C(&v18);
  return (unsigned int)v13;
}
