/*
 * XREFs of KeFlushMultipleRangeTb @ 0x1402F3C40
 * Callers:
 *     MiAgeWorkingSetTail @ 0x1402F3AD0 (MiAgeWorkingSetTail.c)
 * Callees:
 *     KiFlushRangeWorker @ 0x14021C750 (KiFlushRangeWorker.c)
 *     KeFlushProcessWriteBuffers @ 0x1402F374C (KeFlushProcessWriteBuffers.c)
 *     KiPreprocessFlushTb @ 0x1402F3FE0 (KiPreprocessFlushTb.c)
 *     KiIpiSendRequest @ 0x1402FFB70 (KiIpiSendRequest.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     HvlNotifyLongSpinWait @ 0x14039D930 (HvlNotifyLongSpinWait.c)
 *     HvlFlushRangeListTb @ 0x14039DB1C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x14039E48C (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x14039E55C (KiFlushAffinity.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14039EA10 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiFlushRangeTb @ 0x1403A22F0 (KiFlushRangeTb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     VmFlushTb @ 0x14045F6DE (VmFlushTb.c)
 *     ExFlushTb @ 0x14063F75C (ExFlushTb.c)
 */

unsigned __int64 __fastcall KeFlushMultipleRangeTb(unsigned int a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // esi
  __int64 v6; // rdi
  char v9; // bl
  unsigned __int64 result; // rax
  unsigned __int8 v11; // r12
  struct _KPRCB *v12; // rbp
  _KSTATIC_AFFINITY_BLOCK *p_StaticAffinity; // rdi
  _KPROCESS *Process; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int16 v17; // ax
  unsigned __int64 v18; // rdx
  _DWORD *v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rbx
  unsigned __int8 v26; // bl
  int v27; // eax
  unsigned __int8 v28; // r11
  char v29; // r10
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v33; // eax
  bool v34; // zf
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // eax
  unsigned __int8 v39; // bl
  _DWORD *v40; // r9
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r9
  _DWORD *v43; // r8
  int v44; // eax
  signed __int32 v45[8]; // [rsp+0h] [rbp-98h] BYREF
  char v46[8]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v47; // [rsp+48h] [rbp-50h] BYREF
  _QWORD *v48; // [rsp+50h] [rbp-48h] BYREF
  int v49; // [rsp+58h] [rbp-40h]
  unsigned int v50; // [rsp+5Ch] [rbp-3Ch]
  char v52; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int8 v53; // [rsp+B0h] [rbp+18h] BYREF

  v4 = 0;
  v6 = a1;
  v47 = 0LL;
  v52 = 0;
  v46[0] = 0;
  v53 = 0;
  v9 = 0;
  if ( (unsigned __int8)KiPreprocessFlushTb(0, a3, a4, (unsigned int)&v52, (__int64)&v53) )
  {
    if ( (_DWORD)v6 )
    {
      v25 = a2;
      do
      {
        KiFlushRangeTb(*v25++, a3);
        --v6;
      }
      while ( v6 );
      LODWORD(v6) = a1;
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v26 = v53;
      if ( v53 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v26 = v53;
        v33 = ~(unsigned __int16)(-1LL << (v53 + 1));
        v34 = (v33 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v33;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v26 = v53;
    }
    __writecr8(v26);
    v9 = 1;
  }
  result = *a2;
  if ( a3 == 1
    && result <= 0x7FFFFFFEFFFFLL
    && (result = (unsigned __int64)KeGetCurrentThread(), *(_QWORD *)(*(_QWORD *)(result + 184) + 992LL))
    || v52 )
  {
    KiPrepareFlushParameters(a3, &v47, v46);
    v27 = KiFlushAffinity(a4);
    result = HvlFlushRangeListTb(v47, v27, (unsigned __int8)v46[0], v28, v29, v6, (__int64)a2);
    v9 |= result;
  }
  if ( !v9 )
  {
    v48 = a2;
    v49 = v6;
    v50 = a3;
    v11 = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v11 <= 0xFu )
    {
      v19 = KeGetCurrentPrcb()->SchedulerAssist;
      v19[5] |= (-1 << (v11 + 1)) & 0x1FFC;
    }
    v12 = KeGetCurrentPrcb();
    if ( a4 )
    {
      if ( (unsigned int)KeNumberProcessors_0 > 1 )
      {
        v20 = 2147483652LL;
        if ( a4 != 1 )
          v20 = 4LL;
        KiIpiSendRequest((_DWORD)v12, 1, 0, (unsigned int)&v48, v20);
LABEL_32:
        KiFlushRangeWorker((__int64)&v48);
        while ( v12->PacketBarrier )
        {
          if ( (++v4 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v22, v21, v23, v24) )
          {
            HvlNotifyLongSpinWait(v4);
          }
          else
          {
            _mm_pause();
          }
        }
        goto LABEL_16;
      }
    }
    else
    {
      _InterlockedOr(v45, 0);
      p_StaticAffinity = &v12->StaticAffinity;
      Process = v12->CurrentThread->ApcState.Process;
      *(_QWORD *)&v12->StaticAffinity.KeFlushTbAffinity.Count = 2097153LL;
      memset(&v12->StaticAffinity.KeSyncContextAffinity.8, 0, sizeof(v12->StaticAffinity.KeSyncContextAffinity.8));
      KiCopyAffinityEx(&v12->StaticAffinity, v12->StaticAffinity.KeFlushTbAffinity.Size, &Process->ActiveProcessors);
      LODWORD(v15) = v12->StaticAffinity.KeFlushTbAffinity.Count;
      v16 = (unsigned int)KiProcessorIndexToNumberMappingTable[v12->Number] >> 6;
      if ( (unsigned int)v15 > (unsigned int)v16 )
      {
        v15 = p_StaticAffinity->KeFlushTbAffinity.Bitmap[v16];
        _bittestandreset64((__int64 *)&v15, KiProcessorIndexToNumberMappingTable[v12->Number] & 0x3F);
        p_StaticAffinity->KeFlushTbAffinity.Bitmap[v16] = v15;
        LOWORD(v15) = p_StaticAffinity->KeFlushTbAffinity.Count;
      }
      v17 = 0;
      if ( (_WORD)v15 )
      {
        while ( 1 )
        {
          v18 = p_StaticAffinity->KeFlushTbAffinity.Bitmap[v17];
          if ( v18 )
          {
            if ( v17 != v12->Group || v18 != v12->GroupSetMember )
              break;
          }
          if ( ++v17 >= p_StaticAffinity->KeFlushTbAffinity.Count )
            goto LABEL_14;
        }
        KiIpiSendRequest((_DWORD)v12, 0, (_DWORD)v12 + 11704, (unsigned int)&v48, 4LL);
        LODWORD(v6) = a1;
        goto LABEL_32;
      }
LABEL_14:
      LODWORD(v6) = a1;
    }
    KiFlushRangeWorker((__int64)&v48);
LABEL_16:
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v35 = KeGetCurrentIrql();
        if ( v35 <= 0xFu && v11 <= 0xFu && v35 >= 2u )
        {
          v36 = KeGetCurrentPrcb();
          v37 = v36->SchedulerAssist;
          v38 = ~(unsigned __int16)(-1LL << (v11 + 1));
          v34 = (v38 & v37[5]) == 0;
          v37[5] &= v38;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(v36);
        }
      }
    }
    result = v11;
    __writecr8(v11);
    goto LABEL_18;
  }
  if ( a3 == 4 )
    result = KeFlushProcessWriteBuffers(1);
LABEL_18:
  if ( VmTbFlushEnabled )
    result = VmFlushTb((unsigned int)v6, a2, a3);
  if ( ExTbFlushActive )
  {
    v39 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v39 <= 0xFu )
    {
      v40 = KeGetCurrentPrcb()->SchedulerAssist;
      v40[5] |= (-1 << (v39 + 1)) & 0xFFFC;
    }
    ExFlushTb((unsigned int)v6, a2, a3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v41 = KeGetCurrentIrql();
        if ( v41 <= 0xFu && v39 <= 0xFu && v41 >= 2u )
        {
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << (v39 + 1));
          v34 = (v44 & v43[5]) == 0;
          v43[5] &= v44;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
    }
    result = v39;
    __writecr8(v39);
  }
  return result;
}
