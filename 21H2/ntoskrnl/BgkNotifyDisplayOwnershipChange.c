/*
 * XREFs of BgkNotifyDisplayOwnershipChange @ 0x1403A78F0
 * Callers:
 *     BgkSetDisplayOwnership @ 0x1403DF720 (BgkSetDisplayOwnership.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x1405514D0 (BgkNotifyDisplayOwnershipLost.c)
 *     BvgaNotifyDisplayOwnershipChange @ 0x1405519D0 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     BgLibraryEnable @ 0x140398ECC (BgLibraryEnable.c)
 *     BgkpTryEnableConsole @ 0x1403A78C0 (BgkpTryEnableConsole.c)
 *     InbvSetFunction @ 0x1403D7134 (InbvSetFunction.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     BgkResumeFinished @ 0x140A4E360 (BgkResumeFinished.c)
 *     BgSetFrameBufferAccess @ 0x140AAB008 (BgSetFrameBufferAccess.c)
 *     BgkpLockBgfxCodeSection @ 0x140AAB660 (BgkpLockBgfxCodeSection.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140AAB6EC (BgkpUnlockBgfxCodeSection.c)
 *     BgDisplayFade @ 0x140AAB76C (BgDisplayFade.c)
 *     BgConsoleGetInterface @ 0x140AABC94 (BgConsoleGetInterface.c)
 *     BgkDestroy @ 0x140AAE8BC (BgkDestroy.c)
 *     BgLibraryDisable @ 0x140AAE8DC (BgLibraryDisable.c)
 *     BgConsoleDestroyInterface @ 0x140AAE968 (BgConsoleDestroyInterface.c)
 */

__int64 __fastcall BgkNotifyDisplayOwnershipChange(char a1, __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD))
{
  __int64 result; // rax
  int v3; // ebx
  int v4; // eax
  char v5; // cl
  void (__fastcall **Interface)(_QWORD, __int64, _QWORD, _QWORD); // rax
  __int64 (*v7)(void); // [rsp+30h] [rbp-48h] BYREF
  _OWORD v8[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v9; // [rsp+58h] [rbp-20h]

  result = 0LL;
  memset(v8, 0, sizeof(v8));
  v9 = 0LL;
  if ( byte_140C547E0 && !a1 )
  {
    BgkResumeFinished();
    qword_140C54D40 = 0LL;
    result = 0LL;
    byte_140C54D49 = 0;
    return result;
  }
  if ( a1 != byte_140C54D49 )
  {
    if ( !a1 )
    {
      if ( a2 )
      {
        qword_140C54D28 = a2;
      }
      else if ( !qword_140C54D28 )
      {
        return 3221225712LL;
      }
      BgDisplayFade();
      byte_140C54905 = 0;
      byte_140C54904 = 0;
      ExWaitForRundownProtectionRelease(&stru_140C0B8C8);
      ExRundownCompleted(&stru_140C0B8C8);
      v3 = BgLibraryDisable();
      if ( v3 < 0 )
      {
        BgkDestroy();
        InbvSetFunction(3LL);
        v3 = 0;
      }
      else
      {
        byte_140C54D49 = 0;
        byte_140C54D38 = 0;
        if ( qword_140C54D30 )
        {
          BgConsoleDestroyInterface();
          qword_140C54D30 = 0LL;
        }
      }
      BgSetFrameBufferAccess(0LL, 0LL, 0LL);
      BgkpUnlockBgfxCodeSection();
      if ( qword_140C54D40 )
      {
        qword_140C54D40();
        qword_140C54D40 = 0LL;
      }
      return (unsigned int)v3;
    }
    if ( !qword_140C54D28 )
      return 3221225473LL;
    v7 = 0LL;
    result = qword_140C54D28(0LL, v8, &v7);
    if ( (int)result >= 0 )
    {
      qword_140C54D40 = v7;
      BgkpLockBgfxCodeSection();
      v4 = BgLibraryEnable((__int64)v8, 0);
      v5 = byte_140C54D49;
      v3 = v4;
      if ( v4 >= 0 )
        v5 = 1;
      byte_140C54D49 = v5;
      Interface = (void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))BgConsoleGetInterface();
      qword_140C54D30 = (__int64)Interface;
      if ( Interface )
        (*Interface)(0LL, 4291217094LL, (unsigned int)dword_140D01880, 0LL);
      BgkpTryEnableConsole();
      return (unsigned int)v3;
    }
  }
  return result;
}
