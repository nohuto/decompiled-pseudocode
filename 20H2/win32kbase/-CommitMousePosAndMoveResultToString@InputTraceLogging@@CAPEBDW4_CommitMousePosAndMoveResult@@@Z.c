/*
 * XREFs of ?CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z @ 0x1C01B95F4
 * Callers:
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MousePacketPerf@@@Z @ 0x1C00A7534 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MouseP.c)
 *     ?CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z @ 0x1C01B95F4 (-CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z.c)
 * Callees:
 *     ?CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z @ 0x1C01B95F4 (-CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z.c)
 */

const char *__fastcall InputTraceLogging::CommitMousePosAndMoveResultToString(int a1)
{
  switch ( a1 )
  {
    case 0:
      return "InputEaten";
    case 1:
      return "PosUpdated";
    case 2:
      return "CursorClippedSystem";
    case 4:
      return "CursorClippedApp";
    case 8:
      return "RawInputHandled";
  }
  if ( (a1 & 1) != 0 )
    return (const char *)InputTraceLogging::CommitMousePosAndMoveResultToString(a1 & 0xFFFFFFFE);
  return "UNKNOWN";
}
