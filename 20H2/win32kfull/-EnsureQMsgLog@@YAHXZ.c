/*
 * XREFs of ?EnsureQMsgLog@@YAHXZ @ 0x1C01D2534
 * Callers:
 *     ?InitLogQMsg@@YAXXZ @ 0x1C0129F60 (-InitLogQMsg@@YAXXZ.c)
 *     LogQMsg @ 0x1C01D2A30 (LogQMsg.c)
 * Callees:
 *     <none>
 */

__int64 EnsureQMsgLog(void)
{
  if ( !unk_1C0335698 )
  {
    if ( (_DWORD)gMsgQLog )
    {
      unk_1C0335698 = Win32AllocPool(688LL * (unsigned int)xmmword_1C0335688, 1819374421LL);
      if ( !unk_1C0335698 )
      {
        unk_1C0335698 = 0LL;
        gMsgQLog = 0LL;
        xmmword_1C0335688 = 0LL;
      }
    }
  }
  return (unsigned int)gMsgQLog;
}
