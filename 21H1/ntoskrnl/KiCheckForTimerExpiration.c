/*
 * XREFs of KiCheckForTimerExpiration @ 0x1402725E0
 * Callers:
 *     KeAccumulateTicks @ 0x140272200 (KeAccumulateTicks.c)
 * Callees:
 *     KiSetClockIntervalToMinimumRequested @ 0x1402407D0 (KiSetClockIntervalToMinimumRequested.c)
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x14030AF7C (PoTraceSystemTimerResolutionKernel.c)
 *     KiGetClockIntervalOneShot @ 0x14030AFF8 (KiGetClockIntervalOneShot.c)
 *     HalRequestSoftwareInterrupt @ 0x140359A80 (HalRequestSoftwareInterrupt.c)
 *     RtlBackoff @ 0x14035A2A0 (RtlBackoff.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiCheckForTimerExpiration(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 SchedulerAssist)
{
  bool v4; // si
  unsigned __int64 v5; // rdi
  _BYTE *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbp
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
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int16 v25; // tt
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int8 v28; // al
  int v29; // eax
  bool v30; // zf
  __int16 v31; // tt
  __int16 v32; // cx
  bool v33; // [rsp+30h] [rbp-58h]
  int v34; // [rsp+34h] [rbp-54h] BYREF
  __int128 v35; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v36[2]; // [rsp+48h] [rbp-40h] BYREF

  v35 = 0LL;
  v4 = 0;
  v5 = MEMORY[0xFFFFF78000000008];
  v6 = (_BYTE *)a1;
  if ( (*(_BYTE *)(a1 + 12588) & 8) == 0 )
  {
    if ( KiSerializeTimerExpiration )
    {
      if ( !*(_BYTE *)(a1 + 33) )
        goto LABEL_4;
      v7 = KiProcessorBlock[0];
    }
    else
    {
      v7 = a1;
    }
    v8 = v7 + 14656;
    if ( v7 != -14656 )
    {
      a1 = *(_QWORD *)(v7 + 31560) != KiLastNonHrTimerExpiration;
      LOBYTE(a2) = *(_QWORD *)(v7 + 31552) != KiLastPseudoHrTimerExpiration;
      a3 = (unsigned __int8)a2;
      if ( (KiVelocityFlags & 0x2000) != 0 )
        a3 = *(_QWORD *)(v7 + 31560) != KiLastNonHrTimerExpiration;
      v33 = *(_QWORD *)(v7 + 31552) != KiLastPseudoHrTimerExpiration;
      if ( (_BYTE)a3 || *(_QWORD *)(v7 + 31552) != KiLastPseudoHrTimerExpiration )
      {
        LODWORD(SchedulerAssist) = 0;
        v9 = MEMORY[0xFFFFF78000000008] >> 18;
        v10 = 0LL;
        v11 = -1;
        v12 = (_DWORD *)(v7 + 31568);
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
            v16 = *(_QWORD *)(a1 + v8 + 536);
            if ( (_DWORD)SchedulerAssist != 1 || (_BYTE)a3 )
              break;
            if ( v5 >= v16 )
            {
              v11 = v14;
              if ( v15 < v14 )
                v11 = v15;
              if ( v5 + (unsigned int)KePseudoHrTimeIncrement > (unsigned int)KeNonHrTimeIncrement + v16 )
              {
                v4 = 1;
                KiLastNonHrTimerExpiration = v5;
                a3 = 1LL;
                v14 = v11;
                goto LABEL_23;
              }
            }
LABEL_20:
            if ( v14 == v13 )
              goto LABEL_21;
          }
          if ( v5 < v16 )
            goto LABEL_20;
          v4 = 1;
LABEL_21:
          if ( !(_DWORD)SchedulerAssist || (_BYTE)a3 )
LABEL_23:
            *(_DWORD *)(v8 + 4LL * (unsigned int)SchedulerAssist + 16912) = v14;
          SchedulerAssist = (unsigned int)(SchedulerAssist + 1);
          ++v12;
          v10 += 256LL;
          LODWORD(v9) = v13;
          if ( (unsigned int)SchedulerAssist >= 2 )
          {
            a2 = v33;
            break;
          }
        }
      }
      if ( !v6[33] )
        goto LABEL_5;
      if ( !(_BYTE)a3 )
      {
        if ( (_BYTE)a2 )
        {
          a1 = qword_140C31CF8;
          if ( v5 >= qword_140C31CF8 )
          {
            a1 = (unsigned int)KeNonHrTimeIncrement + qword_140C31CF8;
            if ( v5 + (unsigned int)KePseudoHrTimeIncrement > a1 )
            {
              KiLastNonHrTimerExpiration = v5;
LABEL_61:
              v4 = 1;
              goto LABEL_4;
            }
          }
        }
      }
      if ( v4 )
        goto LABEL_4;
      if ( (_BYTE)a3 )
      {
        v4 = KiNextTimer2DueTime <= v5;
        goto LABEL_4;
      }
      if ( (_BYTE)a2 && qword_140C31CE0 <= v5 || qword_140C31CC8 <= v5 )
        goto LABEL_61;
    }
  }
LABEL_4:
  if ( !v6[33] )
    goto LABEL_5;
  v17 = qword_140C31CC8;
  v18 = v5 + KeMaximumIncrement;
  if ( qword_140C31CC8 > v5 )
  {
    v19 = KiClockOwnerOneShotRequest;
    if ( !KiClockOwnerOneShotRequest )
      v19 = -1LL;
    if ( v19 != qword_140C31CC8 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        a1 = (unsigned int)CurrentIrql + 1;
        SchedulerAssist = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
        a2 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
        a3 = (unsigned int)a2 | *(_DWORD *)(SchedulerAssist + 20);
        *(_DWORD *)(SchedulerAssist + 20) = a3;
      }
      if ( v18 <= v17 )
      {
        if ( KiClockOwnerOneShotRequest )
        {
          LOBYTE(a3) = 1;
          PoTraceSystemTimerResolutionKernel(0LL, 1397707336LL, a3);
          KiClockOwnerOneShotRequest = 0LL;
          KiSetClockIntervalToMinimumRequested(v27, v26);
        }
      }
      else
      {
        KiClockOwnerOneShotRequest = v17;
        KiSetClockIntervalToMinimumRequested(a1, a2);
        ClockIntervalOneShot = KiGetClockIntervalOneShot(v17, v5);
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
            SchedulerAssist = (unsigned __int64)KeGetCurrentPrcb();
            a3 = *(_QWORD *)(SchedulerAssist + 33976);
            v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v30 = (v29 & *(_DWORD *)(a3 + 20)) == 0;
            *(_DWORD *)(a3 + 20) &= v29;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick(SchedulerAssist);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
LABEL_5:
    if ( !v4 )
      goto LABEL_6;
  }
  v34 = 0;
  _m_prefetchw(v6 + 12588);
  v23 = *((unsigned __int16 *)v6 + 6294);
  v24 = (unsigned __int16)v23;
  BYTE1(v24) = HIBYTE(*((_WORD *)v6 + 6294));
  v25 = *((_WORD *)v6 + 6294);
  if ( v25 != _InterlockedCompareExchange16((volatile signed __int16 *)v6 + 6294, v23 | 8, v23) )
  {
    do
    {
      RtlBackoff(&v34, v23, a3, SchedulerAssist);
      _m_prefetchw(v6 + 12588);
      v23 = *((unsigned __int16 *)v6 + 6294);
      v24 = (unsigned __int16)v23;
      BYTE1(v24) = HIBYTE(*((_WORD *)v6 + 6294));
      v31 = *((_WORD *)v6 + 6294);
    }
    while ( v31 != _InterlockedCompareExchange16((volatile signed __int16 *)v6 + 6294, v23 | 8, v23) );
  }
  if ( (v23 & 0x29) == 0 )
  {
    if ( v6[32] )
    {
      v6[6] = 1;
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
    v30 = v6[33] == 0;
    v32 = 0;
    WORD4(v35) = 0;
    *(_QWORD *)&v35 = v5;
    if ( !v30 )
    {
      v32 = 1;
      WORD4(v35) = 1;
    }
    if ( (v6[12588] & 8) != 0 )
      WORD4(v35) = v32 | 8;
    v36[1] = 16LL;
    v36[0] = &v35;
    EtwTraceKernelEvent((unsigned int)v36, 1, 1074003968, 3919, 4196866);
  }
}
