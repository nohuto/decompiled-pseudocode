/*
 * XREFs of ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0052C14
 * Callers:
 *     imp_WdfDeviceCreate @ 0x1C0047860 (imp_WdfDeviceCreate.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x1C0044158 (--_GWDFDEVICE_INIT@@QEAAPEAXI@Z.c)
 *     ?ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00502DC (-ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0050700 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0050B40 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ??0FxDevice@@QEAA@PEAVFxDriver@@@Z @ 0x1C00512F0 (--0FxDevice@@QEAA@PEAVFxDriver@@@Z.c)
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C0051ABC (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0051F4C (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C00552D8 (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?MoveContexts@FxObject@@QEAAJPEAV1@@Z @ 0x1C005A078 (-MoveContexts@FxObject@@QEAAJPEAV1@@Z.c)
 */

__int64 __fastcall FxDevice::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE_INIT **DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes,
        FxDevice **Device)
{
  __int64 v4; // rdi
  _POOL_TYPE v8; // edx
  FxDevice *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // esi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  FxObject *v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  _QWORD *i; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // r9
  __int64 v24; // rcx
  void *object; // [rsp+78h] [rbp+10h] BYREF

  v4 = (__int64)*DeviceInit;
  v8 = ExDefaultNonPagedPoolType;
  *Device = 0LL;
  v9 = (FxDevice *)FxObjectHandleAlloc(FxDriverGlobals, v8, 0x2C0uLL, 0, DeviceAttributes, 0, FxObjectTypeExternal);
  if ( v9 )
  {
    FxDevice::FxDevice(v9, *(FxDriver **)(v4 + 8));
    v11 = v10;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
  {
    v12 = -1073741670;
    goto LABEL_40;
  }
  v12 = FxDevice::Initialize((FxDevice *)v11, (WDFDEVICE_INIT *)v4, DeviceAttributes);
  if ( v12 < 0 )
  {
LABEL_39:
    FxDevice::DeleteDeviceFromFailedCreate((FxDevice *)v11, v12, 0);
    v11 = 0LL;
    goto LABEL_40;
  }
  v13 = *(_DWORD *)(v4 + 36);
  if ( !v13 )
  {
    v15 = FxDevice::FdoInitialize((FxDevice *)v11, (WDFDEVICE_INIT *)v4);
    goto LABEL_13;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v15 = FxDevice::PdoInitialize((FxDevice *)v11, (WDFDEVICE_INIT *)v4);
    goto LABEL_13;
  }
  if ( v14 == 1 )
  {
    v15 = FxDevice::ControlDeviceInitialize((FxDevice *)v11, (WDFDEVICE_INIT *)v4);
LABEL_13:
    v12 = v15;
  }
  if ( v12 < 0 )
    goto LABEL_39;
  v12 = FxDisposeList::_Create(*(_FX_DRIVER_GLOBALS **)(v11 + 16), *(void **)(v11 + 144), (FxDisposeList **)(v11 + 128));
  if ( v12 < 0 )
    goto LABEL_39;
  v12 = FxObject::Commit(
          (FxObject *)v11,
          (_FX_DRIVER_GLOBALS *)DeviceAttributes,
          &object,
          *(FxObject **)(v11 + 136),
          1u);
  if ( v12 < 0 )
    goto LABEL_39;
  v16 = *(FxObject **)(v4 + 936);
  if ( v16 )
  {
    v12 = FxObject::MoveContexts(v16, (FxObject *)v11);
    if ( v12 < 0 )
      goto LABEL_39;
  }
  v17 = *(_QWORD *)(v4 + 48);
  if ( v17 )
  {
    *(_OWORD *)(v11 + 232) = *(_OWORD *)(v17 + 104);
    *(_OWORD *)(v17 + 104) = 0LL;
  }
  v18 = *(_QWORD **)(v4 + 264);
  if ( v18 )
  {
    v19 = *(_QWORD **)(v11 + 376);
    if ( *v19 != v11 + 368 )
LABEL_41:
      __fastfail(3u);
    *v18 = v11 + 368;
    v18[1] = v19;
    *v19 = v18;
    *(_QWORD *)(v11 + 376) = v18;
    *(_QWORD *)(v4 + 264) = 0LL;
    ++*(_BYTE *)(*(_QWORD *)(v11 + 144) + 76LL);
  }
  v20 = *(_QWORD *)(v11 + 144);
  if ( (*(_DWORD *)(v20 + 368) & 1) != 0 )
    ++*(_BYTE *)(v20 + 76);
  if ( *(_BYTE *)(v11 + 282) )
    ++*(_BYTE *)(*(_QWORD *)(v11 + 144) + 76LL);
  for ( i = *(_QWORD **)(v4 + 920); i != (_QWORD *)(v4 + 920); i = (_QWORD *)*i )
  {
    v22 = (_QWORD *)i[4];
    if ( v22 )
    {
      v23 = *(_QWORD **)(v11 + 376);
      if ( *v23 != v11 + 368 )
        goto LABEL_41;
      *v22 = v11 + 368;
      v22[1] = v23;
      *v23 = v22;
      *(_QWORD *)(v11 + 376) = v22;
      i[4] = 0LL;
      ++*(_BYTE *)(*(_QWORD *)(v11 + 144) + 76LL);
    }
  }
  v24 = *(_QWORD *)(v11 + 648);
  if ( v24 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 216LL))(v24, v4);
  *(_QWORD *)(v4 + 16) = v11;
  *DeviceInit = 0LL;
  if ( !*(_BYTE *)(v4 + 24) )
    WDFDEVICE_INIT::`scalar deleting destructor'((WDFDEVICE_INIT *)v4);
LABEL_40:
  *Device = (FxDevice *)v11;
  return (unsigned int)v12;
}
