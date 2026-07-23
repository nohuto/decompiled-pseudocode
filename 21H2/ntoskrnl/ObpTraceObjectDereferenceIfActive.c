/*
 * XREFs of ObpTraceObjectDereferenceIfActive @ 0x1402EE9C0
 * Callers:
 *     ExTimerRundown @ 0x1402676E8 (ExTimerRundown.c)
 *     ObFastReferenceObject @ 0x14026A680 (ObFastReferenceObject.c)
 *     MiEmptyPageAccessLog @ 0x14027D1E0 (MiEmptyPageAccessLog.c)
 *     IopDropIrp @ 0x14029A794 (IopDropIrp.c)
 *     MiCompleteProtoPteFault @ 0x1402B8690 (MiCompleteProtoPteFault.c)
 *     ExpSetTimerObject @ 0x1402EDC70 (ExpSetTimerObject.c)
 *     ObDereferenceObjectEx @ 0x1402F0E60 (ObDereferenceObjectEx.c)
 *     ObFastReplaceObject @ 0x140301BD0 (ObFastReplaceObject.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140564F68 (ObpPushStackInfo.c)
 */

__int64 __fastcall ObpTraceObjectDereferenceIfActive(int a1)
{
  __int64 result; // rax

  if ( ObpTraceFlags )
    return ObpPushStackInfo(a1);
  return result;
}
