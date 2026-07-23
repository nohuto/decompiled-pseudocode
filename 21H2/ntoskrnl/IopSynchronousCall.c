/*
 * XREFs of IopSynchronousCall @ 0x1406FA580
 * Callers:
 *     PnpSendIrp @ 0x1402F7490 (PnpSendIrp.c)
 *     PnpIrpDeviceEnumerated @ 0x14037F3EC (PnpIrpDeviceEnumerated.c)
 *     IopRemoveDevice @ 0x140738AB4 (IopRemoveDevice.c)
 *     IopQueryLegacyBusInformation @ 0x14073E6A8 (IopQueryLegacyBusInformation.c)
 *     PnpIrpQueryID @ 0x140747410 (PnpIrpQueryID.c)
 *     IopQueryDeviceState @ 0x140749DEC (IopQueryDeviceState.c)
 *     PpIrpQueryCapabilities @ 0x14074B5C8 (PpIrpQueryCapabilities.c)
 *     IopQueryDeviceResources @ 0x14075062C (IopQueryDeviceResources.c)
 *     PpIrpQueryResourceRequirements @ 0x140750F18 (PpIrpQueryResourceRequirements.c)
 *     IopQueryResourceHandlerInterface @ 0x14075258C (IopQueryResourceHandlerInterface.c)
 *     PnpQueryDeviceText @ 0x14076AD30 (PnpQueryDeviceText.c)
 *     PnpQueryBusInformation @ 0x14076CC44 (PnpQueryBusInformation.c)
 *     IopQueryDockRemovalInterface @ 0x1408B2D78 (IopQueryDockRemovalInterface.c)
 *     IopQueryReconfiguration @ 0x1408B2E80 (IopQueryReconfiguration.c)
 * Callees:
 *     IoGetLowerDeviceObjectWithTag @ 0x14024B44C (IoGetLowerDeviceObjectWithTag.c)
 *     IovUtilWatermarkIrp @ 0x1402F759C (IovUtilWatermarkIrp.c)
 *     IoAllocateIrp @ 0x1402F76C0 (IoAllocateIrp.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402F76F0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     IopQueueThreadIrp @ 0x140355FE0 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 */

__int64 __fastcall IopSynchronousCall(struct _DEVICE_OBJECT *a1, __int64 a2, NTSTATUS a3, ULONG_PTR a4, _QWORD *a5)
{
  PDEVICE_OBJECT AttachedDeviceReferenceWithTag; // rax
  struct _DEVICE_OBJECT *v9; // rbx
  PIRP Irp; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  unsigned int v15; // edi
  struct _DEVICE_OBJECT *LowerDeviceObjectWithTag; // rdi
  __int128 v18; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v18 = 0LL;
  AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(a1, 0x69706E50u);
  v9 = AttachedDeviceReferenceWithTag;
  if ( (AttachedDeviceReferenceWithTag->Flags & 0x80u) != 0 )
  {
    LowerDeviceObjectWithTag = (struct _DEVICE_OBJECT *)IoGetLowerDeviceObjectWithTag(
                                                          (__int64)AttachedDeviceReferenceWithTag,
                                                          0x69706E50u);
    if ( !LowerDeviceObjectWithTag )
    {
      v15 = -1073741436;
      goto LABEL_7;
    }
    ObfDereferenceObjectWithTag(v9, 0x69706E50u);
    v9 = LowerDeviceObjectWithTag;
  }
  Irp = IoAllocateIrp(v9->StackSize, 0);
  if ( Irp )
  {
    IovUtilWatermarkIrp();
    LODWORD(v18) = a3;
    Irp->IoStatus.Status = a3;
    *((_QWORD *)&v18 + 1) = a4;
    Irp->IoStatus.Information = a4;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    Irp->UserIosb = (PIO_STATUS_BLOCK)&v18;
    Irp->UserEvent = &Event;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    IopQueueThreadIrp((__int64)Irp);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v12 = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)a2;
    v13 = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = v12;
    v14 = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = v13;
    *(_QWORD *)&v13 = *(_QWORD *)(a2 + 64);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = v14;
    CurrentStackLocation[-1].Context = (PVOID)v13;
    v15 = IofCallDriver(v9, Irp);
    if ( v15 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v15 = v18;
    }
    if ( a5 )
      *a5 = *((_QWORD *)&v18 + 1);
  }
  else
  {
    v15 = -1073741670;
  }
LABEL_7:
  ObfDereferenceObjectWithTag(v9, 0x69706E50u);
  return v15;
}
