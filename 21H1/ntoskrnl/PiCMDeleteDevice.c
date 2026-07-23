/*
 * XREFs of PiCMDeleteDevice @ 0x1407179FC
 * Callers:
 *     PiCMHandleIoctl @ 0x1406A67D0 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14025BB40 (RtlInitUnicodeStringEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14037B818 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     ZwPlugPlayControl @ 0x1403F4970 (ZwPlugPlayControl.c)
 *     _CmValidateDeviceName @ 0x140618100 (_CmValidateDeviceName.c)
 *     PiPnpRtlEndOperation @ 0x1406A5E98 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1406A6604 (PiPnpRtlBeginOperation.c)
 *     _CmGetDeviceStatus @ 0x1406B0C40 (_CmGetDeviceStatus.c)
 *     _CmIsRootDevice @ 0x1406B19F4 (_CmIsRootDevice.c)
 *     PiCMReleaseObjectInputData @ 0x1406B1E28 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406B2064 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1406B2284 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x1406B2B20 (PiAuDoesClientHaveAccess.c)
 *     PpDevNodeUnlockTree @ 0x140710630 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14071075C (PpDevNodeLockTree.c)
 *     _CmIsRootEnumeratedDevice @ 0x1407109B0 (_CmIsRootEnumeratedDevice.c)
 *     _CmDeleteDevice @ 0x140717C2C (_CmDeleteDevice.c)
 *     PiQueueDeviceRequest @ 0x14071B3E4 (PiQueueDeviceRequest.c)
 *     PpDeviceRegistration @ 0x1407310DC (PpDeviceRegistration.c)
 */

__int64 __fastcall PiCMDeleteDevice(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        PVOID **P)
{
  PVOID **v6; // r12
  int v9; // ebx
  __int64 v10; // rcx
  const WCHAR *v11; // rdi
  int inited; // ebx
  struct _KTHREAD *v13; // rax
  __int64 v14; // r9
  const WCHAR *v15; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v18; // r9
  int v19; // r8d
  unsigned int v20; // [rsp+38h] [rbp-59h]
  int v21; // [rsp+48h] [rbp-49h] BYREF
  int v22; // [rsp+4Ch] [rbp-45h] BYREF
  int v23; // [rsp+50h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-39h] BYREF
  __int128 v25; // [rsp+68h] [rbp-29h] BYREF
  PCWSTR SourceString[2]; // [rsp+78h] [rbp-19h]
  __int64 v27; // [rsp+88h] [rbp-9h]
  UNICODE_STRING v28; // [rsp+90h] [rbp-1h] BYREF
  UNICODE_STRING PnPControlData; // [rsp+A0h] [rbp+Fh] BYREF
  __int128 v30; // [rsp+B0h] [rbp+1Fh]
  __int64 v31; // [rsp+C0h] [rbp+2Fh]

  v6 = P;
  v21 = 0;
  v23 = 0;
  v22 = 0;
  *(_DWORD *)P = 0;
  P = 0LL;
  DestinationString = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  v31 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  PnPControlData = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v25);
  if ( v9 >= 0 )
  {
    if ( !PiAuDoesClientHaveAccess(2u) )
    {
      inited = -1073741790;
      goto LABEL_17;
    }
    v11 = SourceString[0];
    if ( SourceString[0] && *(_QWORD *)((char *)&v25 + 4) == 0x100000000LL && !HIDWORD(SourceString[1]) && a3 && a4 >= 8 )
    {
      inited = CmValidateDeviceName(v10, SourceString[0]);
      if ( inited < 0 )
        goto LABEL_17;
      if ( !CmIsRootDevice(v11) )
      {
        inited = PiPnpRtlBeginOperation(&P);
        if ( inited >= 0 )
        {
          if ( (int)CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, v11, 0LL, &v21, &v23, &v22, v20) >= 0 && (v21 & 2) != 0 )
          {
            if ( (v21 & 0x2001) == 1 )
            {
              inited = -1073741808;
              goto LABEL_17;
            }
            inited = RtlInitUnicodeStringEx(&DestinationString, v11);
            if ( inited < 0 )
              goto LABEL_17;
            PpDevNodeLockTree(3);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            LOBYTE(v18) = 1;
            PpDeviceRegistration(&DestinationString, 0LL, 0LL, v18);
            v15 = SourceString[0];
            inited = CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, SourceString[0], 0LL);
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KeLeaveCriticalRegion();
            PpDevNodeUnlockTree(3);
            if ( inited < 0 )
              goto LABEL_17;
            if ( RtlInitUnicodeStringEx(&PnPControlData, v15) >= 0 )
            {
              *(_QWORD *)&v30 = 0x4000000000001LL;
              ZwPlugPlayControl(PlugPlayControlDeviceStatus, &PnPControlData, 0x28u);
            }
          }
          else
          {
            inited = RtlInitUnicodeStringEx(&DestinationString, v11);
            if ( inited < 0 )
              goto LABEL_17;
            PpDevNodeLockTree(3);
            v13 = KeGetCurrentThread();
            --v13->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            LOBYTE(v14) = 1;
            PpDeviceRegistration(&DestinationString, 0LL, 0LL, v14);
            v15 = SourceString[0];
            inited = CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, SourceString[0], 0LL);
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KeLeaveCriticalRegion();
            PpDevNodeUnlockTree(3);
            if ( inited < 0 )
              goto LABEL_17;
            if ( CmIsRootEnumeratedDevice(v15) && RtlInitUnicodeStringEx(&DestinationString, L"HTREE\\ROOT\\0") >= 0 )
              PiQueueDeviceRequest((unsigned int)&DestinationString, 8, v19, 1, 0LL);
          }
          if ( RtlInitUnicodeStringEx(&v28, v15) >= 0 )
            PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&v28.Length);
        }
LABEL_17:
        v9 = PiCMReturnBasicResultData(inited, v27, a3, a4, v6);
        goto LABEL_18;
      }
    }
    inited = -1073741811;
    goto LABEL_17;
  }
LABEL_18:
  PiCMReleaseObjectInputData((__int64)&v25);
  if ( P )
    PiPnpRtlEndOperation(P);
  return (unsigned int)v9;
}
