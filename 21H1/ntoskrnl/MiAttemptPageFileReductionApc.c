/*
 * XREFs of MiAttemptPageFileReductionApc @ 0x14053CFB0
 * Callers:
 *     <none>
 * Callees:
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     RtlClearBits @ 0x140244970 (RtlClearBits.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiOkToShrinkPageFiles @ 0x1402D4D3C (MiOkToShrinkPageFiles.c)
 *     RtlSetBits @ 0x1402E30C0 (RtlSetBits.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x14034D11C (MiInvalidatePageFileBitmapsCache.c)
 *     RtlFindLastBackwardRunClear @ 0x14034D4D0 (RtlFindLastBackwardRunClear.c)
 *     MiCoalescePageFileBitmapsCache @ 0x14034F1C0 (MiCoalescePageFileBitmapsCache.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReduceCommitLimits @ 0x14054AB4C (MiReduceCommitLimits.c)
 */

LONG __fastcall MiAttemptPageFileReductionApc(struct _KEVENT *a1)
{
  unsigned int Flink; // r13d
  __int64 v2; // rbx
  unsigned int v3; // eax
  unsigned __int64 Flink_high; // rdx
  int v5; // r8d
  unsigned __int64 v6; // r15
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int16 v13; // ax
  KIRQL v14; // al
  __int64 v15; // rcx
  int v16; // esi
  unsigned __int64 v17; // r12
  _RTL_BITMAP *v18; // r10
  const signed __int32 *v19; // r8
  unsigned int v20; // eax
  const signed __int32 *v21; // rdx
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rcx
  unsigned int v24; // esi
  ULONG LastBackwardRunClear; // eax
  ULONG v26; // eax
  int v27; // r9d
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rsi
  volatile LONG *v30; // rcx
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  bool v35; // zf
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // r14
  __int64 v39; // r8
  unsigned __int64 v40; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v44; // eax
  __int64 v45; // r12
  KIRQL v46; // al
  __int64 v47; // rdx
  unsigned __int64 v48; // r15
  _RTL_BITMAP *v49; // rbx
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r9
  _DWORD *v52; // r8
  int v53; // eax
  unsigned __int64 v55; // [rsp+30h] [rbp-49h]
  unsigned int v56; // [rsp+38h] [rbp-41h]
  _DWORD *v57; // [rsp+40h] [rbp-39h]
  ULONG StartingRunIndex; // [rsp+48h] [rbp-31h] BYREF
  ULONG v59; // [rsp+4Ch] [rbp-2Dh] BYREF
  __int64 v60; // [rsp+50h] [rbp-29h]
  PRTL_BITMAP v61; // [rsp+58h] [rbp-21h]
  __int64 v62; // [rsp+60h] [rbp-19h]
  __int64 v63; // [rsp+68h] [rbp-11h]
  volatile LONG *v64; // [rsp+70h] [rbp-9h]
  PRTL_BITMAP v65; // [rsp+78h] [rbp-1h]
  _RTL_BITMAP BitMapHeader; // [rsp+80h] [rbp+7h] BYREF
  _RTL_BITMAP v67; // [rsp+90h] [rbp+17h] BYREF
  struct _KEVENT *Event; // [rsp+E0h] [rbp+67h]
  int v69; // [rsp+F8h] [rbp+7Fh]

  Event = a1;
  StartingRunIndex = 0;
  v59 = 0;
  Flink = (unsigned int)a1[1].Header.WaitListHead.Flink;
  v2 = *(_QWORD *)&a1[1].Header.Lock;
  BitMapHeader = 0LL;
  v67 = 0LL;
  if ( Flink >= 0x10 )
  {
    if ( !MiOkToShrinkPageFiles(*(_QWORD *)(v2 + 7464), *(_QWORD *)(v2 + 7592)) )
      return KeSetEvent(Event, 0, 0);
    v3 = *(_DWORD *)(v2 + 6936);
    v5 = 1;
    v62 = 0x8000LL;
    Flink_high = 0x4000LL;
    v9 = (((v8 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL) - v7;
    a1 = Event;
    v6 = v9 - 0x8000;
    Flink = 0;
  }
  else
  {
    v62 = 0LL;
    v3 = Flink + 1;
    Flink_high = HIDWORD(a1[1].Header.WaitListHead.Flink);
    v5 = 0;
    v6 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v56 = v3;
  v69 = v5;
  v55 = Flink_high;
  if ( Flink < v3 )
  {
    v10 = (__int64)&a1[1].Header.WaitListHead.Blink + 4 * Flink;
    v11 = 8LL * Flink + 6944;
    v57 = (_DWORD *)v10;
    v63 = v11;
    while ( 1 )
    {
      if ( Flink_high > v6 )
        return KeSetEvent(Event, 0, 0);
      v12 = *(_QWORD *)(v11 + v2);
      v13 = *(_WORD *)(v12 + 204);
      if ( ((v13 & 0x10) == 0 || !v5)
        && (v13 & 0x40) == 0
        && *(_QWORD *)v12 != *(_QWORD *)(v12 + 16)
        && *(_QWORD *)(v12 + 24) >= Flink_high )
      {
        break;
      }
LABEL_55:
      v10 += 4LL;
      v11 = v63 + 8;
      v57 = (_DWORD *)v10;
      ++Flink;
      v63 += 8LL;
      if ( Flink >= v56 )
        return KeSetEvent(Event, 0, 0);
      v5 = v69;
    }
    v2 = *(_QWORD *)(v12 + 248);
    v60 = v2;
    v64 = (volatile LONG *)(v12 + 232);
    v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 232));
    v15 = *(_QWORD *)(v12 + 112);
    v16 = *(_DWORD *)v12;
    v17 = v14;
    v18 = (_RTL_BITMAP *)(v15 + 8);
    v19 = *(const signed __int32 **)(v15 + 16);
    v20 = *(_DWORD *)v12 - 1;
    v61 = (PRTL_BITMAP)(v15 + 8);
    v65 = (PRTL_BITMAP)(v15 + 24);
    if ( _bittest(v19, v20) == 1 || (v21 = *(const signed __int32 **)(v15 + 32), _bittest(v21, v20) == 1) )
    {
      v28 = v55;
      v29 = 0LL;
      v27 = v69;
    }
    else
    {
      v22 = *(_QWORD *)v12 - *(_QWORD *)(v12 + 16);
      if ( v6 <= v22 )
        v22 = v6;
      v23 = (*(_QWORD *)v12 - v22) & 0xFFFFFFFFFFFFFFE0uLL;
      v24 = v16 - v23;
      v23 >>= 5;
      BitMapHeader.SizeOfBitMap = v24;
      v67.SizeOfBitMap = v24;
      BitMapHeader.Buffer = (unsigned int *)&v19[v23];
      v67.Buffer = (unsigned int *)&v21[v23];
      LastBackwardRunClear = RtlFindLastBackwardRunClear(&BitMapHeader, v24 - 1, &StartingRunIndex);
      if ( LastBackwardRunClear <= v22 )
        v22 = LastBackwardRunClear;
      v26 = RtlFindLastBackwardRunClear(&v67, v24 - 1, &v59);
      v27 = v69;
      v28 = v55;
      v18 = v61;
      v29 = v26;
      if ( v22 <= v26 )
        v29 = v22;
      v2 = v60;
      if ( !v69 )
        v29 &= ~(v55 - 1);
    }
    if ( v29 )
    {
      v36 = *(_QWORD *)v12;
      v37 = *(_QWORD *)(v12 + 240);
      v38 = *(_QWORD *)v12 - v29;
      if ( !v37 )
        goto LABEL_43;
      do
      {
        v39 = v37;
        v37 = *(_QWORD *)(v37 + 8);
      }
      while ( v37 );
      v40 = *(_QWORD *)(v39 - 8);
      if ( !v40 || v38 > v40 )
        goto LABEL_43;
      v38 = v40 + 1;
      if ( v40 + 1 >= v40 )
      {
        v29 = v36 - v38;
        if ( !v27 )
        {
          v29 &= ~(v28 - 1);
          v38 = v36 - v29;
        }
        if ( v29 )
        {
LABEL_43:
          *(_QWORD *)(v12 + 24) -= v29;
          *(_QWORD *)(v12 + 48) -= v29;
          *(_QWORD *)v12 = v38;
          RtlSetBits(v18, v38, v29);
          RtlSetBits(v65, v38, v29);
          MiInvalidatePageFileBitmapsCache(v12, v38, v29, 0LL);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 232));
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
                v35 = (v44 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v44;
                if ( v35 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(v17);
          v6 -= v29;
          if ( (*(_BYTE *)(v12 + 204) & 0x10) == 0 )
          {
            v45 = v29 + v62;
            if ( !(unsigned int)MiChargeCommit(v2, v29 + v62, 2u) )
            {
              v46 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 232));
              v47 = *(_QWORD *)(v12 + 112);
              *(_QWORD *)(v12 + 24) += v29;
              *(_QWORD *)(v12 + 48) += v29;
              *(_QWORD *)v12 = v29 + v38;
              v48 = v46;
              v49 = (_RTL_BITMAP *)(v47 + 24);
              RtlClearBits((PRTL_BITMAP)(v47 + 8), v38, v29);
              RtlClearBits(v49, v38, v29);
              if ( v38 < *(unsigned int *)(v12 + 120) )
                *(_DWORD *)(v12 + 120) = v38;
              MiCoalescePageFileBitmapsCache(v12, 0, v38);
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 232));
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v50 = KeGetCurrentIrql();
                  if ( v50 <= 0xFu && (unsigned __int8)v48 <= 0xFu && v50 >= 2u )
                  {
                    v51 = KeGetCurrentPrcb();
                    v52 = v51->SchedulerAssist;
                    v53 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v48 + 1));
                    v35 = (v53 & v52[5]) == 0;
                    v52[5] &= v53;
                    if ( v35 )
                      KiRemoveSystemWorkPriorityKick((__int64)v51);
                  }
                }
              }
              __writecr8(v48);
              return KeSetEvent(Event, 0, 0);
            }
            MiReduceCommitLimits(v2, v29, 0LL);
            MiReturnCommit(v2, v45);
          }
          v10 = (__int64)v57;
          *v57 = v38;
          goto LABEL_54;
        }
      }
      v30 = v64;
    }
    else
    {
      v30 = (volatile LONG *)(v12 + 232);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v30);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v31 = KeGetCurrentIrql();
        if ( v31 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v31 >= 2u )
        {
          v32 = KeGetCurrentPrcb();
          v33 = v32->SchedulerAssist;
          v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
          v35 = (v34 & v33[5]) == 0;
          v33[5] &= v34;
          if ( v35 )
            KiRemoveSystemWorkPriorityKick((__int64)v32);
        }
      }
    }
    __writecr8(v17);
    v10 = (__int64)v57;
LABEL_54:
    Flink_high = v55;
    goto LABEL_55;
  }
  return KeSetEvent(Event, 0, 0);
}
