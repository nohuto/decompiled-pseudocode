/*
 * XREFs of ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0198FB8
 * Callers:
 *     NtUserGetRawPointerDeviceData @ 0x1C013A210 (NtUserGetRawPointerDeviceData.c)
 * Callees:
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0199060 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C019A120 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerRawDataInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        const struct tagPOINTER_DEVICE_PROPERTY *a6,
        unsigned int a7,
        int *a8)
{
  CTouchProcessor *v8; // rdi
  unsigned int v9; // ebx
  unsigned __int64 ThreadPointerData; // rax
  __int64 v12; // rdx

  v8 = gpTouchProcessor;
  v9 = 0;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        gpTouchProcessor,
                        (struct tagTHREADINFO *)((char *)a2 + 1072),
                        a3,
                        0LL,
                        0LL,
                        0LL);
  if ( ThreadPointerData )
  {
    LOBYTE(v9) = CTouchProcessor::GetPointerRawDataWithHistory(v8, ThreadPointerData, a4, a5, a6, a7, a8) != 0;
    return v9;
  }
  else
  {
    UserSetLastError(87LL, v12);
    return 0LL;
  }
}
