/*
 * XREFs of BgkInitialize @ 0x140A9A074
 * Callers:
 *     InbvDriverInitialize @ 0x140A6E608 (InbvDriverInitialize.c)
 * Callees:
 *     BgkpTryEnableConsole @ 0x14039C150 (BgkpTryEnableConsole.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     BgConsoleGetInterface @ 0x1409F4810 (BgConsoleGetInterface.c)
 *     BgLibraryInitialize @ 0x1409F4854 (BgLibraryInitialize.c)
 *     BgkpLockBgfxCodeSection @ 0x1409F6730 (BgkpLockBgfxCodeSection.c)
 *     BgkDestroy @ 0x1409F7B08 (BgkDestroy.c)
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
    if ( byte_140C50A20 )
      return 0LL;
    return 3221225473LL;
  }
  if ( !a2 )
  {
    BgkDestroy();
    qword_140C53E30 = 0LL;
    BgkpLockBgfxCodeSection();
  }
  result = BgLibraryInitialize(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 288LL), a2);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      Interface = BgConsoleGetInterface();
      qword_140C50A08 = (__int64)Interface;
      if ( Interface )
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))*Interface)(
          (unsigned int)InitConsoleFlags,
          4291217094LL,
          (unsigned int)dword_140CF5200,
          0LL);
      v6 = ((__int64 (__fastcall *)(__int64, __int64, int *, int *))off_140C00A68[0])(9LL, 4LL, &dword_140CF24A0, &v8);
      v7 = dword_140CF24A0;
      if ( v6 < 0 )
        v7 = 2;
      dword_140CF24A0 = v7;
    }
    byte_140C50A20 = 1;
    byte_140C50A21 = 1;
    BgkpTryEnableConsole();
    return 0LL;
  }
  return result;
}
