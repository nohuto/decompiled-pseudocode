/*
 * XREFs of RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007718
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x1C0006BA8 (RaUnitScsiMiniportIoctl.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C000C838 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0004E94 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0004EF0 (RaidAdapterExecuteXrb.c)
 *     RaidGetSrbIoctlFromIrp @ 0x1C00073D8 (RaidGetSrbIoctlFromIrp.c)
 *     RaidBuildMdlForXrb @ 0x1C0007544 (RaidBuildMdlForXrb.c)
 *     RaidAdapterFindUnit @ 0x1C00075A4 (RaidAdapterFindUnit.c)
 *     RaSrbSetMiniportContext @ 0x1C00076EC (RaSrbSetMiniportContext.c)
 *     StorAllocateContiguousIoResources @ 0x1C0007A98 (StorAllocateContiguousIoResources.c)
 *     StorFreeContiguousIoResources @ 0x1C0007B58 (StorFreeContiguousIoResources.c)
 *     RaidAllocateSrb @ 0x1C0007B84 (RaidAllocateSrb.c)
 *     RaidXrbDeallocateResources @ 0x1C000869C (RaidXrbDeallocateResources.c)
 *     RaidCompleteRequestEx @ 0x1C0009F40 (RaidCompleteRequestEx.c)
 *     RaidZeroXrb @ 0x1C000BD00 (RaidZeroXrb.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000C340 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000C384 (RaUnitAcquireRemoveLock.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000C6C0 (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C002C5C4 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002C628 (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0031ED8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 */

