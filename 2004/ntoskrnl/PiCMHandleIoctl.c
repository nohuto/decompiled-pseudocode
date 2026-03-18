/*
 * XREFs of PiCMHandleIoctl @ 0x1405D81A0
 * Callers:
 *     PiCMFastIoDeviceDispatch @ 0x1405D8130 (PiCMFastIoDeviceDispatch.c)
 * Callees:
 *     PiCMOpenClassKey @ 0x1405D01E4 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1405D3300 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x1405D719C (PiCMOpenObjectKey.c)
 *     PiCMGetObjectProperty @ 0x1405D848C (PiCMGetObjectProperty.c)
 *     PiCMGetDeviceInterfaceList @ 0x1406BDFC8 (PiCMGetDeviceInterfaceList.c)
 *     PiCMValidateDeviceInstance @ 0x1406C1CD8 (PiCMValidateDeviceInstance.c)
 *     PiCMGetObjectList @ 0x1406C1EF8 (PiCMGetObjectList.c)
 *     PiCMGetDeviceIdList @ 0x1406F6DF4 (PiCMGetDeviceIdList.c)
 *     PiCMGetRegistryProperty @ 0x1406FA554 (PiCMGetRegistryProperty.c)
 *     PiCMGetDeviceStatus @ 0x140705D6C (PiCMGetDeviceStatus.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x140719558 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMDeleteDevice @ 0x140719D8C (PiCMDeleteDevice.c)
 *     PiCMSetDeviceProblem @ 0x14071CD5C (PiCMSetDeviceProblem.c)
 *     PiCMQueryRemove @ 0x14071CE68 (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14071D0C0 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x140721CB4 (PiCMGetDeviceDepth.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140756934 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMSetObjectProperty @ 0x1407570E8 (PiCMSetObjectProperty.c)
 *     PiCMCreateDevice @ 0x1408AC340 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x1408ACAA4 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408ACC5C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408ACD78 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408ACE68 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408AD0A4 (PiCMDeleteObject.c)
 *     PiCMEnumerateSubKeys @ 0x1408AD26C (PiCMEnumerateSubKeys.c)
 *     PiCMGetObjectPropertyKeys @ 0x1408AD7EC (PiCMGetObjectPropertyKeys.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1408ADA54 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMRegisterDeviceInterface @ 0x1408ADC1C (PiCMRegisterDeviceInterface.c)
 *     PiCMSetRegistryProperty @ 0x1408ADE40 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408ADFF8 (PiCMUnregisterDeviceInterface.c)
 */

__int64 __fastcall PiCMHandleIoctl(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        _DWORD *P,
        unsigned int a6,
        int a7)
{
  *P = 0;
  if ( a6 <= 0x47083F )
  {
    if ( a6 == 4655167 )
      return PiCMGetDeviceInterfaceAlias(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
    if ( a6 > 0x47081F )
    {
      switch ( a6 )
      {
        case 0x470823u:
          return PiCMGetRelatedDeviceInstance(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
        case 0x470827u:
          return PiCMGetDeviceStatus(a1);
        case 0x47082Bu:
          return PiCMGetDeviceDepth(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
        case 0x47082Fu:
          return PiCMSetDeviceProblem(a1, a2, (_DWORD)a3, a4);
        case 0x470833u:
          return PiCMQueryRemove(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
        case 0x470837u:
          return PiCMRegisterDeviceInterface(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
        case 0x47083Bu:
          return PiCMUnregisterDeviceInterface(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
      }
    }
    else
    {
      switch ( a6 )
      {
        case 0x47081Fu:
          return PiCMSetRegistryProperty(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
        case 0x470803u:
          return PiCMGetDeviceIdList(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
        case 0x470807u:
          return PiCMGetDeviceInterfaceList(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
        case 0x47080Bu:
          return PiCMEnumerateSubKeys(a1, a2, (_DWORD)a3, a4);
        case 0x47080Fu:
          return PiCMGetObjectPropertyKeys(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
        case 0x470813u:
          return PiCMGetObjectProperty(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
        case 0x470817u:
          return PiCMSetObjectProperty(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
        case 0x47081Bu:
          return PiCMGetRegistryProperty(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
      }
    }
    return 3221225659LL;
  }
  if ( a6 <= 0x47085F )
  {
    switch ( a6 )
    {
      case 0x47085Fu:
        return PiCMDeleteDeviceKey(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
      case 0x470843u:
        return PiCMValidateDeviceInstance(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
      case 0x470847u:
        return PiCMCreateDevice(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
      case 0x47084Bu:
        return PiCMDeleteDevice(a1, a2, (int)a3, a4, a7, P);
      case 0x47084Fu:
        return PiCMDeviceAction(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
      case 0x470853u:
        return PiCMOpenDeviceInterfaceKey(a1, a2, (int)a3, a4, a7, P);
      case 0x470857u:
        return PiCMDeleteDeviceInterfaceKey(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
      case 0x47085Bu:
        return PiCMOpenDeviceKey(a1, a2, (__int64)a3, a4, a7, P);
    }
    return 3221225659LL;
  }
  switch ( a6 )
  {
    case 0x470863u:
      return PiCMOpenClassKey(a1, a2, (__int64)a3, a4, a7, P);
    case 0x470867u:
      return PiCMDeleteClassKey(a1, a2, (int)a3, a4, a7, P);
    case 0x47086Bu:
      return PiCMOpenObjectKey(a1, a2, a3, a4, a7, P);
    case 0x47086Fu:
      return PiCMCreateObject(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
  }
  if ( a6 != 4655219 )
  {
    if ( a6 == 4655223 )
      return PiCMGetObjectList(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
    return 3221225659LL;
  }
  return PiCMDeleteObject(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
}
