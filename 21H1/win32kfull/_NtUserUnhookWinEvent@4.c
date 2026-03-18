/*
 * XREFs of _NtUserUnhookWinEvent@4 @ 0x13596
 * Callers:
 *     <none>
 * Callees:
 *     __UnhookWinEvent@4 @ 0x13618 (__UnhookWinEvent@4.c)
 *     ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QAE@XZ @ 0x1437E (--1-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QAE@XZ.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QAE@XZ @ 0x147B8 (--0-$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QAE@XZ.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QAE@AAUtagObjLock@@@Z @ 0x42C64 (--0-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QAE@AAUtagObjLock@@@Z.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 */

int __stdcall NtUserUnhookWinEvent(int a1)
{
  int v1; // esi
  int v2; // edx
  int v3; // eax
  tagDomLock *v5; // [esp+4h] [ebp-14h] BYREF
  _BYTE v6[8]; // [esp+8h] [ebp-10h] BYREF
  _BYTE v7[8]; // [esp+10h] [ebp-8h] BYREF

  v1 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v7);
  CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(_gptiCurrent + 216);
  CLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v5);
  LOBYTE(v2) = 15;
  v3 = HMValidateHandle(a1, v2);
  if ( v3 )
    v1 = _UnhookWinEvent(v3);
  tagDomLock::UnLockExclusive(v5);
  CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::~CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(v6);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v7);
  UserSessionSwitchLeaveCrit();
  return v1;
}
