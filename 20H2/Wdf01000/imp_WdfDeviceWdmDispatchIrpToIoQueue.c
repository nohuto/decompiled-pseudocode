/*
 * XREFs of imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0012D70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0012FB0 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C00588FC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0058968 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00C1C74 (Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue.c)
 */

int __fastcall imp_WdfDeviceWdmDispatchIrpToIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _IRP *Irp,
        unsigned __int64 Queue,
        unsigned int Flags)
{
  FxIoInCallerContext *p_IoInCallerContextCallback; // rdi
  __int64 Offset; // r8
  FxDevice *v10; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  __int64 v12; // rdx
  FxIoQueue *v13; // r10
  unsigned int v14; // ebp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v16; // rcx
  int v18; // eax
  int v19; // esi
  FxCxDeviceInfo *m_CxDeviceInfo; // rdi
  void *v21; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  void *PPObject; // [rsp+68h] [rbp+10h] BYREF

  p_IoInCallerContextCallback = 0LL;
  PPObject = 0LL;
  v21 = 0LL;
  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(Offset) = 0;
  v10 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    Offset = LOWORD(v10->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v10 = (FxDevice *)((char *)v10 - Offset);
  }
  if ( v10->m_Type == 4098 )
  {
    PPObject = v10;
  }
  else
  {
    FxObjectHandleGetPtrQI(v10, &PPObject, (void *)Device, 0x1002u, Offset);
    v10 = (FxDevice *)PPObject;
  }
  m_Globals = v10->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&stru_1C00A9F68.m_DriverUsage->FxDriverGlobals
                                    + stru_1C00A9F68.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
    v10 = (FxDevice *)PPObject;
  }
  if ( !Queue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  LOWORD(v12) = 0;
  v13 = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Queue & 1) != 0 )
  {
    v12 = LOWORD(v13->FxNonPagedObject::FxObject::__vftable);
    v13 = (FxIoQueue *)((char *)v13 - v12);
  }
  if ( v13->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    v21 = v13;
  }
  else
  {
    FxObjectHandleGetPtrQI(v13, &v21, (void *)Queue, 0x1003u, v12);
    v13 = (FxIoQueue *)v21;
    v10 = (FxDevice *)PPObject;
  }
  if ( !Irp )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v14 = Flags;
  if ( (Flags & 2) != 0 )
  {
    --Irp->CurrentLocation;
    --Irp->Tail.Overlay.CurrentStackLocation;
  }
  if ( m_Globals->FxVerifierOn )
  {
    v18 = Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue(m_Globals, v10, Irp, v13, v14);
    v19 = v18;
    if ( v18 < 0 )
    {
      Irp->IoStatus.Status = v18;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return v19;
    }
    v13 = (FxIoQueue *)v21;
    v10 = (FxDevice *)PPObject;
  }
  if ( v10->m_ParentDevice == v13->m_Device )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    --Irp->CurrentLocation;
    v16 = --Irp->Tail.Overlay.CurrentStackLocation;
    PPObject = (void *)*((_QWORD *)PPObject + 28);
    v16->DeviceObject = (_DEVICE_OBJECT *)*((_QWORD *)PPObject + 18);
    v13 = (FxIoQueue *)v21;
    v10 = (FxDevice *)PPObject;
  }
  if ( (v14 & 1) != 0 )
  {
    m_CxDeviceInfo = v13->m_CxDeviceInfo;
    if ( m_CxDeviceInfo )
      p_IoInCallerContextCallback = &m_CxDeviceInfo->IoInCallerContextCallback;
    else
      p_IoInCallerContextCallback = &v10->m_PkgIo->m_InCallerContextCallback;
  }
  return FxPkgIo::DispatchStep2(v10->m_PkgIo, Irp, p_IoInCallerContextCallback, v13);
}
