/*
 * XREFs of ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0023B1C
 * Callers:
 *     imp_WdfDeviceCreate @ 0x1C0023A20 (imp_WdfDeviceCreate.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x1C001F62C (--_GWDFDEVICE_INIT@@QEAAPEAXI@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0020D0C (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0023D98 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ??0FxDevice@@QEAA@PEAVFxDriver@@@Z @ 0x1C00246E4 (--0FxDevice@@QEAA@PEAVFxDriver@@@Z.c)
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C002494C (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C002693C (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C00301A4 (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 *     ?ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00347EC (-ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?MoveContexts@FxObject@@QEAAJPEAV1@@Z @ 0x1C006D08C (-MoveContexts@FxObject@@QEAAJPEAV1@@Z.c)
 */

__int64 __fastcall FxDevice::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE_INIT **DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes,
        FxDevice **Device)
{
  __int64 v4; // rdi
  FxPoolTypeOrPoolFlags v6; // xmm1
  FxDevice *v9; // rax
  FxDevice *v10; // rax
  FxDevice *v11; // rbx
  FxDevice *v12; // rbp
  int v13; // esi
  FxDevice *v14; // rcx
  int v15; // eax
  int v16; // eax
  FxObject *v17; // rcx
  __int64 v18; // rax
  _LIST_ENTRY *v19; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  _QWORD *i; // rcx
  FxPkgPnp *m_PkgPnp; // rcx
  _LIST_ENTRY *Blink; // rdx
  int v25; // eax
  _LIST_ENTRY *v26; // rax
  _LIST_ENTRY *v27; // r9
  FxPoolTypeOrPoolFlags v28; // [rsp+40h] [rbp-38h] BYREF
  void *object; // [rsp+88h] [rbp+10h] BYREF

  v4 = (__int64)*DeviceInit;
  *(_QWORD *)&v28.UsePoolType = 0LL;
  v28.u.PoolFlags = 64LL;
  v6 = v28;
  *Device = 0LL;
  v28 = v6;
  v9 = (FxDevice *)FxObjectHandleAllocCommon(
                     FxDriverGlobals,
                     &v28,
                     0x2C0uLL,
                     0,
                     DeviceAttributes,
                     0,
                     FxObjectTypeExternal);
  if ( !v9 )
  {
    v12 = 0LL;
    goto LABEL_39;
  }
  FxDevice::FxDevice(v9, *(FxDriver **)(v4 + 8));
  v11 = v10;
  v12 = v10;
  if ( !v10 )
  {
LABEL_39:
    v13 = -1073741670;
    goto LABEL_23;
  }
  v13 = FxDevice::Initialize(v10, (WDFDEVICE_INIT *)v4, DeviceAttributes);
  v14 = v11;
  if ( v13 < 0 )
    goto $Done_15;
  v15 = *(_DWORD *)(v4 + 36);
  if ( v15 )
  {
    v25 = v15 - 1;
    if ( v25 )
    {
      if ( v25 != 1 )
        goto LABEL_7;
      v16 = FxDevice::ControlDeviceInitialize(v11, (WDFDEVICE_INIT *)v4);
    }
    else
    {
      v16 = FxDevice::PdoInitialize(v11, (WDFDEVICE_INIT *)v4);
    }
  }
  else
  {
    v16 = FxDevice::FdoInitialize(v11, (WDFDEVICE_INIT *)v4);
  }
  v13 = v16;
  v14 = v11;
  if ( v16 < 0 )
  {
$Done_15:
    FxDevice::DeleteDeviceFromFailedCreate(v14, v13, 0);
    v12 = 0LL;
    goto LABEL_23;
  }
LABEL_7:
  v13 = FxDisposeList::_Create(v11->m_Globals, v11->m_DeviceObject.m_DeviceObject, &v11->m_DisposeList);
  v14 = v11;
  if ( v13 < 0 )
    goto $Done_15;
  v13 = FxObject::Commit(v11, (_FX_DRIVER_GLOBALS *)DeviceAttributes, &object, v11->m_Driver, 1u);
  v14 = v11;
  if ( v13 < 0 )
    goto $Done_15;
  v17 = *(FxObject **)(v4 + 936);
  if ( v17 )
  {
    v13 = FxObject::MoveContexts(v17, v11);
    v14 = v11;
    if ( v13 < 0 )
      goto $Done_15;
  }
  v18 = *(_QWORD *)(v4 + 48);
  if ( v18 )
  {
    v11->m_DeviceName = *(_UNICODE_STRING *)(v18 + 104);
    *(_OWORD *)(v18 + 104) = 0LL;
  }
  v19 = *(_LIST_ENTRY **)(v4 + 264);
  if ( v19 )
  {
    Blink = v11->m_PreprocessInfoListHead.Blink;
    if ( Blink->Flink != &v11->m_PreprocessInfoListHead )
LABEL_37:
      __fastfail(3u);
    v19->Flink = &v11->m_PreprocessInfoListHead;
    v19->Blink = Blink;
    Blink->Flink = v19;
    v11->m_PreprocessInfoListHead.Blink = v19;
    *(_QWORD *)(v4 + 264) = 0LL;
    ++v11->m_DeviceObject.m_DeviceObject->StackSize;
  }
  m_DeviceObject = v11->m_DeviceObject.m_DeviceObject;
  if ( ((__int64)m_DeviceObject[1].CurrentIrp & 1) != 0 )
    ++m_DeviceObject->StackSize;
  if ( v11->m_SelfIoTargetNeeded )
    ++v11->m_DeviceObject.m_DeviceObject->StackSize;
  v12 = v11;
  for ( i = *(_QWORD **)(v4 + 920); i != (_QWORD *)(v4 + 920); i = (_QWORD *)*i )
  {
    v26 = (_LIST_ENTRY *)i[4];
    if ( v26 )
    {
      v27 = v11->m_PreprocessInfoListHead.Blink;
      if ( v27->Flink != &v11->m_PreprocessInfoListHead )
        goto LABEL_37;
      v26->Flink = &v11->m_PreprocessInfoListHead;
      v26->Blink = v27;
      v27->Flink = v26;
      v11->m_PreprocessInfoListHead.Blink = v26;
      i[4] = 0LL;
      ++v11->m_DeviceObject.m_DeviceObject->StackSize;
    }
  }
  m_PkgPnp = v11->m_PkgPnp;
  if ( m_PkgPnp )
    m_PkgPnp->FinishInitialize(m_PkgPnp, (WDFDEVICE_INIT *)v4);
  *(_QWORD *)(v4 + 16) = v11;
  *DeviceInit = 0LL;
  if ( !*(_BYTE *)(v4 + 24) )
    WDFDEVICE_INIT::`scalar deleting destructor'((WDFDEVICE_INIT *)v4);
LABEL_23:
  *Device = v12;
  return (unsigned int)v13;
}
