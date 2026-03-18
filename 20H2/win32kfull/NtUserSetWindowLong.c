/*
 * XREFs of NtUserSetWindowLong @ 0x1C00F0020
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxSetWindowLong @ 0x1C00F0128 (xxxSetWindowLong.c)
 *     DesktopVerifyHeapRange @ 0x1C00F14E8 (DesktopVerifyHeapRange.c)
 */

__int64 __fastcall NtUserSetWindowLong(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  v14 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwndEx(a1, 1LL, 1LL);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v14;
    *((_QWORD *)&v14 + 1) = v4;
    HMLockObject(v4);
    if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
    {
      if ( a2 != -21 )
      {
        UserSetLastError(87LL, v8, v9);
        goto LABEL_4;
      }
      DesktopVerifyHeapRange(*(_QWORD *)(v7 + 24), *(_QWORD *)(v7 + 40), 320LL);
    }
    v6 = xxxSetWindowLong((struct tagWND *)v7, 1);
LABEL_4:
    ThreadUnlock1(v11, v10, v12);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
