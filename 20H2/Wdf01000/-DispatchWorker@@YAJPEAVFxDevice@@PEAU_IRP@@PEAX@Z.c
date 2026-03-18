/*
 * XREFs of ?DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z @ 0x1C00136D0
 * Callers:
 *     ?DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C001362C (-DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?Dispatch@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00514A0 (-Dispatch@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z @ 0x1C0013740 (-GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z @ 0x1C0051B68 (-PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z.c)
 */

int __fastcall DispatchWorker(FxDevice *Device, _IRP *Irp, _LIST_ENTRY *DispatchContext)
{
  _LIST_ENTRY *p_m_PreprocessInfoListHead; // rdi
  _LIST_ENTRY *v4; // r9
  FxPackage *DispatchPackage; // rax
  _IRP *v8; // r11
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  FxIrpPreprocessInfo *v11; // r8
  unsigned int NumMinorFunctions; // edx
  __int64 v13; // rcx

  p_m_PreprocessInfoListHead = &Device->m_PreprocessInfoListHead;
  v4 = DispatchContext;
  if ( DispatchContext == &Device->m_PreprocessInfoListHead )
  {
LABEL_2:
    DispatchPackage = FxDevice::GetDispatchPackage(Device, Irp->Tail.Overlay.CurrentStackLocation->MajorFunction);
    return DispatchPackage->Dispatch(DispatchPackage, v8);
  }
  else
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    while ( 1 )
    {
      v11 = (FxIrpPreprocessInfo *)v4;
      v4 = v4->Flink;
      if ( v11->Dispatch[CurrentStackLocation->MajorFunction].EvtDevicePreprocess )
        break;
LABEL_9:
      if ( v4 == p_m_PreprocessInfoListHead )
        goto LABEL_2;
    }
    NumMinorFunctions = v11->Dispatch[CurrentStackLocation->MajorFunction].NumMinorFunctions;
    if ( NumMinorFunctions )
    {
      v13 = 0LL;
      while ( v11->Dispatch[CurrentStackLocation->MajorFunction].MinorFunctions[v13] != CurrentStackLocation->MinorFunction )
      {
        v13 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v13 >= NumMinorFunctions )
          goto LABEL_9;
      }
    }
    return PreprocessIrp(Device, Irp, v11, v4);
  }
}
