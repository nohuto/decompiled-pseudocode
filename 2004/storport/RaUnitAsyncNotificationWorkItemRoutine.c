/*
 * XREFs of RaUnitAsyncNotificationWorkItemRoutine @ 0x1C0045CF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001BE70 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C00324E8 (WPP_SF_q.c)
 */

void __fastcall RaUnitAsyncNotificationWorkItemRoutine(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  __int64 v2; // rbx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  __int64 v5; // rax
  IRP *v6; // rax
  struct _KEVENT Event; // [rsp+50h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+1Fh] BYREF
  _DWORD InputBuffer[2]; // [rsp+78h] [rbp+2Fh] BYREF
  __int64 v10; // [rsp+80h] [rbp+37h]

  v2 = *((_QWORD *)Context + 1);
  v10 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  _InterlockedExchange((volatile __int32 *)Context + 4, 0);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  if ( AttachedDeviceReference )
  {
    InputBuffer[0] = 1;
    InputBuffer[1] = 16;
    if ( v2 )
    {
      v5 = v10;
      if ( (v2 & 1) != 0 )
      {
        v5 = v10 | 1;
        v10 |= 1uLL;
      }
      if ( (v2 & 2) != 0 )
      {
        v5 |= 2uLL;
        v10 = v5;
      }
      if ( (v2 & 4) != 0 )
        v10 = v5 | 4;
    }
    else
    {
      v10 = 7LL;
    }
    v6 = IoBuildDeviceIoControlRequest(
           0x2D1C90u,
           AttachedDeviceReference,
           InputBuffer,
           0x10u,
           0LL,
           0,
           0,
           &Event,
           &IoStatusBlock);
    if ( v6 )
    {
      if ( IofCallDriver(AttachedDeviceReference, v6) == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x45u,
        (__int64)&WPP_315ac634f457316aea96af95ee1292c6_Traceguids,
        DeviceObject);
    }
    ObfDereferenceObject(AttachedDeviceReference);
  }
}
