/*
 * XREFs of KeFlushMultipleRangeTb @ 0x1402BFBA0
 * Callers:
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiAgeWorkingSetTail @ 0x1402EA020 (MiAgeWorkingSetTail.c)
 * Callees:
 *     KiPreprocessFlushTb @ 0x1402BFF00 (KiPreprocessFlushTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1402EA60C (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendRequest @ 0x1402EA7B0 (KiIpiSendRequest.c)
 *     KiFlushRangeWorker @ 0x1402F4A90 (KiFlushRangeWorker.c)
 *     HvlFlushRangeListTb @ 0x14038FA8C (HvlFlushRangeListTb.c)
 *     HvlNotifyLongSpinWait @ 0x14038FC70 (HvlNotifyLongSpinWait.c)
 *     KiPrepareFlushParameters @ 0x14039085C (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x140390894 (KiFlushAffinity.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390A50 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiFlushRangeTb @ 0x1403C8A60 (KiFlushRangeTb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     VmFlushTb @ 0x1405A0D1C (VmFlushTb.c)
 *     ExFlushTb @ 0x1405B57E8 (ExFlushTb.c)
 */

unsigned __int64 __fastcall KeFlushMultipleRangeTb(unsigned int a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v7; // r12
  char v9; // di
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 result; // rax
  unsigned __int8 v13; // si
  struct _KPRCB *v14; // rdi
  int v15; // r10d
  _KSTATIC_AFFINITY_BLOCK *p_StaticAffinity; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _DWORD *v24; // r9
  unsigned __int16 v25; // dx
  _KPROCESS *Process; // r9
  unsigned __int16 Count; // cx
  __int64 v28; // rax
  __int64 Number; // rcx
  __int64 v30; // rax
  unsigned int v31; // r9d
  unsigned __int64 v32; // rcx
  unsigned __int16 v33; // ax
  int v34; // eax
  unsigned __int8 v35; // r11
  char v36; // r10
  _QWORD *v37; // rdi
  __int64 v38; // rsi
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v40; // di
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v43; // eax
  bool v44; // zf
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  unsigned __int8 v49; // bl
  _DWORD *v50; // r9
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r9
  _DWORD *v53; // r8
  int v54; // eax
  signed __int32 v55[8]; // [rsp+0h] [rbp-98h] BYREF
  char v56[8]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v57; // [rsp+48h] [rbp-50h] BYREF
  _QWORD *v58; // [rsp+50h] [rbp-48h] BYREF
  int v59; // [rsp+58h] [rbp-40h]
  unsigned int v60; // [rsp+5Ch] [rbp-3Ch]
  char v61; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int8 v62; // [rsp+B0h] [rbp+18h] BYREF

  v4 = 0;
  v7 = a1;
  v57 = 0LL;
  v61 = 0;
  v56[0] = 0;
  v62 = 0;
  v9 = 0;
  if ( (unsigned __int8)KiPreprocessFlushTb(0, a3, a4, (unsigned int)&v61, (__int64)&v62) )
  {
    if ( (_DWORD)v7 )
    {
      v37 = a2;
      v38 = v7;
      do
      {
        KiFlushRangeTb(*v37++, a3);
        --v38;
      }
      while ( v38 );
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v40 = v62;
      if ( v62 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v40 = v62;
        v11 = (unsigned int)v62 + 1;
        v10 = -1LL << (v62 + 1);
        v43 = ~(unsigned __int16)v10;
        v44 = (v43 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v43;
        if ( v44 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v40 = v62;
    }
    __writecr8(v40);
    v9 = 1;
  }
  result = *a2;
  if ( a3 == 1
    && (v11 = 0x7FFFFFFEFFFFLL, result <= 0x7FFFFFFEFFFFLL)
    && (result = (unsigned __int64)KeGetCurrentThread(), v11 = *(_QWORD *)(result + 184), *(_QWORD *)(v11 + 992))
    || v61 )
  {
    KiPrepareFlushParameters(a3, &v57, v56);
    v34 = KiFlushAffinity(a4);
    result = HvlFlushRangeListTb(v57, v34, (unsigned __int8)v56[0], v35, v36, v7, (__int64)a2);
    v9 |= result;
  }
  if ( !v9 )
  {
    v58 = a2;
    v59 = v7;
    v60 = a3;
    v13 = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v13 <= 0xFu )
    {
      v24 = KeGetCurrentPrcb()->SchedulerAssist;
      v10 = (-1LL << (v13 + 1)) & 0x1FFC;
      v24[5] |= v10;
    }
    v14 = KeGetCurrentPrcb();
    if ( a4 )
    {
      v15 = 1;
      p_StaticAffinity = 0LL;
      if ( (unsigned int)KeNumberProcessors_0 > 1 )
      {
LABEL_10:
        v17 = 2147483652LL;
        if ( a4 != 1 )
          v17 = 4LL;
        KiIpiSendRequest((_DWORD)v14, v15, (_DWORD)p_StaticAffinity, (unsigned int)&v58, v17);
        KiFlushRangeWorker(&v58, v18, v19);
        while ( v14->PacketBarrier )
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
        goto LABEL_29;
      }
    }
    else
    {
      _InterlockedOr(v55, 0);
      p_StaticAffinity = &v14->StaticAffinity;
      v25 = 0;
      Process = v14->CurrentThread->ApcState.Process;
      Count = Process->ActiveProcessors.Count;
      v14->StaticAffinity.KeFlushTbAffinity.Count = Count;
      v14->StaticAffinity.KeFlushTbAffinity.Size = Process->ActiveProcessors.Size;
      v14->StaticAffinity.KeFlushTbAffinity.Reserved = 0;
      if ( Process->ActiveProcessors.Count )
      {
        do
        {
          v28 = v25++;
          p_StaticAffinity->KeFlushTbAffinity.Bitmap[v28] = Process->ActiveProcessors.Bitmap[v28];
        }
        while ( v25 < Process->ActiveProcessors.Count );
        Count = p_StaticAffinity->KeFlushTbAffinity.Count;
      }
      v10 = Count;
      Number = v14->Number;
      v30 = (unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6;
      v31 = KiProcessorIndexToNumberMappingTable[Number] & 0x3F;
      if ( (unsigned int)v10 > (unsigned int)v30 )
      {
        v32 = p_StaticAffinity->KeFlushTbAffinity.Bitmap[v30];
        _bittestandreset64((__int64 *)&v32, v31);
        p_StaticAffinity->KeFlushTbAffinity.Bitmap[v30] = v32;
        v10 = p_StaticAffinity->KeFlushTbAffinity.Count;
      }
      v15 = 0;
      v33 = 0;
      if ( (_WORD)v10 )
      {
        do
        {
          v10 = p_StaticAffinity->KeFlushTbAffinity.Bitmap[v33];
          if ( v10 )
          {
            if ( v33 != v14->Group || v10 != v14->GroupSetMember )
              goto LABEL_10;
          }
        }
        while ( ++v33 < p_StaticAffinity->KeFlushTbAffinity.Count );
      }
    }
    KiFlushRangeWorker(&v58, v10, p_StaticAffinity);
LABEL_29:
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v45 = KeGetCurrentIrql();
        if ( v45 <= 0xFu && v13 <= 0xFu && v45 >= 2u )
        {
          v46 = KeGetCurrentPrcb();
          v47 = v46->SchedulerAssist;
          v48 = ~(unsigned __int16)(-1LL << (v13 + 1));
          v44 = (v48 & v47[5]) == 0;
          v47[5] &= v48;
          if ( v44 )
            KiRemoveSystemWorkPriorityKick(v46);
        }
      }
    }
    result = v13;
    __writecr8(v13);
    goto LABEL_31;
  }
  if ( a3 == 4 )
  {
    LOBYTE(v11) = 1;
    result = KeFlushProcessWriteBuffers(v11);
  }
LABEL_31:
  if ( VmTbFlushEnabled )
    result = VmFlushTb((unsigned int)v7, a2, a3);
  if ( ExTbFlushActive )
  {
    v49 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v49 <= 0xFu )
    {
      v50 = KeGetCurrentPrcb()->SchedulerAssist;
      v50[5] |= (-1 << (v49 + 1)) & 0xFFFC;
    }
    ExFlushTb((unsigned int)v7, a2, a3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v51 = KeGetCurrentIrql();
        if ( v51 <= 0xFu && v49 <= 0xFu && v51 >= 2u )
        {
          v52 = KeGetCurrentPrcb();
          v53 = v52->SchedulerAssist;
          v54 = ~(unsigned __int16)(-1LL << (v49 + 1));
          v44 = (v54 & v53[5]) == 0;
          v53[5] &= v54;
          if ( v44 )
            KiRemoveSystemWorkPriorityKick(v52);
        }
      }
    }
    result = v49;
    __writecr8(v49);
  }
  return result;
}
