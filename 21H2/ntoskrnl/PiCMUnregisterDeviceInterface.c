/*
 * XREFs of PiCMUnregisterDeviceInterface @ 0x1408B1258
 * Callers:
 *     PiCMHandleIoctl @ 0x140629660 (PiCMHandleIoctl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     PiCMReturnBasicResultData @ 0x1405FF4A0 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x1405FF814 (PiAuDoesClientHaveAccess.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     PiCMReleaseObjectInputData @ 0x14062D950 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14062D984 (PiCMCaptureObjectInputData.c)
 *     _CmDeleteDeviceInterface @ 0x14072BE74 (_CmDeleteDeviceInterface.c)
 */

__int64 __fastcall PiCMUnregisterDeviceInterface(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r14
  int v9; // ebx
  int ObjectProperty; // ebx
  char v11; // al
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // [rsp+68h] [rbp+17h] BYREF
  int v18; // [rsp+6Ch] [rbp+1Bh] BYREF
  __int128 v19; // [rsp+70h] [rbp+1Fh] BYREF
  __int128 v20; // [rsp+80h] [rbp+2Fh]
  __int64 v21; // [rsp+90h] [rbp+3Fh]

  v6 = a6;
  v17 = 0;
  v18 = 0;
  v21 = 0LL;
  *a6 = 0;
  v19 = 0LL;
  LOBYTE(a6) = 0;
  v20 = 0LL;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v19);
  if ( v9 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      if ( (_QWORD)v20 && *(_QWORD *)((char *)&v19 + 4) == 0x400000000LL && !HIDWORD(v20) && a3 && a4 >= 8 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           v20,
                           3LL,
                           0LL,
                           0LL,
                           (__int64)&DEVPKEY_DeviceInterface_Enabled,
                           (__int64)&v17,
                           (__int64)&a6,
                           1,
                           (__int64)&v18,
                           0);
        if ( ObjectProperty >= 0 )
        {
          if ( v17 == 17 && v18 == 1 )
          {
            v11 = (char)a6;
          }
          else
          {
            v11 = 0;
            LOBYTE(a6) = 0;
          }
          if ( v11 == -1 )
            ObjectProperty = -1073740024;
          if ( ObjectProperty >= 0 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            ObjectProperty = CmDeleteDeviceInterface(*(__int64 *)&PiPnpRtlCtx, v20, 0);
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
          }
        }
      }
      else
      {
        ObjectProperty = -1073741811;
      }
    }
    else
    {
      ObjectProperty = -1073741790;
    }
    v9 = PiCMReturnBasicResultData(ObjectProperty, v21, a3, a4, v6);
  }
  PiCMReleaseObjectInputData((__int64)&v19);
  return (unsigned int)v9;
}
