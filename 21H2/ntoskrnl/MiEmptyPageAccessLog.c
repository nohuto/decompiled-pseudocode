/*
 * XREFs of MiEmptyPageAccessLog @ 0x14027D1E0
 * Callers:
 *     MiAllocateAccessLog @ 0x140262C80 (MiAllocateAccessLog.c)
 *     MiDrainSystemAccessLog @ 0x14027D0F0 (MiDrainSystemAccessLog.c)
 *     MiTrimOrAgeWorkingSet @ 0x1402ACB50 (MiTrimOrAgeWorkingSet.c)
 *     MmOutSwapProcess @ 0x1402EECE4 (MmOutSwapProcess.c)
 *     MmDeleteProcessAddressSpace @ 0x14067C848 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x14021B6A0 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x14023A834 (ObpDeferObjectDeletion.c)
 *     MiQueuePageAccessLog @ 0x14027D59C (MiQueuePageAccessLog.c)
 *     ObFastReferenceObjectLocked @ 0x1402AAC68 (ObFastReferenceObjectLocked.c)
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x1402EE9C0 (ObpTraceObjectDereferenceIfActive.c)
 *     MiGetSubsectionDriverProtos @ 0x140307B30 (MiGetSubsectionDriverProtos.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ObDereferenceObjectDeferDelete @ 0x14034E290 (ObDereferenceObjectDeferDelete.c)
 *     ObReferenceObjectSafeWithTag @ 0x1403537F0 (ObReferenceObjectSafeWithTag.c)
 *     MiGetSharedProtos @ 0x1403A6358 (MiGetSharedProtos.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiEmptyPageAccessLog(PVOID *P)
{
  unsigned __int64 v1; // r13
  unsigned __int16 v2; // r8
  PVOID *v3; // rdx
  unsigned int v4; // edi
  __int64 v5; // rax
  unsigned int v6; // r10d
  unsigned __int64 v7; // rbx
  __int64 *v8; // r12
  __int64 *v9; // rsi
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rcx
  __int64 v12; // r14
  unsigned __int64 v13; // rbp
  unsigned __int16 v14; // r15
  __int64 v15; // r14
  unsigned __int64 v16; // r12
  __int64 **v17; // r14
  unsigned __int64 v18; // r14
  _QWORD *v19; // rbx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __int64 v24; // rsi
  volatile signed __int64 *v25; // r15
  signed __int64 v26; // rdx
  signed __int64 v27; // rax
  signed __int64 v28; // rbp
  unsigned int v29; // edx
  ULONG_PTR v30; // rbp
  __int64 *v31; // rsi
  signed __int64 v32; // rax
  signed __int64 v33; // rtt
  __int64 v34; // rdx
  signed __int64 v35; // rax
  signed __int64 v36; // rtt
  __int64 SharedProtos; // rax
  signed __int64 BugCheckParameter4; // rax
  unsigned __int64 v39; // r13
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v43; // eax
  bool v44; // zf
  PVOID *v45; // rbx
  PVOID *i; // rcx
  PVOID *v47; // [rsp+30h] [rbp-58h]
  unsigned __int64 v48; // [rsp+38h] [rbp-50h]
  PVOID *Pa; // [rsp+90h] [rbp+8h]
  unsigned int v50; // [rsp+98h] [rbp+10h]
  int v51; // [rsp+A0h] [rbp+18h]
  int v52; // [rsp+A4h] [rbp+1Ch]
  unsigned __int64 v53; // [rsp+A8h] [rbp+20h]

  Pa = P;
  v1 = (unsigned __int64)P[7];
  v2 = 0;
  v51 = 0;
  v3 = P;
  v52 = 3;
  v4 = 0;
  v48 = v1;
  if ( v1 <= 1 || (*(_DWORD *)(v1 + 2172) & 0x1000) != 0 || (v5 = *(_QWORD *)(v1 + 1368)) == 0 )
    v6 = -1;
  else
    v6 = *(_DWORD *)(v5 + 8);
  v50 = v6;
  v7 = 0LL;
  while ( 1 )
  {
    v8 = (__int64 *)(v3 + 9);
    v9 = (__int64 *)((char *)v3[4] - 8);
    v10 = 0xFFFFF68000000000uLL;
    v47 = (PVOID *)*v3;
    v11 = 0LL;
    if ( v9 >= (__int64 *)v3 + 9 )
    {
      do
      {
        v12 = *v9;
        v13 = (unsigned __int64)*v9 >> 9;
        v14 = *v9 & 0x1FF;
        if ( v14 )
        {
          if ( v1 > 1 )
          {
            v18 = v12 >> 16;
            if ( v14 == v2 )
            {
              v7 += (__int64)(v18 - v11) >> 3 << 12 << *(&v51 + ((v7 >> 10) & 1));
            }
            else
            {
              v19 = (_QWORD *)*((_QWORD *)v3[6] - (*v9 & 0x1FF));
              v20 = v19[1];
              v4 ^= ((unsigned __int16)v4 ^ (unsigned __int16)(32 * *(_DWORD *)(*v19 + 56LL))) & 0x400;
              if ( (*(_DWORD *)(*v19 + 56LL) & 0x20) != 0 )
              {
                if ( v18 < v20 || v18 >= v20 + 8LL * *((unsigned int *)v19 + 11) )
                {
                  if ( (*((_BYTE *)v19 + 34) & 2) != 0 )
                  {
                    SharedProtos = MiGetSharedProtos(*v19, v6, *((_QWORD *)v3[6] - (*v9 & 0x1FF)));
                    v6 = v50;
                    v10 = 0xFFFFF68000000000uLL;
                  }
                  else
                  {
                    SharedProtos = MiGetSubsectionDriverProtos(*((_QWORD *)v3[6] - (*v9 & 0x1FF)));
                  }
                  v21 = (v18 << 9) - (*(_QWORD *)(SharedProtos + 72) << 9);
                }
                else
                {
                  v21 = (v18 << 9) - (v20 << 9);
                }
                v22 = ((unsigned __int64)*((unsigned int *)v19 + 9) << 9) + (v21 & 0xFFFFFFFFFFFFF000uLL);
              }
              else
              {
                if ( v20 )
                  v34 = (__int64)(v18 - v20) >> 3 << 12;
                else
                  v34 = 0LL;
                v22 = ((*((unsigned int *)v19 + 9) | ((unsigned __int64)((_WORD)v19[4] & 0xFFC0) << 26)) << 12) + v34;
              }
              v2 = v14;
              v23 = v22 << *((_BYTE *)&v51 + 4 * ((v4 >> 10) & 1));
              HIDWORD(v53) = HIDWORD(v23);
              LODWORD(v53) = v14 | v4 & 0x400 | v23 & 0xFFFFFA00;
              v7 = v53;
            }
            v3 = Pa;
            v11 = v18;
            *v9 = v7;
            *(_DWORD *)v9 ^= ((unsigned __int16)v7 ^ (unsigned __int16)((_WORD)v13 << 9)) & 0x200;
          }
        }
        else
        {
          v15 = (__int64)((v12 >> 16 << 25) - (v10 << 25)) >> 16;
          *v9 = v15;
          *(_DWORD *)v9 = v15 ^ ((unsigned __int16)v15 ^ (unsigned __int16)((_WORD)v13 << 9)) & 0x200;
        }
        --v9;
      }
      while ( v9 >= v8 );
    }
    if ( v1 > 1 )
      break;
LABEL_14:
    MiQueuePageAccessLog(v3);
    Pa = v47;
    v3 = v47;
    if ( !v47 )
      return;
    v6 = v50;
    v2 = 0;
  }
  v16 = (unsigned __int64)v3[6] - 8;
  v17 = (__int64 **)((char *)v3[5] + 8);
  if ( (unsigned __int64)v17 > v16 )
    goto LABEL_12;
  do
  {
    v24 = **v17;
    v25 = (volatile signed __int64 *)(v24 + 64);
    _m_prefetchw((const void *)(v24 + 64));
    v26 = *(_QWORD *)(v24 + 64);
    if ( (v26 & 0xF) != 0 )
    {
      do
      {
        v27 = _InterlockedCompareExchange64(v25, v26 - 1, v26);
        if ( v26 == v27 )
          break;
        v26 = v27;
      }
      while ( (v27 & 0xF) != 0 );
    }
    v28 = v26;
    v29 = v26 & 0xF;
    v30 = v28 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v29 > 1 )
      goto LABEL_29;
    if ( v29 )
    {
      ObReferenceObjectExWithTag(v30, 15);
      _m_prefetchw((const void *)v25);
      v35 = *v25;
      while ( (v35 & 0xF) == 0 )
      {
        if ( v30 != (v35 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v36 = v35;
        v35 = _InterlockedCompareExchange64(v25, v35 + 15, v35);
        if ( v36 == v35 )
          goto LABEL_29;
      }
      ObpTraceObjectDereferenceIfActive(v30 - 48, 15LL, 1953261124LL);
      BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 - 48), 0xFFFFFFFFFFFFFFF1uLL) - 15;
      if ( BugCheckParameter4 <= 0 )
      {
        if ( *(_QWORD *)(v30 - 40) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v30 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v30 - 48) >> 8)],
            v30,
            6uLL,
            *(_QWORD *)(v30 - 40));
        if ( BugCheckParameter4 < 0 )
          KeBugCheckEx(0x18u, 0LL, v30, 5uLL, BugCheckParameter4);
        ObpDeferObjectDeletion(v30 - 48);
      }
LABEL_29:
      if ( v30 )
        goto LABEL_30;
    }
    v39 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v24 + 72));
    v30 = ObFastReferenceObjectLocked(v24 + 64);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v24 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v39 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v39 + 1));
          v44 = (v43 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v43;
          if ( v44 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v39);
LABEL_30:
    v31 = *(__int64 **)(v30 + 24);
    _m_prefetchw((const void *)v25);
    v32 = *v25;
    if ( (v30 ^ *v25) >= 0xF )
    {
LABEL_38:
      ObDereferenceObjectDeferDelete((PVOID)v30);
    }
    else
    {
      while ( 1 )
      {
        v33 = v32;
        v32 = _InterlockedCompareExchange64(v25, v32 + 1, v32);
        if ( v33 == v32 )
          break;
        if ( (v30 ^ v32) >= 0xF )
          goto LABEL_38;
      }
    }
    *v17++ = v31;
  }
  while ( (unsigned __int64)v17 <= v16 );
  v1 = v48;
LABEL_12:
  if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v1, 1953261124LL) )
  {
    v3 = Pa;
    goto LABEL_14;
  }
  ExFreePoolWithTag(Pa, 0);
  v45 = v47;
  for ( i = v47; v45; i = v45 )
  {
    v45 = (PVOID *)*v45;
    ExFreePoolWithTag(i, 0);
  }
}
