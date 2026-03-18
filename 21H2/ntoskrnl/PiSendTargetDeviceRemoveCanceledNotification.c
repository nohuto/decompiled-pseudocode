/*
 * XREFs of PiSendTargetDeviceRemoveCanceledNotification @ 0x14095E650
 * Callers:
 *     PipProcessQueryRemovalInKernelMode @ 0x14095E754 (PipProcessQueryRemovalInKernelMode.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x14095E9F0 (PipSendTargetDeviceQueryRemoveNotification.c)
 * Callees:
 *     PnpNotifyTargetDeviceChange @ 0x14078B7C4 (PnpNotifyTargetDeviceChange.c)
 */

__int64 __fastcall PiSendTargetDeviceRemoveCanceledNotification(__int64 a1, unsigned int a2)
{
  unsigned int i; // ebx
  struct _DEVICE_OBJECT *v5; // rdx
  _DWORD *DeviceNode; // rcx
  int v7; // r8d
  __int64 result; // rax

  if ( a2 )
  {
    for ( i = 0; i < a2; ++i )
    {
      v5 = *(struct _DEVICE_OBJECT **)(a1 + 8LL * (a2 - i - 1));
      if ( v5 )
      {
        DeviceNode = v5->DeviceObjectExtension->DeviceNode;
        if ( DeviceNode )
        {
          v7 = DeviceNode[75];
          result = (unsigned int)(v7 - 769);
          if ( (unsigned int)result <= 3 || v7 == 788 )
            continue;
        }
      }
      result = PnpNotifyTargetDeviceChange(&GUID_TARGET_DEVICE_REMOVE_CANCELLED, v5, 0LL, 0LL);
    }
  }
  return result;
}
