/*
 * XREFs of FreeQEntry @ 0x1C00F6C9C
 * Callers:
 *     DestroyThreadsMessages @ 0x1C00D7600 (DestroyThreadsMessages.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00F661C (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     FreeMessageList @ 0x1C00F6B40 (FreeMessageList.c)
 *     DelQEntry @ 0x1C00F6B9C (DelQEntry.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C004CFC4 (IsPointerInputMessage.c)
 *     FreePointerMessageParams @ 0x1C01EF458 (FreePointerMessageParams.c)
 */

__int64 __fastcall FreeQEntry(unsigned int *a1)
{
  if ( (a1[25] & 8) != 0 && !a1[24] && IsPointerInputMessage(a1[6]) )
    FreePointerMessageParams(a1);
  return Win32FreeToPagedLookasideList(QEntryLookaside, a1);
}
