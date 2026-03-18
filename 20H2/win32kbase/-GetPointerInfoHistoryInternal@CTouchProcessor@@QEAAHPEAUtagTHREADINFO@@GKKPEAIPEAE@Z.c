/*
 * XREFs of ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C019035C
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C0131A10 (NtUserGetPointerInfoList.c)
 * Callees:
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C018F2A0 (-GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0191EF0 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerInfoHistoryInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned __int8 *a7)
{
  struct _KTHREAD **v7; // rdi
  int *ThreadPointerData; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+44h] [rbp+Ch]

  v14 = HIDWORD(this);
  v7 = (struct _KTHREAD **)gpTouchProcessor;
  v13 = 0;
  ThreadPointerData = (int *)CTouchProcessor::GetThreadPointerData(
                               gpTouchProcessor,
                               (struct tagTHREADINFO *)((char *)a2 + 1088),
                               a3,
                               &v13,
                               0LL,
                               0LL);
  if ( !ThreadPointerData )
  {
LABEL_7:
    v11 = 87LL;
    goto LABEL_8;
  }
  if ( a4 == 1 || a4 == v13 )
  {
    if ( (unsigned int)CTouchProcessor::GetPointerDataWithHistory(
                         v7,
                         ThreadPointerData,
                         a4,
                         a5,
                         a6,
                         (struct tagPOINTER_INFO *)a7) )
      return 1LL;
    goto LABEL_7;
  }
  v11 = 1629LL;
LABEL_8:
  UserSetLastError(v11, v10);
  return 0LL;
}
