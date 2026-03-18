/*
 * XREFs of ?GetStatus@FxRequest@@QEAAJXZ @ 0x1C004EDF0
 * Callers:
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C006D198 (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

__int64 __fastcall FxRequest::GetStatus(FxRequest *this, __int64 a2, unsigned __int8 a3)
{
  unsigned int Status; // ebx
  unsigned __int8 v5; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( !this->m_Globals->FxVerifierIO )
    return (unsigned int)this->m_Irp.m_Irp->IoStatus.Status;
  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  Status = this->m_Irp.m_Irp->IoStatus.Status;
  FxNonPagedObject::Unlock(this, irql, v5);
  return Status;
}
