/*
 * XREFs of ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C01920F0
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C0133D60 (NtUserGetPointerInfoList.c)
 * Callees:
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C0191D30 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0194420 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameInfoInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        unsigned int *a7,
        unsigned int *a8,
        unsigned __int8 *a9)
{
  struct _KTHREAD **v10; // rdi
  __int64 v11; // rdx
  int *ThreadPointerData; // rcx
  __int64 v13; // rcx
  int v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+54h] [rbp+Ch]
  unsigned int v17; // [rsp+58h] [rbp+10h] BYREF

  v16 = HIDWORD(this);
  v10 = (struct _KTHREAD **)gpTouchProcessor;
  v17 = 0;
  v15 = 0;
  ThreadPointerData = (int *)CTouchProcessor::GetThreadPointerData(
                               gpTouchProcessor,
                               (struct tagTHREADINFO *)((char *)a2 + 1080),
                               a3,
                               &v17,
                               &v15,
                               0LL);
  if ( !ThreadPointerData )
    goto LABEL_9;
  if ( v15 )
  {
    if ( a4 != 1 && a4 != v17 )
    {
      v13 = 1629LL;
      goto LABEL_10;
    }
    if ( (unsigned int)CTouchProcessor::GetPointerFrameDataWithHistory(v10, ThreadPointerData, a4, a5, a6, a7, a8, a9) )
      return 1LL;
LABEL_9:
    v13 = 87LL;
    goto LABEL_10;
  }
  v13 = 5LL;
LABEL_10:
  UserSetLastError(v13, v11);
  return 0LL;
}
