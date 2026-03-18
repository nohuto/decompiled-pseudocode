/*
 * XREFs of ObpTraceObjectDereferenceIfActive @ 0x14028A530
 * Callers:
 *     ObFastReferenceObject @ 0x140210F10 (ObFastReferenceObject.c)
 *     MiEmptyPageAccessLog @ 0x1402331B0 (MiEmptyPageAccessLog.c)
 *     ObFastReplaceObject @ 0x140248084 (ObFastReplaceObject.c)
 *     MiCompleteProtoPteFault @ 0x140275570 (MiCompleteProtoPteFault.c)
 *     ExpSetTimerObject @ 0x1402897E0 (ExpSetTimerObject.c)
 *     ObDereferenceObjectEx @ 0x14029F628 (ObDereferenceObjectEx.c)
 *     MiReferenceControlAreaFile @ 0x1402A0600 (MiReferenceControlAreaFile.c)
 *     ExTimerRundown @ 0x1402D5F9C (ExTimerRundown.c)
 *     IopDropIrp @ 0x14038D720 (IopDropIrp.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140563258 (ObpPushStackInfo.c)
 */

__int64 __fastcall ObpTraceObjectDereferenceIfActive(int a1)
{
  __int64 result; // rax

  if ( ObpTraceFlags )
    return ObpPushStackInfo(a1);
  return result;
}
