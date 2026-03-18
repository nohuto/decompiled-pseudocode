/*
 * XREFs of imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x1C0003A40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005DAC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z @ 0x1C006975C (-PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceWdmDispatchPreprocessedIrp(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _IRP *Irp)
{
  __int64 v5; // rcx
  FxDevice *v6; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxIrpPreprocessInfo *v8; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 MajorFunction; // al
  void *m_PkgIo; // rcx
  unsigned int v13; // esi
  NTSTATUS v15; // eax
  _LIST_ENTRY *Flink; // rcx
  _IO_STACK_LOCATION *v17; // rax
  __int64 v18; // r11
  FxIrpPreprocessInfo *v19; // r10
  unsigned int NumMinorFunctions; // r8d
  int v21; // ecx
  void *retaddr; // [rsp+48h] [rbp+0h]
  void *PPObject; // [rsp+58h] [rbp+10h] BYREF

  PPObject = 0LL;
  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(v5) = 0;
  v6 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    v5 = LOWORD(v6->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v6 = (FxDevice *)((char *)v6 - v5);
  }
  if ( v6->m_Type == 4098 )
  {
    PPObject = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, &PPObject, (void *)Device, 0x1002u, v5);
    v6 = (FxDevice *)PPObject;
  }
  m_Globals = v6->m_Globals;
  if ( !Irp )
    FxVerifierNullBugCheck(v6->m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, Device, 0xBu) || m_Globals->FxVerifyDownlevel) )
  {
    Flink = v6->m_CxDeviceInfoListHead.Flink;
    if ( Flink != &v6->m_CxDeviceInfoListHead )
    {
      if ( v6->m_PreprocessInfoListHead.Flink != &v6->m_PreprocessInfoListHead )
      {
        while ( Flink[1].Flink != *(_LIST_ENTRY **)&DriverGlobals[-7].DriverName[8] )
        {
          Flink = Flink->Flink;
          if ( Flink == &v6->m_CxDeviceInfoListHead )
            goto LABEL_8;
        }
      }
      WPP_IFR_SF_(m_Globals, 2u, 0xDu, 0xBu, WPP_FxDeviceApiKm_cpp_Traceguids);
      FxVerifierDbgBreakPoint(m_Globals);
      v6 = (FxDevice *)PPObject;
    }
  }
LABEL_8:
  v8 = (FxIrpPreprocessInfo *)v6->m_PreprocessInfoListHead.Flink->Flink;
  --Irp->Tail.Overlay.CurrentStackLocation;
  --Irp->CurrentLocation;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction < 0x16u
    || MajorFunction > 0x17u && (MajorFunction != 27 || CurrentStackLocation->MinorFunction == 2)
    || (v15 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&v6->m_DeviceObject.m_DeviceObject[1], Irp, a5, 1u, 0x20u),
        v13 = v15,
        v15 >= 0) )
  {
    if ( v8 == (FxIrpPreprocessInfo *)&v6->m_PreprocessInfoListHead )
    {
LABEL_10:
      if ( Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 14 )
      {
LABEL_11:
        m_PkgIo = v6->m_PkgIo;
      }
      else
      {
        switch ( Irp->Tail.Overlay.CurrentStackLocation->MajorFunction )
        {
          case 0u:
          case 2u:
          case 0x10u:
          case 0x12u:
            m_PkgIo = v6->m_PkgGeneral;
            break;
          case 3u:
          case 4u:
          case 0xFu:
            goto LABEL_11;
          case 0x16u:
          case 0x1Bu:
            m_PkgIo = v6->m_PkgPnp;
            if ( !m_PkgIo )
              goto LABEL_45;
            break;
          case 0x17u:
            m_PkgIo = v6->m_PkgWmi;
            break;
          default:
LABEL_45:
            m_PkgIo = v6->m_PkgDefault;
            break;
        }
      }
      return (unsigned int)(*(__int64 (__fastcall **)(void *, _IRP *))(*(_QWORD *)m_PkgIo + 64LL))(m_PkgIo, Irp);
    }
    else
    {
      v17 = Irp->Tail.Overlay.CurrentStackLocation;
      v18 = v17->MajorFunction;
      while ( 1 )
      {
        v19 = v8;
        v8 = (FxIrpPreprocessInfo *)v8->ListEntry.Flink;
        if ( v19->Dispatch[v18].EvtDevicePreprocess )
          break;
LABEL_41:
        if ( v8 == (FxIrpPreprocessInfo *)&v6->m_PreprocessInfoListHead )
          goto LABEL_10;
      }
      NumMinorFunctions = v19->Dispatch[v18].NumMinorFunctions;
      if ( NumMinorFunctions )
      {
        v21 = 0;
        while ( v19->Dispatch[v18].MinorFunctions[v21] != v17->MinorFunction )
        {
          if ( ++v21 >= NumMinorFunctions )
            goto LABEL_41;
        }
      }
      return (unsigned int)PreprocessIrp(v6, Irp, v19, v8);
    }
  }
  else
  {
    Irp->IoStatus.Status = v15;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
  }
  return v13;
}
