/*
 * XREFs of _IPostQuitMessage@8 @ 0xABFB2
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     __PostQuitMessage@4 @ 0xABF96 (__PostQuitMessage@4.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     ?TerminateDesktopThreads@@YGXXZ @ 0xCCBCA (-TerminateDesktopThreads@@YGXXZ.c)
 * Callees:
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _LogQMsg@4 @ 0x141ED4 (_LogQMsg@4.c)
 */

int __fastcall IPostQuitMessage(int a1, int a2)
{
  _DWORD v5[30]; // [esp+8h] [ebp-78h] BYREF

  if ( gMsgQLog )
  {
    memset(v5, 0, sizeof(v5));
    v5[5] = 0;
    v5[3] = 18;
    v5[4] = a2;
    LogQMsg(v5);
  }
  EtwTraceWakePump(a1, 0, 18);
  *(_DWORD *)(a1 + 264) |= 0x40000000u;
  *(_DWORD *)(a1 + 312) = a2;
  SetWakeBit(a1, 264);
  return 1;
}
