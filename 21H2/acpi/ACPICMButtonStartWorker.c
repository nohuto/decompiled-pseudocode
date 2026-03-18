/*
 * XREFs of ACPICMButtonStartWorker @ 0x1C00029E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001CCC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIRegisterForDeviceNotifications @ 0x1C0002D90 (ACPIRegisterForDeviceNotifications.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C0004F28 (ACPIInternalSetDeviceInterface.c)
 *     WPP_RECORDER_SF_qss @ 0x1C00077E8 (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     RtlStringCchPrintfA @ 0x1C001D284 (RtlStringCchPrintfA.c)
 *     ACPISetDeviceWorker @ 0x1C00215BC (ACPISetDeviceWorker.c)
 *     ACPIInternalRegisterPowerCallBack @ 0x1C002490C (ACPIInternalRegisterPowerCallBack.c)
 *     ACPICMLidPowerStateCallBack @ 0x1C004DAC0 (ACPICMLidPowerStateCallBack.c)
 */

void __fastcall ACPICMButtonStartWorker(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // r15
  char v2; // si
  const char **DeviceExtension; // rax
  IRP *v5; // r13
  const char *v6; // r14
  const char **v7; // rdi
  int Status; // ebx
  unsigned int MinorFunction; // r12d
  KIRQL v10; // al
  POWER_STATE v11; // ebx
  GUID *v12; // rbx
  const char *v13; // rcx
  const char *v14; // rax
  __int64 v15; // rax
  char *Pool2; // rax
  const char *v17; // rcx
  const char *v18; // rdx
  void *v19; // rax
  int v20; // eax
  char v21; // r8
  NTSTATUS v22; // eax
  char v23; // r8
  NTSTATUS v24; // eax
  const char *v25; // rcx
  const char *v26; // r8
  const char *v27; // rdx
  NTSTATUS v28; // eax
  const char *v29; // rcx
  const char *v30; // r8
  const char *v31; // rdx
  const char *v32; // rax
  const char *v33; // rdx
  const char *v34; // rcx
  const char *v35; // rax
  const char *v36; // rdx
  const char *v37; // rcx
  const char *v38; // rax
  const char *v39; // rdx
  const char *v40; // rcx
  __int64 v41; // [rsp+30h] [rbp-48h]
  __int64 v42; // [rsp+38h] [rbp-40h]
  __int64 v43; // [rsp+38h] [rbp-40h]
  __int64 v44; // [rsp+38h] [rbp-40h]
  __int64 v45; // [rsp+40h] [rbp-38h]
  __int64 v46; // [rsp+40h] [rbp-38h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-18h] BYREF
  signed __int32 v48; // [rsp+C0h] [rbp+48h] BYREF
  ULONG DataSize; // [rsp+C8h] [rbp+50h] BYREF
  void *DeviceRegKey; // [rsp+D0h] [rbp+58h] BYREF
  PVOID Data; // [rsp+D8h] [rbp+60h] BYREF

  v1 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v2 = 0;
  DeviceRegKey = 0LL;
  Data = 0LL;
  DataSize = 0;
  DestinationString = 0LL;
  v48 = 0;
  DeviceExtension = (const char **)ACPIInternalGetDeviceExtension((ULONG_PTR)v1);
  v5 = *(IRP **)(a1 + 40);
  v6 = (const char *)&unk_1C006FB8B;
  v7 = DeviceExtension;
  Status = v5->IoStatus.Status;
  MinorFunction = v5->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( Status >= 0 )
  {
    if ( ((_DWORD)DeviceExtension[25] & 4) != 0 )
    {
      ACPIInternalRegisterPowerCallBack(DeviceExtension, ACPICMLidPowerStateCallBack);
      ACPICMLidPowerStateCallBack(v7, 0LL, 0LL);
      ACPISetDeviceWorker(v7, 1LL);
    }
    else
    {
      v10 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      v11.SystemState = (int)v7[67];
      KeReleaseSpinLock(&AcpiPowerLock, v10);
      PoRequestPowerIrp(v1, 0, v11, ACPIInternalWaitWakeLoop, 0LL, 0LL);
    }
    if ( ((_DWORD)v7[1] & 0x2000LL) != 0 )
    {
      v12 = &GUID_DEVICE_APPLICATIONLAUNCH_BUTTON;
      if ( !v7[77] )
      {
        v48 = _InterlockedExchangeAdd(&AcpipExperienceButtonInstanceID, 1u);
        Pool2 = (char *)ExAllocatePool2(64LL, 9LL, 1399874369LL);
        v7[77] = Pool2;
        if ( Pool2 )
        {
          RtlStringCchPrintfA(Pool2, 9uLL, "%d", v48);
        }
        else
        {
          v17 = v7[1];
          v18 = (const char *)&unk_1C006FB8B;
          v19 = &unk_1C006FB8B;
          if ( ((unsigned __int64)v17 & 0x200000000000LL) != 0 )
          {
            v18 = v7[76];
            if ( ((unsigned __int64)v17 & 0x400000000000LL) != 0 )
              v19 = 0LL;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v41 = (__int64)v18;
            LOBYTE(v18) = 2;
            WPP_RECORDER_SF_qss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v18,
              5,
              14,
              (__int64)&WPP_72d86d3b604930d5754709d36f3716bf_Traceguids,
              (char)v7,
              v41,
              (__int64)v19);
          }
        }
      }
      v20 = ACPIGet((_DWORD)v7, 1145653319, 268501000, 0, 0, 0LL, 0LL, (__int64)&Data, (__int64)&DataSize);
      v21 = v20;
      if ( v20 < 0 )
      {
        v35 = v7[1];
        v36 = (const char *)&unk_1C006FB8B;
        v37 = (const char *)&unk_1C006FB8B;
        if ( ((unsigned __int64)v35 & 0x200000000000LL) != 0 )
        {
          v36 = v7[76];
          if ( ((unsigned __int64)v35 & 0x400000000000LL) != 0 )
            v37 = v7[77];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v43 = (__int64)v36;
          LOBYTE(v36) = 4;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v36,
            5,
            18,
            (__int64)&WPP_72d86d3b604930d5754709d36f3716bf_Traceguids,
            v21,
            (char)v7,
            v43,
            (__int64)v37);
        }
      }
      else
      {
        v22 = IoOpenDeviceRegistryKey(v1, 1u, 0x20000u, &DeviceRegKey);
        v23 = v22;
        if ( v22 < 0 )
        {
          v32 = v7[1];
          v33 = (const char *)&unk_1C006FB8B;
          v34 = (const char *)&unk_1C006FB8B;
          if ( ((unsigned __int64)v32 & 0x200000000000LL) != 0 )
          {
            v33 = v7[76];
            if ( ((unsigned __int64)v32 & 0x400000000000LL) != 0 )
              v34 = v7[77];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v42 = (__int64)v33;
            LOBYTE(v33) = 2;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v33,
              5,
              17,
              (__int64)&WPP_72d86d3b604930d5754709d36f3716bf_Traceguids,
              v23,
              (char)v7,
              v42,
              (__int64)v34);
          }
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, L"UserHIDBlock");
          v24 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 3u, Data, DataSize);
          if ( v24 < 0 )
          {
            v25 = v7[1];
            v26 = (const char *)&unk_1C006FB8B;
            v27 = (const char *)&unk_1C006FB8B;
            if ( ((unsigned __int64)v25 & 0x200000000000LL) != 0 )
            {
              v26 = v7[76];
              if ( ((unsigned __int64)v25 & 0x400000000000LL) != 0 )
                v27 = v7[77];
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v45 = (__int64)v27;
              LOBYTE(v27) = 2;
              WPP_RECORDER_SF_Lqss(
                WPP_GLOBAL_Control->DeviceExtension,
                (_DWORD)v27,
                5,
                15,
                (__int64)&WPP_72d86d3b604930d5754709d36f3716bf_Traceguids,
                v24,
                (char)v7,
                (__int64)v26,
                v45);
            }
          }
          RtlInitUnicodeString(&DestinationString, L"ButtonInstanceID");
          v48 = _strtoui64(v7[77], 0LL, 10);
          v28 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 4u, &v48, 4u);
          if ( v28 < 0 )
          {
            v29 = v7[1];
            v30 = (const char *)&unk_1C006FB8B;
            v31 = (const char *)&unk_1C006FB8B;
            if ( ((unsigned __int64)v29 & 0x200000000000LL) != 0 )
            {
              v30 = v7[76];
              if ( ((unsigned __int64)v29 & 0x400000000000LL) != 0 )
                v31 = v7[77];
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v46 = (__int64)v31;
              LOBYTE(v31) = 2;
              WPP_RECORDER_SF_Lqss(
                WPP_GLOBAL_Control->DeviceExtension,
                (_DWORD)v31,
                5,
                16,
                (__int64)&WPP_72d86d3b604930d5754709d36f3716bf_Traceguids,
                v28,
                (char)v7,
                (__int64)v30,
                v46);
            }
          }
          ZwClose(DeviceRegKey);
        }
      }
    }
    else
    {
      v12 = &GUID_DEVICE_SYS_BUTTON;
      ACPIRegisterForDeviceNotifications(v1, ACPICMButtonNotifyByDeviceObject, v1);
    }
    Status = ACPIInternalSetDeviceInterface(v1, v12);
    if ( Status < 0 )
    {
      v38 = v7[1];
      v39 = (const char *)&unk_1C006FB8B;
      v40 = (const char *)&unk_1C006FB8B;
      if ( ((unsigned __int64)v38 & 0x200000000000LL) != 0 )
      {
        v39 = v7[76];
        if ( ((unsigned __int64)v38 & 0x400000000000LL) != 0 )
          v40 = v7[77];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v44 = (__int64)v39;
        LOBYTE(v39) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v39,
          5,
          19,
          (__int64)&WPP_72d86d3b604930d5754709d36f3716bf_Traceguids,
          Status,
          (char)v7,
          v44,
          (__int64)v40);
      }
    }
  }
  v5->IoStatus.Status = Status;
  v5->IoStatus.Information = 0LL;
  IofCompleteRequest(v5, 0);
  v13 = (const char *)&unk_1C006FB8B;
  if ( v7 )
  {
    v14 = v7[1];
    v2 = (char)v7;
    if ( ((unsigned __int64)v14 & 0x200000000000LL) != 0 )
    {
      v6 = v7[76];
      if ( ((unsigned __int64)v14 & 0x400000000000LL) != 0 )
        v13 = v7[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = MinorFunction;
    if ( MinorFunction >= 0x1A )
      v15 = 26LL;
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x14u,
      (__int64)&WPP_72d86d3b604930d5754709d36f3716bf_Traceguids,
      (char)v5,
      ACPIDispatchPnpTableNames[v15],
      Status,
      v2,
      v6,
      v13);
  }
}
