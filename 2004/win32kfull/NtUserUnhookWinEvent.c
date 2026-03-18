/*
 * XREFs of NtUserUnhookWinEvent @ 0x1C00435E0
 * Callers:
 *     <none>
 * Callees:
 *     _UnhookWinEvent @ 0x1C0043688 (_UnhookWinEvent.c)
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00AFFC8 (--0-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00B01A4 (--0-$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C00B01F8 (--1-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserUnhookWinEvent(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  tagDomLock *v10; // [rsp+48h] [rbp+10h] BYREF
  char v11; // [rsp+50h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(v9, gptiCurrent + 384LL);
  CLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v10);
  LOBYTE(v2) = 15;
  v3 = HMValidateHandle(a1, v2);
  v4 = 0;
  if ( v3 )
    v4 = UnhookWinEvent(v3);
  tagDomLock::UnLockExclusive(v10);
  CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::~CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(v9);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v4;
}
