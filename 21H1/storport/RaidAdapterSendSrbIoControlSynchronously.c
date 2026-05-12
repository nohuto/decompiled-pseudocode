/*
 * XREFs of RaidAdapterSendSrbIoControlSynchronously @ 0x1C000CDB0
 * Callers:
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C000D060 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C002988C (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaGetProtocolCommandEffects @ 0x1C0029A58 (RaGetProtocolCommandEffects.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C002B910 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C002BA08 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoFromMiniport @ 0x1C002BB54 (RaidAdapterHwFirmwareGetInfoFromMiniport.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C002C3A0 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x1C002E228 (RaidAdapterSetBootLunIoctl.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C002FC98 (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C002FE9C (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaidSetStorageAdapterProtocolSpecificProperty @ 0x1C00317E4 (RaidSetStorageAdapterProtocolSpecificProperty.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0004DA4 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0004E00 (RaidAdapterExecuteXrb.c)
 *     RaidBuildMdlForXrb @ 0x1C0006F54 (RaidBuildMdlForXrb.c)
 *     RaSrbSetMiniportContext @ 0x1C00070FC (RaSrbSetMiniportContext.c)
 *     StorAllocateContiguousIoResources @ 0x1C00074A8 (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C0007568 (StorFreeContiguousIoResources.c)
 *     RaidAllocateSrb @ 0x1C0007594 (RaidAllocateSrb.c)
 *     RaidXrbDeallocateResources @ 0x1C00080AC (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x1C000B710 (RaidZeroXrb.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000C0D0 (RaidSrbStatusToNtStatus.c)
 *     RaidPauseAdapterQueue @ 0x1C0010574 (RaidPauseAdapterQueue.c)
 *     _guard_dispatch_icall_nop @ 0x1C001B1C0 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C002C010 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002C074 (RaidAdapterPoFxIdleComponent.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0031778 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qqq @ 0x1C00321F0 (WPP_SF_qqq.c)
 *     StorSetIoGatewayEmptyEvent @ 0x1C004CCAC (StorSetIoGatewayEmptyEvent.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C0057E68 (PortSrbTranslateSrbToNtStatus.c)
 */

