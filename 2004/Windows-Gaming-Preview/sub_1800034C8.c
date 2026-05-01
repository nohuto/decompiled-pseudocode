/*
 * XREFs of sub_1800034C8 @ 0x1800034C8
 * Callers:
 *     sub_1800081FC @ 0x1800081FC (sub_1800081FC.c)
 *     sub_18000870C @ 0x18000870C (sub_18000870C.c)
 * Callees:
 *     sub_180001A2C @ 0x180001A2C (sub_180001A2C.c)
 *     sub_180001AB8 @ 0x180001AB8 (sub_180001AB8.c)
 *     sub_1800022EC @ 0x1800022EC (sub_1800022EC.c)
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18000335C @ 0x18000335C (sub_18000335C.c)
 *     sub_18000336C @ 0x18000336C (sub_18000336C.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800034C8(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  LONG v7; // ebx
  LONG v8; // r14d
  LONG v9; // r8d
  __int64 v10; // rdx
  HANDLE Semaphore; // r15
  void *v12; // rsi
  DWORD LastError; // ebx
  int v14; // ebx
  int v15; // edx
  HANDLE v16; // rbp
  void *v17; // rsi
  DWORD v18; // ebx
  WCHAR Name[264]; // [rsp+30h] [rbp-248h] BYREF
  __int64 retaddr; // [rsp+278h] [rbp+0h]

  if ( (a3 & 3) != 0 )
    sub_18000335C();
  v4 = a3 >> 2;
  sub_180001A2C(Name, 260LL, a2);
  sub_180001AB8(Name, v5, (__int64)L"_p0");
  v6 = v4 >> 31;
  v7 = v4 & 0x7FFFFFFF;
  v8 = 1;
  v9 = 1;
  if ( v7 )
    v9 = v7;
  Semaphore = CreateSemaphoreExW(0LL, v7, v9, Name, 0, 0x1F0003u);
  if ( Semaphore )
  {
    v12 = *(void **)a1;
    if ( *(_QWORD *)a1 )
    {
      LastError = GetLastError();
      sub_18000336C(v12);
      SetLastError(LastError);
    }
    *(_QWORD *)a1 = Semaphore;
    v14 = 0;
  }
  else
  {
    v14 = sub_1800022EC();
  }
  if ( v14 >= 0 )
  {
    sub_180001AB8(Name, v10, (__int64)L"h");
    if ( (_DWORD)v6 )
      v8 = v6;
    v16 = CreateSemaphoreExW(0LL, v6, v8, Name, 0, 0x1F0003u);
    if ( v16 )
    {
      v17 = *(void **)(a1 + 8);
      if ( v17 )
      {
        v18 = GetLastError();
        sub_18000336C(v17);
        SetLastError(v18);
      }
      *(_QWORD *)(a1 + 8) = v16;
      v14 = 0;
    }
    else
    {
      v14 = sub_1800022EC();
    }
    if ( v14 >= 0 )
      return 0;
    v15 = 137;
  }
  else
  {
    v15 = 133;
  }
  sub_180003268(retaddr, v15, (__int64)"wil", v14);
  return (unsigned int)v14;
}
