/*
 * XREFs of ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C019DD00
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0194FD8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C005F5A8 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C005F774 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0064FA8 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0B3C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1600 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C018906C (-DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0189128 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C019ABC0 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x1C019ABE8 (-IsFrameReferenced@CTouchProcessor@@AEAAHK@Z.c)
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1C019B224 (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C01A1E74 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionSetForegroundCheckNoActivate @ 0x1C01D0490 (ApiSetEditionSetForegroundCheckNoActivate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::ProcessPrimaryDown(struct _KTHREAD **this, const struct CPointerInputFrame *a2)
{
  const struct CPointerInputFrame *v2; // rdi
  struct _KTHREAD **v3; // r14
  unsigned int v4; // ebp
  int v5; // edx
  __int64 v6; // rcx
  unsigned int v7; // r8d
  unsigned int v8; // esi
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned int v12; // r9d
  int v13; // edx
  PDEVICE_OBJECT v14; // rcx
  int v15; // r9d
  unsigned __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  struct CInputDest *v21; // rdi
  int v22; // edx
  __int64 v24; // rax
  int v25; // edx
  int v26; // edx
  _BYTE v27[40]; // [rsp+30h] [rbp-98h] BYREF
  CInpLockGuard *v28; // [rsp+58h] [rbp-70h]
  _BYTE v29[64]; // [rsp+60h] [rbp-68h] BYREF

  v2 = a2;
  v3 = this;
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
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    }
  }
  v4 = 0;
  if ( v3[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v3, *((_DWORD *)v2 + 10)) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  if ( (*((_DWORD *)v2 + 30) & 0x10) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
  v7 = *((_DWORD *)v2 + 12);
  v8 = 0;
  v9 = *((_QWORD *)v2 + 17);
  if ( v7 )
  {
    v10 = v7;
    do
    {
      v11 = *((_QWORD *)v2 + 17) + 480 * v10;
      if ( v9 >= v11 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
      if ( (*(_QWORD *)(v9 + 16) || CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v9))
        && (unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v9) )
      {
        break;
      }
      v9 += 480LL;
      v10 = v12;
      ++v8;
      v7 = v12;
    }
    while ( v8 < v12 );
  }
  if ( v8 == v7 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v5,
      7,
      187,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v14 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v15 = 188;
LABEL_46:
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_(v14->DeviceExtension, v13, 7, v15, (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    return 0LL;
  }
  v16 = *((_QWORD *)v2 + 17) + 480LL * v7;
  if ( v9 >= v16 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
  if ( !(unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v9) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
  if ( !*(_QWORD *)(v9 + 16) && !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v9) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
  if ( (*(_DWORD *)v9 & 0x1000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    LOBYTE(v17) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v17,
      7,
      189,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v14 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v15 = 190;
    goto LABEL_46;
  }
  if ( *(_DWORD *)(v9 + 444) )
  {
    v20 = *(_QWORD *)(v9 + 192);
    if ( !v20 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v20) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v20,
        7,
        191,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v14 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v15 = 192;
      goto LABEL_46;
    }
    v21 = (struct CInputDest *)(v9 + 352);
    if ( !CInputDest::IsEqualByWindowHandle(v9 + 352, v20, 1) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v22) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v22,
        7,
        193,
        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v14 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v15 = 194;
      goto LABEL_46;
    }
    v4 = 1;
    if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v9) )
    {
      if ( !CInputDest::DoesBelongToForeground(v9 + 352, 1) || !CInputDest::DoesBelongToForegroundThread((__int64)v21) )
      {
        if ( gpqForeground )
        {
          if ( (*(_DWORD *)(gpqForeground + 388) & 0x2000000) != 0 )
          {
            v24 = *(_QWORD *)(gpqForeground + 112);
            if ( v24 )
            {
              if ( gptiForeground == *(struct tagTHREADINFO **)(v24 + 16)
                && CInputDest::DoesBelongToForeground(v9 + 352, 1) )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v25) = 4;
                  WPP_RECORDER_SF_(
                    WPP_MAIN_CB.Queue.ListEntry.Flink,
                    v25,
                    7,
                    195,
                    (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      LOBYTE(v26) = 5;
                      WPP_RECORDER_SF_(
                        WPP_GLOBAL_Control->DeviceExtension,
                        v26,
                        7,
                        196,
                        (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
                    }
                  }
                }
                return 1LL;
              }
            }
          }
        }
        CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v29, v21);
        CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
          (CInpUnlockGuardExclusive *)v27,
          (struct CInpLockGuard *)(v3 + 5),
          0LL);
        v4 = ApiSetEditionSetForegroundCheckNoActivate(v21);
        CInpLockGuard::UnRefPointerMsgIdAndLockExclusive((PERESOURCE *)v28, (struct CRefUnRefPointerMsgId *)v27);
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v29);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v17) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      7,
      197,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  return v4;
}
