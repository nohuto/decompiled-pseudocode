/*
 * XREFs of ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0015824
 * Callers:
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0014EBC (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0014FE0 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?_IrpCancelForDriver@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C0015790 (-_IrpCancelForDriver@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z.c)
 *     ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x1C0016B14 (-RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C00158A8 (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     ?Vf_VerifyCancelForDriver@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C712C (-Vf_VerifyCancelForDriver@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

void __fastcall FxIoQueue::CancelForDriver(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_OwnerListEntry; // rax
  unsigned __int8 v8; // dl
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
    FxIoQueue::Vf_VerifyCancelForDriver(this, m_Globals, pRequest);
  pRequest->m_IrpQueue = 0LL;
  FxNonPagedObject::Lock(this, &irql, a3);
  Blink = this->m_Cancelled.Blink;
  p_m_OwnerListEntry = &pRequest->m_OwnerListEntry;
  if ( Blink->Flink != &this->m_Cancelled )
    __fastfail(3u);
  p_m_OwnerListEntry->Flink = &this->m_Cancelled;
  pRequest->m_OwnerListEntry.Blink = Blink;
  Blink->Flink = p_m_OwnerListEntry;
  v8 = irql;
  this->m_Cancelled.Blink = p_m_OwnerListEntry;
  FxIoQueue::DispatchInternalEvents(this, v8);
}
