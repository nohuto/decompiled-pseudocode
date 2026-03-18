/*
 * XREFs of xxxCloseClipboard @ 0x1C0059F90
 * Callers:
 *     FreeWindowStation @ 0x1C00568C0 (FreeWindowStation.c)
 *     NtUserCloseClipboard @ 0x1C0059ED0 (NtUserCloseClipboard.c)
 *     xxxSnapWindow @ 0x1C015294C (xxxSnapWindow.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0056A98 (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0057C80 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00598C8 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C005A628 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxCloseClipboard(struct tagWINDOWSTATION *a1)
{
  struct tagWINDOWSTATION *v1; // rbx
  PACCESS_TOKEN v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _KPROCESS *CurrentProcess; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  unsigned __int8 EffectiveOnly; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int8 CopyOnOpen; // [rsp+58h] [rbp+10h] BYREF
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0LL;
  v1 = a1;
  v8 = 0LL;
  if ( !a1 )
  {
    v1 = CheckClipboardAccess();
    if ( !v1 )
      return 0LL;
  }
  if ( *((_QWORD *)v1 + 10) != gptiCurrent )
  {
    UserSetLastError(1418LL);
    return 0LL;
  }
  PushW32ThreadLock((__int64)v1, &v8, UserDereferenceObject);
  ObfReferenceObject(v1);
  if ( (*((_DWORD *)v1 + 16) & 0x40) != 0 )
  {
    MungeClipData(v1);
    CloseClipboardToken(v1);
    if ( *((_DWORD *)v1 + 34) )
    {
      ImpersonationLevel = SecurityAnonymous;
      CopyOnOpen = 0;
      EffectiveOnly = 0;
      v3 = PsReferenceImpersonationToken(KeGetCurrentThread(), &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      if ( v3 )
      {
        *((_DWORD *)v1 + 16) |= 0x400u;
      }
      else
      {
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v5, v4, v6);
        v3 = PsReferencePrimaryToken(CurrentProcess);
      }
      *((_QWORD *)v1 + 20) = v3;
    }
  }
  HMAssignmentUnlock((char *)v1 + 96);
  *((_QWORD *)v1 + 10) = 0LL;
  if ( (*((_DWORD *)v1 + 16) & 0x40) != 0 )
    xxxDrawClipboard(v1);
  PopAndFreeW32ThreadLock(&v8);
  return 1LL;
}
