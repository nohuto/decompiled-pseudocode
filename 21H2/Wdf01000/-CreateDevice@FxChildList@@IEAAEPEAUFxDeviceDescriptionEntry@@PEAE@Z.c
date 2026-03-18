/*
 * XREFs of ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C001F658
 * Callers:
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0017820 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001812C (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0018288 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C001F8E0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C001FA58 (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C00301A4 (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C00302A8 (-Destroy@FxDevice@@QEAAXXZ.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C005C270 (-MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z.c)
 */

char __fastcall FxChildList::CreateDevice(
        FxChildList *this,
        FxDeviceDescriptionEntry *Entry,
        unsigned __int8 *InvalidateRelations)
{
  char v6; // r14
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *m_IdentificationDescription; // rdx
  char v8; // al
  WDFCHILDLIST__ *ObjectHandleUnchecked; // rax
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *v10; // rdx
  int v11; // eax
  int _a1; // ebx
  FxDevice *v13; // rax
  FxDevice *CreatedDevice; // r13
  unsigned __int64 *p_m_ListLock; // rcx
  KIRQL v17; // al
  bool v18; // zf
  _LIST_ENTRY *p_m_ModificationLink; // rdi
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  const void *v22; // rax
  KIRQL v23; // bl
  unsigned __int8 v24; // r8
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-C0h] BYREF
  WDFDEVICE_INIT init; // [rsp+50h] [rbp-B0h] BYREF

  WDFDEVICE_INIT::WDFDEVICE_INIT(&init, this->m_DeviceBase->m_Driver);
  init.Characteristics |= 0x80u;
  v6 = 1;
  m_IdentificationDescription = Entry->m_IdentificationDescription;
  init.Pdo.Parent = this->m_Device;
  init.CreatedOnStack = 1;
  init.InitType = FxDeviceInitTypePdo;
  v8 = -init.Pdo.Parent->m_PowerPageableCapable;
  init.Pdo.DescriptionEntry = Entry;
  init.PowerPageable &= -(v8 != 0);
  if ( this->m_StaticList )
  {
    v13 = *(FxDevice **)&m_IdentificationDescription[2].IdentificationDescriptionSize;
    init.CreatedDevice = v13;
    goto LABEL_5;
  }
  ObjectHandleUnchecked = (WDFCHILDLIST__ *)FxObject::GetObjectHandleUnchecked(this);
  v11 = this->m_EvtCreateDevice.m_Method(ObjectHandleUnchecked, v10, &init);
  _a1 = v11;
  if ( v11 == -1073741267 )
  {
    if ( init.CreatedDevice )
      FxDevice::Destroy((FxDevice *)init.CreatedDevice);
    *InvalidateRelations = 1;
    goto LABEL_20;
  }
  if ( v11 < 0 )
  {
LABEL_12:
    CreatedDevice = (FxDevice *)init.CreatedDevice;
    p_m_ListLock = &this->m_ListLock;
    if ( init.CreatedDevice )
    {
      v17 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
      v18 = Entry->m_ModificationState == ModificationUnspecified;
      Entry->m_DescriptionState = DescriptionReportedMissing;
      if ( !v18 )
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
      KeReleaseSpinLock(&this->m_ListLock, v17);
      v22 = (const void *)FxObject::GetObjectHandleUnchecked(CreatedDevice);
      WPP_IFR_SF_qqd(
        this->m_Globals,
        2u,
        0xCu,
        0x21u,
        WPP_FxChildList_cpp_Traceguids,
        v22,
        CreatedDevice->m_DeviceObject.m_DeviceObject,
        _a1);
      FxDevice::DeleteDeviceFromFailedCreate(CreatedDevice, _a1, 1u);
      init.CreatedDevice = 0LL;
    }
    else
    {
      freeHead.Blink = &freeHead;
      freeHead.Flink = &freeHead;
      v23 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
      FxChildList::MarkDescriptionNotPresentWorker(this, Entry, 1u);
      FxChildList::ProcessModificationsLocked(this, &freeHead);
      KeReleaseSpinLock(&this->m_ListLock, v23);
      FxChildList::DrainFreeListHead(this, &freeHead, v24);
    }
LABEL_20:
    v6 = 0;
    goto LABEL_6;
  }
  v13 = (FxDevice *)init.CreatedDevice;
  if ( !init.CreatedDevice )
  {
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x20u, WPP_FxChildList_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(this->m_Globals);
    _a1 = -1073740951;
    goto LABEL_12;
  }
LABEL_5:
  Entry->m_Pdo = v13;
  Entry->m_DescriptionState = DescriptionInstantiatedHasObject;
LABEL_6:
  WDFDEVICE_INIT::~WDFDEVICE_INIT(&init);
  return v6;
}
