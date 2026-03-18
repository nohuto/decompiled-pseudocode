/*
 * XREFs of xxxSetShellWindow @ 0x1C007FB34
 * Callers:
 *     NtUserSetShellWindowEx @ 0x1C0081DA0 (NtUserSetShellWindowEx.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C002ED74 (_RegisterHotKey.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     CleanupIAMAccess @ 0x1C007F870 (CleanupIAMAccess.c)
 *     DwmAsyncShellWindowChange @ 0x1C0080AA4 (DwmAsyncShellWindowChange.c)
 *     xxxGenerateIAMKey @ 0x1C0081D48 (xxxGenerateIAMKey.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall xxxSetShellWindow(struct tagWND *a1, struct tagWND *a2)
{
  _QWORD *v4; // rsi
  struct tagWND **v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  void *v10; // rax
  __int64 v12; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-38h]
  _QWORD *v14; // [rsp+40h] [rbp-18h] BYREF
  struct tagWND *v15; // [rsp+48h] [rbp-10h]

  v4 = *(_QWORD **)(*((_QWORD *)a1 + 2) + 464LL);
  v5 = (struct tagWND **)(v4 + 21);
  if ( v4[21] )
  {
    v12 = 5LL;
LABEL_15:
    UserSetLastError(v12);
    return 0LL;
  }
  v6 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v6 + 31) & 0xC0) == 0x40 || *((_QWORD *)a1 + 15) || (*(_BYTE *)(v6 + 24) & 8) != 0 )
  {
    v12 = 87LL;
    goto LABEL_15;
  }
  LODWORD(BugCheckParameter2) = 27;
  RegisterHotKey(a1, 0LL, 61744LL, 2, BugCheckParameter2);
  v7 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  if ( v7 && (!v4[22] || (*(_DWORD *)(v7 + 820) & 0x30) == 0x20) )
    v4[22] = v7;
  v8 = *v4;
  v9 = *((_QWORD *)a1 + 6);
  v14 = v4 + 21;
  v15 = a1;
  *(_QWORD *)(v8 + 24) = v9;
  HMAssignmentLock(&v14);
  CleanupIAMAccess(*(struct tagDESKTOP **)(gptiCurrent + 456LL));
  xxxGenerateIAMKey(*(_QWORD *)(gptiCurrent + 456LL));
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v10 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL));
    DwmAsyncShellWindowChange(v10);
  }
  v15 = a2;
  v14 = v4 + 23;
  HMAssignmentLock(&v14);
  SetOrClrWF(1LL, *v5, 1056LL, 1LL);
  xxxSetWindowPos(*v5, 1LL, 0LL, 0LL, 0, 0, 19);
  return 1LL;
}
