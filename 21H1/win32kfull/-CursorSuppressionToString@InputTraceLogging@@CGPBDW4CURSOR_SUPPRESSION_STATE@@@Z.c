/*
 * XREFs of ?CursorSuppressionToString@InputTraceLogging@@CGPBDW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x146961
 * Callers:
 *     ?TransitionCursorSuppressionState@Cursor@InputTraceLogging@@SGXW4CURSOR_SUPPRESSION_STATE@@00@Z @ 0xB026A (-TransitionCursorSuppressionState@Cursor@InputTraceLogging@@SGXW4CURSOR_SUPPRESSION_STATE@@00@Z.c)
 *     ?CursorSuppressionState@Cursor@InputTraceLogging@@SGXW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x156472 (-CursorSuppressionState@Cursor@InputTraceLogging@@SGXW4CURSOR_SUPPRESSION_STATE@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__thiscall InputTraceLogging::CursorSuppressionToString(void *this)
{
  const char *result; // eax

  switch ( (unsigned int)this )
  {
    case 0u:
      result = "Disabled";
      break;
    case 1u:
      result = "HiddenIgnoreMouse";
      break;
    case 2u:
      result = "HiddenWaitingForMouse";
      break;
    case 3u:
      result = "HiddenPenHidden";
      break;
    case 4u:
      result = "HiddenTransitioningVisible";
      break;
    case 5u:
      result = "VisibleTransitioningIgnoreMouse";
      break;
    case 6u:
      result = "VisibleTransitioningWaitingForMouse";
      break;
    case 7u:
      result = "VisibleTransitioningPenHidden";
      break;
    case 8u:
      result = "Visible";
      break;
    case 9u:
      result = "Uninitialized";
      break;
    case 0xAu:
      result = "Initialized";
      break;
    default:
      result = "UNKNOWN";
      break;
  }
  return result;
}
