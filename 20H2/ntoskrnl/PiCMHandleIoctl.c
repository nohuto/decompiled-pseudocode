/*
 * XREFs of PiCMHandleIoctl @ 0x14063CA80
 * Callers:
 *     PiCMFastIoDeviceDispatch @ 0x14063CA10 (PiCMFastIoDeviceDispatch.c)
 * Callees:
 *     PiCMGetObjectProperty @ 0x14063CD6C (PiCMGetObjectProperty.c)
 *     PiCMOpenObjectKey @ 0x140641670 (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceKey @ 0x140645930 (PiCMOpenDeviceKey.c)
 *     PiCMGetDeviceIdList @ 0x1406C9C84 (PiCMGetDeviceIdList.c)
 *     PiCMGetRegistryProperty @ 0x1406CD554 (PiCMGetRegistryProperty.c)
 *     PiCMGetDeviceStatus @ 0x1406D8D5C (PiCMGetDeviceStatus.c)
 *     PiCMOpenClassKey @ 0x1406DEBF0 (PiCMOpenClassKey.c)
 *     PiCMGetDeviceInterfaceList @ 0x1406E8908 (PiCMGetDeviceInterfaceList.c)
 *     PiCMValidateDeviceInstance @ 0x1406EC1AC (PiCMValidateDeviceInstance.c)
 *     PiCMGetObjectList @ 0x1406EC3CC (PiCMGetObjectList.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x140727544 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMDeleteDevice @ 0x140727D7C (PiCMDeleteDevice.c)
 *     PiCMSetDeviceProblem @ 0x14072ABF8 (PiCMSetDeviceProblem.c)
 *     PiCMQueryRemove @ 0x14072AD04 (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14072AF5C (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x14072FDC4 (PiCMGetDeviceDepth.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140765574 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMSetObjectProperty @ 0x140765D28 (PiCMSetObjectProperty.c)
 *     PiCMCreateDevice @ 0x1408B1E70 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x1408B25D4 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408B278C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408B28A8 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408B2998 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408B2BD4 (PiCMDeleteObject.c)
 *     PiCMEnumerateSubKeys @ 0x1408B2D9C (PiCMEnumerateSubKeys.c)
 *     PiCMGetObjectPropertyKeys @ 0x1408B331C (PiCMGetObjectPropertyKeys.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1408B3584 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMRegisterDeviceInterface @ 0x1408B374C (PiCMRegisterDeviceInterface.c)
 *     PiCMSetRegistryProperty @ 0x1408B3970 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408B3B28 (PiCMUnregisterDeviceInterface.c)
 */

__int64 __fastcall PiCMHandleIoctl(__int64 a1, int a2, int a3, int a4, _DWORD *P, unsigned int a6, int a7)
{
  *P = 0;
  if ( a6 <= 0x47083F )
  {
    if ( a6 == 4655167 )
      return PiCMGetDeviceInterfaceAlias(a1, a2, a3, a4, a7, (__int64)P);
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
          return PiCMQueryRemove(a1, a2, a3, a4, a7, (__int64)P);
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
          return PiCMGetDeviceIdList(a1, a2, a3, a4, a7, (__int64)P);
        case 0x470807u:
          return PiCMGetDeviceInterfaceList(a1, a2, a3, a4, a7, (__int64)P);
        case 0x47080Bu:
          return PiCMEnumerateSubKeys(a1, a2, a3, a4);
        case 0x47080Fu:
          return PiCMGetObjectPropertyKeys(a1, a2, a3, a4, a7, (__int64)P);
        case 0x470813u:
          return PiCMGetObjectProperty(a1, a2, a3, a4, a7, (__int64)P);
        case 0x470817u:
          return PiCMSetObjectProperty(a1, a2, a3, a4, a7, (__int64)P);
        case 0x47081Bu:
          return PiCMGetRegistryProperty(a1, a2, a3, a4, a7, (__int64)P);
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
        return PiCMDeviceAction(a1, a2, a3, a4, a7, (__int64)P);
      case 0x470853u:
        return PiCMOpenDeviceInterfaceKey(a1, a2, a3, a4, a7, P);
      case 0x470857u:
        return PiCMDeleteDeviceInterfaceKey(a1, a2, a3, a4, a7, (__int64)P);
      case 0x47085Bu:
        return PiCMOpenDeviceKey(a1, a2, a3, a4, a7, (__int64)P);
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
      return PiCMOpenObjectKey(a1, a2, a3, a4, a7, (__int64)P);
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
