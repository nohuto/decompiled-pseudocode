/*
 * XREFs of PiCMHandleIoctl @ 0x1406A67D0
 * Callers:
 *     PiCMFastIoDeviceDispatch @ 0x1406A6760 (PiCMFastIoDeviceDispatch.c)
 * Callees:
 *     PiCMOpenClassKey @ 0x14069F5F4 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1406A19FC (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x1406A5898 (PiCMOpenObjectKey.c)
 *     PiCMGetObjectProperty @ 0x1406A6ABC (PiCMGetObjectProperty.c)
 *     PiCMGetRegistryProperty @ 0x1406B1180 (PiCMGetRegistryProperty.c)
 *     PiCMValidateDeviceInstance @ 0x1406B1A38 (PiCMValidateDeviceInstance.c)
 *     PiCMGetObjectList @ 0x1406B1C58 (PiCMGetObjectList.c)
 *     PiCMGetDeviceStatus @ 0x1406B2C68 (PiCMGetDeviceStatus.c)
 *     PiCMGetDeviceInterfaceList @ 0x1406B3B78 (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetDeviceIdList @ 0x1406D4004 (PiCMGetDeviceIdList.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1407171C8 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMDeleteDevice @ 0x1407179FC (PiCMDeleteDevice.c)
 *     PiCMSetDeviceProblem @ 0x14071ADDC (PiCMSetDeviceProblem.c)
 *     PiCMQueryRemove @ 0x14071AEE8 (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14071B140 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x14071FDF4 (PiCMGetDeviceDepth.c)
 *     PiCMSetObjectProperty @ 0x14072CA48 (PiCMSetObjectProperty.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1407522A4 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateDevice @ 0x1408AB020 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x1408AB784 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408AB93C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408ABA58 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408ABB48 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408ABD84 (PiCMDeleteObject.c)
 *     PiCMEnumerateSubKeys @ 0x1408ABF4C (PiCMEnumerateSubKeys.c)
 *     PiCMGetObjectPropertyKeys @ 0x1408AC4CC (PiCMGetObjectPropertyKeys.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1408AC734 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMRegisterDeviceInterface @ 0x1408AC8FC (PiCMRegisterDeviceInterface.c)
 *     PiCMSetRegistryProperty @ 0x1408ACB20 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408ACCD8 (PiCMUnregisterDeviceInterface.c)
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
