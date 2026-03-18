/*
 * XREFs of NtUserSetWindowLong @ 0x1C00A46B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxSetWindowLong @ 0x1C00A488C (xxxSetWindowLong.c)
 *     DesktopVerifyHeapRange @ 0x1C00F6C88 (DesktopVerifyHeapRange.c)
 */

__int64 __fastcall NtUserSetWindowLong(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-18h]

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwndEx(a1, 1LL, 1LL);
  v8 = 0;
  v9 = v4;
  if ( v4 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v16;
    *((_QWORD *)&v16 + 1) = v4;
    HMLockObject(v4);
    if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
    {
      if ( a2 != -21 )
      {
        UserSetLastError(87LL, v10, v11);
        goto LABEL_4;
      }
      DesktopVerifyHeapRange(*(_QWORD *)(v9 + 24), *(_QWORD *)(v9 + 40), 320LL);
    }
    v8 = xxxSetWindowLong((struct tagWND *)v9, 1);
LABEL_4:
    ThreadUnlock1(v13, v12, v14);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v8;
}
