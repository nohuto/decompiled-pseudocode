/*
 * XREFs of xxxSetClipboardViewer @ 0x1C00567D0
 * Callers:
 *     NtUserSetClipboardViewer @ 0x1C0056700 (NtUserSetClipboardViewer.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0057C80 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C005A628 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxSetClipboardViewer(__int64 a1)
{
  struct tagWINDOWSTATION *v2; // rax
  struct tagWINDOWSTATION *v3; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  _QWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v9 = 0LL;
  v8 = 0LL;
  if ( a1 && *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0 )
    goto LABEL_11;
  v2 = CheckClipboardAccess();
  v3 = v2;
  if ( !v2 )
    return 0LL;
  if ( a1 && *(struct tagWINDOWSTATION **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 664LL) != v2 )
  {
LABEL_11:
    UserSetLastError(87LL);
    return 0LL;
  }
  PushW32ThreadLock((__int64)v2, &v8, UserDereferenceObject);
  ObfReferenceObject(v3);
  v4 = (_QWORD *)*((_QWORD *)v3 + 13);
  if ( v4 )
    v4 = (_QWORD *)*v4;
  v7[0] = (char *)v3 + 104;
  v7[1] = a1;
  HMAssignmentLock(v7);
  xxxDrawClipboard(v3);
  PopAndFreeW32ThreadLock(&v8);
  if ( !v4 )
    return 0LL;
  LOBYTE(v5) = 1;
  return HMValidateHandleNoSecure(v4, v5);
}
