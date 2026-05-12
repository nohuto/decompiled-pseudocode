/*
 * XREFs of RaidPnPPassToMiniPort @ 0x1C00192FC
 * Callers:
 *     RaidAdapterQueryCapabilitiesIrpCompletion @ 0x1C00191F0 (RaidAdapterQueryCapabilitiesIrpCompletion.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C00737CC (RaUnitQueryCapabilitiesIrp.c)
 *     RaidAdapterReleaseResources @ 0x1C0078E44 (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0079184 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0003834 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0003890 (RaidAdapterExecuteXrb.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0005C84 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0005D54 (RaidUnitPoFxActivateComponent.c)
 *     RaSrbSetMiniportContext @ 0x1C000672C (RaSrbSetMiniportContext.c)
 *     StorAllocateContiguousIoResources @ 0x1C0006B70 (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C0006C30 (StorFreeContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x1C0007340 (RaidSrbStatusToNtStatus.c)
 *     RaidXrbDeallocateResources @ 0x1C000768C (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x1C000AFC0 (RaidZeroXrb.c)
 *     RaidAllocateSrb @ 0x1C000BDD4 (RaidAllocateSrb.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C002D41C (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002D480 (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0032D48 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_ddd @ 0x1C003330C (WPP_SF_ddd.c)
 *     WPP_SF_qDD @ 0x1C0033400 (WPP_SF_qDD.c)
 *     WPP_SF_qqq @ 0x1C00335F0 (WPP_SF_qqq.c)
 */

