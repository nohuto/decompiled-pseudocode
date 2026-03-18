/*
 * XREFs of BgkNotifyDisplayOwnershipChange @ 0x140398DB0
 * Callers:
 *     BgkSetDisplayOwnership @ 0x1403CCE10 (BgkSetDisplayOwnership.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x1404FA430 (BgkNotifyDisplayOwnershipLost.c)
 *     BvgaNotifyDisplayOwnershipChange @ 0x1404FA930 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     ExRundownCompleted @ 0x14027BE20 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402FA0C0 (ExWaitForRundownProtectionRelease.c)
 *     BgLibraryEnable @ 0x14038AF4C (BgLibraryEnable.c)
 *     BgkpTryEnableConsole @ 0x140399C90 (BgkpTryEnableConsole.c)
 *     InbvSetFunction @ 0x1403C533C (InbvSetFunction.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     BgkResumeFinished @ 0x140995FFC (BgkResumeFinished.c)
 *     BgSetFrameBufferAccess @ 0x1409EE008 (BgSetFrameBufferAccess.c)
 *     BgkpUnlockBgfxCodeSection @ 0x1409EE3F0 (BgkpUnlockBgfxCodeSection.c)
 *     BgDisplayFade @ 0x1409EE524 (BgDisplayFade.c)
 *     BgConsoleGetInterface @ 0x1409EE810 (BgConsoleGetInterface.c)
 *     BgkpLockBgfxCodeSection @ 0x1409F0730 (BgkpLockBgfxCodeSection.c)
 *     BgLibraryDisable @ 0x1409F0ED0 (BgLibraryDisable.c)
 *     BgConsoleDestroyInterface @ 0x1409F0F5C (BgConsoleDestroyInterface.c)
 *     BgkDestroy @ 0x1409F1B08 (BgkDestroy.c)
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
  if ( byte_140C50450 && !a1 )
  {
    BgkResumeFinished();
    qword_140C50990 = 0LL;
    result = 0LL;
    byte_140C50999 = 0;
    return result;
  }
  if ( a1 != byte_140C50999 )
  {
    if ( !a1 )
    {
      if ( a2 )
      {
        qword_140C50980 = a2;
      }
      else if ( !qword_140C50980 )
      {
        return 3221225712LL;
      }
      BgDisplayFade();
      byte_140C50545 = 0;
      byte_140C50544 = 0;
      ExWaitForRundownProtectionRelease(&stru_140C11238);
      ExRundownCompleted(&stru_140C11238);
      v3 = BgLibraryDisable();
      if ( v3 < 0 )
      {
        BgkDestroy();
        InbvSetFunction(3LL);
        v3 = 0;
      }
      else
      {
        byte_140C50999 = 0;
        byte_140C50988 = 0;
        if ( qword_140C50978 )
        {
          BgConsoleDestroyInterface();
          qword_140C50978 = 0LL;
        }
      }
      BgSetFrameBufferAccess(0LL, 0LL, 0LL);
      BgkpUnlockBgfxCodeSection();
      if ( qword_140C50990 )
      {
        qword_140C50990();
        qword_140C50990 = 0LL;
      }
      return (unsigned int)v3;
    }
    if ( !qword_140C50980 )
      return 3221225473LL;
    v7 = 0LL;
    result = qword_140C50980(0LL, v8, &v7);
    if ( (int)result >= 0 )
    {
      qword_140C50990 = v7;
      BgkpLockBgfxCodeSection();
      v4 = BgLibraryEnable((__int64)v8, 0);
      v5 = byte_140C50999;
      v3 = v4;
      if ( v4 >= 0 )
        v5 = 1;
      byte_140C50999 = v5;
      Interface = (void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))BgConsoleGetInterface();
      qword_140C50978 = (__int64)Interface;
      if ( Interface )
        (*Interface)(0LL, 4291217094LL, (unsigned int)dword_140CF5140, 0LL);
      BgkpTryEnableConsole();
      return (unsigned int)v3;
    }
  }
  return result;
}
