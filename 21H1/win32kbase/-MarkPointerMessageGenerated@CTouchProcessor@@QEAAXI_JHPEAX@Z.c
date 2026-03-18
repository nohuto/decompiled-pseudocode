/*
 * XREFs of ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z @ 0x1C019B3C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A84 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019EAB0 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?SetPointerInfoNodeMessagePosted@CTouchProcessor@@IEAAH_KIH@Z @ 0x1C01A1398 (-SetPointerInfoNodeMessagePosted@CTouchProcessor@@IEAAH_KIH@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C01A42B8 (IsPointerInputMessageWithState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::MarkPointerMessageGenerated(CTouchProcessor *this, unsigned int a2, void *a3, int a4)
{
  unsigned int v6; // edi
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // edx
  _BYTE v11[40]; // [rsp+30h] [rbp-58h] BYREF
  CInpLockGuard *v12; // [rsp+58h] [rbp-30h]
  int v13; // [rsp+60h] [rbp-28h]

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      82,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v11,
    (CTouchProcessor *)((char *)this + 40),
    a3);
  if ( !(unsigned int)IsPointerInputMessageWithState(v6) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  CTouchProcessor::SetPointerInfoNodeMessagePosted(this, (unsigned __int64)a3, v6, a4);
  CTouchProcessor::ReferenceMsgData(v9, a3, 2LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      7,
      83,
      (__int64)&WPP_6cc13e1a12c13a444721acaa10d1d35b_Traceguids);
  }
  if ( !v13 )
    CInpLockGuard::UnLock((PERESOURCE *)v12, (struct CRefUnRefPointerMsgId *)v11);
}
