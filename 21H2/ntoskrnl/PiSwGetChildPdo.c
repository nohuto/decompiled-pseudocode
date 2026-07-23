/*
 * XREFs of PiSwGetChildPdo @ 0x140770AFC
 * Callers:
 *     PipEnumerateCompleted @ 0x140745540 (PipEnumerateCompleted.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     IoDeleteDevice @ 0x1402A5DF0 (IoDeleteDevice.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     IoInvalidateDeviceRelations @ 0x1403702F0 (IoInvalidateDeviceRelations.c)
 *     PnpConcatPWSTR @ 0x140607BE4 (PnpConcatPWSTR.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14062D4E0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     ObSetSecurityObjectByPointer @ 0x140655280 (ObSetSecurityObjectByPointer.c)
 *     IoCreateDevice @ 0x1406C9950 (IoCreateDevice.c)
 *     PiSwProcessRemove @ 0x140732D98 (PiSwProcessRemove.c)
 *     PiSwMakePdoInactive @ 0x140732FD4 (PiSwMakePdoInactive.c)
 *     PiSwFindPdoAssociation @ 0x140770D08 (PiSwFindPdoAssociation.c)
 *     PiSwAddPdoAssociation @ 0x140770D50 (PiSwAddPdoAssociation.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

PDEVICE_OBJECT __fastcall PiSwGetChildPdo(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  PDEVICE_OBJECT v5; // rbx
  WCHAR *v6; // rsi
  __int64 PdoAssociation; // rcx
  __int64 v9; // rcx
  NTSTATUS v10; // eax
  _DWORD *DeviceExtension; // r14
  __int64 v12; // r8
  int v13; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  struct _DMA_ADAPTER *v15; // rax
  __int64 v16; // r8
  __int16 v17; // ax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  PCWSTR SourceString; // [rsp+98h] [rbp+48h] BYREF
  PDEVICE_OBJECT v20; // [rsp+A0h] [rbp+50h] BYREF

  v3 = a2 - 96;
  SourceString = 0LL;
  v5 = 0LL;
  v20 = 0LL;
  LOBYTE(a3) = 1;
  v6 = 0LL;
  DestinationString = 0LL;
  PdoAssociation = PiSwFindPdoAssociation(a2 - 96, DeviceObject, a3);
  if ( (*(_DWORD *)(v3 + 4) & 2) != 0 )
  {
    if ( !PdoAssociation )
      return v5;
    v16 = *(_QWORD *)(*(_QWORD *)(PdoAssociation + 40) + 64LL);
    *(_DWORD *)(v16 + 8) &= ~8u;
    if ( (*(_DWORD *)(v16 + 8) & 4) == 0 )
      return v5;
    PiSwProcessRemove(*(_QWORD *)(PdoAssociation + 40), 0);
    goto LABEL_13;
  }
  if ( !PdoAssociation )
  {
    if ( DeviceObject == *((PDEVICE_OBJECT *)IopRootDeviceNode + 4) )
    {
      if ( !*(_QWORD *)(v3 + 80) || (p_DestinationString = (UNICODE_STRING *)(v3 + 72), *(_WORD *)(v3 + 72) < 2u) )
      {
        v13 = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, (PVOID *)&SourceString, 3uLL);
        v6 = (WCHAR *)SourceString;
        if ( v13 < 0 || RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
          goto LABEL_8;
        p_DestinationString = &DestinationString;
      }
      v15 = (struct _DMA_ADAPTER *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)p_DestinationString, 0x746C6644u);
      if ( v15 )
      {
        HalPutDmaAdapter(v15);
        v17 = *(_WORD *)(v3 + 200);
        if ( !v17 )
        {
          IoInvalidateDeviceRelations(DeviceObject, SingleBusRelations);
          v17 = *(_WORD *)(v3 + 200);
        }
        if ( v17 != -1 )
          *(_WORD *)(v3 + 200) = v17 + 1;
        goto LABEL_13;
      }
    }
LABEL_8:
    v9 = *(_QWORD *)(v3 + 120);
    *(_WORD *)(v3 + 200) = 0;
    if ( v9 )
      PiSwMakePdoInactive(v9);
    v10 = IoCreateDevice(PiSwDeviceDriverObject, 0x10u, 0LL, 0x22u, 0x80u, 0, &v20);
    v5 = v20;
    if ( v10 >= 0 )
    {
      DeviceExtension = v20->DeviceExtension;
      *(_OWORD *)DeviceExtension = 0LL;
      v12 = *(_QWORD *)(v3 + 152);
      if ( v12 && (int)ObSetSecurityObjectByPointer((__int64)v5, 28, v12) < 0 )
      {
        IoDeleteDevice(v5);
        v5 = 0LL;
      }
      else
      {
        *(_QWORD *)DeviceExtension = v3;
        _InterlockedAdd((volatile signed __int32 *)v3, 1u);
        v5 = v20;
        *(_QWORD *)(v3 + 120) = v20;
        DeviceExtension[2] |= 8u;
        v5->Flags &= ~0x80u;
        PiSwAddPdoAssociation(v3, DeviceObject, v5);
        v6 = (WCHAR *)SourceString;
      }
    }
LABEL_13:
    if ( v6 )
      ExFreePoolWithTag(v6, 0x57706E50u);
    goto LABEL_4;
  }
  v5 = *(PDEVICE_OBJECT *)(PdoAssociation + 40);
  *((_DWORD *)v5->DeviceExtension + 2) |= 8u;
LABEL_4:
  if ( v5 )
    ObfReferenceObject(v5);
  return v5;
}
