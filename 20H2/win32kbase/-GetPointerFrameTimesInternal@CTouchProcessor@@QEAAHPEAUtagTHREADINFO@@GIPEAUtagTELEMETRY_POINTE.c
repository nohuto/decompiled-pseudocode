/*
 * XREFs of ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C018FCA8
 * Callers:
 *     NtUserGetPointerFrameTimes @ 0x1C0131900 (NtUserGetPointerFrameTimes.c)
 * Callees:
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     ?GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C018EFB0 (-GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0191EF0 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameTimesInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        struct tagTELEMETRY_POINTER_FRAME_TIMES *a5)
{
  struct _KTHREAD **v5; // rbx
  int v7; // edi
  int *ThreadPointerData; // rax
  __int64 v9; // rdx
  __int64 v11; // [rsp+28h] [rbp-10h]

  v5 = (struct _KTHREAD **)gpTouchProcessor;
  v7 = a3;
  ThreadPointerData = (int *)CTouchProcessor::GetThreadPointerData(
                               gpTouchProcessor,
                               (struct tagTHREADINFO *)((char *)a2 + 1088),
                               a3,
                               0LL,
                               0LL,
                               0LL);
  if ( !ThreadPointerData )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = v7;
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        7,
        328,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids,
        v11);
    }
LABEL_7:
    UserSetLastError(87LL, v9);
    return 0LL;
  }
  if ( !(unsigned int)CTouchProcessor::GetPointerDataTimes(v5, ThreadPointerData, a4, a5) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        7,
        329,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    }
    goto LABEL_7;
  }
  return 1LL;
}
