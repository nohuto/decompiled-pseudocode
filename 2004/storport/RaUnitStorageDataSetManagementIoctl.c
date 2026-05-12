/*
 * XREFs of RaUnitStorageDataSetManagementIoctl @ 0x1C0071FE0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000BEE8 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0004E94 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0004EF0 (RaidAdapterExecuteXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C00076EC (RaSrbSetMiniportContext.c)
 *     StorAllocateContiguousIoResources @ 0x1C0007A98 (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C0007B58 (StorFreeContiguousIoResources.c)
 *     RaidAllocateSrb @ 0x1C0007B84 (RaidAllocateSrb.c)
 *     RaidXrbDeallocateResources @ 0x1C000869C (RaidXrbDeallocateResources.c)
 *     RaidCompleteRequestEx @ 0x1C0009F40 (RaidCompleteRequestEx.c)
 *     RaidZeroXrb @ 0x1C000BD00 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000C6C0 (RaidSrbStatusToNtStatus.c)
 *     RaidXrbSetCompletionRoutine @ 0x1C001080C (RaidXrbSetCompletionRoutine.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C0012888 (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     RaidFreeSrb @ 0x1C001554C (RaidFreeSrb.c)
 *     WPP_SF_DD @ 0x1C003243C (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C0032650 (WPP_SF_qq.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C0045F70 (RaUnitBuildDsmGeneralBufferForMiniport.c)
 */

