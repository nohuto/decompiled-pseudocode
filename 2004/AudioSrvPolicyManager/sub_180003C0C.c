/*
 * XREFs of sub_180003C0C @ 0x180003C0C
 * Callers:
 *     sub_180004AC4 @ 0x180004AC4 (sub_180004AC4.c)
 * Callees:
 *     sub_18000206C @ 0x18000206C (sub_18000206C.c)
 *     sub_18000295C @ 0x18000295C (sub_18000295C.c)
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180003B7C @ 0x180003B7C (sub_180003B7C.c)
 *     sub_180003B8C @ 0x180003B8C (sub_180003B8C.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180003C0C(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  WCHAR *v9; // rcx
  LONG v10; // esi
  WCHAR v11; // ax
  WCHAR *v12; // rax
  LONG v13; // r8d
  unsigned __int64 v14; // r14
  LONG v15; // ebx
  __int64 v16; // rdx
  HANDLE Semaphore; // r15
  void *v18; // rbp
  DWORD LastError; // ebx
  int v20; // ebx
  int v21; // edx
  HANDLE v23; // rbp
  void *v24; // rsi
  DWORD v25; // ebx
  WCHAR Name[264]; // [rsp+30h] [rbp-248h] BYREF
  __int64 retaddr; // [rsp+278h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    sub_180003B7C();
  v7 = 260LL;
  v8 = a2 - (_QWORD)Name;
  v9 = Name;
  v10 = 1;
  do
  {
    if ( v7 == -2147483386 )
      break;
    v11 = *(WCHAR *)((char *)v9 + v8);
    if ( !v11 )
      break;
    *v9++ = v11;
    --v7;
  }
  while ( v7 );
  v12 = v9 - 1;
  if ( v7 )
    v12 = v9;
  *v12 = 0;
  sub_18000206C(Name, v7, (__int64)L"_p0");
  v13 = 1;
  v14 = a4 >> 31;
  v15 = a4 & 0x7FFFFFFF;
  if ( v15 )
    v13 = v15;
  Semaphore = CreateSemaphoreExW(0LL, v15, v13, Name, 0, 0x1F0003u);
  if ( Semaphore )
  {
    v18 = *(void **)a1;
    if ( *(_QWORD *)a1 )
    {
      LastError = GetLastError();
      sub_180003B8C(v18);
      SetLastError(LastError);
    }
    *(_QWORD *)a1 = Semaphore;
    v20 = 0;
  }
  else
  {
    v20 = sub_18000295C();
  }
  if ( v20 < 0 )
  {
    v21 = 133;
LABEL_17:
    sub_180003AB0(retaddr, v21, (__int64)"wil", v20);
    return (unsigned int)v20;
  }
  sub_18000206C(Name, v16, (__int64)L"h");
  if ( (_DWORD)v14 )
    v10 = v14;
  v23 = CreateSemaphoreExW(0LL, v14, v10, Name, 0, 0x1F0003u);
  if ( v23 )
  {
    v24 = *(void **)(a1 + 8);
    if ( v24 )
    {
      v25 = GetLastError();
      sub_180003B8C(v24);
      SetLastError(v25);
    }
    *(_QWORD *)(a1 + 8) = v23;
    v20 = 0;
  }
  else
  {
    v20 = sub_18000295C();
  }
  if ( v20 < 0 )
  {
    v21 = 137;
    goto LABEL_17;
  }
  return 0LL;
}
