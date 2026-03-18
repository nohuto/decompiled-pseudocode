/*
 * XREFs of NtUserSetWindowLongPtr @ 0x1C00A6820
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00A6928 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     DesktopVerifyHeapRange @ 0x1C00F6C88 (DesktopVerifyHeapRange.c)
 */

unsigned __int64 __fastcall NtUserSetWindowLongPtr(__int64 a1, int a2, unsigned __int64 a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int128 v20; // [rsp+30h] [rbp-28h] BYREF
  __int64 v21; // [rsp+40h] [rbp-18h]

  v20 = 0LL;
  v21 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwndEx(a1, 1LL, 1LL);
  v12 = 0LL;
  v13 = v8;
  if ( v8 )
  {
    *(_QWORD *)&v20 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v20;
    *((_QWORD *)&v20 + 1) = v8;
    HMLockObject(v8);
    if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
    {
      if ( a2 != -21 )
      {
        UserSetLastError(87LL, v14, v15);
        goto LABEL_4;
      }
      DesktopVerifyHeapRange(*(_QWORD *)(v13 + 24), *(_QWORD *)(v13 + 40), 320LL);
    }
    v12 = xxxSetWindowLongPtr((struct tagWND *)v13, a2, a3, a4, 1);
LABEL_4:
    ThreadUnlock1(v17, v16, v18);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  return v12;
}
