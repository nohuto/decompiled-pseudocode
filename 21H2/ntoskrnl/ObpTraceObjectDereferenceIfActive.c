/*
 * XREFs of ObpTraceObjectDereferenceIfActive @ 0x14024A170
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213D90 (MiCompleteProtoPteFault.c)
 *     ExpSetTimerObject @ 0x140249420 (ExpSetTimerObject.c)
 *     ObDereferenceObjectEx @ 0x14024C610 (ObDereferenceObjectEx.c)
 *     MiEmptyPageAccessLog @ 0x14025BC70 (MiEmptyPageAccessLog.c)
 *     ExTimerRundown @ 0x140279748 (ExTimerRundown.c)
 *     ObFastReferenceObject @ 0x14027C6E0 (ObFastReferenceObject.c)
 *     IopDropIrp @ 0x1402E9444 (IopDropIrp.c)
 *     ObFastReplaceObject @ 0x1402F6E80 (ObFastReplaceObject.c)
 *     MiReferenceControlAreaFile @ 0x14031CEB0 (MiReferenceControlAreaFile.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140564D28 (ObpPushStackInfo.c)
 */

__int64 __fastcall ObpTraceObjectDereferenceIfActive(int a1)
{
  __int64 result; // rax

  if ( ObpTraceFlags )
    return ObpPushStackInfo(a1);
  return result;
}
