/*
 * XREFs of ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0195AE0
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018CDB8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0033C60 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C00A6E9C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00AAC14 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12DC (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1EB0 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0180E2C (-DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0180EE8 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0192990 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x1C01929B8 (-IsFrameReferenced@CTouchProcessor@@AEAAHK@Z.c)
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1C019300C (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C0199C14 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionSetForegroundCheckNoActivate @ 0x1C01C8190 (ApiSetEditionSetForegroundCheckNoActivate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::ProcessPrimaryDown(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        __int64 a3,
        __int64 a4)
{
  const struct CPointerInputFrame *v4; // rdi
  struct _KTHREAD **v5; // r14
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  unsigned int v12; // esi
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  int v16; // edx
  PDEVICE_OBJECT v17; // rcx
  int v18; // r9d
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rdx
  struct CInputDest *v28; // rdi
  int v29; // edx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  int v34; // edx
  int v35; // edx
  _BYTE v36[40]; // [rsp+30h] [rbp-98h] BYREF
  CInpLockGuard *v37; // [rsp+58h] [rbp-70h]
  _BYTE v38[64]; // [rsp+60h] [rbp-68h] BYREF

  v4 = a2;
  v5 = this;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    this = (struct _KTHREAD **)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        7,
        186,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    }
  }
  v6 = 0;
  if ( v5[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v5, *((unsigned int *)v4 + 10), a3, a4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
  if ( (*((_DWORD *)v4 + 30) & 0x10) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
  v11 = *((unsigned int *)v4 + 12);
  v12 = 0;
  v13 = *((_QWORD *)v4 + 17);
  if ( (_DWORD)v11 )
  {
    v14 = (unsigned int)v11;
    do
    {
      v15 = *((_QWORD *)v4 + 17) + 480 * v14;
      if ( v13 >= v15 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v7, v11, (unsigned int)v14);
      if ( (*(_QWORD *)(v13 + 16) || CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v13))
        && (unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v13) )
      {
        break;
      }
      v13 += 480LL;
      v14 = (unsigned int)v10;
      ++v12;
      v11 = (unsigned int)v10;
    }
    while ( v12 < (unsigned int)v10 );
  }
  if ( v12 == (_DWORD)v11 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v7,
      7,
      187,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v17 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v18 = 188;
LABEL_46:
    LOBYTE(v16) = 5;
    WPP_RECORDER_SF_(v17->DeviceExtension, v16, 7, v18, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    return 0LL;
  }
  v19 = *((_QWORD *)v4 + 17) + 480LL * (unsigned int)v11;
  if ( v13 >= v19 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v7, v11, v10);
  if ( !(unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v13) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22, v23);
  if ( !*(_QWORD *)(v13 + 16) && !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v13) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v20, v25, v26);
  if ( (*(_DWORD *)v13 & 0x1000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    LOBYTE(v20) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v20,
      7,
      189,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v17 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v18 = 190;
    goto LABEL_46;
  }
  if ( *(_DWORD *)(v13 + 444) )
  {
    v27 = *(_QWORD *)(v13 + 192);
    if ( !v27 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v27) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v27,
        7,
        191,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v17 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v18 = 192;
      goto LABEL_46;
    }
    v28 = (struct CInputDest *)(v13 + 352);
    if ( !CInputDest::IsEqualByWindowHandle(v13 + 352, v27, 1) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v29) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v29,
        7,
        193,
        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v17 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v18 = 194;
      goto LABEL_46;
    }
    v6 = 1;
    if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v13) )
    {
      if ( !CInputDest::DoesBelongToForeground(v13 + 352, 1) || !CInputDest::DoesBelongToForegroundThread((__int64)v28) )
      {
        if ( gpqForeground )
        {
          if ( (*(_DWORD *)(gpqForeground + 388) & 0x2000000) != 0 )
          {
            v33 = *(_QWORD *)(gpqForeground + 112);
            if ( v33 )
            {
              if ( gptiForeground == *(struct tagTHREADINFO **)(v33 + 16)
                && CInputDest::DoesBelongToForeground(v13 + 352, 1) )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v34) = 4;
                  WPP_RECORDER_SF_(
                    WPP_MAIN_CB.Queue.ListEntry.Flink,
                    v34,
                    7,
                    195,
                    (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      LOBYTE(v35) = 5;
                      WPP_RECORDER_SF_(
                        WPP_GLOBAL_Control->DeviceExtension,
                        v35,
                        7,
                        196,
                        (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
                    }
                  }
                }
                return 1LL;
              }
            }
          }
        }
        CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v38, v28, v31, v32);
        CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
          (CInpUnlockGuardExclusive *)v36,
          (struct CInpLockGuard *)(v5 + 5),
          0LL);
        v6 = ApiSetEditionSetForegroundCheckNoActivate(v28);
        CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v37, (struct CRefUnRefPointerMsgId *)v36);
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v38);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v20) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v20,
      7,
      197,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  return v6;
}
