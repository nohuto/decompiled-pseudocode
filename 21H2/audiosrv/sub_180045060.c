/*
 * XREFs of sub_180045060 @ 0x180045060
 * Callers:
 *     sub_180010A50 @ 0x180010A50 (sub_180010A50.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180051B0C @ 0x180051B0C (sub_180051B0C.c)
 *     sub_180052284 @ 0x180052284 (sub_180052284.c)
 *     sub_1800B4E2C @ 0x1800B4E2C (sub_1800B4E2C.c)
 *     sub_18012DC50 @ 0x18012DC50 (sub_18012DC50.c)
 */

__int64 __fastcall sub_180045060(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  HANDLE v8; // rbp
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rsi
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  HANDLE v17; // rbp
  __int64 v18; // r8
  __int64 v19; // rsi
  DWORD LastError; // ebx
  __int64 v22; // rdx
  DWORD v23; // ebx
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+20h] [rbp-28h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = *(void **)(a1 + 88);
  if ( v4 )
  {
    WaitForSingleObjectEx(v4, 0xFFFFFFFF, 0);
    sub_18012DC50(a1 + 88, 0LL);
    *(_DWORD *)(a1 + 96) = 0;
  }
  EventAttributes.lpSecurityDescriptor = 0LL;
  v5 = *(_QWORD *)(a1 + 112);
  EventAttributes.nLength = 24;
  EventAttributes.bInheritHandle = 1;
  if ( v5 )
  {
    sub_180052284(v5, a2, a3);
  }
  else
  {
    v8 = CreateEventExW(&EventAttributes, 0LL, 1u, 0x1F0003u);
    if ( v8 )
    {
      GetLastError();
      v12 = *(_QWORD *)(a1 + 112);
      if ( v12 )
      {
        LastError = GetLastError();
        sub_180051B0C(v12);
        SetLastError(LastError);
      }
      *(_QWORD *)(a1 + 112) = v8;
      v13 = 0;
    }
    else
    {
      v13 = sub_1800B4E2C(v7, v6, v9);
    }
    if ( v13 < 0 )
    {
      v22 = 148LL;
      goto LABEL_22;
    }
  }
  v14 = *(_QWORD *)(a1 + 120);
  if ( v14 )
  {
    sub_180052284(v14, v10, v11);
    return 0LL;
  }
  v17 = CreateEventExW(&EventAttributes, 0LL, 1u, 0x1F0003u);
  if ( v17 )
  {
    GetLastError();
    v19 = *(_QWORD *)(a1 + 120);
    if ( v19 )
    {
      v23 = GetLastError();
      sub_180051B0C(v19);
      SetLastError(v23);
    }
    *(_QWORD *)(a1 + 120) = v17;
    v13 = 0;
  }
  else
  {
    v13 = sub_1800B4E2C(v16, v15, v18);
  }
  if ( v13 >= 0 )
    return 0LL;
  v22 = 157LL;
LABEL_22:
  sub_18004BD84(retaddr, v22, "avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp", (unsigned int)v13);
  return (unsigned int)v13;
}