__int64 __fastcall RaidAdapterScsiMiniportIoctlWithAddress(__int64 a1, IRP *a2, char a3, char a4, char a5, int a6)
{
  __int64 v8; // r14
  __int64 v9; // r12
  unsigned int *Srb; // rsi
  __int64 v11; // rbx
  int SrbIoctlFromIrp; // eax
  __int64 v13; // r8
  int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 ContiguousIoResources; // rax
  __int64 v18; // rdx
  char v19; // al
  char v20; // dl
  char v21; // cl
  __int64 Unit; // rax
  _QWORD *v23; // rdi
  _DWORD *v24; // rax
  ULONG v25; // ecx
  __int64 v26; // rax
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // rcx
  char v30; // al
  unsigned int *v31; // r12
  unsigned int v32; // eax
  unsigned __int64 v33; // rcx
  __int64 v35; // rdi
  __int16 IoPriorityHint; // ax
  _DWORD *v37; // rcx
  unsigned int *v38; // rax
  __int64 v39; // rax
  __int64 v40; // r8
  int v41; // eax
  int v42; // [rsp+30h] [rbp-30h]
  ULONG v43; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v44; // [rsp+38h] [rbp-28h] BYREF
  _QWORD *v45; // [rsp+40h] [rbp-20h]
  void *v46; // [rsp+48h] [rbp-18h] BYREF
  unsigned int *v47; // [rsp+50h] [rbp-10h]
  __int64 v48; // [rsp+58h] [rbp-8h]

  v46 = 0LL;
  v43 = 0;
  v44 = 0;
  v48 = 0LL;
  v47 = 0LL;
  HIBYTE(v42) = 0;
  v8 = 0LL;
  v9 = 0LL;
  Srb = 0LL;
  v11 = 0LL;
  SrbIoctlFromIrp = RaidGetSrbIoctlFromIrp((__int64)a2, &v46, &v43, &v44, 2);
  v14 = SrbIoctlFromIrp;
  if ( SrbIoctlFromIrp < 0 )
  {
    a2->IoStatus.Status = SrbIoctlFromIrp;
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 8);
    LOBYTE(v13) = *(_BYTE *)(a1 + 410);
    v48 = a1 + 312;
    Srb = (unsigned int *)RaidAllocateSrb(v15, 2LL, v13, 0LL);
    if ( Srb
      && (ContiguousIoResources = StorAllocateContiguousIoResources(
                                    ((*(_DWORD *)(a1 + 452) + 7) & 0xFFFFFFF8) + 1088,
                                    v16,
                                    a1),
          (v8 = ContiguousIoResources) != 0) )
    {
      v11 = ContiguousIoResources + 32;
      v45 = (_QWORD *)(ContiguousIoResources + 32);
      RaidZeroXrb(ContiguousIoResources + 32, v18, 0LL, 0LL);
      v14 = RaidBuildMdlForXrb(v11, v46, v43);
      if ( v14 >= 0 )
      {
        v19 = a5;
        v20 = a3;
        v21 = a4;
        BYTE2(v42) = a5;
        LOBYTE(v42) = a3;
        BYTE1(v42) = a4;
        if ( a6 == 1 )
        {
          Unit = RaidAdapterFindUnit(a1, v42);
          v21 = a4;
          v9 = Unit;
          v20 = a3;
          *(_QWORD *)(v8 + 256) = Unit;
          v19 = a5;
        }
        if ( *(_BYTE *)(v48 + 98) == 1 )
        {
          v35 = Srb[13];
          *((_QWORD *)Srb + 12) = v45;
          v47 = Srb;
          *((_QWORD *)Srb + 10) = a2;
          Srb[5] = 2;
          Srb[6] = 192;
          IoPriorityHint = IoGetIoPriorityHint(a2);
          v37 = v46;
          *((_WORD *)Srb + 18) = IoPriorityHint;
          Srb[10] = v37[3];
          Srb[15] = v43;
          *((_QWORD *)Srb + 8) = v37;
          *((_BYTE *)Srb + v35 + 8) = a3;
          *((_BYTE *)Srb + v35 + 9) = a4;
          *((_BYTE *)Srb + v35 + 10) = a5;
          v23 = v45;
          *(_QWORD *)(v8 + 200) = Srb;
          *(_QWORD *)(v8 + 208) = *((_QWORD *)Srb + 10);
          v26 = *((_QWORD *)Srb + 8);
        }
        else
        {
          v23 = v45;
          *((_BYTE *)Srb + 7) = v19;
          v24 = v46;
          *((_BYTE *)Srb + 6) = v21;
          v25 = v43;
          *((_QWORD *)Srb + 3) = v24;
          *((_QWORD *)Srb + 6) = v23;
          *(_WORD *)Srb = 88;
          *((_BYTE *)Srb + 2) = 2;
          *((_BYTE *)Srb + 5) = v20;
          Srb[3] = 192;
          Srb[4] = v25;
          Srb[5] = v24[3];
          *(_QWORD *)(v8 + 200) = Srb;
          *(_QWORD *)(v8 + 208) = a2;
          v26 = *((_QWORD *)Srb + 3);
        }
        *(_QWORD *)(v8 + 216) = v26;
        RaSrbSetMiniportContext(a1, (__int64)Srb, v8 + 1088);
        KeInitializeEvent((PRKEVENT)(v8 + 696), NotificationEvent, 0);
        *(_QWORD *)(v8 + 688) = RaidXrbSignalCompletion;
        if ( *(_QWORD *)(a1 + 5088) )
          RaidAdapterPoFxActivateComponent(a1, 0LL);
        if ( *(_BYTE *)(a1 + 4514) )
          v28 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, (__int64)v23);
        else
          v28 = RaidAdapterExecuteXrb(a1, v23, v27);
        v14 = v28;
        if ( v28 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v8 + 696), Executive, 0, 0, 0LL);
          LOBYTE(v29) = *((_BYTE *)Srb + 3);
          v14 = RaidSrbStatusToNtStatus(v29);
        }
        v30 = *(_BYTE *)(v8 + 49);
        if ( (v30 & 1) != 0 )
        {
          RaidAdapterPoFxIdleComponent(a1, *(unsigned int *)(v8 + 780), 0LL);
          *(_BYTE *)(v8 + 49) &= ~1u;
          v30 = *(_BYTE *)(v8 + 49);
        }
        if ( (v30 & 2) != 0 )
        {
          if ( a6 == 1 )
          {
            v41 = 0;
          }
          else
          {
            v39 = RaidAdapterFindUnit(a1, v42);
            v9 = v39;
            if ( v39 )
            {
              LOBYTE(v40) = 1;
              v41 = RaUnitAcquireRemoveLock(v39, a2, v40);
            }
            else
            {
              v41 = -1073741823;
            }
          }
          if ( !v41 )
          {
            if ( v9 )
            {
              RaidUnitPoFxIdleComponentFromMiniport(v9, *(unsigned int *)(v8 + 780));
              *(_BYTE *)(v8 + 49) &= ~2u;
              if ( a6 != 1 )
                RaUnitReleaseRemoveLock(v9);
            }
          }
        }
        if ( *(_QWORD *)(a1 + 5088) )
          RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
        v11 = (__int64)v45;
      }
    }
    else
    {
      v14 = -1073741801;
    }
  }
  v31 = v47;
  if ( v14 < 0 )
  {
    v33 = 0LL;
  }
  else
  {
    if ( *((_BYTE *)Srb + 2) == 40 )
      v32 = v47[15];
    else
      v32 = Srb[4];
    if ( v44 < v32 )
      v32 = v44;
    v33 = v32;
  }
  a2->IoStatus.Information = v33;
  if ( v8 )
  {
    RaidXrbDeallocateResources(v11, 0LL);
    StorFreeContiguousIoResources(a1, v8);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v48 + 98) == 1 )
    {
      v38 = Srb;
      if ( v31 )
        v38 = v31;
      *((_QWORD *)v38 + 10) = 0LL;
      *((_QWORD *)v38 + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    ExFreePoolWithTag(Srb, 0x72536152u);
  }
  return RaidCompleteRequestEx(a2);
}
