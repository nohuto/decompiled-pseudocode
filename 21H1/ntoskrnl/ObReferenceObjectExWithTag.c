/*
 * XREFs of ObReferenceObjectExWithTag @ 0x1402F3250
 * Callers:
 *     ObFastReferenceObject @ 0x140206610 (ObFastReferenceObject.c)
 *     MiCompleteProtoPteFault @ 0x140213720 (MiCompleteProtoPteFault.c)
 *     ObFastReplaceObject @ 0x140233A3C (ObFastReplaceObject.c)
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     MiEmptyPageAccessLog @ 0x1402A4D00 (MiEmptyPageAccessLog.c)
 *     ObpCreateHandle @ 0x14062B8A0 (ObpCreateHandle.c)
 *     MiCreateImageOrDataSection @ 0x140630780 (MiCreateImageOrDataSection.c)
 *     PspInsertThread @ 0x1406F3184 (PspInsertThread.c)
 *     ObInitializeFastReference @ 0x1406F7064 (ObInitializeFastReference.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x14055F238 (ObpPushStackInfo.c)
 */

unsigned __int64 __fastcall ObReferenceObjectExWithTag(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rax

  v3 = a2;
  if ( ObpTraceFlags )
    ObpPushStackInfo(BugCheckParameter2 - 48);
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), v3);
  if ( v4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x10uLL, v3 + v4);
  return v3 + v4;
}
