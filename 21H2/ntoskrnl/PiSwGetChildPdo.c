/*
 * XREFs of PiSwGetChildPdo @ 0x1406E32E4
 * Callers:
 *     PipEnumerateCompleted @ 0x14076F8AC (PipEnumerateCompleted.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     IoInvalidateDeviceRelations @ 0x1402DCE90 (IoInvalidateDeviceRelations.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     McTemplateK0zzq_EtwWriteTransfer @ 0x1405638C4 (McTemplateK0zzq_EtwWriteTransfer.c)
 *     McTemplateK0zztt_EtwWriteTransfer @ 0x140563A9C (McTemplateK0zztt_EtwWriteTransfer.c)
 *     McTemplateK0zzzd_EtwWriteTransfer @ 0x140563CAC (McTemplateK0zzzd_EtwWriteTransfer.c)
 *     PiSwProcessRemove @ 0x1406619F8 (PiSwProcessRemove.c)
 *     PiSwFindPdoAssociation @ 0x1406E34FC (PiSwFindPdoAssociation.c)
 *     PiSwAddPdoAssociation @ 0x1406E3544 (PiSwAddPdoAssociation.c)
 *     ObSetSecurityObjectByPointer @ 0x140724D30 (ObSetSecurityObjectByPointer.c)
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140779C10 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpConcatPWSTR @ 0x14078C9E8 (PnpConcatPWSTR.c)
 *     PiSwMakePdoInactive @ 0x140953950 (PiSwMakePdoInactive.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PDEVICE_OBJECT __fastcall PiSwGetChildPdo(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  PDEVICE_OBJECT v5; // rsi
  char v6; // r12
  __int64 PdoAssociation; // r8
  char v8; // r14
  __int64 v10; // rcx
  NTSTATUS v11; // eax
  _DWORD *DeviceExtension; // r14
  __int64 v13; // r8
  UNICODE_STRING *p_DestinationString; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  void *v18; // r14
  __int16 v19; // ax
  __int64 v20; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  PDEVICE_OBJECT v22; // [rsp+A0h] [rbp+50h] BYREF

  v3 = a2 - 96;
  v22 = 0LL;
  v5 = 0LL;
  DestinationString = 0LL;
  if ( (byte_140C0DD4C & 2) != 0 )
    McTemplateK0zzzd_EtwWriteTransfer(
      *(_QWORD *)(v3 + 112),
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_GetChildPdo_Start,
      a3,
      *(const wchar_t **)(v3 + 8),
      *(const wchar_t **)(v3 + 16),
      *(const wchar_t **)(*(_QWORD *)(v3 + 112) + 8LL),
      *(_DWORD *)(v3 + 4));
  v6 = 1;
  LOBYTE(a3) = 1;
  PdoAssociation = PiSwFindPdoAssociation(v3, DeviceObject, a3);
  if ( (*(_DWORD *)(v3 + 4) & 2) == 0 )
  {
    if ( PdoAssociation )
    {
      v5 = *(PDEVICE_OBJECT *)(PdoAssociation + 40);
      v6 = 0;
      *((_DWORD *)v5->DeviceExtension + 2) = *((_DWORD *)v5->DeviceExtension + 2) & 0xFFFFFFB7 | 8;
LABEL_6:
      v8 = v6;
      goto LABEL_7;
    }
    if ( DeviceObject != *((PDEVICE_OBJECT *)IopRootDeviceNode + 4) )
    {
LABEL_13:
      v10 = *(_QWORD *)(v3 + 120);
      *(_WORD *)(v3 + 200) = 0;
      if ( v10 )
        PiSwMakePdoInactive(v10);
      v8 = 0;
      v11 = IoCreateDevice(PiSwDeviceDriverObject, 0x10u, 0LL, 0x22u, 0x80u, 0, &v22);
      v5 = v22;
      if ( v11 < 0 )
        goto LABEL_7;
      DeviceExtension = v22->DeviceExtension;
      *(_OWORD *)DeviceExtension = 0LL;
      v13 = *(_QWORD *)(v3 + 152);
      if ( v13 && (int)ObSetSecurityObjectByPointer(v5, 28LL, v13) < 0 )
      {
        IoDeleteDevice(v5);
        v5 = 0LL;
      }
      else
      {
        *(_QWORD *)DeviceExtension = v3;
        _InterlockedAdd((volatile signed __int32 *)v3, 1u);
        v5 = v22;
        *(_QWORD *)(v3 + 120) = v22;
        DeviceExtension[2] |= 8u;
        v5->Flags &= ~0x80u;
        PiSwAddPdoAssociation(v3, DeviceObject, v5);
      }
      goto LABEL_6;
    }
    if ( !*(_QWORD *)(v3 + 80) || (p_DestinationString = (UNICODE_STRING *)(v3 + 72), *(_WORD *)(v3 + 72) < 2u) )
    {
      if ( (int)PnpConcatPWSTR(0xC8uLL, 0x57706E50u, *(_QWORD *)(v3 + 8)) < 0
        || RtlInitUnicodeStringEx(&DestinationString, 0LL) < 0 )
      {
        goto LABEL_13;
      }
      p_DestinationString = &DestinationString;
    }
    v18 = (void *)PnpDeviceObjectFromDeviceInstanceWithTag(p_DestinationString, 1953261124LL);
    if ( v18 )
    {
      if ( (byte_140C0DD4C & 2) != 0 )
        McTemplateK0zzq_EtwWriteTransfer(
          v16,
          v15,
          v17,
          *(const wchar_t **)(v3 + 8),
          *(const wchar_t **)(v3 + 16),
          *(_WORD *)(v3 + 200));
      ObfDereferenceObject(v18);
      v19 = *(_WORD *)(v3 + 200);
      if ( !v19 )
      {
        IoInvalidateDeviceRelations(DeviceObject, SingleBusRelations);
        v19 = *(_WORD *)(v3 + 200);
      }
      if ( v19 != -1 )
        *(_WORD *)(v3 + 200) = v19 + 1;
      v8 = 0;
      goto LABEL_7;
    }
    goto LABEL_13;
  }
  v8 = 0;
  if ( !PdoAssociation )
    goto LABEL_9;
  v20 = *(_QWORD *)(*(_QWORD *)(PdoAssociation + 40) + 64LL);
  *(_DWORD *)(v20 + 8) &= ~8u;
  if ( (*(_DWORD *)(v20 + 8) & 4) == 0 )
    goto LABEL_9;
  PiSwProcessRemove(*(_QWORD *)(PdoAssociation + 40), 0);
LABEL_7:
  if ( v5 )
    ObfReferenceObject(v5);
LABEL_9:
  if ( (byte_140C0DD4C & 2) != 0 )
    McTemplateK0zztt_EtwWriteTransfer(
      *(_QWORD *)(v3 + 16),
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_GetChildPdo_Stop,
      PdoAssociation,
      *(const wchar_t **)(v3 + 8),
      *(const wchar_t **)(v3 + 16),
      v5 != 0LL,
      v8);
  return v5;
}
