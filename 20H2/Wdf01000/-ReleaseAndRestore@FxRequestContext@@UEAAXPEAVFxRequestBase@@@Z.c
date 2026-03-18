/*
 * XREFs of ?ReleaseAndRestore@FxRequestContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0090DA0
 * Callers:
 *     ?ReleaseAndRestore@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C006D1D0 (-ReleaseAndRestore@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?ReleaseAndRestore@FxUsbUrbContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C006D260 (-ReleaseAndRestore@FxUsbUrbContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?ReleaseAndRestore@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C00704E0 (-ReleaseAndRestore@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001CA80 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequestContext::ReleaseAndRestore(FxRequestContext *this, FxRequestBase *Request)
{
  _IRP *m_Irp; // rax
  _MDL *MdlAddress; // rdi
  _MDL *Next; // rbp
  IFxMemory *m_RequestMemory; // rcx

  if ( Request->m_IrpAllocation && !Request->m_CanComplete )
  {
    m_Irp = Request->m_Irp.m_Irp;
    MdlAddress = m_Irp->MdlAddress;
    if ( MdlAddress )
    {
      do
      {
        Next = MdlAddress->Next;
        if ( (MdlAddress->MdlFlags & 2) != 0 )
        {
          MmUnlockPages(MdlAddress);
        }
        else if ( Request->m_Globals->FxVerifierOn )
        {
          DbgPrint(
            "pMdl %p, Flags 0x%x in PIRP %p should be locked",
            MdlAddress,
            MdlAddress->MdlFlags,
            Request->m_Irp.m_Irp);
          FxVerifierDbgBreakPoint(Request->m_Globals);
        }
        IoFreeMdl(MdlAddress);
        MdlAddress = Next;
      }
      while ( Next );
      m_Irp = Request->m_Irp.m_Irp;
    }
    m_Irp->MdlAddress = 0LL;
  }
  m_RequestMemory = this->m_RequestMemory;
  if ( m_RequestMemory )
  {
    m_RequestMemory->Release(
      m_RequestMemory,
      this,
      112,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    this->m_RequestMemory = 0LL;
  }
  memset(&this->m_CompletionParams, 0, sizeof(this->m_CompletionParams));
  this->m_CompletionParams.Size = 72;
  this->m_CompletionParams.Type = WdfRequestTypeNoFormat;
}
