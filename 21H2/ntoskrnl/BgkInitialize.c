/*
 * XREFs of BgkInitialize @ 0x140A96F04
 * Callers:
 *     InbvDriverInitialize @ 0x140A6B590 (InbvDriverInitialize.c)
 * Callees:
 *     BgkpTryEnableConsole @ 0x14039CA20 (BgkpTryEnableConsole.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     BgConsoleGetInterface @ 0x1409F1664 (BgConsoleGetInterface.c)
 *     BgLibraryInitialize @ 0x1409F1854 (BgLibraryInitialize.c)
 *     BgkpLockBgfxCodeSection @ 0x1409F3730 (BgkpLockBgfxCodeSection.c)
 *     BgkDestroy @ 0x1409F4B08 (BgkDestroy.c)
 */

__int64 __fastcall BgkInitialize(__int64 a1, int a2)
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
    if ( byte_140C50B99 )
      return 0LL;
    return 3221225473LL;
  }
  if ( !a2 )
  {
    BgkDestroy();
    qword_140C53FB0 = 0LL;
    BgkpLockBgfxCodeSection();
  }
  result = BgLibraryInitialize(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 288LL), a2);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      Interface = BgConsoleGetInterface();
      qword_140C50B80 = (__int64)Interface;
      if ( Interface )
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))*Interface)(
          (unsigned int)InitConsoleFlags,
          4291217094LL,
          (unsigned int)dword_140CF56C0,
          0LL);
      v6 = ((__int64 (__fastcall *)(__int64, __int64, int *, int *))off_140C00A68[0])(9LL, 4LL, &dword_140CF27A0, &v8);
      v7 = dword_140CF27A0;
      if ( v6 < 0 )
        v7 = 2;
      dword_140CF27A0 = v7;
    }
    byte_140C50B99 = 1;
    byte_140C50BAC = 1;
    BgkpTryEnableConsole();
    return 0LL;
  }
  return result;
}
