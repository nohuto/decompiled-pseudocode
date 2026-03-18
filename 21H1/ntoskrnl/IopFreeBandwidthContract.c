/*
 * XREFs of IopFreeBandwidthContract @ 0x140896CB0
 * Callers:
 *     IopCloseFile @ 0x1405FDC00 (IopCloseFile.c)
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     IopAllocateIrpMustSucceed @ 0x140253450 (IopAllocateIrpMustSucceed.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140261300 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

__int64 __fastcall IopFreeBandwidthContract(struct _FILE_OBJECT *Object, _QWORD *a2)
{
  __int64 result; // rax
  int v4; // esi
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 MustSucceed; // rax
  IRP *v7; // rbx
  struct _KEVENT *p_Event; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KEVENT *v12; // rcx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-48h] BYREF
  __int128 v15; // [rsp+50h] [rbp-30h] BYREF
  __int128 v16; // [rsp+60h] [rbp-20h] BYREF
  int v17; // [rsp+70h] [rbp-10h]

  result = 0LL;
  memset(&Event, 0, sizeof(Event));
  v15 = 0LL;
  v17 = 0;
  v16 = 0LL;
  if ( (_QWORD *)*a2 != a2 )
  {
    v4 = Object->Flags & 2;
    while ( 1 )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      if ( (Object->Flags & 0x4000000) == 0 )
        KeResetEvent(&Object->Event);
      v17 = 0;
      v16 = 0LL;
      RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
      MustSucceed = IopAllocateIrpMustSucceed((__int64)RelatedDeviceObject, RelatedDeviceObject->StackSize);
      v7 = (IRP *)MustSucceed;
      *(_QWORD *)(MustSucceed + 192) = Object;
      *(_QWORD *)(MustSucceed + 152) = KeGetCurrentThread();
      *(_BYTE *)(MustSucceed + 64) = 0;
      if ( v4 )
      {
        p_Event = 0LL;
      }
      else
      {
        *(_DWORD *)(MustSucceed + 16) = 4;
        p_Event = &Event;
      }
      *(_QWORD *)(MustSucceed + 80) = p_Event;
      *(_QWORD *)(MustSucceed + 72) = &v15;
      v9 = *(_QWORD *)(MustSucceed + 184);
      v7->Overlay.AllocationSize.QuadPart = 0LL;
      *(_BYTE *)(v9 - 72) = 6;
      *(_QWORD *)(v9 - 24) = Object;
      *(_DWORD *)(v9 - 64) = 20;
      *(_DWORD *)(v9 - 56) = 44;
      v7->UserBuffer = 0LL;
      v7->MdlAddress = 0LL;
      v7->AssociatedIrp.MasterIrp = (struct _IRP *)&v16;
      ObfReferenceObject(Object);
      IopQueueThreadIrp((__int64)v7, v10, v11);
      if ( IofCallDriver(RelatedDeviceObject, v7) == 259 )
      {
        v12 = &Object->Event;
        if ( !v4 )
          v12 = &Event;
        KeWaitForSingleObject(v12, Executive, 0, 0, 0LL);
      }
      result = (unsigned int)v15;
      if ( (_DWORD)v15 != -1073741670 && (_DWORD)v15 != -1073741801 )
        break;
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
  }
  return result;
}
