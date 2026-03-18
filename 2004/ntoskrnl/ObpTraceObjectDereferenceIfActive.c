/*
 * XREFs of ObpTraceObjectDereferenceIfActive @ 0x140212170
 * Callers:
 *     ExpSetTimerObject @ 0x140211420 (ExpSetTimerObject.c)
 *     ObDereferenceObjectEx @ 0x1402287B0 (ObDereferenceObjectEx.c)
 *     MiReferenceControlAreaFile @ 0x140229C10 (MiReferenceControlAreaFile.c)
 *     MiEmptyPageAccessLog @ 0x14024BCD0 (MiEmptyPageAccessLog.c)
 *     IopDropIrp @ 0x140267890 (IopDropIrp.c)
 *     ObFastReferenceObject @ 0x140299120 (ObFastReferenceObject.c)
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     ObFastReplaceObject @ 0x1402C686C (ObFastReplaceObject.c)
 *     ExTimerRundown @ 0x1402FA024 (ExTimerRundown.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14055F888 (ObpPushStackInfo.c)
 */

__int64 __fastcall ObpTraceObjectDereferenceIfActive(int a1)
{
  __int64 result; // rax

  if ( ObpTraceFlags )
    return ObpPushStackInfo(a1);
  return result;
}
