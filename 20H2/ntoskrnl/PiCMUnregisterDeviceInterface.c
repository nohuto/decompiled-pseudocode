/*
 * XREFs of PiCMUnregisterDeviceInterface @ 0x1408B3B28
 * Callers:
 *     PiCMHandleIoctl @ 0x14063CA80 (PiCMHandleIoctl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     _PnpGetObjectProperty @ 0x14063FDAC (_PnpGetObjectProperty.c)
 *     PiAuDoesClientHaveAccess @ 0x1406CB08C (PiAuDoesClientHaveAccess.c)
 *     PiCMReleaseObjectInputData @ 0x1406EC59C (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406EC7D8 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1406EC9F8 (PiCMReturnBasicResultData.c)
 *     _CmDeleteDeviceInterface @ 0x1407280D4 (_CmDeleteDeviceInterface.c)
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
  int v14; // [rsp+68h] [rbp+17h] BYREF
  int v15; // [rsp+6Ch] [rbp+1Bh] BYREF
  __int128 v16; // [rsp+70h] [rbp+1Fh] BYREF
  __int128 v17; // [rsp+80h] [rbp+2Fh]
  __int64 v18; // [rsp+90h] [rbp+3Fh]

  v6 = a6;
  v14 = 0;
  v15 = 0;
  v18 = 0LL;
  *a6 = 0;
  v16 = 0LL;
  LOBYTE(a6) = 0;
  v17 = 0LL;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v16);
  if ( v9 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      if ( (_QWORD)v17 && *(_QWORD *)((char *)&v16 + 4) == 0x400000000LL && !HIDWORD(v17) && a3 && a4 >= 8 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           v17,
                           3LL,
                           0LL,
                           0LL,
                           (__int64)&DEVPKEY_DeviceInterface_Enabled,
                           (__int64)&v14,
                           (__int64)&a6,
                           1,
                           (__int64)&v15,
                           0);
        if ( ObjectProperty >= 0 )
        {
          if ( v14 == 17 && v15 == 1 )
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
            ObjectProperty = CmDeleteDeviceInterface(*(__int64 *)&PiPnpRtlCtx, v17, 0);
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
    v9 = PiCMReturnBasicResultData(ObjectProperty, v18, a3, a4, v6);
  }
  PiCMReleaseObjectInputData((__int64)&v16);
  return (unsigned int)v9;
}
