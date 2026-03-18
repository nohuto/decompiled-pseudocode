/*
 * XREFs of ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C018E9B0
 * Callers:
 *     NtUserGetPointerCursorId @ 0x1C0131630 (NtUserGetPointerCursorId.c)
 * Callees:
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1C018EA40 (-GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0191EF0 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ApiSetDoesPointerHaveSingleCursor @ 0x1C01C4904 (ApiSetDoesPointerHaveSingleCursor.c)
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
                                (struct tagTHREADINFO *)((char *)a2 + 1088),
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
