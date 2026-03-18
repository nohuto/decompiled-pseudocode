/*
 * XREFs of ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0079D58
 * Callers:
 *     ?_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z @ 0x1C007AEA0 (-_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?GetStatus@FxRequest@@QEAAJXZ @ 0x1C0068740 (-GetStatus@FxRequest@@QEAAJXZ.c)
 *     ?CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ @ 0x1C0079658 (-CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C007A6DC (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C007A7B0 (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C007CF98 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?IsConnected@FxUsbDevice@@QEAAJXZ @ 0x1C007D10C (-IsConnected@FxUsbDevice@@QEAAJXZ.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C0080068 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 */

void __fastcall FxUsbPipeContinuousReader::FxUsbPipeRequestWorkItemHandler(
        FxUsbPipeContinuousReader *this,
        FxUsbPipeRepeatReader *FailedRepeater,
        unsigned __int8 a3)
{
  FxUsbPipe *m_Pipe; // rax
  FxRequest *Request; // rcx
  int v6; // edi
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  int v9; // r15d
  WDFMEMORY__ *Buffer; // rcx
  int v11; // ebx
  FxUsbDevice *m_UsbDevice; // rbp
  FxUsbPipe *v13; // rcx
  WDFUSBPIPE__ *ObjectHandleUnchecked; // rax
  unsigned __int8 v15; // al
  unsigned __int8 v16; // r8
  FxUsbPipe *v17; // rcx
  int v18; // ebx
  unsigned int v19; // edx
  bool IsVersionGreaterThanOrEqualTo; // al
  FxUsbDevice *v21; // rcx
  unsigned __int8 v22; // dl
  FxUsbPipe *v23; // rcx
  unsigned __int8 v24; // r8
  FxUsbPipeRepeatReader *m_Readers; // rbx
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF
  int status; // [rsp+58h] [rbp+10h] BYREF
  unsigned int PortStatus; // [rsp+60h] [rbp+18h] BYREF

  m_Pipe = this->m_Pipe;
  Request = FailedRepeater->Request;
  v6 = 0;
  irql = 0;
  m_Globals = m_Pipe->m_Globals;
  v9 = FxRequest::GetStatus(Request, (__int64)FailedRepeater, a3);
  Buffer = FailedRepeater->Request->m_RequestContext->m_CompletionParams.Parameters.Write.Buffer;
  if ( Buffer )
    v11 = *(_DWORD *)Buffer;
  else
    v11 = 0;
  FxUsbPipeContinuousReader::CancelRepeaters(this);
  m_UsbDevice = this->m_Pipe->m_UsbDevice;
  if ( !this->m_ReadersFailedCallback
    || (v13 = this->m_Pipe,
        this->m_WorkItemThread = KeGetCurrentThread(),
        ObjectHandleUnchecked = (WDFUSBPIPE__ *)FxObject::GetObjectHandleUnchecked(v13),
        v15 = this->m_ReadersFailedCallback(ObjectHandleUnchecked, v9, v11),
        v17 = this->m_Pipe,
        this->m_WorkItemThread = 0LL,
        v15) )
  {
    status = FxUsbDevice::IsConnected(m_UsbDevice);
    v18 = status;
    if ( status >= 0 )
    {
      IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v19, 9u);
      v21 = m_UsbDevice;
      if ( IsVersionGreaterThanOrEqualTo )
      {
        PortStatus = 0;
        if ( FxUsbDevice::GetPortStatus(m_UsbDevice, &PortStatus) < 0 || (PortStatus & 1) != 0 )
        {
          FxUsbPipe::Reset(this->m_Pipe);
          goto LABEL_13;
        }
        v21 = m_UsbDevice;
      }
      status = FxUsbDevice::Reset(v21);
      v18 = status;
    }
LABEL_13:
    v17 = this->m_Pipe;
    goto LABEL_14;
  }
  v18 = -1073741823;
  status = -1073741823;
LABEL_14:
  FxNonPagedObject::Lock(v17, &irql, v16);
  v22 = irql;
  v23 = this->m_Pipe;
  this->m_WorkItemQueued = 0;
  FxNonPagedObject::Unlock(v23, v22, v24);
  if ( v18 >= 0 )
  {
    this->m_NumFailedReaders = 0;
    if ( this->m_NumReaders )
    {
      m_Readers = this->m_Readers;
      do
      {
        if ( (FxUsbPipeContinuousReader::ResubmitRepeater(this, m_Readers, &status) & 1) != 0 )
          IofCallDriver(this->m_Pipe->m_TargetDevice, m_Readers->Request->m_Irp.m_Irp);
        ++v6;
        ++m_Readers;
      }
      while ( v6 < this->m_NumReaders );
    }
  }
}
