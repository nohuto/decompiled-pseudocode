/*
 * XREFs of QueueShutdownData @ 0x1C01D396C
 * Callers:
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     xxxSetInformationThread @ 0x1C00BD1B0 (xxxSetInformationThread.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C011B2C0 (NtUserShutdownBlockReasonCreate.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B029C (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
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
        *(struct tagQ **)(*((_QWORD *)gspwndBSDR + 2) + 424LL),
        0x13u,
        gspwndBSDR,
        0x4Au,
        a2,
        a1,
        0LL);
    }
  }
}
