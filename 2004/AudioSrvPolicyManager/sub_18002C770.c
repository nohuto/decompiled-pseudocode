/*
 * XREFs of sub_18002C770 @ 0x18002C770
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18000FBC8 @ 0x18000FBC8 (sub_18000FBC8.c)
 *     sub_180010888 @ 0x180010888 (sub_180010888.c)
 *     sub_18001DBC4 @ 0x18001DBC4 (sub_18001DBC4.c)
 *     sub_18001FA04 @ 0x18001FA04 (sub_18001FA04.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18002C770(__int64 a1)
{
  BOOL v2; // r14d
  volatile signed __int32 *v3; // r15
  unsigned int v4; // ebp
  int v5; // r13d
  __int64 v6; // rbx
  const WCHAR *v7; // rdi
  __int64 v8; // rsi
  struct _RTL_CRITICAL_SECTION *v9; // r12
  int v10; // ebx
  int v11; // [rsp+90h] [rbp+8h] BYREF
  int v12; // [rsp+98h] [rbp+10h] BYREF
  volatile signed __int32 *v13; // [rsp+A0h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+A8h] [rbp+20h]

  v2 = 0;
  v3 = 0LL;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_18000FBC8(
      *((_QWORD *)off_18004F000 + 2),
      0x14u,
      &stru_180045198,
      *(const wchar_t **)(a1 + 8),
      *(_DWORD *)(a1 + 16));
  }
  v4 = *(_DWORD *)(a1 + 20);
  v5 = *(_DWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(const WCHAR **)(a1 + 8);
  v8 = qword_18004FE78;
  v9 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v14 = v9;
  v11 = 0;
  v12 = 0;
  v10 = sub_18001DBC4(v8, v7, v6, v4, &v13, 1, &v11);
  if ( v10 >= 0 )
  {
    v3 = v13;
    sub_180010888((__int64)v13, v5, &v12);
    v2 = v11 || v12;
  }
  if ( v9 )
    LeaveCriticalSection(v9);
  if ( v10 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x15u, &stru_180045198, v10);
    }
    sub_180005724("CAppStateChangedWorkItem::Invoke", 586, v10);
  }
  else if ( v2 )
  {
    sub_18001FA04(qword_18004FE78, (__int64)v3);
  }
}
