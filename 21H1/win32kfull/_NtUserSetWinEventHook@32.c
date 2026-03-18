/*
 * XREFs of _NtUserSetWinEventHook@32 @ 0x13974
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QAE@XZ @ 0x1437E (--1-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QAE@XZ.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QAE@XZ @ 0x147B8 (--0-$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QAE@XZ.c)
 *     __SetWinEventHook@32 @ 0x148F0 (__SetWinEventHook@32.c)
 *     ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QAE@AAUtagObjLock@@@Z @ 0x42C64 (--0-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QAE@AAUtagObjLock@@@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserSetWinEventHook(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // esi
  int *v9; // edi
  _BYTE v11[8]; // [esp+4h] [ebp-Ch] BYREF
  tagDomLock *v12; // [esp+Ch] [ebp-4h] BYREF

  v8 = 0;
  EnterCrit(0, 1);
  if ( (a8 & 0xFFFFFFF0) != 0 )
  {
    UserSetLastError(1004);
  }
  else
  {
    CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(_gptiCurrent + 216);
    CLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v12);
    v9 = (int *)_SetWinEventHook(a3, a4, a5, a6, a7, a8);
    tagDomLock::UnLockExclusive(v12);
    CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::~CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(v11);
    if ( v9 )
      v8 = *v9;
    EtwTraceAuditApiSetWinEventHook(a1, a2, a6, a7, a8, v8);
  }
  UserSessionSwitchLeaveCrit();
  return v8;
}
