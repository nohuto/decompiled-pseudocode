/*
 * XREFs of NtUserSetWinEventHook @ 0x1C0043E80
 * Callers:
 *     <none>
 * Callees:
 *     _SetWinEventHook @ 0x1C0043FA4 (_SetWinEventHook.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00AFFC8 (--0-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00B01A4 (--0-$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C00B01F8 (--1-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserSetWinEventHook(
        unsigned int a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  __int64 *v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  tagDomLock *v18; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v19[24]; // [rsp+48h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a8 & 0xFFFFFFF0) != 0 )
  {
    UserSetLastError(1004LL);
    v13 = 0LL;
  }
  else
  {
    CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(
      v19,
      gptiCurrent + 384LL);
    CLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v18);
    v12 = (__int64 *)SetWinEventHook(a1, a2, a3, a4, a5, (int)a6, a7, a8);
    tagDomLock::UnLockExclusive(v18);
    CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::~CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(v19);
    v13 = 0LL;
    if ( v12 )
      v13 = *v12;
    EtwTraceAuditApiSetWinEventHook(a1, a2, a6, a7, a8, v13);
  }
  UserSessionSwitchLeaveCrit(v15, v14, v16);
  return v13;
}
