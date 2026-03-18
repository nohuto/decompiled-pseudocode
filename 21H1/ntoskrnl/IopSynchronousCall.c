/*
 * XREFs of IopSynchronousCall @ 0x140687B88
 * Callers:
 *     PnpSendIrp @ 0x1402E0C80 (PnpSendIrp.c)
 *     PnpIrpDeviceEnumerated @ 0x14037C86C (PnpIrpDeviceEnumerated.c)
 *     IopQueryLegacyBusInformation @ 0x140723B7C (IopQueryLegacyBusInformation.c)
 *     PnpIrpQueryID @ 0x14072C8E0 (PnpIrpQueryID.c)
 *     IopQueryDeviceState @ 0x14072EB04 (IopQueryDeviceState.c)
 *     PpIrpQueryCapabilities @ 0x140730CF4 (PpIrpQueryCapabilities.c)
 *     IopRemoveDevice @ 0x140734134 (IopRemoveDevice.c)
 *     IopQueryDeviceResources @ 0x140738E1C (IopQueryDeviceResources.c)
 *     PpIrpQueryResourceRequirements @ 0x140739708 (PpIrpQueryResourceRequirements.c)
 *     IopQueryResourceHandlerInterface @ 0x14073AD7C (IopQueryResourceHandlerInterface.c)
 *     PnpQueryDeviceText @ 0x140755E30 (PnpQueryDeviceText.c)
 *     PnpQueryBusInformation @ 0x140758504 (PnpQueryBusInformation.c)
 *     IopQueryDockRemovalInterface @ 0x1408AE7F8 (IopQueryDockRemovalInterface.c)
 *     IopQueryReconfiguration @ 0x1408AE900 (IopQueryReconfiguration.c)
 * Callees:
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     IopQueueThreadIrp @ 0x140261300 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IovUtilWatermarkIrp @ 0x1402E0D8C (IovUtilWatermarkIrp.c)
 *     IoAllocateIrp @ 0x1402E0EB0 (IoAllocateIrp.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402E0EE0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x14031D3DC (IoGetLowerDeviceObjectWithTag.c)
 */

__int64 __fastcall IopSynchronousCall(struct _DEVICE_OBJECT *a1, __int64 a2, NTSTATUS a3, ULONG_PTR a4, _QWORD *a5)
{
  PDEVICE_OBJECT AttachedDeviceReferenceWithTag; // rax
  struct _DEVICE_OBJECT *v9; // rbx
  PIRP Irp; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  unsigned int v17; // edi
  struct _DEVICE_OBJECT *LowerDeviceObjectWithTag; // rdi
  __int128 v20; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v20 = 0LL;
  AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(a1, 0x69706E50u);
  v9 = AttachedDeviceReferenceWithTag;
  if ( (AttachedDeviceReferenceWithTag->Flags & 0x80u) != 0 )
  {
    LowerDeviceObjectWithTag = (struct _DEVICE_OBJECT *)IoGetLowerDeviceObjectWithTag(
                                                          (__int64)AttachedDeviceReferenceWithTag,
                                                          0x69706E50u);
    if ( !LowerDeviceObjectWithTag )
    {
      v17 = -1073741436;
      goto LABEL_7;
    }
    ObfDereferenceObjectWithTag(v9, 0x69706E50u);
    v9 = LowerDeviceObjectWithTag;
  }
  Irp = IoAllocateIrp(v9->StackSize, 0);
  if ( Irp )
  {
    IovUtilWatermarkIrp();
    LODWORD(v20) = a3;
    Irp->IoStatus.Status = a3;
    *((_QWORD *)&v20 + 1) = a4;
    Irp->IoStatus.Information = a4;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    Irp->UserIosb = (PIO_STATUS_BLOCK)&v20;
    Irp->UserEvent = &Event;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    IopQueueThreadIrp((__int64)Irp, v11, v12);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v14 = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)a2;
    v15 = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = v14;
    v16 = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = v15;
    *(_QWORD *)&v15 = *(_QWORD *)(a2 + 64);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = v16;
    CurrentStackLocation[-1].Context = (PVOID)v15;
    v17 = IofCallDriver(v9, Irp);
    if ( v17 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v17 = v20;
    }
    if ( a5 )
      *a5 = *((_QWORD *)&v20 + 1);
  }
  else
  {
    v17 = -1073741670;
  }
LABEL_7:
  ObfDereferenceObjectWithTag(v9, 0x69706E50u);
  return v17;
}
