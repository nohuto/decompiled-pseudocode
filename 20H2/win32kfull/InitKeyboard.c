/*
 * XREFs of InitKeyboard @ 0x1C0008F74
 * Callers:
 *     RawInputThread @ 0x1C0009A30 (RawInputThread.c)
 *     xxxRemoteReconnect @ 0x1C0156B10 (xxxRemoteReconnect.c)
 * Callees:
 *     ?GetBiosNumLockStatus@@YAXXZ @ 0x1C0008FEC (-GetBiosNumLockStatus@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitKeyboard()
{
  __int64 result; // rax

  result = gProtocolType;
  if ( !gProtocolType )
  {
    GetBiosNumLockStatus();
    result = gfsSASModifiersDown;
    gfsModifiers = 0;
    gfsModOnlyCandidate = 0;
    gfsRawModifiersForHotKey = 0;
    gfsSASModifiersDown = 0;
    WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  }
  return result;
}
