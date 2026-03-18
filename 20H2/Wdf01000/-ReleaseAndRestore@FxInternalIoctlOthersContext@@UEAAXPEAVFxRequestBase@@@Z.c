/*
 * XREFs of ?ReleaseAndRestore@FxInternalIoctlOthersContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0002500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxInternalIoctlOthersContext::ReleaseAndRestore(
        FxInternalIoctlOthersContext *this,
        FxRequestBase *Request)
{
  IFxMemory **m_MemoryObjects; // rdi
  __int64 v5; // rsi
  _IRP *m_Irp; // rax
  _MDL *MdlAddress; // rdi
  IFxMemory *m_RequestMemory; // rcx
  _MDL *Next; // rsi

  m_MemoryObjects = this->m_MemoryObjects;
  v5 = 2LL;
  do
  {
    if ( *m_MemoryObjects )
    {
      (*m_MemoryObjects)->Release(
        *m_MemoryObjects,
        this,
        153,
        "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxIoTarget.hpp");
      *m_MemoryObjects = 0LL;
    }
    ++m_MemoryObjects;
    --v5;
  }
  while ( v5 );
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
  this->m_CompletionParams.IoStatus.Pointer = 0LL;
  this->m_CompletionParams.IoStatus.Information = 0LL;
  this->m_CompletionParams.Parameters.Others.Argument1.Value = 0LL;
  this->m_CompletionParams.Parameters.Write.Length = 0LL;
  this->m_CompletionParams.Parameters.Write.Offset = 0LL;
  this->m_CompletionParams.Parameters.Others.Argument4.Value = 0LL;
  this->m_CompletionParams.Parameters.Ioctl.Output.Offset = 0LL;
  this->m_CompletionParams.Parameters.Ioctl.Output.Length = 0LL;
  this->m_CompletionParams.Size = 72;
  this->m_CompletionParams.Type = WdfRequestTypeNoFormat;
  this->m_CompletionParams.Type = WdfRequestTypeNoFormat;
}