__int64 __fastcall RaidAdapterSendSrbIoControlSynchronously(
        __int64 a1,
        IRP *a2,
        unsigned int *a3,
        ULONG a4,
        __int64 (__fastcall *a5)(_QWORD),
        char a6,
        int a7)
{
  char v9; // r8
  int v11; // ebx
  __int64 v12; // rcx
  _BYTE *v13; // r15
  _QWORD *v14; // r12
  _BYTE *Srb; // rdi
  int v16; // edx
  __int64 ContiguousIoResources; // rax
  __int64 v18; // rdx
  __int64 v19; // rbp
  int v20; // r14d
  char v21; // r13
  int v22; // eax
  int v23; // eax
  PIRP v24; // rbx
  PIRP v25; // rax
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rcx
  PIRP v30; // r14
  __int64 v31; // rbx
  IRP *v32; // rcx
  KIRQL v33; // bl
  struct _KEVENT Event; // [rsp+30h] [rbp-68h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+8h] BYREF
  PIRP Irp; // [rsp+A8h] [rbp+10h]
  unsigned int *v37; // [rsp+B0h] [rbp+18h]
  ULONG v38; // [rsp+B8h] [rbp+20h]

  v38 = a4;
  v37 = a3;
  Irp = a2;
  v9 = *(_BYTE *)(a1 + 410);
  v11 = *(_DWORD *)(a1 + 452) + 7;
  v12 = *(_QWORD *)(a1 + 8);
  memset(&Event, 0, sizeof(Event));
  v13 = 0LL;
  v14 = 0LL;
  Srb = RaidAllocateSrb(v12, 2u, v9, 0);
  ContiguousIoResources = StorAllocateContiguousIoResources((v11 & 0xFFFFFFF8) + 1088, v16, a1);
  v19 = ContiguousIoResources;
  if ( Srb && ContiguousIoResources )
  {
    v14 = (_QWORD *)(ContiguousIoResources + 32);
    RaidZeroXrb(ContiguousIoResources + 32, v18, 0, 0LL);
    v20 = RaidBuildMdlForXrb((__int64)v14, a3, a4);
    if ( v20 >= 0 )
    {
      v21 = a6;
      v22 = a7;
      if ( !a6 )
      {
        v22 = a7 | 0x102;
        if ( Srb[2] == 40 )
          *((_WORD *)Srb + 19) = 32;
        else
          Srb[9] = 32;
      }
      v23 = v22 | 1;
      if ( *(_BYTE *)(a1 + 410) == 1 )
      {
        v30 = Irp;
        v13 = Srb;
        v31 = *((unsigned int *)Srb + 13);
        v32 = Irp;
        *((_DWORD *)Srb + 8) = -1;
        *((_DWORD *)Srb + 6) = v23;
        *((_QWORD *)Srb + 8) = v37;
        *((_DWORD *)Srb + 15) = v38;
        *((_DWORD *)Srb + 5) = 2;
        *((_WORD *)Srb + 18) = IoGetIoPriorityHint(v32);
        *((_DWORD *)Srb + 10) = *(_DWORD *)(a1 + 4268);
        *((_QWORD *)Srb + 12) = v14;
        *((_QWORD *)Srb + 10) = v30;
        *(_WORD *)&Srb[v31 + 8] = 0;
        Srb[v31 + 10] = 0;
        v24 = v30;
        *(_QWORD *)(v19 + 200) = Srb;
        *(_QWORD *)(v19 + 216) = *((_QWORD *)Srb + 8);
        v25 = (PIRP)*((_QWORD *)Srb + 12);
      }
      else
      {
        *((_DWORD *)Srb + 3) = v23;
        *((_QWORD *)Srb + 3) = v37;
        *((_DWORD *)Srb + 4) = v38;
        *(_WORD *)Srb = 88;
        Srb[2] = 2;
        Srb[8] = -1;
        *((_DWORD *)Srb + 5) = *(_DWORD *)(a1 + 4268);
        *(_WORD *)(Srb + 5) = 0;
        Srb[7] = 0;
        v24 = Irp;
        *((_QWORD *)Srb + 6) = v14;
        *(_QWORD *)(v19 + 200) = Srb;
        *(_QWORD *)(v19 + 216) = *((_QWORD *)Srb + 3);
        v25 = v24;
      }
      *(_QWORD *)(v19 + 208) = v25;
      RaSrbSetMiniportContext(a1, (__int64)Srb, v19 + 1088);
      if ( v21 )
        *(_BYTE *)(v19 + 49) |= 8u;
      KeInitializeEvent((PRKEVENT)(v19 + 696), NotificationEvent, 0);
      *(_QWORD *)(v19 + 688) = RaidXrbSignalCompletion;
      if ( v21
        && (RaidPauseAdapterQueue(a1),
            KeInitializeEvent(&Event, NotificationEvent, 0),
            StorSetIoGatewayEmptyEvent(a1 + 832, &Event),
            Timeout.QuadPart = -1200000000LL,
            KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout)) )
      {
        v24->IoStatus.Information = 0LL;
        v20 = -1073741823;
      }
      else
      {
        if ( *(_QWORD *)(a1 + 5088) )
          RaidAdapterPoFxActivateComponent(a1, 0LL);
        if ( *(_BYTE *)(a1 + 410) == 1 )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            WPP_SF_qqq(
              WPP_GLOBAL_Control->AttachedDevice,
              63LL,
              &WPP_f9ccab431b9635edeca76e3554be04bb_Traceguids,
              v14,
              v13,
              *((_QWORD *)v13 + 13));
          }
        }
        else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qqq(
            WPP_GLOBAL_Control->AttachedDevice,
            64LL,
            &WPP_f9ccab431b9635edeca76e3554be04bb_Traceguids,
            v14,
            Srb,
            *((_QWORD *)Srb + 7));
        }
        if ( *(_BYTE *)(a1 + 4514) )
          v27 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, (__int64)v14);
        else
          v27 = RaidAdapterExecuteXrb(a1, v14, v26);
        v20 = v27;
        if ( v27 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v19 + 696), Executive, 0, 0, 0LL);
          v20 = RaidSrbStatusToNtStatus(Srb[3]);
        }
        if ( v21 )
        {
          v33 = KfRaiseIrql(2u);
          RaidResumeAndRestartAdapterQueues(a1);
          KeLowerIrql(v33);
        }
        if ( (*(_BYTE *)(v19 + 49) & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponent(a1, *(unsigned int *)(v19 + 780), 0LL);
          *(_BYTE *)(v19 + 49) &= ~1u;
        }
        if ( *(_QWORD *)(a1 + 5088) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
        if ( v20 >= 0 )
        {
          if ( a5 )
            v20 = a5(v37[5]);
          if ( v20 >= 0 )
          {
            LOBYTE(v28) = Srb[3];
            v20 = PortSrbTranslateSrbToNtStatus(v28);
          }
        }
      }
    }
  }
  else
  {
    v20 = -1073741801;
  }
  if ( v19 )
  {
    RaidXrbDeallocateResources((__int64)v14, 0);
    StorFreeContiguousIoResources(a1, v19);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(a1 + 410) == 1 )
    {
      if ( !v13 )
        v13 = Srb;
      *((_QWORD *)v13 + 10) = 0LL;
      *((_QWORD *)v13 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return (unsigned int)v20;
}
