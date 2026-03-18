/*
 * XREFs of NtUserUnhookWinEvent @ 0x1C0078710
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C0076C44 (--1-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C0077074 (--0-$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00770C8 (--0-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     _UnhookWinEvent @ 0x1C00787B8 (_UnhookWinEvent.c)
 *     HMValidateHandle @ 0x1C0095000 (HMValidateHandle.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserUnhookWinEvent(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // rcx
  tagDomLock *v7[3]; // [rsp+20h] [rbp-18h] BYREF
  tagDomLock *v8; // [rsp+48h] [rbp+10h] BYREF
  char v9; // [rsp+50h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(
    v7,
    (tagDomLock *)(gptiCurrent + 392LL));
  CLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v8);
  LOBYTE(v2) = 15;
  v3 = HMValidateHandle(a1, v2);
  v4 = 0;
  if ( v3 )
    v4 = UnhookWinEvent(v3);
  tagDomLock::UnLockExclusive(v8);
  CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::~CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(v7);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
