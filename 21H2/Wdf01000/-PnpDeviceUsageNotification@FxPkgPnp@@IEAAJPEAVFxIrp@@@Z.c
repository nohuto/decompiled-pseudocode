/*
 * XREFs of ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C001C83C
 * Callers:
 *     ?_PnpDeviceUsageNotification@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C001CC20 (-_PnpDeviceUsageNotification@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0002DF8 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C0009310 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C0017128 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0018170 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0018234 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0019A6C (-Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C001AB80 (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?MxHasEnoughRemainingThreadStack@Mx@@SAEXZ @ 0x1C001AC40 (-MxHasEnoughRemainingThreadStack@Mx@@SAEXZ.c)
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x1C001AD70 (-Free@MxWorkItem@@QEAAXXZ.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001C758 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C001C77C (-SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 *     ?_UsageToSpecialType@FxPkgPnp@@KA?AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@@Z @ 0x1C001CB04 (-_UsageToSpecialType@FxPkgPnp@@KA-AW4_WDF_SPECIAL_FILE_TYPE@@W4_DEVICE_USAGE_NOTIFICATION_TYPE@@.c)
 *     ?CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z @ 0x1C001CB6C (-CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_Dd @ 0x1C003511C (WPP_IFR_SF_Dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qddd @ 0x1C0053A68 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qqddd @ 0x1C006CB20 (WPP_IFR_SF_qqddd.c)
 *     ?RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z @ 0x1C0088998 (-RevertUsageNotificationFlags@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@EK@Z.c)
 *     WPP_IFR_SF_DDDDDDD @ 0x1C0089088 (WPP_IFR_SF_DDDDDDD.c)
 *     ?SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z @ 0x1C008DB7C (-SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z.c)
 *     ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C0091644 (-GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpDeviceUsageNotification(FxPkgPnp *this, _DEVICE_OBJECT *Irp)
{
  _DEVICE_OBJECT *m_DeviceObject; // r13
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int v5; // esi
  __int64 v6; // rcx
  _DEVICE_USAGE_NOTIFICATION_TYPE _a5; // r14d
  unsigned int _a6; // r12d
  unsigned int v9; // ebx
  __int64 v10; // r8
  FxRelatedDeviceList *m_UsageDependentDeviceList; // rbx
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  char v13; // bl
  FxDeviceBase *m_DeviceBase; // rdx
  _WDF_SPECIAL_FILE_TYPE v15; // eax
  __int64 v16; // r8
  void (__fastcall *v17)(__int64, _QWORD, __int64); // r9
  __int64 v18; // r10
  FxPowerPolicyOwnerSettings *v19; // rcx
  _FX_DRIVER_GLOBALS *v20; // rcx
  unsigned int v21; // ebx
  __int32 v23; // eax
  _WDF_SPECIAL_FILE_TYPE v24; // eax
  __int64 v25; // r8
  __int64 (__fastcall *v26)(__int64, _QWORD, __int64); // r9
  __int64 v27; // r10
  int v28; // r15d
  _DEVICE_OBJECT **v29; // r8
  const void *ObjectHandleUnchecked; // rax
  __int64 v31; // rdx
  _IRP *v32; // rax
  const void *v33; // rax
  unsigned __int8 v34; // dl
  _FX_DRIVER_GLOBALS *v35; // rcx
  CCHAR v36; // cl
  FxRelatedDevice *v37; // r13
  CCHAR v38; // r15
  FxRelatedDevice *NextEntry; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  char StackSize; // bl
  _IRP *v42; // rax
  const void *v43; // rax
  int globals; // edx
  FxRelatedDevice *v45; // r15
  FxRelatedDevice *v46; // rax
  FxRelatedDevice *v47; // rbx
  FxRelatedDevice *v48; // rax
  __int64 v50; // r8
  int v51; // r9d
  __int64 v52; // rcx
  FxRelatedDevice *v53; // r15
  FxRelatedDevice *v54; // rax
  __int64 v56; // r8
  int v57; // r9d
  __int64 v58; // rcx
  FxRelatedDevice *v59; // r14
  FxRelatedDevice *v60; // rax
  _FX_DRIVER_GLOBALS *v61; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-59h]
  MxAutoWorkItem workItem; // [rsp+60h] [rbp-19h] BYREF
  FxRelatedDeviceList *v64; // [rsp+68h] [rbp-11h]
  FxAutoIrp relatedIrp; // [rsp+70h] [rbp-9h] BYREF
  FxAutoIrp parentIrp; // [rsp+78h] [rbp-1h] BYREF
  FxRelatedDevice *Entry; // [rsp+80h] [rbp+7h]
  unsigned int OldFlags; // [rsp+E0h] [rbp+67h]
  MxDeviceObject dependentDevice; // [rsp+E8h] [rbp+6Fh] BYREF
  int v70; // [rsp+F0h] [rbp+77h]
  MxDeviceObject topOfParentStack; // [rsp+F8h] [rbp+7Fh] BYREF

  dependentDevice.m_DeviceObject = Irp;
  relatedIrp.m_Irp = 0LL;
  m_DeviceObject = Irp;
  parentIrp.m_Irp = 0LL;
  topOfParentStack.m_DeviceObject = 0LL;
  workItem.m_WorkItem = 0LL;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x3Eu, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids);
    m_Globals = this->m_Globals;
  }
  v5 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)&m_DeviceObject->Type + 184LL);
  _a5 = *(_DWORD *)(v6 + 16);
  _a6 = *(unsigned __int8 *)(v6 + 8);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_DDDDDDD(
      m_Globals,
      this->m_SpecialSupport[3],
      this->m_SpecialSupport[1],
      this->m_SpecialSupport[2],
      traceGuid,
      _a5,
      _a6,
      this->m_SpecialSupport[0],
      this->m_SpecialSupport[2],
      this->m_SpecialSupport[1],
      this->m_SpecialSupport[3],
      this->m_SpecialSupport[5]);
  if ( (unsigned int)(_a5 - 1) > 5
    || (_BYTE)_a6 && !BYTE1(this->m_DeviceBase[1].m_Globals) && !this->m_SpecialSupport[_a5 - 1] )
  {
    v61 = this->m_Globals;
    v5 = -1073741822;
    if ( v61->FxVerboseOn )
      WPP_IFR_SF_Dd(v61, 5u, 0xCu, 0x40u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a5, -1073741822);
    goto LABEL_26;
  }
  if ( !Mx::MxHasEnoughRemainingThreadStack() && (FxDevice::IsPdo(this->m_Device) || this->m_UsageDependentDeviceList) )
  {
    v5 = MxWorkItem::Allocate(&workItem, v29[18], v29);
    if ( v5 < 0 )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qqddd(
        this->m_Globals,
        v31,
        0xCu,
        0x41u,
        (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
        ObjectHandleUnchecked,
        *(const void **)(v31 + 144),
        _a5,
        _a6,
        v5);
      goto LABEL_26;
    }
  }
  v9 = FxPkgPnp::SetUsageNotificationFlags(this, _a5, _a6);
  OldFlags = v9;
  if ( FxDevice::IsPdo(this->m_Device) )
  {
    topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v10 + 224) + 144LL));
    v32 = IoAllocateIrp(topOfParentStack.m_DeviceObject->StackSize, 0);
    if ( v32 )
    {
      parentIrp.m_Irp = v32;
      v5 = SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, (FxIrp *)m_DeviceObject, 0);
    }
    else
    {
      v5 = -1073741670;
      v33 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qqddd(
        this->m_Globals,
        v34,
        0xCu,
        0x42u,
        (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
        v33,
        topOfParentStack.m_DeviceObject,
        _a5,
        _a6,
        -1073741670);
    }
    ObfDereferenceObject(topOfParentStack.m_DeviceObject);
    topOfParentStack.m_DeviceObject = 0LL;
    if ( v5 < 0 )
    {
      v35 = this->m_Globals;
      if ( v35->FxVerboseOn )
        WPP_IFR_SF_d(v35, 5u, 0xCu, 0x43u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, v5);
      FxPkgPnp::RevertUsageNotificationFlags(this, _a5, _a6, v9);
      goto LABEL_26;
    }
  }
  m_UsageDependentDeviceList = this->m_UsageDependentDeviceList;
  Entry = 0LL;
  LOBYTE(v70) = 0;
  v64 = m_UsageDependentDeviceList;
  if ( !m_UsageDependentDeviceList )
  {
    v64 = 0LL;
    goto LABEL_12;
  }
  FxTransactionedList::LockForEnum(m_UsageDependentDeviceList, this->m_Globals);
  v36 = v70;
  v37 = Entry;
  while ( 1 )
  {
    v38 = v36;
    NextEntry = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v37);
    v37 = NextEntry;
    if ( !NextEntry )
      break;
    AttachedDeviceReference = IoGetAttachedDeviceReference(NextEntry->m_DeviceObject);
    StackSize = AttachedDeviceReference->StackSize;
    ObfDereferenceObject(AttachedDeviceReference);
    v36 = StackSize;
    if ( StackSize <= v38 )
      v36 = v38;
  }
  m_DeviceObject = dependentDevice.m_DeviceObject;
  if ( v38 <= 0 )
  {
LABEL_12:
    m_Owner = this->m_PowerPolicyMachine.m_Owner;
    v13 = 0;
    if ( m_Owner )
    {
      v5 = FxPowerIdleMachine::PowerReferenceWorker(
             &m_Owner->m_PowerIdleMachine,
             1u,
             FxPowerReferenceDefault,
             0LL,
             0,
             0LL);
      if ( v5 < 0 )
        goto LABEL_73;
      v13 = 1;
    }
    *(_DWORD *)(*(_QWORD *)&m_DeviceObject->Type + 48LL) = v5;
    v5 = this->SendIrpSynchronously(this, (FxIrp *)m_DeviceObject);
    if ( v5 < 0 )
      goto LABEL_74;
    if ( !(_BYTE)_a6
      || this->m_HasPowerThread
      || (v23 = FxPkgPnp::_UsageToSpecialType(_a5) - 1) != 0 && (unsigned int)(v23 - 1) >= 2
      || (v5 = this->QueryForPowerThread(this), v5 >= 0) )
    {
      FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      if ( this->m_DeviceUsageNotification.m_Method )
      {
        v15 = FxPkgPnp::_UsageToSpecialType(_a5);
        LOBYTE(v16) = _a6;
        v17(v18, (unsigned int)v15, v16);
        m_DeviceBase = this->m_DeviceBase;
      }
      FxObject::GetObjectHandleUnchecked(m_DeviceBase);
      if ( this->m_DeviceUsageNotificationEx.m_Method )
      {
        v24 = FxPkgPnp::_UsageToSpecialType(_a5);
        LOBYTE(v25) = _a6;
        v28 = v26(v27, (unsigned int)v24, v25);
        v5 = v28;
        if ( v28 < 0 )
        {
          if ( FxDevice::IsPdo(this->m_Device) )
          {
            topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v56 + 224)
                                                                                             + 144LL));
            SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, (FxIrp *)m_DeviceObject, 1u);
            ObfDereferenceObject(topOfParentStack.m_DeviceObject);
          }
          else
          {
            v58 = *(_QWORD *)(*(_QWORD *)&m_DeviceObject->Type + 184LL);
            *(_OWORD *)(v58 - 72) = *(_OWORD *)v58;
            *(_OWORD *)(v58 - 56) = *(_OWORD *)(v58 + 16);
            *(_OWORD *)(v58 - 40) = *(_OWORD *)(v58 + 32);
            *(_QWORD *)(v58 - 24) = *(_QWORD *)(v58 + 48);
            *(_BYTE *)(v58 - 69) = v57;
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)&m_DeviceObject->Type + 184LL) - 64LL) = v57;
            *(_DWORD *)(*(_QWORD *)&m_DeviceObject->Type + 48LL) = v57;
            FxIrp::SendIrpSynchronously((FxIrp *)m_DeviceObject, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
          }
          *(_DWORD *)(*(_QWORD *)&m_DeviceObject->Type + 48LL) = v28;
          FxPkgPnp::RevertUsageNotificationFlags(this, _a5, _a6, OldFlags);
          v59 = 0LL;
          if ( v64 )
          {
            for ( dependentDevice.m_DeviceObject = 0LL;
                  ;
                  SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, (FxIrp *)m_DeviceObject, 1u) )
            {
              v60 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v59);
              v59 = v60;
              if ( !v60 )
                break;
              dependentDevice.m_DeviceObject = v60->m_DeviceObject;
            }
          }
          goto LABEL_21;
        }
      }
      else
      {
        v5 = 0;
      }
      FxPkgPnp::CommitUsageNotification(this, _a5, OldFlags);
      v19 = this->m_PowerPolicyMachine.m_Owner;
      if ( v19 && _a5 == DeviceUsageTypeDumpFile )
      {
        if ( (_BYTE)_a6 )
          FxPowerIdleMachine::PowerReferenceWorker(&v19->m_PowerIdleMachine, 0, FxPowerReferenceDefault, 0LL, 0, 0LL);
        else
          FxPowerIdleMachine::IoDecrement(&v19->m_PowerIdleMachine, 0LL, 0, 0LL);
      }
LABEL_21:
      if ( v13 )
        FxPowerIdleMachine::IoDecrement(&this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine, 0LL, 0, 0LL);
LABEL_23:
      if ( !v64 )
        goto LABEL_24;
      goto LABEL_58;
    }
    if ( FxDevice::IsPdo(this->m_Device) )
    {
      topOfParentStack.m_DeviceObject = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(*(_QWORD *)(v50 + 224) + 144LL));
      SendDeviceUsageNotification(&topOfParentStack, &parentIrp, &workItem, (FxIrp *)m_DeviceObject, 1u);
      ObfDereferenceObject(topOfParentStack.m_DeviceObject);
    }
    else
    {
      v52 = *(_QWORD *)(*(_QWORD *)&m_DeviceObject->Type + 184LL);
      *(_OWORD *)(v52 - 72) = *(_OWORD *)v52;
      *(_OWORD *)(v52 - 56) = *(_OWORD *)(v52 + 16);
      *(_OWORD *)(v52 - 40) = *(_OWORD *)(v52 + 32);
      *(_QWORD *)(v52 - 24) = *(_QWORD *)(v52 + 48);
      *(_BYTE *)(v52 - 69) = v51;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)&m_DeviceObject->Type + 184LL) - 64LL) = v51;
      *(_DWORD *)(*(_QWORD *)&m_DeviceObject->Type + 48LL) = v51;
      FxIrp::SendIrpSynchronously((FxIrp *)m_DeviceObject, this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
    }
LABEL_73:
    *(_DWORD *)(*(_QWORD *)&m_DeviceObject->Type + 48LL) = v5;
LABEL_74:
    FxPkgPnp::RevertUsageNotificationFlags(this, _a5, _a6, OldFlags);
    v53 = 0LL;
    if ( v64 )
    {
      for ( dependentDevice.m_DeviceObject = 0LL;
            ;
            SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, (FxIrp *)m_DeviceObject, 1u) )
      {
        v54 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v53);
        v53 = v54;
        if ( !v54 )
          break;
        dependentDevice.m_DeviceObject = v54->m_DeviceObject;
      }
    }
    goto LABEL_21;
  }
  v42 = IoAllocateIrp(v38, 0);
  if ( v42 )
  {
    dependentDevice.m_DeviceObject = 0LL;
    v45 = 0LL;
    relatedIrp.m_Irp = v42;
    while ( 1 )
    {
      v46 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v45);
      v45 = v46;
      if ( !v46 )
        goto LABEL_12;
      dependentDevice.m_DeviceObject = v46->m_DeviceObject;
      v5 = SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, (FxIrp *)m_DeviceObject, 0);
      if ( v5 < 0 )
      {
        v47 = 0LL;
        while ( 1 )
        {
          v48 = FxRelatedDeviceList::GetNextEntry(this->m_UsageDependentDeviceList, v47);
          v47 = v48;
          if ( !v48 || v48 == v45 )
            break;
          dependentDevice.m_DeviceObject = v48->m_DeviceObject;
          SendDeviceUsageNotification(&dependentDevice, &relatedIrp, &workItem, (FxIrp *)m_DeviceObject, 1u);
        }
        goto LABEL_23;
      }
    }
  }
  v5 = -1073741670;
  v43 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_qddd(
    this->m_Globals,
    globals,
    0xCu,
    0x44u,
    (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
    v43,
    _a5,
    _a6,
    globals);
LABEL_58:
  FxTransactionedList::UnlockFromEnum(this->m_UsageDependentDeviceList, this->m_Globals);
LABEL_24:
  v20 = this->m_Globals;
  if ( v20->FxVerboseOn )
    WPP_IFR_SF_d(v20, 5u, 0xCu, 0x45u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, v5);
LABEL_26:
  v21 = FxPkgPnp::CompletePnpRequest(this, (FxIrp *)m_DeviceObject, v5);
  MxWorkItem::Free(&workItem);
  if ( parentIrp.m_Irp )
    IoFreeIrp(parentIrp.m_Irp);
  if ( relatedIrp.m_Irp )
    IoFreeIrp(relatedIrp.m_Irp);
  return v21;
}