__int64 __fastcall RaUnitStorageDataSetManagementIoctl(__int64 a1, IRP *a2)
{
  __int64 v2; // r13
  _IRP *MasterIrp; // rcx
  _BYTE *Srb; // rbx
  __int64 v6; // r14
  _DWORD *v7; // r15
  int v8; // r12d
  unsigned __int64 Options; // r8
  __int64 IrpCount; // r10
  __int64 Flags; // r9
  int v12; // eax
  int v13; // edi
  IRP *v14; // rcx
  int v16; // eax
  int v17; // edx
  __int64 ContiguousIoResources; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  PIRP v21; // rax
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rsi
  __int64 v25; // rdx
  _BYTE *v26; // rdx
  __int64 v27; // [rsp+20h] [rbp-18h]
  int v28; // [rsp+80h] [rbp+48h] BYREF
  PIRP Irp; // [rsp+88h] [rbp+50h]
  _DWORD *v30; // [rsp+90h] [rbp+58h] BYREF
  __int64 v31; // [rsp+98h] [rbp+60h]

  Irp = a2;
  v2 = *(_QWORD *)(a1 + 24);
  v31 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Srb = 0LL;
  v30 = 0LL;
  v6 = 0LL;
  v28 = 0;
  v7 = 0LL;
  v8 = 0;
  if ( !MasterIrp
    || (Options = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options, (unsigned int)Options < 0x1C)
    || (IrpCount = (unsigned int)MasterIrp->AssociatedIrp.IrpCount,
        Options < IrpCount + (unsigned __int64)*(&MasterIrp->Flags + 1))
    || (Flags = MasterIrp->Flags, Options < Flags + (unsigned __int64)HIDWORD(MasterIrp->MdlAddress))
    || Options < Flags + IrpCount + 28 )
  {
    v13 = -1073741811;
    goto LABEL_35;
  }
  v12 = *(_DWORD *)(&MasterIrp->Size + 1);
  switch ( v12 )
  {
    case 1:
      goto LABEL_18;
    case -2147483646:
      v8 = 1;
      v16 = RaUnitBuildDsmNotifyBufferForMiniport(a1, (__int64)a2, &v30, &v28);
LABEL_17:
      v7 = v30;
      v13 = v16;
      goto LABEL_11;
    case -2147483636:
LABEL_18:
      if ( !ExtendedDSMCommandsSupported )
        goto LABEL_10;
      goto LABEL_40;
  }
  if ( (unsigned int)(v12 + 2147483634) <= 1 )
  {
LABEL_40:
    v8 = 60;
    v16 = RaUnitBuildDsmGeneralBufferForMiniport(a1, (__int64)a2, &v30, &v28);
    goto LABEL_17;
  }
LABEL_10:
  v13 = -1073741637;
LABEL_11:
  if ( v13 < 0 )
    goto LABEL_12;
  v7[3] = v8;
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(v2 + 410), 0);
  if ( !Srb
    || (ContiguousIoResources = StorAllocateContiguousIoResources(
                                  ((*(_DWORD *)(v2 + 452) + 7) & 0xFFFFFFF8) + 1088,
                                  v17,
                                  v2),
        v31 = ContiguousIoResources,
        (v20 = ContiguousIoResources) == 0) )
  {
    v13 = -1073741670;
    goto LABEL_12;
  }
  v6 = ContiguousIoResources + 32;
  RaidZeroXrb(ContiguousIoResources + 32, v19, 0, 0LL);
  v21 = Irp;
  *(_QWORD *)(v6 + 176) = Irp;
  *(_QWORD *)(v6 + 184) = v7;
  *(_QWORD *)(v6 + 168) = Srb;
  *(_QWORD *)(v6 + 224) = a1;
  if ( *(_BYTE *)(v2 + 410) == 1 )
  {
    v25 = *((unsigned int *)Srb + 13);
    *((_QWORD *)Srb + 10) = v21;
    v26 = &Srb[v25];
    *((_DWORD *)Srb + 15) = v28;
    *((_QWORD *)Srb + 12) = v6;
    *((_QWORD *)Srb + 8) = v7;
    *((_DWORD *)Srb + 6) = 256;
    *((_DWORD *)Srb + 10) = v8;
    *((_WORD *)v26 + 1) = *(_WORD *)(*(_QWORD *)(a1 + 24) + 56LL);
    v26[8] = *(_BYTE *)(a1 + 96);
    v26[9] = *(_BYTE *)(a1 + 97);
    v26[10] = *(_BYTE *)(a1 + 98);
  }
  else
  {
    *((_DWORD *)Srb + 4) = v28;
    *(_WORD *)Srb = 88;
    *((_QWORD *)Srb + 6) = v6;
    Srb[2] = 2;
    *((_QWORD *)Srb + 3) = v7;
    *((_DWORD *)Srb + 3) = 256;
    *((_DWORD *)Srb + 5) = v8;
    Srb[5] = *(_BYTE *)(a1 + 96);
    Srb[6] = *(_BYTE *)(a1 + 97);
    Srb[7] = *(_BYTE *)(a1 + 98);
  }
  RaSrbSetMiniportContext(v2, (__int64)Srb, v20 + 1088);
  KeInitializeEvent((PRKEVENT)(v6 + 664), NotificationEvent, 0);
  RaidXrbSetCompletionRoutine(v6, (__int64)RaidXrbSignalCompletion);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x24u,
      (__int64)&WPP_315ac634f457316aea96af95ee1292c6_Traceguids,
      v6,
      Srb);
  }
  if ( *(_BYTE *)(v2 + 4514) )
    v23 = RaidAdapterRaiseIrqlAndExecuteXrb(v2, v6);
  else
    v23 = RaidAdapterExecuteXrb(v2, (_QWORD *)v6, v22);
  v13 = v23;
  if ( v23 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v6 + 664), Executive, 0, 0, 0LL);
    if ( ExtendedDSMCommandsSupported )
      v13 = v7[5];
    if ( v13 >= 0 )
      v13 = RaidSrbStatusToNtStatus(Srb[3]);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) )
  {
    LODWORD(v27) = (unsigned __int8)Srb[3];
    WPP_SF_DD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x25u,
      (__int64)&WPP_315ac634f457316aea96af95ee1292c6_Traceguids,
      v13,
      v27);
  }
LABEL_35:
  v24 = v31;
  if ( v31 )
  {
    RaidXrbDeallocateResources(v6, 0);
    StorFreeContiguousIoResources(v2, v24);
  }
LABEL_12:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72536152u);
  if ( Srb )
  {
    if ( *(_BYTE *)(v2 + 410) == 1 )
    {
      *((_QWORD *)Srb + 10) = 0LL;
      *((_QWORD *)Srb + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    RaidFreeSrb(Srb);
  }
  v14 = Irp;
  Irp->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(v14, 0, v13);
}
