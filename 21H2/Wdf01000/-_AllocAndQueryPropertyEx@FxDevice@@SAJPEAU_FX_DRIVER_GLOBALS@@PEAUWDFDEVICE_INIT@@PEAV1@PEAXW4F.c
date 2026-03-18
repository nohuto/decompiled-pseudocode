/*
 * XREFs of ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x1C002A7B0
 * Callers:
 *     imp_WdfDeviceAllocAndQueryPropertyEx @ 0x1C002A6A0 (imp_WdfDeviceAllocAndQueryPropertyEx.c)
 *     imp_WdfFdoInitAllocAndQueryPropertyEx @ 0x1C0062250 (imp_WdfFdoInitAllocAndQueryPropertyEx.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0005FF8 (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     ?_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@K3PEAK5@Z @ 0x1C002A928 (-_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropert.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_dd @ 0x1C0053078 (WPP_IFR_SF_dd.c)
 */

__int64 __fastcall FxDevice::_AllocAndQueryPropertyEx(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        FxDevice *Device,
        void *PropertyData,
        unsigned int PoolType,
        _POOL_TYPE PropertyMemoryAttributes,
        _FX_DRIVER_GLOBALS *PropertyMemory,
        WDFMEMORY__ **PropertyType,
        unsigned int *DriverGlobals_0)
{
  int v12; // edi
  void **v13; // r14
  unsigned int *v14; // rbp
  unsigned __int64 v15; // rsi
  _POOL_TYPE v16; // r8d
  _WDF_OBJECT_ATTRIBUTES *v17; // rdx
  FxMemoryObject *v18; // rdi
  IFxMemory *v19; // r15
  void *ResultLength; // rax
  int v21; // eax
  unsigned int v22; // r12d
  int v23; // eax
  unsigned int v24; // esi
  unsigned __int16 v26; // r9
  FxPropertyType BufferSize; // [rsp+20h] [rbp-68h]
  FxPropertyType BufferSizea; // [rsp+20h] [rbp-68h]
  unsigned int propType; // [rsp+50h] [rbp-38h] BYREF
  FxMemoryObject *pMemory; // [rsp+58h] [rbp-30h] BYREF

  pMemory = 0LL;
  propType = 0;
  PoolType = 0;
  v12 = FxDevice::_QueryPropertyEx(
          DriverGlobals,
          DeviceInit,
          Device,
          PropertyData,
          BufferSize,
          0,
          0LL,
          &PoolType,
          &propType);
  if ( v12 != -1073741789 )
  {
    v26 = 19;
LABEL_9:
    WPP_IFR_SF_d(DriverGlobals, 2u, 0xCu, v26, WPP_FxDevice_cpp_Traceguids, v12);
    return (unsigned int)v12;
  }
  v13 = (void **)PropertyType;
  v14 = DriverGlobals_0;
  v15 = PoolType;
  v16 = PropertyMemoryAttributes;
  v17 = (_WDF_OBJECT_ATTRIBUTES *)PropertyMemory;
  *PropertyType = 0LL;
  *v14 = 0;
  v12 = FxMemoryObject::_Create(DriverGlobals, v17, v16, DriverGlobals->Tag, v15, &pMemory);
  if ( v12 < 0 )
  {
    v26 = 20;
    goto LABEL_9;
  }
  v18 = pMemory;
  v19 = &pMemory->IFxMemory;
  ResultLength = (void *)pMemory->GetBuffer(&pMemory->IFxMemory);
  v21 = FxDevice::_QueryPropertyEx(
          DriverGlobals,
          DeviceInit,
          Device,
          PropertyData,
          BufferSizea,
          v15,
          ResultLength,
          &PoolType,
          &propType);
  v22 = v21;
  if ( v21 < 0 )
  {
    WPP_IFR_SF_dd(DriverGlobals, 2u, 0xCu, 0x15u, WPP_FxDevice_cpp_Traceguids, v15, v21);
    v18->DeleteObject(v18);
    return v22;
  }
  else
  {
    v23 = FxObject::Commit(v18, PropertyMemory, v13, 0LL, 1u);
    v24 = v23;
    if ( v23 < 0 )
    {
      WPP_IFR_SF_d(DriverGlobals, 2u, 0xCu, 0x16u, WPP_FxDevice_cpp_Traceguids, v23);
      v18->DeleteObject(v18);
    }
    else
    {
      *v13 = v19->GetHandle(v19);
      *v14 = propType;
    }
    return v24;
  }
}
