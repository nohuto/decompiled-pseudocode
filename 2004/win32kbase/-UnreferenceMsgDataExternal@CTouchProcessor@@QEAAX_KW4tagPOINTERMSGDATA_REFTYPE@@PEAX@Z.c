/*
 * XREFs of ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019D070
 * Callers:
 *     ?UnReferenceOnThreadTermination@CRefUnRefPointerMsgId@@SAXPEAX@Z @ 0x1C00D22D0 (-UnReferenceOnThreadTermination@CRefUnRefPointerMsgId@@SAXPEAX@Z.c)
 *     DestroyBaseWindow @ 0x1C013D580 (DestroyBaseWindow.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1334 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019CF68 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall CTouchProcessor::UnreferenceMsgDataExternal(struct _KTHREAD **a1, void *a2, unsigned int a3)
{
  void *v4; // rbx
  __int64 v6; // r9
  int v7; // edx
  _BYTE v8[40]; // [rsp+30h] [rbp-58h] BYREF
  CInpLockGuard *v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+60h] [rbp-28h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      302,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v8,
    (struct CInpLockGuard *)(a1 + 5),
    v4);
  CTouchProcessor::UnreferenceMsgData(a1, (__int64)v4, a3, v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      7,
      303,
      (__int64)&WPP_8113a81d21a7371434699e4b0bdc9bc8_Traceguids);
  }
  if ( !v10 )
    CInpLockGuard::UnLock((PERESOURCE *)v9, (struct CRefUnRefPointerMsgId *)v8);
}
