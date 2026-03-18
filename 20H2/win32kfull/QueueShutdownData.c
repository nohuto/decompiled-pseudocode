/*
 * XREFs of QueueShutdownData @ 0x1C01D2B5C
 * Callers:
 *     xxxSetInformationThread @ 0x1C007DA60 (xxxSetInformationThread.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C011BCB0 (NtUserShutdownBlockReasonCreate.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

void __fastcall QueueShutdownData(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax

  if ( gspwndBSDR )
  {
    if ( a1 == ghwndBlocking
      || a1 == 0xFFFF
      || (v4 = ValidateHwndEx(a1, 0LL, 0LL)) != 0
      && (v5 = *(_QWORD *)(v4 + 40), *(_DWORD *)(v5 + 236) == 1)
      && (*(_BYTE *)(v5 + 234) & 0x20) == 0 )
    {
      PostEventMessageEx(
        *((struct tagTHREADINFO **)gspwndBSDR + 2),
        *(struct tagQ **)(*((_QWORD *)gspwndBSDR + 2) + 432LL),
        0x13u,
        gspwndBSDR,
        0x4Au,
        a2,
        a1,
        0LL);
    }
  }
}
