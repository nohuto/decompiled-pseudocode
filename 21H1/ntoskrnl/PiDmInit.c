/*
 * XREFs of PiDmInit @ 0x140A49A6C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 * Callees:
 *     PiDmListInit @ 0x14078A2B4 (PiDmListInit.c)
 *     PiDmObjectManagerPopulate @ 0x14078A310 (PiDmObjectManagerPopulate.c)
 *     PiDmObjectManagerInit @ 0x14078A450 (PiDmObjectManagerInit.c)
 */

__int64 PiDmInit()
{
  __int64 result; // rax
  unsigned int i; // ebx

  PiDmObjectManagerInit((__int64)&PiDmDeviceManager, 1);
  PiDmObjectManagerInit((__int64)&PiDmDeviceInterfaceManager, 3);
  PiDmObjectManagerInit((__int64)&PiDmDeviceInterfaceClassManager, 4);
  PiDmObjectManagerInit((__int64)&PiDmDeviceContainerManager, 5);
  PiDmObjectManagerInit((__int64)&PiDmDeviceInstallerClassManager, 2);
  PiDmObjectManagerInit((__int64)&PiDmDevicePanelManager, 6);
  result = PiDmObjectManagerPopulate((__int64)&PiDmDeviceManager);
  if ( (int)result >= 0 )
  {
    result = PiDmObjectManagerPopulate((__int64)&PiDmDeviceInterfaceManager);
    if ( (int)result >= 0 )
    {
      result = PiDmObjectManagerPopulate((__int64)&PiDmDeviceInterfaceClassManager);
      if ( (int)result >= 0 )
      {
        result = PiDmObjectManagerPopulate((__int64)&PiDmDeviceContainerManager);
        if ( (int)result >= 0 )
        {
          result = PiDmObjectManagerPopulate((__int64)&PiDmDeviceInstallerClassManager);
          if ( (int)result >= 0 )
          {
            result = PiDmObjectManagerPopulate((__int64)&PiDmDevicePanelManager);
            if ( (int)result >= 0 )
            {
              for ( i = 0; i < 7; ++i )
              {
                result = PiDmListInit(i);
                if ( (int)result < 0 )
                  break;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
