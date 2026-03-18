/*
 * XREFs of BgkInitialize @ 0x140B56D04
 * Callers:
 *     InbvDriverInitialize @ 0x140B25898 (InbvDriverInitialize.c)
 * Callees:
 *     BgkpTryEnableConsole @ 0x1403A78C0 (BgkpTryEnableConsole.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     BgkpLockBgfxCodeSection @ 0x140AAB660 (BgkpLockBgfxCodeSection.c)
 *     BgConsoleGetInterface @ 0x140AABC94 (BgConsoleGetInterface.c)
 *     BgLibraryInitialize @ 0x140AADB90 (BgLibraryInitialize.c)
 *     BgkDestroy @ 0x140AAE8BC (BgkDestroy.c)
 */

__int64 __fastcall BgkInitialize(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 (__fastcall **Interface)(); // rax
  int v6; // eax
  int v7; // ecx
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  if ( !a1 )
    return 3221225473LL;
  if ( a2 == 1 )
  {
    if ( byte_140C54D48 )
      return 0LL;
    return 3221225473LL;
  }
  if ( !a2 )
  {
    BgkDestroy();
    qword_140C5A8F0 = 0LL;
    BgkpLockBgfxCodeSection();
  }
  result = BgLibraryInitialize(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 288LL), a2);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      Interface = BgConsoleGetInterface();
      qword_140C54D30 = (__int64)Interface;
      if ( Interface )
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))*Interface)(
          (unsigned int)InitConsoleFlags,
          4291217094LL,
          (unsigned int)dword_140D01880,
          0LL);
      v6 = ((__int64 (__fastcall *)(__int64, __int64, int *, int *))off_140C020D8[0])(9LL, 4LL, &dword_140CFCEE0, &v8);
      v7 = dword_140CFCEE0;
      if ( v6 < 0 )
        v7 = 2;
      dword_140CFCEE0 = v7;
    }
    byte_140C54D48 = 1;
    byte_140C54D49 = 1;
    BgkpTryEnableConsole();
    return 0LL;
  }
  return result;
}
