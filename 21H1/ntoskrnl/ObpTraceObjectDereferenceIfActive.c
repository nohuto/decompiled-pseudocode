/*
 * XREFs of ObpTraceObjectDereferenceIfActive @ 0x14026B1C0
 * Callers:
 *     ObFastReferenceObject @ 0x140206610 (ObFastReferenceObject.c)
 *     MiCompleteProtoPteFault @ 0x140213720 (MiCompleteProtoPteFault.c)
 *     ObFastReplaceObject @ 0x140233A3C (ObFastReplaceObject.c)
 *     ExpSetTimerObject @ 0x14026A470 (ExpSetTimerObject.c)
 *     ObDereferenceObjectEx @ 0x140281800 (ObDereferenceObjectEx.c)
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     MiEmptyPageAccessLog @ 0x1402A4D00 (MiEmptyPageAccessLog.c)
 *     IopDropIrp @ 0x1402C08C0 (IopDropIrp.c)
 *     ExTimerRundown @ 0x140356004 (ExTimerRundown.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14055F238 (ObpPushStackInfo.c)
 */

__int64 __fastcall ObpTraceObjectDereferenceIfActive(int a1)
{
  __int64 result; // rax

  if ( ObpTraceFlags )
    return ObpPushStackInfo(a1);
  return result;
}
