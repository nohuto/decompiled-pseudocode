/*
 * XREFs of xxxSetClipboardViewer @ 0x1C0123180
 * Callers:
 *     NtUserSetClipboardViewer @ 0x1C01230B0 (NtUserSetClipboardViewer.c)
 * Callees:
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0014360 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0016C78 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D8200 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxSetClipboardViewer(__int64 a1, __int64 a2, __int64 a3)
{
  struct tagWINDOWSTATION *v4; // rax
  struct tagWINDOWSTATION *v5; // rdi
  _QWORD *v6; // rsi
  _QWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v10 = 0LL;
  v9 = 0LL;
  if ( a1 && *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0 )
    goto LABEL_11;
  v4 = CheckClipboardAccess();
  v5 = v4;
  if ( !v4 )
    return 0LL;
  if ( a1 )
  {
    a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL);
    if ( *(struct tagWINDOWSTATION **)(a2 + 664) != v4 )
    {
LABEL_11:
      UserSetLastError(87LL, a2, a3);
      return 0LL;
    }
  }
  PushW32ThreadLock((__int64)v4, &v9, UserDereferenceObject);
  ObfReferenceObject(v5);
  v6 = (_QWORD *)*((_QWORD *)v5 + 13);
  if ( v6 )
    v6 = (_QWORD *)*v6;
  v8[0] = (char *)v5 + 104;
  v8[1] = a1;
  HMAssignmentLock(v8);
  xxxDrawClipboard(v5);
  PopAndFreeW32ThreadLock((__int64)&v9);
  if ( !v6 )
    return 0LL;
  return HMValidateHandleNoSecure((unsigned __int64)v6, 1);
}
