/*
 * XREFs of _QueueShutdownData@8 @ 0x141FC0
 * Callers:
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _xxxSetInformationThread@16 @ 0xC9146 (_xxxSetInformationThread@16.c)
 *     _NtUserShutdownBlockReasonCreate@12 @ 0xD33A8 (_NtUserShutdownBlockReasonCreate@12.c)
 * Callees:
 *     ?PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z @ 0xF0F56 (-PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z.c)
 */

void __fastcall QueueShutdownData(unsigned int a1, struct tagWND *a2)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // [esp+0h] [ebp-Ch]
  int v7; // [esp+4h] [ebp-8h]

  if ( gspwndBSDR )
  {
    if ( a1 == ghwndBlocking
      || a1 == 0xFFFF
      || (v4 = ValidateHwndEx(a1, 0, 0)) != 0
      && (v5 = *(_DWORD *)(v4 + 20), *(_DWORD *)(v5 + 148) == 1)
      && (*(_BYTE *)(v5 + 146) & 0x20) == 0 )
    {
      PostEventMessage((struct tagTHREADINFO *)0x13, gspwndBSDR, 0x4Au, a2, a1, v6, v7);
    }
  }
}
