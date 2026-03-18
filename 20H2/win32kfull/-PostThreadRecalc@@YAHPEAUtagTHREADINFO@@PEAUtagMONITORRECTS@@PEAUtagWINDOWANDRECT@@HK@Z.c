/*
 * XREFs of ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C01068E4
 * Callers:
 *     xxxDesktopRecalc @ 0x1C01066F8 (xxxDesktopRecalc.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

__int64 __fastcall PostThreadRecalc(
        struct tagTHREADINFO *a1,
        struct tagMONITORRECTS *Src,
        struct tagWINDOWANDRECT *a3,
        int a4,
        unsigned int a5)
{
  unsigned int v9; // edi
  size_t v10; // r15
  unsigned __int64 v11; // rbx
  size_t v12; // rbp
  void *v13; // rax

  v9 = 0;
  v10 = 24LL * a4;
  v11 = Win32AllocPool(v10 + 16, 2004054869LL);
  if ( v11 )
  {
    v12 = 48 * *(_DWORD *)Src + 8;
    v13 = (void *)Win32AllocPool(v12, 2004054869LL);
    *(_QWORD *)v11 = v13;
    if ( v13 )
    {
      memmove(v13, Src, v12);
      *(_DWORD *)(v11 + 8) = a5;
      *(_DWORD *)(v11 + 12) = a4;
      memmove((void *)(v11 + 16), a3, v10);
      v9 = PostEventMessageEx(a1, *((struct tagQ **)a1 + 54), 0x16u, 0LL, 0, v11, 0LL, 0LL);
      if ( v9 )
        return v9;
      Win32FreePool(*(_QWORD *)v11);
    }
    Win32FreePool(v11);
  }
  return v9;
}
