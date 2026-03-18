/*
 * XREFs of ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C019C878
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C0194B84 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     ApiSetEditionPostInputMessage @ 0x1C0060544 (ApiSetEditionPostInputMessage.c)
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1C006211C (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     HMValidateHandleNoSecure @ 0x1C0063044 (HMValidateHandleNoSecure.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00658A4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0065904 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     CheckAccessEx @ 0x1C00713D8 (CheckAccessEx.c)
 *     EtwTraceUIPIInputError @ 0x1C009FEB0 (EtwTraceUIPIInputError.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0B3C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1600 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C0193620 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     flagString @ 0x1C01A40E0 (flagString.c)
 *     messageString @ 0x1C01A41E0 (messageString.c)
 *     WPP_RECORDER_SF_LsHHsLLLL @ 0x1C01A485C (WPP_RECORDER_SF_LsHHsLLLL.c)
 *     GetPointerInputSource @ 0x1C01B4060 (GetPointerInputSource.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::PostPointerMessage(
        CTouchProcessor *this,
        const struct CInputDest *a2,
        const struct CPointerInputFrame *a3,
        const struct CPointerInfoNode *a4,
        void *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  __int64 v12; // rcx
  __int64 Queue; // rbp
  __int64 v14; // rcx
  struct tagTHREADINFO *ThreadInfo; // rbx
  __int64 v16; // rcx
  __int64 v17; // rsi
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v22; // r14d
  int v23; // ebp
  __int64 v24; // rax
  int v25; // edx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rbx
  int v29; // eax
  int v30; // edx
  unsigned int v31; // ebx
  __int64 v32; // [rsp+30h] [rbp-B8h]
  __int128 v33; // [rsp+70h] [rbp-78h] BYREF
  __int64 v34; // [rsp+80h] [rbp-68h]
  _BYTE v35[40]; // [rsp+88h] [rbp-60h] BYREF
  CInpLockGuard *v36; // [rsp+B0h] [rbp-38h]
  int v38; // [rsp+F8h] [rbp+10h]
  __int64 v39; // [rsp+108h] [rbp+20h] BYREF

  v38 = (int)a2;
  v39 = 0LL;
  Queue = CInputDest::GetQueue(a2, 0);
  if ( !Queue )
    goto LABEL_19;
  if ( *((_DWORD *)this + 2) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
  ThreadInfo = CInputDest::GetThreadInfo(a2);
  if ( !ThreadInfo )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
  if ( !a8 || (*(_DWORD *)a4 & 0x800) != 0 || a9 )
    goto LABEL_19;
  v17 = HMValidateHandleNoSecure(*((_QWORD *)a4 + 23), 19);
  if ( !v17 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
  if ( CheckAccessEx((int *)(*(_QWORD *)(v17 + 480) + 896LL), (int *)(Queue + 428), 0)
    || (v19 = *(_QWORD *)(*(_QWORD *)(v17 + 384) + 88LL)) != 0
    && (*(_DWORD *)(v19 + 820) & 0x30) == 0x10
    && (v20 = *((_QWORD *)ThreadInfo + 52), v19 == v20)
    && (unsigned int)ApiSetEditionIsGpqForegroundAccessibleExplicit(a8, (__int64)ThreadInfo, *(_QWORD *)(v20 + 880), 0) )
  {
LABEL_19:
    v22 = a6;
    v23 = *((unsigned __int16 *)a4 + 86);
    if ( a6 != 595 )
      v23 |= (*((_WORD *)a4 + 90) & 0xE1F7) << 16;
    GetPointerInputSource(*((unsigned int *)a4 + 42), a8, a9, &v39);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = flagString(HIWORD(v23));
      messageString(v22, v24);
      WPP_RECORDER_SF_LsHHsLLLL(*((_DWORD *)a4 + 50), v25, v26, v27);
    }
    v28 = (__int64)a5;
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v35,
      (CTouchProcessor *)((char *)this + 40),
      a5);
    v29 = *((_DWORD *)a4 + 78);
    v34 = 0LL;
    v32 = *((_QWORD *)a4 + 31);
    v33 = 0LL;
    v31 = ApiSetEditionPostInputMessage(v38, 0, v22, v23, v28, a7, v32, 0LL, v29 != 0 ? 8 : 0, &v39, (__int64)&v33);
    if ( v31 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v30) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v30,
        7,
        285,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
    CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v36, (struct CRefUnRefPointerMsgId *)v35);
    return v31;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v18,
        7,
        283,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
    InputTraceLogging::Pointer::DropInput();
    EtwTraceUIPIInputError(gptiCurrent, ThreadInfo, Queue, *(_QWORD *)(Queue + 428), 8);
    return 0LL;
  }
}
