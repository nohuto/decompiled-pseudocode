/*
 * XREFs of PiCMHandleIoctl @ 0x14077BCA0
 * Callers:
 *     PiCMFastIoDeviceDispatch @ 0x14077BC30 (PiCMFastIoDeviceDispatch.c)
 * Callees:
 *     PiCMDeviceAction @ 0x14065F3BC (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x14065F7D4 (PiCMQueryRemove.c)
 *     PiCMOpenDeviceKey @ 0x1406BA720 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x1406BA8F4 (PiCMOpenObjectKey.c)
 *     PiCMGetDeviceIdList @ 0x1406CFE50 (PiCMGetDeviceIdList.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1406DB388 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMSetObjectProperty @ 0x1406DC724 (PiCMSetObjectProperty.c)
 *     PiCMGetRegistryProperty @ 0x140778DA4 (PiCMGetRegistryProperty.c)
 *     PiCMGetObjectProperty @ 0x14077BF70 (PiCMGetObjectProperty.c)
 *     PiCMGetDeviceInterfaceList @ 0x140788300 (PiCMGetDeviceInterfaceList.c)
 *     PiCMValidateDeviceInstance @ 0x140789AEC (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceStatus @ 0x140789CFC (PiCMGetDeviceStatus.c)
 *     PiCMGetObjectList @ 0x140789E04 (PiCMGetObjectList.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14078A748 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x140806A24 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMOpenClassKey @ 0x14081C354 (PiCMOpenClassKey.c)
 *     PiCMCreateDevice @ 0x140954434 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x140954BA8 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140954D10 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140954E2C (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140955184 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140955274 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1409554B0 (PiCMDeleteObject.c)
 *     PiCMEnumerateSubKeys @ 0x140955628 (PiCMEnumerateSubKeys.c)
 *     PiCMGetDeviceDepth @ 0x140955BAC (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x140955CA4 (PiCMGetObjectPropertyKeys.c)
 *     PiCMRegisterDeviceInterface @ 0x140955EF8 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x14095618C (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x140956298 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x14095644C (PiCMUnregisterDeviceInterface.c)
 */

__int64 __fastcall PiCMHandleIoctl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *P,
        unsigned int a6,
        int a7)
{
  *P = 0;
  if ( a6 <= 0x47083F )
  {
    if ( a6 == 4655167 )
      return PiCMGetDeviceInterfaceAlias(a1, a2, a3, a4, a7, P);
    if ( a6 > 0x47081F )
    {
      switch ( a6 )
      {
        case 0x470823u:
          return PiCMGetRelatedDeviceInstance(a1, a2, a3, a4, a7, (__int64)P);
        case 0x470827u:
          return PiCMGetDeviceStatus(a1);
        case 0x47082Bu:
          return PiCMGetDeviceDepth(a1, a2, a3, a4, a7, (__int64)P);
        case 0x47082Fu:
          return PiCMSetDeviceProblem(a1, a2, a3, a4);
        case 0x470833u:
          return PiCMQueryRemove(a1, a2, a3, a4, a7, P);
        case 0x470837u:
          return PiCMRegisterDeviceInterface(a1, a2, a3, a4, a7, (__int64)P);
        case 0x47083Bu:
          return PiCMUnregisterDeviceInterface(a1, a2, a3, a4, a7, (__int64)P);
      }
    }
    else
    {
      switch ( a6 )
      {
        case 0x47081Fu:
          return PiCMSetRegistryProperty(a1, a2, a3, a4, a7, (__int64)P);
        case 0x470803u:
          return PiCMGetDeviceIdList(a1, a2, a3, a4, a7, P);
        case 0x470807u:
          return PiCMGetDeviceInterfaceList(a1, a2, a3, a4, a7, (__int64)P);
        case 0x47080Bu:
          return PiCMEnumerateSubKeys(a1, a2, a3, a4);
        case 0x47080Fu:
          return PiCMGetObjectPropertyKeys(a1, a2, a3, a4, a7, (__int64)P);
        case 0x470813u:
          return PiCMGetObjectProperty(a1, a2, a3, a4, a7, (__int64)P);
        case 0x470817u:
          return PiCMSetObjectProperty(a1, a2, a3, a4, a7, P);
        case 0x47081Bu:
          return PiCMGetRegistryProperty(a1, a2, a3, a4, a7, P);
      }
    }
    return 3221225659LL;
  }
  if ( a6 <= 0x47085F )
  {
    switch ( a6 )
    {
      case 0x47085Fu:
        return PiCMDeleteDeviceKey(a1, a2, a3, a4, a7, (__int64)P);
      case 0x470843u:
        return PiCMValidateDeviceInstance(a1, a2, a3, a4, a7, (__int64)P);
      case 0x470847u:
        return PiCMCreateDevice(a1, a2, a3, a4, a7, (__int64)P);
      case 0x47084Bu:
        return PiCMDeleteDevice(a1, a2, a3, a4, a7, P);
      case 0x47084Fu:
        return PiCMDeviceAction(a1, a2, a3, a4, a7, P);
      case 0x470853u:
        return PiCMOpenDeviceInterfaceKey(a1, a2, a3, a4, a7, P);
      case 0x470857u:
        return PiCMDeleteDeviceInterfaceKey(a1, a2, a3, a4, a7, (__int64)P);
      case 0x47085Bu:
        return PiCMOpenDeviceKey(a1, a2, a3, a4, a7, P);
    }
    return 3221225659LL;
  }
  switch ( a6 )
  {
    case 0x470863u:
      return PiCMOpenClassKey(a1, a2, a3, a4, a7, P);
    case 0x470867u:
      return PiCMDeleteClassKey(a1, a2, a3, a4, a7, P);
    case 0x47086Bu:
      return PiCMOpenObjectKey(a1, a2, a3, a4, a7, P);
    case 0x47086Fu:
      return PiCMCreateObject(a1, a2, a3, a4, a7, (__int64)P);
  }
  if ( a6 != 4655219 )
  {
    if ( a6 == 4655223 )
      return PiCMGetObjectList(a1, a2, a3, a4, a7, (__int64)P);
    return 3221225659LL;
  }
  return PiCMDeleteObject(a1, a2, a3, a4, a7, (__int64)P);
}
