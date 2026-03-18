/*
 * XREFs of ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0198620
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C0139A00 (NtUserGetPointerInfoList.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C0196D00 (-GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C019A120 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerInfoInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        struct tagPOINTER_INFO *a6)
{
  struct _KTHREAD **v6; // rbp
  int v8; // esi
  __int64 v9; // rdx
  int *ThreadPointerData; // rdi
  __int64 v11; // rcx
  __int64 v13; // [rsp+28h] [rbp-10h]
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+44h] [rbp+Ch]

  v15 = HIDWORD(this);
  v6 = (struct _KTHREAD **)gpTouchProcessor;
  v14 = 0;
  v8 = a3;
  ThreadPointerData = (int *)CTouchProcessor::GetThreadPointerData(
                               gpTouchProcessor,
                               (struct tagTHREADINFO *)((char *)a2 + 1072),
                               a3,
                               &v14,
                               0LL,
                               0LL);
  if ( !ThreadPointerData )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = v8;
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        4,
        330,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids,
        v13);
    }
LABEL_13:
    v11 = 87LL;
LABEL_9:
    UserSetLastError(v11, v9);
    return 0LL;
  }
  if ( a4 != 1 && a4 != v14 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        7,
        331,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
    v11 = 1629LL;
    goto LABEL_9;
  }
  if ( !(unsigned int)CTouchProcessor::GetPointerData(v6, ThreadPointerData, a4, a5, a6) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_q(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v9,
        7,
        332,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids,
        ThreadPointerData);
    }
    goto LABEL_13;
  }
  return 1LL;
}
