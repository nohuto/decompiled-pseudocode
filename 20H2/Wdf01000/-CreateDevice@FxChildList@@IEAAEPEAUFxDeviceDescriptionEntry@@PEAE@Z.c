/*
 * XREFs of ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C003A578
 * Callers:
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C000FBEC (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000FEA4 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0010CA8 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C002F42C (WPP_IFR_SF_qid.c)
 *     ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C003B1F8 (-MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C004EFE4 (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C004F1C4 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C004FD2C (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C00511EC (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 */

char __fastcall FxChildList::CreateDevice(
        FxChildList *this,
        FxDeviceDescriptionEntry *Entry,
        unsigned __int8 *InvalidateRelations)
{
  char v6; // r14
  char v7; // al
  void *CreatedDevice; // rbx
  WDFCHILDLIST__ *ObjectHandleUnchecked; // rax
  int _a1; // r15d
  unsigned __int64 *p_m_ListLock; // rcx
  KIRQL v12; // al
  bool v13; // zf
  _LIST_ENTRY *p_m_ModificationLink; // rdi
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  const void *v17; // rax
  KIRQL v18; // bl
  unsigned __int8 v19; // r8
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-C0h] BYREF
  WDFDEVICE_INIT init; // [rsp+50h] [rbp-B0h] BYREF

  WDFDEVICE_INIT::WDFDEVICE_INIT(&init, this->m_DeviceBase->m_Driver);
  init.Characteristics |= 0x80u;
  v6 = 1;
  init.Pdo.Parent = this->m_Device;
  init.CreatedOnStack = 1;
  init.InitType = FxDeviceInitTypePdo;
  v7 = -init.Pdo.Parent->m_PowerPageableCapable;
  init.Pdo.DescriptionEntry = Entry;
  init.PowerPageable &= -(v7 != 0);
  if ( !this->m_StaticList )
  {
    ObjectHandleUnchecked = (WDFCHILDLIST__ *)FxObject::GetObjectHandleUnchecked(this);
    _a1 = this->m_EvtCreateDevice.m_Method(ObjectHandleUnchecked, Entry->m_IdentificationDescription, &init);
    if ( _a1 == -1073741267 )
    {
      if ( init.CreatedDevice )
        FxDevice::Destroy((FxDevice *)init.CreatedDevice);
      *InvalidateRelations = 1;
    }
    else
    {
      CreatedDevice = init.CreatedDevice;
      if ( _a1 >= 0 )
      {
        if ( !init.CreatedDevice )
        {
          WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x20u, WPP_FxChildList_cpp_Traceguids, _a1);
          FxVerifierDbgBreakPoint(this->m_Globals);
          CreatedDevice = init.CreatedDevice;
          _a1 = -1073740951;
        }
        if ( _a1 >= 0 )
          goto LABEL_11;
      }
      p_m_ListLock = &this->m_ListLock;
      if ( CreatedDevice )
      {
        v12 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
        v13 = Entry->m_ModificationState == ModificationUnspecified;
        Entry->m_DescriptionState = DescriptionReportedMissing;
        if ( !v13 )
        {
          p_m_ModificationLink = &Entry->m_ModificationLink;
          Flink = p_m_ModificationLink->Flink;
          if ( p_m_ModificationLink->Flink->Blink != p_m_ModificationLink
            || (Blink = p_m_ModificationLink->Blink, Blink->Flink != p_m_ModificationLink) )
          {
            __fastfail(3u);
          }
          Blink->Flink = Flink;
          Flink->Blink = Blink;
        }
        KeReleaseSpinLock(&this->m_ListLock, v12);
        v17 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)CreatedDevice);
        WPP_IFR_SF_qid(
          this->m_Globals,
          2u,
          0xCu,
          0x21u,
          WPP_FxChildList_cpp_Traceguids,
          v17,
          *((_QWORD *)CreatedDevice + 18),
          _a1);
        FxDevice::DeleteDeviceFromFailedCreate((FxDevice *)CreatedDevice, _a1, 1u);
        init.CreatedDevice = 0LL;
      }
      else
      {
        freeHead.Blink = &freeHead;
        freeHead.Flink = &freeHead;
        v18 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
        FxChildList::MarkDescriptionNotPresentWorker(this, Entry, 1u);
        FxChildList::ProcessModificationsLocked(this, &freeHead);
        KeReleaseSpinLock(&this->m_ListLock, v18);
        FxChildList::DrainFreeListHead(this, &freeHead, v19);
      }
    }
    v6 = 0;
    goto LABEL_21;
  }
  CreatedDevice = *(void **)&Entry->m_IdentificationDescription[2].IdentificationDescriptionSize;
  init.CreatedDevice = CreatedDevice;
LABEL_11:
  Entry->m_Pdo = (FxDevice *)CreatedDevice;
  Entry->m_DescriptionState = DescriptionInstantiatedHasObject;
LABEL_21:
  WDFDEVICE_INIT::~WDFDEVICE_INIT(&init);
  return v6;
}
