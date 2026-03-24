/*
 * XREFs of KeFlushMultipleRangeTb @ 0x14033B620
 * Callers:
 *     MiAgeWorkingSetTail @ 0x14022E460 (MiAgeWorkingSetTail.c)
 *     MiDeleteVaTail @ 0x14033AB30 (MiDeleteVaTail.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x14027AD04 (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendRequest @ 0x14027AED0 (KiIpiSendRequest.c)
 *     KiFlushRangeWorker @ 0x140290C30 (KiFlushRangeWorker.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x140349020 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     HvlFlushRangeListTb @ 0x14038FF5C (HvlFlushRangeListTb.c)
 *     HvlNotifyLongSpinWait @ 0x140390140 (HvlNotifyLongSpinWait.c)
 *     KiPrepareFlushParameters @ 0x140390D2C (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x140390D64 (KiFlushAffinity.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390F20 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiFlushRangeTb @ 0x1403C9600 (KiFlushRangeTb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     VmFlushTb @ 0x1405A274C (VmFlushTb.c)
 *     ExFlushTb @ 0x1405B7218 (ExFlushTb.c)
 */

unsigned __int64 __fastcall KeFlushMultipleRangeTb(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // ebx
  char v6; // si
  unsigned int v7; // r12d
  _QWORD *v8; // r15
  __int64 v9; // r11
  char v10; // di
  unsigned __int64 result; // rax
  unsigned __int8 v12; // si
  struct _KPRCB *v13; // rdi
  unsigned int v14; // r10d
  unsigned __int16 *p_Count; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int16 v24; // dx
  _KPROCESS *Process; // r9
  unsigned __int16 Count; // cx
  __int64 v27; // rax
  __int64 Number; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int16 v31; // ax
  int v32; // eax
  unsigned __int8 v33; // r10
  int v34; // r11d
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  int v40; // eax
  bool v41; // zf
  _QWORD *v42; // rsi
  __int64 v43; // r15
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  int v46; // eax
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  _DWORD *v49; // r9
  int v50; // eax
  unsigned __int8 v51; // bl
  _DWORD *v52; // r9
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r9
  _DWORD *v55; // r8
  int v56; // eax
  signed __int32 v57[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v58; // [rsp+40h] [rbp-58h] BYREF
  __int128 v59; // [rsp+48h] [rbp-50h] BYREF
  _QWORD *v61; // [rsp+A8h] [rbp+10h]
  unsigned __int8 v62; // [rsp+B0h] [rbp+18h] BYREF

  v61 = (_QWORD *)a2;
  v4 = 0;
  v6 = 0;
  v58 = 0LL;
  v7 = a4;
  v62 = 0;
  v8 = (_QWORD *)a2;
  LODWORD(v9) = a1;
  if ( (HvlEnlightenments & 4) != 0 )
  {
    if ( (HvlEnlightenments & 2) != 0 )
    {
      v10 = 1;
    }
    else if ( (KiFlushPcid & 3) == 1 )
    {
      v10 = 1;
    }
    else if ( (_DWORD)KeNumberProcessors_0 == 1 )
    {
      v10 = 0;
    }
    else if ( (_DWORD)a4 )
    {
      v10 = 1;
    }
    else
    {
      _InterlockedOr(v57, 0);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      if ( (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(
                           CurrentPrcb,
                           &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors) )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v38 = KeGetCurrentIrql();
            if ( v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= 2u )
            {
              v39 = KeGetCurrentPrcb();
              a2 = -1LL << (CurrentIrql + 1);
              a4 = (__int64)v39->SchedulerAssist;
              v40 = ~(unsigned __int16)a2;
              v41 = (v40 & *(_DWORD *)(a4 + 20)) == 0;
              *(_DWORD *)(a4 + 20) &= v40;
              if ( v41 )
              {
                KiRemoveSystemWorkPriorityKick(v39);
                LODWORD(v9) = a1;
              }
            }
          }
        }
        v10 = 1;
      }
      else
      {
        v10 = 0;
        if ( (_DWORD)v9 )
        {
          v42 = v8;
          v43 = v9;
          do
          {
            KiFlushRangeTb(*v42++, a3);
            --v43;
          }
          while ( v43 );
          v8 = v61;
          LODWORD(v9) = a1;
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v44 = KeGetCurrentIrql();
            if ( v44 <= 0xFu && CurrentIrql <= 0xFu && v44 >= 2u )
            {
              v45 = KeGetCurrentPrcb();
              a2 = -1LL << (CurrentIrql + 1);
              a4 = (__int64)v45->SchedulerAssist;
              v46 = ~(unsigned __int16)a2;
              v41 = (v46 & *(_DWORD *)(a4 + 20)) == 0;
              *(_DWORD *)(a4 + 20) &= v46;
              if ( v41 )
              {
                KiRemoveSystemWorkPriorityKick(v45);
                LODWORD(v9) = a1;
              }
            }
          }
        }
        v6 = 1;
      }
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    v10 = 0;
  }
  result = *v8;
  if ( a3 == 1
    && result <= 0x7FFFFFFEFFFFLL
    && (result = (unsigned __int64)KeGetCurrentThread(), *(_QWORD *)(*(_QWORD *)(result + 184) + 992LL))
    || v10 )
  {
    KiPrepareFlushParameters(a3, &v58, &v62);
    v32 = KiFlushAffinity(v7);
    result = HvlFlushRangeListTb(v58, v32, v62, v33, v10, v34, (__int64)v8);
    LODWORD(v9) = a1;
    v6 |= result;
  }
  if ( !v6 )
  {
    *(_QWORD *)&v59 = v8;
    *((_QWORD *)&v59 + 1) = __PAIR64__(a3, v9);
    v12 = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v12 <= 0xFu )
    {
      a4 = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (-1LL << (v12 + 1)) & 0x1FFC;
      *(_DWORD *)(a4 + 20) |= a2;
    }
    v13 = KeGetCurrentPrcb();
    if ( v7 )
    {
      v14 = 1;
      p_Count = 0LL;
      if ( (unsigned int)KeNumberProcessors_0 > 1 )
      {
LABEL_11:
        v16 = 2147483652LL;
        if ( v7 != 1 )
          v16 = 4LL;
        KiIpiSendRequest((__int64)v13, v14, p_Count, &v59, v16);
        KiFlushRangeWorker((__int64)&v59, v17, v18, v19);
        while ( v13->PacketBarrier )
        {
          if ( (++v4 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v21, v20, v22, v23) )
          {
            HvlNotifyLongSpinWait(v4);
          }
          else
          {
            _mm_pause();
          }
        }
        goto LABEL_30;
      }
    }
    else
    {
      _InterlockedOr(v57, 0);
      p_Count = &v13->StaticAffinity.KeFlushTbAffinity.Count;
      v24 = 0;
      Process = v13->CurrentThread->ApcState.Process;
      Count = Process->ActiveProcessors.Count;
      v13->StaticAffinity.KeFlushTbAffinity.Count = Count;
      v13->StaticAffinity.KeFlushTbAffinity.Size = Process->ActiveProcessors.Size;
      v13->StaticAffinity.KeFlushTbAffinity.Reserved = 0;
      if ( Process->ActiveProcessors.Count )
      {
        do
        {
          v27 = v24++;
          *(_QWORD *)&p_Count[4 * v27 + 4] = Process->ActiveProcessors.Bitmap[v27];
        }
        while ( v24 < Process->ActiveProcessors.Count );
        Count = *p_Count;
      }
      a2 = Count;
      Number = v13->Number;
      v29 = (unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6;
      a4 = KiProcessorIndexToNumberMappingTable[Number] & 0x3F;
      if ( (unsigned int)a2 > (unsigned int)v29 )
      {
        v30 = *(_QWORD *)&p_Count[4 * v29 + 4];
        _bittestandreset64(&v30, (unsigned int)a4);
        *(_QWORD *)&p_Count[4 * v29 + 4] = v30;
        a2 = *p_Count;
      }
      v14 = 0;
      v31 = 0;
      if ( (_WORD)a2 )
      {
        do
        {
          a2 = *(_QWORD *)&p_Count[4 * v31 + 4];
          if ( a2 )
          {
            if ( v31 != v13->Group || a2 != v13->GroupSetMember )
              goto LABEL_11;
          }
        }
        while ( ++v31 < *p_Count );
      }
    }
    KiFlushRangeWorker((__int64)&v59, a2, (__int64)p_Count, a4);
LABEL_30:
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v47 = KeGetCurrentIrql();
        if ( v47 <= 0xFu && v12 <= 0xFu && v47 >= 2u )
        {
          v48 = KeGetCurrentPrcb();
          v49 = v48->SchedulerAssist;
          v50 = ~(unsigned __int16)(-1LL << (v12 + 1));
          v41 = (v50 & v49[5]) == 0;
          v49[5] &= v50;
          if ( v41 )
            KiRemoveSystemWorkPriorityKick(v48);
        }
      }
    }
    result = v12;
    __writecr8(v12);
    goto LABEL_32;
  }
  if ( a3 == 4 )
    result = KeFlushProcessWriteBuffers(1);
LABEL_32:
  if ( VmTbFlushEnabled )
    result = VmFlushTb(a1, v8, a3);
  if ( ExTbFlushActive )
  {
    v51 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v51 <= 0xFu )
    {
      v52 = KeGetCurrentPrcb()->SchedulerAssist;
      v52[5] |= (-1 << (v51 + 1)) & 0xFFFC;
    }
    ExFlushTb(a1, v8, a3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v53 = KeGetCurrentIrql();
        if ( v53 <= 0xFu && v51 <= 0xFu && v53 >= 2u )
        {
          v54 = KeGetCurrentPrcb();
          v55 = v54->SchedulerAssist;
          v56 = ~(unsigned __int16)(-1LL << (v51 + 1));
          v41 = (v56 & v55[5]) == 0;
          v55[5] &= v56;
          if ( v41 )
            KiRemoveSystemWorkPriorityKick(v54);
        }
      }
    }
    result = v51;
    __writecr8(v51);
  }
  return result;
}
