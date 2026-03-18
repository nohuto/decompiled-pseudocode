/*
 * XREFs of ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C019450C
 * Callers:
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01A29F4 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01A2CC8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C01A2EC0 (-UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C0193880 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C01940D4 (-FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C01945E8 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C01965AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C01A2C64 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreePointerInfoNode(
        struct _KTHREAD **this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v6; // rbp
  struct CPointerInputFrame *v7; // rax
  __int64 v8; // rcx
  struct CPointerInputFrame *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rcx

  v6 = a4;
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  v7 = CTouchProcessor::FindAndReferenceFrameById(this, a3);
  v9 = v7;
  if ( v7 )
  {
    if ( (unsigned int)v6 >= *((_DWORD *)v7 + 12) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    v10 = *((_QWORD *)v9 + 17) + 480 * v6;
    if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v10) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
    if ( (*(_DWORD *)v10 & 2) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
    if ( CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v10) > 1 )
      CTouchProcessor::FreeHistory(this, v9, (const struct CPointerInfoNode *)v10);
    CInputDest::SetEmpty((CInputDest *)(v10 + 24));
    CInputDest::SetEmpty((CInputDest *)(v10 + 352));
    CTouchProcessor::FreePointerInfoNodeInt((CTouchProcessor *)this, v9, v6);
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v9);
  }
}
