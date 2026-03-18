/*
 * XREFs of PiQueueDeviceRequest @ 0x14072B200
 * Callers:
 *     PiCMDeleteDevice @ 0x140727D7C (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x14072AF5C (PiCMDeviceAction.c)
 *     PiControlStartDevice @ 0x1408B65F0 (PiControlStartDevice.c)
 * Callees:
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PnpRequestDeviceAction @ 0x14036E774 (PnpRequestDeviceAction.c)
 *     PnpDeleteDeviceActionRequest @ 0x14036F1B0 (PnpDeleteDeviceActionRequest.c)
 *     PnpCancelDeviceActionRequest @ 0x14050CCA8 (PnpCancelDeviceActionRequest.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x14050CD00 (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14071FA1C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 */

__int64 __fastcall PiQueueDeviceRequest(__int64 a1, int a2, __int64 a3, int a4, __int64 a5)
{
  _QWORD *v7; // rax
  void *v8; // rsi
  int v9; // eax
  volatile signed __int32 *v10; // rdi
  unsigned int v11; // ebx
  volatile signed __int32 *v13; // [rsp+40h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-20h] BYREF

  v13 = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( a5 )
    *(_DWORD *)a5 = 0;
  v7 = PnpDeviceObjectFromDeviceInstanceWithTag(a1, 0x43706E50u);
  v8 = v7;
  if ( v7 )
  {
    if ( *(_QWORD *)(v7[39] + 40LL) )
    {
      if ( a4 )
        KeInitializeEvent(&Event, NotificationEvent, 0);
      v9 = PnpRequestDeviceAction(
             v8,
             a2,
             0,
             0LL,
             (unsigned __int64)&Event & -(__int64)(a4 != 0),
             a5 & -(__int64)(a4 != 0),
             (_QWORD *)((unsigned __int64)&v13 & -(__int64)(a4 != 0)));
      v10 = v13;
      v11 = v9;
      if ( v9 >= 0 )
      {
        if ( a4 )
        {
          v11 = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
          if ( v11 == 257 )
          {
            if ( (unsigned int)PnpRemoveDeviceActionRequestFromQueue(v10) )
            {
              v11 = -1073741536;
            }
            else
            {
              PnpCancelDeviceActionRequest((__int64)v10);
              v11 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            }
          }
        }
      }
      if ( v10 )
        PnpDeleteDeviceActionRequest(v10);
    }
    else
    {
      v11 = -1073741810;
    }
    ObfDereferenceObjectWithTag(v8, 0x43706E50u);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return v11;
}
