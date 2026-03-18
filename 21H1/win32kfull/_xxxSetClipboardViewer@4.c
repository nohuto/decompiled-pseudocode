/*
 * XREFs of _xxxSetClipboardViewer@4 @ 0x183220
 * Callers:
 *     _NtUserSetClipboardViewer@4 @ 0x169146 (_NtUserSetClipboardViewer@4.c)
 * Callees:
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ @ 0x91C96 (-CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ.c)
 *     ?xxxDrawClipboard@@YGXPAUtagWINDOWSTATION@@@Z @ 0x182559 (-xxxDrawClipboard@@YGXPAUtagWINDOWSTATION@@@Z.c)
 */

int __thiscall xxxSetClipboardViewer(_DWORD *this)
{
  struct tagWINDOWSTATION *v2; // eax
  struct tagWINDOWSTATION *v3; // esi
  int v5; // edx
  int v6; // ecx
  _DWORD *v7; // edi
  _DWORD v8[3]; // [esp+Ch] [ebp-Ch] BYREF

  memset(v8, 0, sizeof(v8));
  if ( this && *(char *)(this[5] + 11) < 0 )
    goto LABEL_6;
  v2 = CheckClipboardAccess();
  v3 = v2;
  if ( !v2 )
    return 0;
  if ( this && *(struct tagWINDOWSTATION **)(*(_DWORD *)(this[2] + 232) + 356) != v2 )
  {
LABEL_6:
    UserSetLastError((struct _NT_TIB *)0x57);
    return 0;
  }
  PushW32ThreadLock((int)v2, v8, (int)UserDereferenceObject);
  ObfReferenceObject(v3);
  v7 = (_DWORD *)*((_DWORD *)v3 + 13);
  if ( v7 )
    v7 = (_DWORD *)*v7;
  HMAssignmentLock(v6, v5);
  xxxDrawClipboard((int)v3);
  PopAndFreeW32ThreadLock((int)v8);
  if ( !v7 )
    return 0;
  return HMValidateHandleNoSecure((unsigned int)v7, 1);
}
