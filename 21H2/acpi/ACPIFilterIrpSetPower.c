/*
 * XREFs of ACPIFilterIrpSetPower @ 0x1C002E2B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C00056D8 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C00071F0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     ACPIDispatchForwardPowerIrp @ 0x1C0030B70 (ACPIDispatchForwardPowerIrp.c)
 *     ACPIBuildRegRequest @ 0x1C004AECC (ACPIBuildRegRequest.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x1C004F888 (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C00500F4 (ACPIDeviceIrpWarmEjectRequest.c)
 *     ACPIInternalCheckPowerReferences @ 0x1C0057340 (ACPIInternalCheckPowerReferences.c)
 */

__int64 __fastcall ACPIFilterIrpSetPower(ULONG_PTR a1, IRP *a2)
{
  ULONG_PTR v3; // rbp
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  __int64 v6; // rbx
  __int64 *v7; // r14
  _IO_STACK_LOCATION *v8; // rax
  _IO_STACK_LOCATION *v9; // rax
  void *v11; // r8
  _QWORD *v12; // rdi
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  __int64 v15; // rbp
  KIRQL v16; // al
  _QWORD *v17; // r12
  _QWORD *v18; // r15
  _QWORD *v19; // rcx
  ULONG_PTR v20; // rbp
  KIRQL v21; // al
  KIRQL v22; // r13
  void *v23; // r12
  _QWORD *v25; // [rsp+68h] [rbp+10h]

  v3 = a1;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = DeviceExtension;
  v7 = 0LL;
  CurrentStackLocation->Control |= 1u;
  if ( CurrentStackLocation->Parameters.Create.Options )
  {
    if ( !_bittest64((const signed __int64 *)(DeviceExtension + 8), 0x33u) )
      v7 = AMLIGetNamedChild(*(__int64 **)(DeviceExtension + 760), 1195725407);
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1 )
    {
      if ( !v7 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v6 + 728), 1u);
        v8 = a2->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v8[-1].MajorFunction = *(_OWORD *)&v8->MajorFunction;
        *(_OWORD *)&v8[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v8->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v8[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v8->Parameters.SetQuota + 6);
        v8[-1].FileObject = v8->FileObject;
        v8[-1].Control = 0;
        v9 = a2->Tail.Overlay.CurrentStackLocation;
        v9[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIDeviceIrpDeviceFilterRequest;
        v9[-1].Context = &ACPIDeviceIrpCompleteRequest;
        v9[-1].Control = -32;
        PoCallDriver(*(PDEVICE_OBJECT *)(v6 + 776), a2);
        return 259LL;
      }
      a2->IoStatus.Status = 0;
      _InterlockedAdd((volatile signed __int32 *)(v6 + 728), 1u);
      ACPIBuildRegRequest(v3, a2, &ACPIDeviceIrpDelayedDeviceOffRequest);
LABEL_40:
      AMLIDereferenceHandleEx((volatile signed __int32 *)v7);
      return 259LL;
    }
    *(_BYTE *)(v6 + 556) = 1;
    a2->IoStatus.Status = 0;
    _InterlockedAdd((volatile signed __int32 *)(v6 + 728), 1u);
    v12 = *(_QWORD **)(v6 + 416);
    if ( v12 )
    {
      do
      {
        v13 = v12[1];
        v12 = (_QWORD *)*v12;
        if ( (*(_DWORD *)(v13 + 16) & 0x810LL) == 0 )
          _InterlockedOr64((volatile signed __int64 *)(v13 + 16), 0x800uLL);
      }
      while ( v12 );
      v14 = *(_QWORD **)(v6 + 416);
      if ( v14 )
      {
        do
        {
          v15 = v14[1];
          v14 = (_QWORD *)*v14;
          if ( (*(_BYTE *)(v15 + 16) & 0x10) == 0 )
          {
            v16 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
            v17 = (_QWORD *)(v15 + 48);
            v18 = *(_QWORD **)(v15 + 48);
            v25 = (_QWORD *)(v15 + 48);
            if ( v18 != (_QWORD *)(v15 + 48) )
            {
              do
              {
                v19 = v18;
                v18 = (_QWORD *)*v18;
                v20 = *(v19 - 1);
                if ( *((_DWORD *)v19 - 5) == 1 )
                {
                  KeReleaseSpinLock(&AcpiPowerLock, v16);
                  v21 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
                  v22 = v21;
                  if ( !v20 || v20 == v6 || (unsigned int)(*(_DWORD *)(v20 + 368) - 2) > 1 || *(_BYTE *)(v20 + 556) )
                  {
                    KeReleaseSpinLock(&AcpiDeviceTreeLock, v21);
                  }
                  else
                  {
                    v23 = *(void **)(v20 + 784);
                    if ( v23 )
                    {
                      ACPIInitReferenceDeviceExtension(v20);
                      ObfReferenceObject(v23);
                      KeReleaseSpinLock(&AcpiDeviceTreeLock, v22);
                      if ( (unsigned __int8)ACPIInternalCheckPowerReferences(v20) == 1 )
                      {
                        *(_BYTE *)(v20 + 556) = 1;
                        PoFxNotifySurprisePowerOn(v23);
                      }
                      ObfDereferenceObject(v23);
                      ACPIInitDereferenceDeviceExtensionUnlocked(v20);
                    }
                    else
                    {
                      KeReleaseSpinLock(&AcpiDeviceTreeLock, v21);
                    }
                    v17 = v25;
                  }
                  v16 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
                }
              }
              while ( v18 != v17 );
            }
            KeReleaseSpinLock(&AcpiPowerLock, v16);
          }
        }
        while ( v14 );
        v3 = a1;
      }
    }
    v11 = &ACPIDeviceIrpDelayedDeviceOnRequest;
    if ( !v7 )
      v11 = &ACPIDeviceIrpForwardRequest;
    ACPIDeviceIrpDeviceRequest(v3, a2, v11);
    if ( v7 )
      goto LABEL_40;
  }
  else if ( CurrentStackLocation->Parameters.Create.EaLength == 7 )
  {
    a2->IoStatus.Status = 0;
    _InterlockedAdd((volatile signed __int32 *)(DeviceExtension + 728), 1u);
    ACPIDeviceIrpWarmEjectRequest(DeviceExtension, a2, &ACPIDeviceIrpForwardRequest, 0LL);
  }
  else
  {
    ACPIDispatchForwardPowerIrp(v3, a2);
  }
  return 259LL;
}
