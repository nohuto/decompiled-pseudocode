/*
 * XREFs of IoReportRootDevice @ 0x1407C8180
 * Callers:
 *     <none>
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     RtlStringCchPrintfExW @ 0x140253AD4 (RtlStringCchPrintfExW.c)
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     PnpRequestDeviceAction @ 0x1403703A4 (PnpRequestDeviceAction.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     PiPnpRtlEndOperation @ 0x140628F64 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140629498 (PiPnpRtlBeginOperation.c)
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14062EA64 (PpDevNodeLockTree.c)
 *     _CmDeleteDevice @ 0x14072BD4C (_CmDeleteDevice.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140736550 (PnpCleanupDeviceRegistryValues.c)
 *     _CmSetDeviceRegProp @ 0x1407441D0 (_CmSetDeviceRegProp.c)
 *     _PnpSetObjectProperty @ 0x140745DE4 (_PnpSetObjectProperty.c)
 *     _CmCreateDevice @ 0x14074CD88 (_CmCreateDevice.c)
 */

NTSTATUS __stdcall IoReportRootDevice(PDRIVER_OBJECT DriverObject)
{
  PDRIVER_EXTENSION DriverExtension; // r14
  HANDLE v3; // rdi
  NTSTATUS result; // eax
  NTSTATUS appended; // ebx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v7; // rcx
  __int16 v8; // si
  int v9; // eax
  char v10; // si
  __int64 v11; // r8
  wchar_t *pszFormat; // [rsp+30h] [rbp-D8h]
  unsigned int v13; // [rsp+38h] [rbp-D0h]
  __int64 v14; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING Destination; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+70h] [rbp-98h] BYREF
  HANDLE v17; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+90h] [rbp-78h] BYREF
  PVOID P[2]; // [rsp+98h] [rbp-70h] BYREF
  _WORD v21[200]; // [rsp+A8h] [rbp-60h] BYREF
  char v22; // [rsp+238h] [rbp+130h] BYREF

  DriverExtension = DriverObject->DriverExtension;
  Destination.Buffer = v21;
  DestinationString.Buffer = (wchar_t *)&v22;
  *(_QWORD *)&DestinationString.Length = 26345472LL;
  *(_QWORD *)&Destination.Length = 26214400LL;
  LODWORD(v16) = 0;
  v3 = 0LL;
  LOWORD(v14) = 0;
  v17 = 0LL;
  P[0] = 0LL;
  result = RtlAppendUnicodeToString(&Destination, L"ROOT\\");
  if ( result < 0 )
    return result;
  result = RtlAppendUnicodeStringToString(&Destination, &DriverExtension->ServiceKeyName);
  if ( result < 0 )
    return result;
  if ( Destination.Length > 0x18Eu )
    return -1073741773;
  RtlCopyUnicodeString(&DestinationString, &Destination);
  appended = PiPnpRtlBeginOperation(P);
  if ( appended >= 0 )
  {
    PpDevNodeLockTree(1);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    appended = RtlAppendUnicodeToString(&Destination, L"\\");
    if ( appended < 0 )
    {
      v3 = v17;
      goto LABEL_10;
    }
    ppszDestEnd = &v21[(unsigned __int64)Destination.Length >> 1];
    RtlStringCchPrintfExW(
      ppszDestEnd,
      (400 - (unsigned __int64)Destination.Length) >> 1,
      &ppszDestEnd,
      0LL,
      0,
      L"%04u",
      0LL);
    v7 = &ppszDestEnd[-((unsigned __int64)Destination.Length >> 1)] - v21;
    if ( (_DWORD)v7 == -1 )
      v8 = 400 - Destination.Length;
    else
      v8 = 2 * v7;
    Destination.Length += v8;
    v9 = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)Destination.Buffer, 983103, &v17, &v14, 0);
    v10 = v14;
    appended = v9;
    v3 = v17;
    if ( v9 >= 0 )
    {
      if ( !(_BYTE)v14 )
        goto LABEL_10;
      v11 = (__int64)v17;
      v13 = DestinationString.Length + 4;
      pszFormat = DestinationString.Buffer;
      *(_DWORD *)&DestinationString.Buffer[((unsigned __int64)v13 >> 1) - 2] = 0;
      appended = CmSetDeviceRegProp(
                   *(__int64 *)&PiPnpRtlCtx,
                   (__int64)Destination.Buffer,
                   v11,
                   2u,
                   7u,
                   (__int64)pszFormat,
                   v13,
                   0);
      if ( appended >= 0 )
      {
        LODWORD(v16) = 32;
        appended = CmSetDeviceRegProp(
                     *(__int64 *)&PiPnpRtlCtx,
                     (__int64)Destination.Buffer,
                     (__int64)v3,
                     0xBu,
                     4u,
                     (__int64)&v16,
                     4u,
                     0);
        if ( appended >= 0 )
        {
          BYTE1(v14) = -1;
          appended = PnpSetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       (__int64)Destination.Buffer,
                       1u,
                       (__int64)v3,
                       0LL,
                       (__int64)&DEVPKEY_Device_Reported,
                       17,
                       (__int64)&v14 + 1,
                       1u,
                       0);
          if ( appended >= 0 )
          {
            appended = CmSetDeviceRegProp(
                         *(__int64 *)&PiPnpRtlCtx,
                         (__int64)Destination.Buffer,
                         (__int64)v3,
                         5u,
                         1u,
                         (__int64)DriverExtension->ServiceKeyName.Buffer,
                         (unsigned int)DriverExtension->ServiceKeyName.Length + 2,
                         0);
            if ( appended >= 0 )
            {
              DriverObject->Flags |= 0x800u;
              PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 8, 0, 0LL, 0LL, 0LL, 0LL);
              goto LABEL_10;
            }
          }
        }
      }
    }
    if ( v10 )
    {
      CmDeleteDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)Destination.Buffer, 0);
      PnpCleanupDeviceRegistryValues((__int64)&Destination);
    }
  }
LABEL_10:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  PpDevNodeUnlockTree(1);
  if ( v3 )
    ZwClose(v3);
  if ( P[0] )
    PiPnpRtlEndOperation((PVOID **)P[0]);
  return appended;
}
