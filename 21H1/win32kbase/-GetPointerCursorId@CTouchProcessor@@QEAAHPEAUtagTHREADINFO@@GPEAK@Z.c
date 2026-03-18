/*
 * XREFs of ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C0196BD0
 * Callers:
 *     NtUserGetPointerCursorId @ 0x1C0139620 (NtUserGetPointerCursorId.c)
 * Callees:
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1C0196C60 (-GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C019A120 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ApiSetDoesPointerHaveSingleCursor @ 0x1C01CCC04 (ApiSetDoesPointerHaveSingleCursor.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerCursorId(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int *a4)
{
  CTouchProcessor *v4; // rdi
  __int64 v6; // rdx
  void *ThreadPointerData; // rsi

  v4 = gpTouchProcessor;
  ThreadPointerData = (void *)CTouchProcessor::GetThreadPointerData(
                                gpTouchProcessor,
                                (struct tagTHREADINFO *)((char *)a2 + 1072),
                                a3,
                                0LL,
                                0LL,
                                0LL);
  if ( ThreadPointerData )
  {
    if ( (unsigned int)ApiSetDoesPointerHaveSingleCursor() )
    {
      *a4 = 0;
      return 1LL;
    }
    if ( (unsigned int)CTouchProcessor::GetPointerCursorIdFromMsgData(v4, ThreadPointerData, a4) )
      return 1LL;
  }
  UserSetLastError(87LL, v6);
  return 0LL;
}
