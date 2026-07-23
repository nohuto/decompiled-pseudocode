/*
 * XREFs of KiCheckForTimerExpiration @ 0x140284000
 * Callers:
 *     KeAccumulateTicks @ 0x140283C20 (KeAccumulateTicks.c)
 * Callees:
 *     RtlBackoff @ 0x140242080 (RtlBackoff.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140266620 (KiSetClockIntervalToMinimumRequested.c)
 *     HalRequestSoftwareInterrupt @ 0x1402F7F30 (HalRequestSoftwareInterrupt.c)
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140318F4C (PoTraceSystemTimerResolutionKernel.c)
 *     KiGetClockIntervalOneShot @ 0x140318FC8 (KiGetClockIntervalOneShot.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiCheckForTimerExpiration(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // si
  unsigned __int64 v4; // rdi
  _BYTE *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // r14
  int v11; // r13d
  _DWORD *v12; // r12
  int v13; // r11d
  unsigned int v14; // edx
  unsigned int v15; // r15d
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // r10
  __int64 v19; // rax
  unsigned __int8 CurrentIrql; // r15
  unsigned int ClockIntervalOneShot; // eax
  __int64 v22; // r8
  unsigned __int16 v23; // dx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v28; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v30; // r8
  int v31; // eax
  bool v32; // zf
  __int16 v33; // cx
  bool v34; // [rsp+30h] [rbp-58h]
  unsigned int v35; // [rsp+34h] [rbp-54h] BYREF
  __int128 v36; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v37[2]; // [rsp+48h] [rbp-40h] BYREF

  v36 = 0LL;
  v3 = 0;
  v4 = MEMORY[0xFFFFF78000000008];
  v5 = (_BYTE *)a1;
  if ( (*(_BYTE *)(a1 + 12588) & 8) == 0 )
  {
    if ( KiSerializeTimerExpiration )
    {
      if ( !*(_BYTE *)(a1 + 33) )
        goto LABEL_4;
      v6 = KiProcessorBlock[0];
    }
    else
    {
      v6 = a1;
    }
    v7 = v6 + 14656;
    if ( v6 != -14656 )
    {
      a1 = *(_QWORD *)(v6 + 31560) != KiLastNonHrTimerExpiration;
      LOBYTE(a2) = *(_QWORD *)(v6 + 31552) != KiLastPseudoHrTimerExpiration;
      a3 = (unsigned __int8)a2;
      if ( (KiVelocityFlags & 0x2000) != 0 )
        a3 = *(_QWORD *)(v6 + 31560) != KiLastNonHrTimerExpiration;
      v34 = *(_QWORD *)(v6 + 31552) != KiLastPseudoHrTimerExpiration;
      if ( (_BYTE)a3 || *(_QWORD *)(v6 + 31552) != KiLastPseudoHrTimerExpiration )
      {
        v8 = 0;
        v9 = MEMORY[0xFFFFF78000000008] >> 18;
        v10 = 0LL;
        v11 = -1;
        v12 = (_DWORD *)(v6 + 31568);
        while ( 1 )
        {
          v13 = *v12 + 255;
          if ( (unsigned int)(v9 - *v12) < 0x100 )
            v13 = v9;
          v14 = *v12 - 1;
          while ( 1 )
          {
            ++v14;
            v15 = v11;
            a1 = 32 * (v10 + (unsigned __int8)v14);
            v16 = *(_QWORD *)(a1 + v7 + 536);
            if ( v8 != 1 || (_BYTE)a3 )
              break;
            if ( v4 >= v16 )
            {
              v11 = v14;
              if ( v15 < v14 )
                v11 = v15;
              if ( v4 + (unsigned int)KePseudoHrTimeIncrement > (unsigned int)KeNonHrTimeIncrement + v16 )
              {
                v3 = 1;
                KiLastNonHrTimerExpiration = v4;
                a3 = 1LL;
                v14 = v11;
                goto LABEL_23;
              }
            }
LABEL_20:
            if ( v14 == v13 )
              goto LABEL_21;
          }
          if ( v4 < v16 )
            goto LABEL_20;
          v3 = 1;
LABEL_21:
          if ( !v8 || (_BYTE)a3 )
LABEL_23:
            *(_DWORD *)(v7 + 4LL * v8 + 16912) = v14;
          ++v8;
          ++v12;
          v10 += 256LL;
          LODWORD(v9) = v13;
          if ( v8 >= 2 )
          {
            a2 = v34;
            break;
          }
        }
      }
      if ( !v5[33] )
        goto LABEL_5;
      if ( !(_BYTE)a3 )
      {
        if ( (_BYTE)a2 )
        {
          a1 = qword_140C31B98;
          if ( v4 >= qword_140C31B98 )
          {
            a1 = (unsigned int)KeNonHrTimeIncrement + qword_140C31B98;
            if ( v4 + (unsigned int)KePseudoHrTimeIncrement > a1 )
            {
              KiLastNonHrTimerExpiration = v4;
LABEL_61:
              v3 = 1;
              goto LABEL_4;
            }
          }
        }
      }
      if ( v3 )
        goto LABEL_4;
      if ( (_BYTE)a3 )
      {
        v3 = KiNextTimer2DueTime <= v4;
        goto LABEL_4;
      }
      if ( (_BYTE)a2 && qword_140C31B80 <= v4 || qword_140C31B68 <= v4 )
        goto LABEL_61;
    }
  }
LABEL_4:
  if ( !v5[33] )
    goto LABEL_5;
  v17 = qword_140C31B68;
  v18 = v4 + KeMaximumIncrement;
  if ( qword_140C31B68 > v4 )
  {
    v19 = KiClockOwnerOneShotRequest;
    if ( !KiClockOwnerOneShotRequest )
      v19 = -1LL;
    if ( v19 != qword_140C31B68 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        a1 = (unsigned int)CurrentIrql + 1;
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        a2 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
        a3 = (unsigned int)a2 | SchedulerAssist[5];
        SchedulerAssist[5] = a3;
      }
      if ( v18 <= v17 )
      {
        if ( KiClockOwnerOneShotRequest )
        {
          LOBYTE(a3) = 1;
          PoTraceSystemTimerResolutionKernel(0LL, 1397707336LL, a3);
          KiClockOwnerOneShotRequest = 0LL;
          KiSetClockIntervalToMinimumRequested(v26, v25);
        }
      }
      else
      {
        KiClockOwnerOneShotRequest = v17;
        KiSetClockIntervalToMinimumRequested(a1, a2);
        ClockIntervalOneShot = KiGetClockIntervalOneShot(v17, v4);
        LOBYTE(v22) = 1;
        PoTraceSystemTimerResolutionKernel(ClockIntervalOneShot, 1397707336LL, v22);
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v28 = KeGetCurrentIrql();
          if ( v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v30 = CurrentPrcb->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v32 = (v31 & v30[5]) == 0;
            v30[5] &= v31;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
LABEL_5:
    if ( !v3 )
      goto LABEL_6;
  }
  v35 = 0;
  _m_prefetchw(v5 + 12588);
  v23 = *((_WORD *)v5 + 6294);
  v24 = v23;
  for ( BYTE1(v24) = HIBYTE(v23);
        v23 != _InterlockedCompareExchange16((volatile signed __int16 *)v5 + 6294, v23 | 8, v23);
        BYTE1(v24) = HIBYTE(v23) )
  {
    RtlBackoff(&v35);
    _m_prefetchw(v5 + 12588);
    v23 = *((_WORD *)v5 + 6294);
    v24 = v23;
  }
  if ( (v23 & 0x29) == 0 )
  {
    if ( v5[32] )
    {
      v5[6] = 1;
    }
    else
    {
      LOBYTE(v24) = 2;
      HalRequestSoftwareInterrupt(v24);
    }
  }
LABEL_6:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x40000) != 0 && KeGetCurrentIrql() == 13 )
  {
    v32 = v5[33] == 0;
    v33 = 0;
    WORD4(v36) = 0;
    *(_QWORD *)&v36 = v4;
    if ( !v32 )
    {
      v33 = 1;
      WORD4(v36) = 1;
    }
    if ( (v5[12588] & 8) != 0 )
      WORD4(v36) = v33 | 8;
    v37[1] = 16LL;
    v37[0] = &v36;
    EtwTraceKernelEvent((unsigned int)v37, 1, 1074003968, 3919, 4196866);
  }
}
