/*
 * XREFs of _xxxCloseClipboard@4 @ 0x11D76
 * Callers:
 *     _NtUserCloseClipboard@0 @ 0x11D0A (_NtUserCloseClipboard@0.c)
 *     _ForceEmptyClipboard@4 @ 0xACADE (_ForceEmptyClipboard@4.c)
 *     _xxxSnapWindow@8 @ 0x1A20A2 (_xxxSnapWindow@8.c)
 * Callees:
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ @ 0x91C96 (-CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ.c)
 *     ?CloseClipboardToken@@YGXPAUtagWINDOWSTATION@@@Z @ 0xACB28 (-CloseClipboardToken@@YGXPAUtagWINDOWSTATION@@@Z.c)
 *     ?MungeClipData@@YGXPAUtagWINDOWSTATION@@@Z @ 0x181D0D (-MungeClipData@@YGXPAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxDrawClipboard@@YGXPAUtagWINDOWSTATION@@@Z @ 0x182559 (-xxxDrawClipboard@@YGXPAUtagWINDOWSTATION@@@Z.c)
 */

int __userpurge xxxCloseClipboard@<eax>(struct tagWINDOWSTATION *a1@<ebx>, PVOID Object)
{
  struct tagWINDOWSTATION *v2; // esi
  bool v3; // zf
  struct _KTHREAD *CurrentThread; // eax
  PACCESS_TOKEN v6; // eax
  struct _KPROCESS *CurrentProcess; // eax
  struct tagWINDOWSTATION *v8; // [esp-4h] [ebp-20h]
  struct tagWINDOWSTATION *v9; // [esp+0h] [ebp-1Ch]
  _BYTE v10[12]; // [esp+8h] [ebp-14h] BYREF
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [esp+14h] [ebp-8h] BYREF
  unsigned __int8 CopyOnOpen; // [esp+1Bh] [ebp-1h] BYREF

  v2 = (struct tagWINDOWSTATION *)Object;
  memset(v10, 0, sizeof(v10));
  if ( !Object )
  {
    v2 = CheckClipboardAccess();
    if ( !v2 )
      return 0;
  }
  if ( *((_DWORD *)v2 + 10) != _gptiCurrent )
  {
    UserSetLastError(1418);
    return 0;
  }
  PushW32ThreadLock(v2, v10, UserDereferenceObject);
  ObfReferenceObject(v2);
  if ( (*((_BYTE *)v2 + 32) & 0x40) != 0 )
  {
    MungeClipData(a1);
    CloseClipboardToken(v8);
    if ( *((_DWORD *)v2 + 17) )
    {
      CopyOnOpen = 0;
      HIBYTE(Object) = 0;
      ImpersonationLevel = SecurityAnonymous;
      CurrentThread = KeGetCurrentThread();
      v6 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, (PBOOLEAN)&Object + 3, &ImpersonationLevel);
      if ( v6 )
      {
        *((_DWORD *)v2 + 8) |= 0x400u;
      }
      else
      {
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess();
        v6 = PsReferencePrimaryToken(CurrentProcess);
      }
      *((_DWORD *)v2 + 21) = v6;
    }
  }
  HMAssignmentUnlock((char *)v2 + 48);
  v3 = (*((_BYTE *)v2 + 32) & 0x40) == 0;
  *((_DWORD *)v2 + 10) = 0;
  if ( !v3 )
    xxxDrawClipboard(v9);
  PopAndFreeW32ThreadLock(v10);
  return 1;
}
