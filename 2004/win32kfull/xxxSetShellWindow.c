/*
 * XREFs of xxxSetShellWindow @ 0x1C00BF934
 * Callers:
 *     NtUserSetShellWindowEx @ 0x1C00BFBD0 (NtUserSetShellWindowEx.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C003D584 (_RegisterHotKey.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     CleanupIAMAccess @ 0x1C00BF4E0 (CleanupIAMAccess.c)
 *     DwmAsyncShellWindowChange @ 0x1C00BFAE0 (DwmAsyncShellWindowChange.c)
 *     xxxGenerateIAMKey @ 0x1C00BFB70 (xxxGenerateIAMKey.c)
 */

__int64 __fastcall xxxSetShellWindow(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rsi
  __int64 *v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // rax
  __int64 v13; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-38h]
  _QWORD *v15; // [rsp+40h] [rbp-18h] BYREF
  struct tagWND *v16; // [rsp+48h] [rbp-10h]

  v5 = *(__int64 **)(*((_QWORD *)a1 + 2) + 456LL);
  v6 = v5 + 21;
  if ( v5[21] )
  {
    v13 = 5LL;
LABEL_15:
    UserSetLastError(v13, a2, a3);
    return 0LL;
  }
  v7 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v7 + 31) & 0xC0) == 0x40 || *((_QWORD *)a1 + 15) || (*(_BYTE *)(v7 + 24) & 8) != 0 )
  {
    v13 = 87LL;
    goto LABEL_15;
  }
  LODWORD(BugCheckParameter2) = 27;
  RegisterHotKey(a1, 0LL, 61744, 2, BugCheckParameter2);
  v8 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
  if ( v8 && (!v5[22] || (*(_DWORD *)(v8 + 820) & 0x30) == 0x20) )
    v5[22] = v8;
  v9 = *v5;
  v10 = *((_QWORD *)a1 + 6);
  v15 = v5 + 21;
  v16 = a1;
  *(_QWORD *)(v9 + 24) = v10;
  HMAssignmentLock(&v15);
  CleanupIAMAccess(*(struct tagDESKTOP **)(gptiCurrent + 448LL));
  xxxGenerateIAMKey(*(_QWORD *)(gptiCurrent + 448LL));
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v11 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL));
    DwmAsyncShellWindowChange(v11);
  }
  v16 = (struct tagWND *)a2;
  v15 = v5 + 23;
  HMAssignmentLock(&v15);
  SetOrClrWF(1, *v6, 0x420u, 1);
  xxxSetWindowPos((struct tagWND *)*v6, 1LL, 0LL, 0LL, 0, 0, 19);
  return 1LL;
}
