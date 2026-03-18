/*
 * XREFs of ?EnsureQMsgLog@@YAHXZ @ 0x1C01D3344
 * Callers:
 *     ?InitLogQMsg@@YAXXZ @ 0x1C0127F50 (-InitLogQMsg@@YAXXZ.c)
 *     LogQMsg @ 0x1C01D3840 (LogQMsg.c)
 * Callees:
 *     <none>
 */

__int64 EnsureQMsgLog(void)
{
  if ( !unk_1C0336678 )
  {
    if ( (_DWORD)gMsgQLog )
    {
      unk_1C0336678 = Win32AllocPool(688LL * (unsigned int)xmmword_1C0336668, 1819374421LL);
      if ( !unk_1C0336678 )
      {
        unk_1C0336678 = 0LL;
        gMsgQLog = 0LL;
        xmmword_1C0336668 = 0LL;
      }
    }
  }
  return (unsigned int)gMsgQLog;
}
