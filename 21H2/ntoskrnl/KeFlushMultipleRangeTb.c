/*
 * XREFs of KeFlushMultipleRangeTb @ 0x140346370
 * Callers:
 *     MiAgeWorkingSetTail @ 0x1402D2CB0 (MiAgeWorkingSetTail.c)
 *     MiDeleteVaTail @ 0x140345880 (MiDeleteVaTail.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 * Callees:
 *     KiFlushRangeWorker @ 0x14020EBA0 (KiFlushRangeWorker.c)
 *     KeFlushProcessWriteBuffers @ 0x140268CA4 (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendRequest @ 0x140268E70 (KiIpiSendRequest.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x140353D70 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     HvlFlushRangeListTb @ 0x1403900AC (HvlFlushRangeListTb.c)
 *     HvlNotifyLongSpinWait @ 0x140390290 (HvlNotifyLongSpinWait.c)
 *     KiPrepareFlushParameters @ 0x140390E7C (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x140390EB4 (KiFlushAffinity.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140391070 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiFlushRangeTb @ 0x1403C97A0 (KiFlushRangeTb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     VmFlushTb @ 0x1405A297C (VmFlushTb.c)
 *     ExFlushTb @ 0x1405B7448 (ExFlushTb.c)
 */

unsigned __int64 __fastcall KeFlushMultipleRangeTb(unsigned int a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  char v6; // si
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
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v21; // r9
  unsigned __int16 v22; // dx
  _KPROCESS *Process; // r9
  unsigned __int16 Count; // cx
  __int64 v25; // rax
  unsigned int v26; // edx
  __int64 Number; // rcx
  __int64 v28; // rax
  unsigned int v29; // r9d
  __int64 v30; // rcx
  unsigned __int16 v31; // ax
  __int64 v32; // rdx
  int v33; // eax
  unsigned __int8 v34; // r10
  int v35; // r11d
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r10
  _DWORD *v41; // r9
  int v42; // eax
  bool v43; // zf
  _QWORD *v44; // rsi
  __int64 v45; // r15
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // eax
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  _DWORD *v52; // r9
  int v53; // eax
  unsigned __int8 v54; // bl
  _DWORD *v55; // r9
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r9
  _DWORD *v58; // r8
  int v59; // eax
  signed __int32 v60[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v61; // [rsp+40h] [rbp-58h] BYREF
  __int128 v62; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int8 v65; // [rsp+B0h] [rbp+18h] BYREF

  v4 = 0;
  v6 = 0;
  v61 = 0LL;
  v65 = 0;
  v8 = a2;
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
    else if ( a4 )
    {
      v10 = 1;
    }
    else
    {
      _InterlockedOr(v60, 0);
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
            v39 = KeGetCurrentIrql();
            if ( v39 <= 0xFu && CurrentIrql <= 0xFu && v39 >= 2u )
            {
              v40 = KeGetCurrentPrcb();
              v41 = v40->SchedulerAssist;
              v42 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v43 = (v42 & v41[5]) == 0;
              v41[5] &= v42;
              if ( v43 )
              {
                KiRemoveSystemWorkPriorityKick(v40);
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
          v44 = v8;
          v45 = v9;
          do
          {
            KiFlushRangeTb(*v44++, a3);
            --v45;
          }
          while ( v45 );
          v8 = a2;
          LODWORD(v9) = a1;
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v46 = KeGetCurrentIrql();
            if ( v46 <= 0xFu && CurrentIrql <= 0xFu && v46 >= 2u )
            {
              v47 = KeGetCurrentPrcb();
              v48 = v47->SchedulerAssist;
              v49 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v43 = (v49 & v48[5]) == 0;
              v48[5] &= v49;
              if ( v43 )
              {
                KiRemoveSystemWorkPriorityKick(v47);
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
    KiPrepareFlushParameters(a3, &v61, &v65);
    v33 = KiFlushAffinity(a4);
    result = HvlFlushRangeListTb(v61, v33, v65, v34, v10, v35, (__int64)v8);
    LODWORD(v9) = a1;
    v6 |= result;
  }
  if ( !v6 )
  {
    *(_QWORD *)&v62 = v8;
    *((_QWORD *)&v62 + 1) = __PAIR64__(a3, v9);
    v12 = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v12 <= 0xFu )
    {
      v21 = KeGetCurrentPrcb()->SchedulerAssist;
      v21[5] |= (-1 << (v12 + 1)) & 0x1FFC;
    }
    v13 = KeGetCurrentPrcb();
    if ( a4 )
    {
      v14 = 1;
      p_Count = 0LL;
      if ( (unsigned int)KeNumberProcessors_0 > 1 )
      {
LABEL_11:
        v16 = 2147483652LL;
        if ( a4 != 1 )
          v16 = 4LL;
        KiIpiSendRequest((__int64)v13, v14, p_Count, &v62, v16);
        KiFlushRangeWorker((__int64)&v62);
        while ( v13->PacketBarrier )
        {
          if ( (++v4 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v18, v17, v19, v20) )
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
      _InterlockedOr(v60, 0);
      p_Count = &v13->StaticAffinity.KeFlushTbAffinity.Count;
      v22 = 0;
      Process = v13->CurrentThread->ApcState.Process;
      Count = Process->ActiveProcessors.Count;
      v13->StaticAffinity.KeFlushTbAffinity.Count = Count;
      v13->StaticAffinity.KeFlushTbAffinity.Size = Process->ActiveProcessors.Size;
      v13->StaticAffinity.KeFlushTbAffinity.Reserved = 0;
      if ( Process->ActiveProcessors.Count )
      {
        do
        {
          v25 = v22++;
          *(_QWORD *)&p_Count[4 * v25 + 4] = Process->ActiveProcessors.Bitmap[v25];
        }
        while ( v22 < Process->ActiveProcessors.Count );
        Count = *p_Count;
      }
      v26 = Count;
      Number = v13->Number;
      v28 = (unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6;
      v29 = KiProcessorIndexToNumberMappingTable[Number] & 0x3F;
      if ( v26 > (unsigned int)v28 )
      {
        v30 = *(_QWORD *)&p_Count[4 * v28 + 4];
        _bittestandreset64(&v30, v29);
        *(_QWORD *)&p_Count[4 * v28 + 4] = v30;
        LOWORD(v26) = *p_Count;
      }
      v14 = 0;
      v31 = 0;
      if ( (_WORD)v26 )
      {
        do
        {
          v32 = *(_QWORD *)&p_Count[4 * v31 + 4];
          if ( v32 )
          {
            if ( v31 != v13->Group || v32 != v13->GroupSetMember )
              goto LABEL_11;
          }
        }
        while ( ++v31 < *p_Count );
      }
    }
    KiFlushRangeWorker((__int64)&v62);
LABEL_30:
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v50 = KeGetCurrentIrql();
        if ( v50 <= 0xFu && v12 <= 0xFu && v50 >= 2u )
        {
          v51 = KeGetCurrentPrcb();
          v52 = v51->SchedulerAssist;
          v53 = ~(unsigned __int16)(-1LL << (v12 + 1));
          v43 = (v53 & v52[5]) == 0;
          v52[5] &= v53;
          if ( v43 )
            KiRemoveSystemWorkPriorityKick(v51);
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
    v54 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v54 <= 0xFu )
    {
      v55 = KeGetCurrentPrcb()->SchedulerAssist;
      v55[5] |= (-1 << (v54 + 1)) & 0xFFFC;
    }
    ExFlushTb(a1, v8, a3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v56 = KeGetCurrentIrql();
        if ( v56 <= 0xFu && v54 <= 0xFu && v56 >= 2u )
        {
          v57 = KeGetCurrentPrcb();
          v58 = v57->SchedulerAssist;
          v59 = ~(unsigned __int16)(-1LL << (v54 + 1));
          v43 = (v59 & v58[5]) == 0;
          v58[5] &= v59;
          if ( v43 )
            KiRemoveSystemWorkPriorityKick(v57);
        }
      }
    }
    result = v54;
    __writecr8(v54);
  }
  return result;
}
