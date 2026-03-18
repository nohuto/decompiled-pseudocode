/*
 * XREFs of ?GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z @ 0x1C0011624
 * Callers:
 *     imp_WdfRequestWdmGetIrp @ 0x1C00115C0 (imp_WdfRequestWdmGetIrp.c)
 *     imp_WdfRequestGetRequestorProcessId @ 0x1C0064750 (imp_WdfRequestGetRequestorProcessId.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C7B00 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetIrp(FxRequest *this, _IRP **ppIrp, unsigned __int8 a3)
{
  _IRP *m_Irp; // rdi
  unsigned __int8 v7; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  int IsNotCompleted; // esi
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Irp = 0LL;
  if ( !this->m_Globals->FxVerifierIO )
  {
    *ppIrp = this->m_Irp.m_Irp;
    return 0LL;
  }
  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  m_Globals = this->m_Globals;
  if ( !m_Globals->FxVerifierOn )
  {
    IsNotCompleted = 0;
    goto LABEL_7;
  }
  IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
  if ( IsNotCompleted >= 0 )
  {
LABEL_7:
    m_Irp = this->m_Irp.m_Irp;
    goto LABEL_8;
  }
  IsNotCompleted = -1073741808;
LABEL_8:
  *ppIrp = m_Irp;
  FxNonPagedObject::Unlock(this, irql, v7);
  return (unsigned int)IsNotCompleted;
}
