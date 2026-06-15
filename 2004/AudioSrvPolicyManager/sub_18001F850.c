/*
 * XREFs of sub_18001F850 @ 0x18001F850
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180010980 @ 0x180010980 (sub_180010980.c)
 *     sub_18001A790 @ 0x18001A790 (sub_18001A790.c)
 *     sub_18001DBC4 @ 0x18001DBC4 (sub_18001DBC4.c)
 *     sub_18001FA04 @ 0x18001FA04 (sub_18001FA04.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001F850(__int64 a1, __int64 a2, __int64 a3)
{
  BOOL v5; // ebp
  volatile signed __int32 *v6; // r14
  const char *v7; // rax
  int v8; // r12d
  unsigned int v9; // ebx
  __int64 v10; // rdi
  const WCHAR *v11; // rsi
  int v12; // ebx
  int v14; // [rsp+90h] [rbp+8h] BYREF
  int v15; // [rsp+98h] [rbp+10h] BYREF
  volatile signed __int32 *v16; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+20h]

  v5 = 0;
  v6 = 0LL;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    v7 = "HAC_NON_INTERACTIVE";
    if ( *(_DWORD *)(a2 + 12) )
      v7 = "HAC_INTERACTIVE";
    sub_18001A790(
      *((_QWORD *)off_18004F000 + 2),
      (__int64)"HAC_INTERACTIVE",
      a3,
      *(const wchar_t **)a2,
      *(_QWORD *)(a2 + 16),
      v7);
  }
  v8 = *(_DWORD *)(a2 + 12);
  v9 = *(_DWORD *)(a2 + 8);
  v10 = *(_QWORD *)(a2 + 16);
  v11 = *(const WCHAR **)a2;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v17 = a1 + 32;
  v14 = 0;
  v15 = 0;
  v12 = sub_18001DBC4(a1, v11, v10, v9, &v16, 1, &v14);
  if ( v12 >= 0 )
  {
    v12 = sub_180010980((__int64)v16, v8, &v15);
    if ( v12 >= 0 )
    {
      v5 = v14 || v15;
      v6 = v16;
    }
  }
  if ( a1 != -32 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( v12 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x30u, &stru_1800445C8, v12);
    }
    sub_180005724("CApplicationManager::OnHostedAppStateChanged", 2809, v12);
  }
  else if ( v5 )
  {
    sub_18001FA04(a1, v6);
  }
  return (unsigned int)v12;
}