__int64 __fastcall RaidPnPPassToMiniPort(__int64 a1, __int64 a2, char a3, __int64 a4, int a5)
{
  __int64 v5; // r14
  _BYTE *v6; // rbp
  _BYTE *v7; // r13
  __int64 v8; // rdi
  _BYTE *Srb; // rbx
  __int64 ContiguousIoResources; // rsi
  unsigned int v11; // r12d
  unsigned int v12; // r15d
  __int64 v13; // r12
  __int64 v14; // rax
  char v15; // r10
  char v16; // cl
  char v17; // al
  __int64 v18; // r8
  unsigned int v19; // ebp
  _QWORD *v20; // rdx
  int v21; // eax
  __int64 v23; // rbp
  _BYTE *v24; // rax
  unsigned int v25; // ecx
  _BYTE *v26; // [rsp+30h] [rbp-68h]
  union _LARGE_INTEGER Interval; // [rsp+38h] [rbp-60h] BYREF
  int v29; // [rsp+A8h] [rbp+10h]
  char v30; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v31; // [rsp+B8h] [rbp+20h]

  v31 = a4;
  v30 = a3;
  v29 = a2;
  v5 = *(_QWORD *)(a1 + 64);
  v26 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v30 = 0;
  if ( *(_DWORD *)v5 == 1 )
    v8 = *(_QWORD *)(v5 + 24);
  else
    v8 = v5;
  if ( *(_DWORD *)v5 != 1 )
    v5 = 0LL;
  if ( !*(_QWORD *)(v8 + 552) || !*(_QWORD *)(v8 + 560) )
    return 0LL;
  Interval.QuadPart = -1000LL;
  Srb = 0LL;
  ContiguousIoResources = 0LL;
  v11 = 0;
  v12 = (*(_DWORD *)(v8 + 468) + 7) & 0xFFFFFFF8;
  while ( 1 )
  {
    if ( !Srb )
      Srb = RaidAllocateSrb(*(_QWORD *)(v8 + 8), 0x25u, *(_BYTE *)(v8 + 426), 0);
    if ( !ContiguousIoResources )
      ContiguousIoResources = StorAllocateContiguousIoResources(v12 + 1088, a2, v8);
    if ( Srb && ContiguousIoResources )
      break;
    v25 = v11++;
    if ( v25 >= 3 )
    {
      v19 = -1073741801;
      v13 = 0LL;
      goto LABEL_39;
    }
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v13 = ContiguousIoResources + 32;
  RaidZeroXrb(ContiguousIoResources + 32, a2, 0, 0LL);
  *(_QWORD *)(ContiguousIoResources + 200) = Srb;
  *(_QWORD *)(ContiguousIoResources + 208) = *((_QWORD *)Srb + 6);
  if ( *(_BYTE *)(v8 + 426) == 1 )
  {
    v23 = *((unsigned int *)Srb + 13);
    *((_QWORD *)Srb + 8) = v31;
    v6 = &Srb[v23];
    *((_DWORD *)Srb + 15) = a5;
    *((_DWORD *)Srb + 5) = 37;
    v7 = &Srb[*((unsigned int *)Srb + 30)];
    *((_QWORD *)Srb + 12) = v13;
    *((_DWORD *)Srb + 6) = 256;
    *((_DWORD *)Srb + 10) = 10;
    v26 = Srb;
    *(_DWORD *)v7 = 98;
    *((_DWORD *)v7 + 1) = 16;
    *((_DWORD *)v7 + 3) = v29;
    v7[8] = 0;
    v14 = *((_QWORD *)Srb + 8);
  }
  else
  {
    *((_QWORD *)Srb + 3) = v31;
    *((_DWORD *)Srb + 4) = a5;
    *(_WORD *)Srb = 88;
    *((_DWORD *)Srb + 2) = v29;
    v14 = v31;
    *((_QWORD *)Srb + 6) = v13;
    Srb[2] = 37;
    Srb[4] = 0;
    *((_DWORD *)Srb + 3) = 256;
    *((_DWORD *)Srb + 5) = 10;
  }
  *(_QWORD *)(ContiguousIoResources + 216) = v14;
  RaSrbSetMiniportContext(v8, (__int64)Srb, ContiguousIoResources + 1088);
  v16 = *(_BYTE *)(v8 + 426);
  if ( **(_DWORD **)(a1 + 64) == 1 )
  {
    v17 = *(_BYTE *)(v5 + 96);
    if ( v16 == 1 )
    {
      v6[8] = v17;
      v6[9] = *(_BYTE *)(v5 + 97);
      v6[10] = *(_BYTE *)(v5 + 98);
    }
    else
    {
      Srb[5] = v17;
      Srb[6] = *(_BYTE *)(v5 + 97);
      Srb[7] = *(_BYTE *)(v5 + 98);
    }
  }
  else if ( v16 == 1 )
  {
    *((_DWORD *)v7 + 4) = 1;
    *((_WORD *)v6 + 4) = 0;
    v6[10] = v15;
  }
  else
  {
    *(_WORD *)(Srb + 5) = 0;
    *((_DWORD *)Srb + 16) = 1;
    Srb[7] = v15;
  }
  KeInitializeEvent((PRKEVENT)(ContiguousIoResources + 696), NotificationEvent, 0);
  *(_QWORD *)(ContiguousIoResources + 688) = RaidXrbSignalCompletion;
  if ( *(_BYTE *)(v8 + 426) == 1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_qqq(
          WPP_GLOBAL_Control->AttachedDevice,
          58LL,
          &WPP_7de55442f8f2316906ef02cf8f2423cb_Traceguids,
          ContiguousIoResources + 32,
          v26,
          *((_QWORD *)v26 + 13));
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_ddd(
          WPP_GLOBAL_Control->AttachedDevice,
          59LL,
          &WPP_7de55442f8f2316906ef02cf8f2423cb_Traceguids,
          (unsigned __int8)v6[8],
          (unsigned __int8)v6[9],
          (unsigned __int8)v6[10]);
      }
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      WPP_SF_qqq(
        WPP_GLOBAL_Control->AttachedDevice,
        60LL,
        &WPP_7de55442f8f2316906ef02cf8f2423cb_Traceguids,
        ContiguousIoResources + 32,
        Srb,
        *((_QWORD *)Srb + 7));
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_ddd(
        WPP_GLOBAL_Control->AttachedDevice,
        61LL,
        &WPP_7de55442f8f2316906ef02cf8f2423cb_Traceguids,
        (unsigned __int8)Srb[5],
        (unsigned __int8)Srb[6],
        (unsigned __int8)Srb[7]);
    }
  }
  v19 = 0;
  if ( v5 )
  {
    RaidUnitPoFxActivateComponent(v5, 0, 1LL, &v30);
  }
  else if ( *(_QWORD *)(v8 + 5088) )
  {
    RaidAdapterPoFxActivateComponent(v8, 0LL, 1LL);
  }
  v20 = (_QWORD *)(ContiguousIoResources + 32);
  if ( *(_BYTE *)(v8 + 4514) )
    v21 = RaidAdapterRaiseIrqlAndExecuteXrb(v8, (__int64)v20);
  else
    v21 = RaidAdapterExecuteXrb(v8, v20, v18);
  if ( v21 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(ContiguousIoResources + 696), Executive, 0, 0, 0LL);
    v19 = RaidSrbStatusToNtStatus(Srb[3]);
  }
  if ( (*(_BYTE *)(ContiguousIoResources + 49) & 1) != 0 )
  {
    RaidAdapterPoFxIdleComponent(v8, *(unsigned int *)(ContiguousIoResources + 780), 0LL);
    *(_BYTE *)(ContiguousIoResources + 49) &= ~1u;
  }
  if ( v5 )
  {
    RaidUnitPoFxIdleComponent(v5, 0, 0, &v30);
    if ( (*(_BYTE *)(ContiguousIoResources + 49) & 2) != 0 )
    {
      RaidUnitPoFxIdleComponentFromMiniport(v5, *(unsigned int *)(ContiguousIoResources + 780));
      *(_BYTE *)(ContiguousIoResources + 49) &= ~2u;
    }
  }
  else if ( *(_QWORD *)(v8 + 5088) )
  {
    RaidAdapterPoFxIdleComponent(v8, 0LL, 0LL);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qDD(WPP_GLOBAL_Control->AttachedDevice, 62LL, 0LL, v8, 0, v29);
  }
LABEL_39:
  if ( ContiguousIoResources )
  {
    RaidXrbDeallocateResources(v13, 0);
    StorFreeContiguousIoResources(v8, ContiguousIoResources);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v8 + 426) == 1 )
    {
      v24 = Srb;
      if ( v26 )
        v24 = v26;
      *((_QWORD *)v24 + 10) = 0LL;
      *((_QWORD *)v24 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return v19;
}
