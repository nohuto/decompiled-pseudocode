/*
 * XREFs of ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0196B88
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C018EE84 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1C006B04C (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     ApiSetEditionPostInputMessage @ 0x1C006CDA4 (ApiSetEditionPostInputMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C006DF18 (HMValidateHandleNoSecure.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0071274 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C00712D4 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     CheckAccessEx @ 0x1C0095808 (CheckAccessEx.c)
 *     EtwTraceUIPIInputError @ 0x1C00ADBA0 (EtwTraceUIPIInputError.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D13EC (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1F20 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C018D920 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     flagString @ 0x1C019E380 (flagString.c)
 *     messageString @ 0x1C019E480 (messageString.c)
 *     WPP_RECORDER_SF_LsHHsLLLL @ 0x1C019EAFC (WPP_RECORDER_SF_LsHHsLLLL.c)
 *     GetPointerInputSource @ 0x1C01AE300 (GetPointerInputSource.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 Queue; // rbp
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct tagTHREADINFO *ThreadInfo; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v31; // r14d
  int v32; // ebp
  __int64 v33; // rax
  int v34; // edx
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // rbx
  int v38; // eax
  int v39; // edx
  unsigned int v40; // ebx
  __int64 v41; // [rsp+30h] [rbp-B8h]
  __int128 v42; // [rsp+70h] [rbp-78h] BYREF
  __int64 v43; // [rsp+80h] [rbp-68h]
  _BYTE v44[40]; // [rsp+88h] [rbp-60h] BYREF
  CInpLockGuard *v45; // [rsp+B0h] [rbp-38h]
  int v47; // [rsp+F8h] [rbp+10h]
  __int64 v48; // [rsp+108h] [rbp+20h] BYREF

  v47 = (int)a2;
  v48 = 0LL;
  Queue = CInputDest::GetQueue(a2, 0LL, (__int64)a3, (__int64)a4);
  if ( !Queue )
    goto LABEL_19;
  if ( *((_DWORD *)this + 2) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v15, v16);
  ThreadInfo = CInputDest::GetThreadInfo(a2);
  if ( !ThreadInfo )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v20, v21);
  if ( !a8 || (*(_DWORD *)a4 & 0x800) != 0 || a9 )
    goto LABEL_19;
  v24 = HMValidateHandleNoSecure(*((_QWORD *)a4 + 23), 19);
  if ( !v24 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v25, v26);
  if ( CheckAccessEx((int *)(*(_QWORD *)(v24 + 480) + 896LL), (int *)(Queue + 428), 0)
    || (v28 = *(_QWORD *)(*(_QWORD *)(v24 + 384) + 88LL)) != 0
    && (*(_DWORD *)(v28 + 820) & 0x30) == 0x10
    && (v29 = *((_QWORD *)ThreadInfo + 52), v28 == v29)
    && (unsigned int)ApiSetEditionIsGpqForegroundAccessibleExplicit(a8, (__int64)ThreadInfo, *(_QWORD *)(v29 + 880), 0) )
  {
LABEL_19:
    v31 = a6;
    v32 = *((unsigned __int16 *)a4 + 86);
    if ( a6 != 595 )
      v32 |= (*((_WORD *)a4 + 90) & 0xE1F7) << 16;
    GetPointerInputSource(*((unsigned int *)a4 + 42), a8, a9, &v48);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v33 = flagString(HIWORD(v32));
      messageString(v31, v33);
      WPP_RECORDER_SF_LsHHsLLLL(*((_DWORD *)a4 + 50), v34, v35, v36);
    }
    v37 = (__int64)a5;
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v44,
      (CTouchProcessor *)((char *)this + 40),
      a5);
    v38 = *((_DWORD *)a4 + 78);
    v43 = 0LL;
    v41 = *((_QWORD *)a4 + 31);
    v42 = 0LL;
    v40 = ApiSetEditionPostInputMessage(v47, 0, v31, v32, v37, a7, v41, 0LL, v38 != 0 ? 8 : 0, &v48, (__int64)&v42);
    if ( v40 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v39) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v39,
        7,
        286,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
    CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v45, (struct CRefUnRefPointerMsgId *)v44);
    return v40;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v27) = 3;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v27,
        7,
        284,
        (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
    }
    InputTraceLogging::Pointer::DropInput();
    EtwTraceUIPIInputError(gptiCurrent, ThreadInfo, Queue, *(_QWORD *)(Queue + 428), 8);
    return 0LL;
  }
}
