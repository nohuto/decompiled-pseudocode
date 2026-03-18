/*
 * XREFs of ?EnsureQMsgLog@@YGHXZ @ 0x141B02
 * Callers:
 *     ?InitLogQMsg@@YGXXZ @ 0xEAB0E (-InitLogQMsg@@YGXXZ.c)
 *     _LogQMsg@4 @ 0x141ED4 (_LogQMsg@4.c)
 * Callees:
 *     <none>
 */

int __stdcall EnsureQMsgLog()
{
  if ( !dword_273AD0 )
  {
    if ( gMsgQLog )
    {
      dword_273AD0 = Win32AllocPool(392 * dword_273AC0, 1819374421);
      if ( !dword_273AD0 )
        memset(&gMsgQLog, 0, 0x24u);
    }
  }
  return gMsgQLog;
}
