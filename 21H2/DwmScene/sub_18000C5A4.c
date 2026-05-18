/*
 * XREFs of sub_18000C5A4 @ 0x18000C5A4
 * Callers:
 *     sub_18000D5A0 @ 0x18000D5A0 (sub_18000D5A0.c)
 *     sub_18001BDF0 @ 0x18001BDF0 (sub_18001BDF0.c)
 * Callees:
 *     sub_18000C578 @ 0x18000C578 (sub_18000C578.c)
 *     sub_18000CD78 @ 0x18000CD78 (sub_18000CD78.c)
 *     sub_18000DD78 @ 0x18000DD78 (sub_18000DD78.c)
 *     sub_18000E78C @ 0x18000E78C (sub_18000E78C.c)
 *     sub_18000E8D0 @ 0x18000E8D0 (sub_18000E8D0.c)
 *     sub_18000EE98 @ 0x18000EE98 (sub_18000EE98.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18000C5A4(__int64 a1, __int64 a2, char a3, unsigned __int64 a4)
{
  unsigned __int64 v7; // r14
  LONG v8; // ebx
  LONG v9; // r15d
  LONG v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  HANDLE Semaphore; // r12
  void *v14; // rsi
  DWORD LastError; // ebx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  HANDLE v21; // rbp
  void *v22; // rsi
  DWORD v23; // ebx
  int v24; // [rsp+20h] [rbp-268h]
  __int64 dwDesiredAccess; // [rsp+28h] [rbp-260h]
  WCHAR Name[264]; // [rsp+30h] [rbp-258h] BYREF
  void *retaddr; // [rsp+288h] [rbp+0h]

  if ( !a3 )
  {
    if ( (a4 & 0xFFFFFFFF80000000uLL) == 0 )
      goto LABEL_3;
LABEL_26:
    sub_18000EE98();
  }
  if ( (a4 & 0xC000000000000000uLL) != 0 )
    goto LABEL_26;
LABEL_3:
  sub_18000E8D0(Name, 260LL, a2);
  sub_18000E78C(Name, 260LL, L"_p0");
  v7 = a4 >> 31;
  v8 = a4 & 0x7FFFFFFF;
  v9 = 1;
  v10 = 1;
  if ( v8 )
    v10 = v8;
  Semaphore = CreateSemaphoreExW(0LL, v8, v10, Name, 0, 0x1F0003u);
  if ( Semaphore )
  {
    v14 = *(void **)a1;
    if ( *(_QWORD *)a1 )
    {
      LastError = GetLastError();
      sub_18000C578(v14);
      SetLastError(LastError);
    }
    *(_QWORD *)a1 = Semaphore;
    v16 = 0;
  }
  else
  {
    v16 = sub_18000CD78(v12, v11);
  }
  if ( v16 < 0 )
  {
    v17 = 133LL;
LABEL_14:
    sub_18000DD78(retaddr, v17, &unk_18013FEA4, (unsigned int)v16, v24, dwDesiredAccess);
    return (unsigned int)v16;
  }
  if ( a3 )
  {
    sub_18000E78C(Name, 260LL, L"h");
    if ( (_DWORD)v7 )
      v9 = v7;
    v21 = CreateSemaphoreExW(0LL, v7, v9, Name, 0, 0x1F0003u);
    if ( v21 )
    {
      v22 = *(void **)(a1 + 8);
      if ( v22 )
      {
        v23 = GetLastError();
        sub_18000C578(v22);
        SetLastError(v23);
      }
      *(_QWORD *)(a1 + 8) = v21;
      v16 = 0;
    }
    else
    {
      v16 = sub_18000CD78(v20, v19);
    }
    if ( v16 < 0 )
    {
      v17 = 137LL;
      goto LABEL_14;
    }
  }
  return 0LL;
}
