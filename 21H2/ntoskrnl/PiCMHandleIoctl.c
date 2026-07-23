/*
 * XREFs of PiCMHandleIoctl @ 0x140629660
 * Callers:
 *     PiCMFastIoDeviceDispatch @ 0x1406295F0 (PiCMFastIoDeviceDispatch.c)
 * Callees:
 *     PiCMGetDeviceStatus @ 0x1405FF0C8 (PiCMGetDeviceStatus.c)
 *     PiCMValidateDeviceInstance @ 0x1405FF280 (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceIdList @ 0x140604994 (PiCMGetDeviceIdList.c)
 *     PiCMGetRegistryProperty @ 0x140609140 (PiCMGetRegistryProperty.c)
 *     PiCMGetDeviceInterfaceList @ 0x14060B478 (PiCMGetDeviceInterfaceList.c)
 *     PiCMOpenClassKey @ 0x140622BDC (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x140624D98 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x140628AA8 (PiCMOpenObjectKey.c)
 *     PiCMGetObjectProperty @ 0x14062994C (PiCMGetObjectProperty.c)
 *     PiCMGetObjectList @ 0x14062D780 (PiCMGetObjectList.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x14072B2EC (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMDeleteDevice @ 0x14072BB1C (PiCMDeleteDevice.c)
 *     PiCMSetDeviceProblem @ 0x14072EDDC (PiCMSetDeviceProblem.c)
 *     PiCMQueryRemove @ 0x14072EEE8 (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14072F140 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x140733FB8 (PiCMGetDeviceDepth.c)
 *     PiCMSetObjectProperty @ 0x140747578 (PiCMSetObjectProperty.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1407689A4 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateDevice @ 0x1408AF5A0 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x1408AFD04 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408AFEBC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408AFFD8 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408B00C8 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408B0304 (PiCMDeleteObject.c)
 *     PiCMEnumerateSubKeys @ 0x1408B04CC (PiCMEnumerateSubKeys.c)
 *     PiCMGetObjectPropertyKeys @ 0x1408B0A4C (PiCMGetObjectPropertyKeys.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1408B0CB4 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMRegisterDeviceInterface @ 0x1408B0E7C (PiCMRegisterDeviceInterface.c)
 *     PiCMSetRegistryProperty @ 0x1408B10A0 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408B1258 (PiCMUnregisterDeviceInterface.c)
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
          return PiCMGetDeviceStatus(a1, a2, a3, a4, a7, (__int64)P);
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
          return PiCMGetDeviceIdList(a1, a2, (__int64)a3, a4, a7, P);
        case 0x470807u:
          return PiCMGetDeviceInterfaceList(a1, a2, (__int64)a3, a4, a7, P);
        case 0x47080Bu:
          return PiCMEnumerateSubKeys(a1, a2, (_DWORD)a3, a4);
        case 0x47080Fu:
          return PiCMGetObjectPropertyKeys(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
        case 0x470813u:
          return PiCMGetObjectProperty(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
        case 0x470817u:
          return PiCMSetObjectProperty(a1, a2, (_DWORD)a3, a4, a7, (__int64)P);
        case 0x47081Bu:
          return PiCMGetRegistryProperty(a1, a2, (__int64)a3, a4, a7, P);
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
        return PiCMValidateDeviceInstance(a1, a2, (__int64)a3, a4, a7, P);
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
