/*
 * XREFs of KiCheckForTimerExpiration @ 0x1402C90F0
 * Callers:
 *     KeAccumulateTicks @ 0x1402C8D10 (KeAccumulateTicks.c)
 * Callees:
 *     PoTraceSystemTimerResolutionKernel @ 0x140210FD8 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140211054 (KiSetClockIntervalToMinimumRequested.c)
 *     KiGetClockIntervalOneShot @ 0x14021179C (KiGetClockIntervalOneShot.c)
 *     HalRequestSoftwareInterrupt @ 0x140211E00 (HalRequestSoftwareInterrupt.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     RtlBackoff @ 0x1402FDE50 (RtlBackoff.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiCheckForTimerExpiration(unsigned __int64 a1, __int64 a2)
{
  bool v2; // si
  unsigned __int64 v3; // rdi
  _BYTE *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbp
  bool v7; // r8
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
  int ClockIntervalOneShot; // eax
  signed __int16 i; // dx
  __int64 v23; // rdx
  __int64 v24; // rcx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v26; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v28; // r8
  int v29; // eax
  bool v30; // zf
  __int16 v31; // cx
  bool v32; // [rsp+30h] [rbp-58h]
  int v33; // [rsp+34h] [rbp-54h] BYREF
  __int128 v34; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v35[2]; // [rsp+48h] [rbp-40h] BYREF

  v34 = 0LL;
  v2 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  v4 = (_BYTE *)a1;
  if ( (*(_BYTE *)(a1 + 12588) & 8) == 0 )
  {
    if ( KiSerializeTimerExpiration )
    {
      if ( !*(_BYTE *)(a1 + 33) )
        goto LABEL_4;
      v5 = KiProcessorBlock[0];
    }
    else
    {
      v5 = a1;
    }
    v6 = v5 + 14656;
    if ( v5 != -14656 )
    {
      a1 = *(_QWORD *)(v5 + 31560) != KiLastNonHrTimerExpiration;
      LOBYTE(a2) = *(_QWORD *)(v5 + 31552) != KiLastPseudoHrTimerExpiration;
      v7 = a2;
      if ( (KiVelocityFlags & 0x2000) != 0 )
        v7 = *(_QWORD *)(v5 + 31560) != KiLastNonHrTimerExpiration;
      v32 = *(_QWORD *)(v5 + 31552) != KiLastPseudoHrTimerExpiration;
      if ( v7 || *(_QWORD *)(v5 + 31552) != KiLastPseudoHrTimerExpiration )
      {
        v8 = 0;
        v9 = MEMORY[0xFFFFF78000000008] >> 18;
        v10 = 0LL;
        v11 = -1;
        v12 = (_DWORD *)(v5 + 31568);
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
            v16 = *(_QWORD *)(a1 + v6 + 536);
            if ( v8 != 1 || v7 )
              break;
            if ( v3 >= v16 )
            {
              v11 = v14;
              if ( v15 < v14 )
                v11 = v15;
              if ( v3 + (unsigned int)KePseudoHrTimeIncrement > (unsigned int)KeNonHrTimeIncrement + v16 )
              {
                v2 = 1;
                KiLastNonHrTimerExpiration = v3;
                v7 = 1;
                v14 = v11;
                goto LABEL_23;
              }
            }
LABEL_20:
            if ( v14 == v13 )
              goto LABEL_21;
          }
          if ( v3 < v16 )
            goto LABEL_20;
          v2 = 1;
LABEL_21:
          if ( !v8 || v7 )
LABEL_23:
            *(_DWORD *)(v6 + 4LL * v8 + 16912) = v14;
          ++v8;
          ++v12;
          v10 += 256LL;
          LODWORD(v9) = v13;
          if ( v8 >= 2 )
          {
            a2 = v32;
            break;
          }
        }
      }
      if ( !v4[33] )
        goto LABEL_5;
      if ( !v7 )
      {
        if ( (_BYTE)a2 )
        {
          a1 = qword_140C31D18;
          if ( v3 >= qword_140C31D18 )
          {
            a1 = (unsigned int)KeNonHrTimeIncrement + qword_140C31D18;
            if ( v3 + (unsigned int)KePseudoHrTimeIncrement > a1 )
            {
              KiLastNonHrTimerExpiration = v3;
LABEL_61:
              v2 = 1;
              goto LABEL_4;
            }
          }
        }
      }
      if ( v2 )
        goto LABEL_4;
      if ( v7 )
      {
        v2 = KiNextTimer2DueTime <= v3;
        goto LABEL_4;
      }
      if ( (_BYTE)a2 && qword_140C31D00 <= v3 || qword_140C31CE8 <= v3 )
        goto LABEL_61;
    }
  }
LABEL_4:
  if ( !v4[33] )
    goto LABEL_5;
  v17 = qword_140C31CE8;
  v18 = v3 + KeMaximumIncrement;
  if ( qword_140C31CE8 > v3 )
  {
    v19 = KiClockOwnerOneShotRequest;
    if ( !KiClockOwnerOneShotRequest )
      v19 = -1LL;
    if ( v19 != qword_140C31CE8 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        a1 = (unsigned int)CurrentIrql + 1;
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        a2 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
        SchedulerAssist[5] |= a2;
      }
      if ( v18 <= v17 )
      {
        if ( KiClockOwnerOneShotRequest )
        {
          PoTraceSystemTimerResolutionKernel(0, 1397707336, 1);
          KiClockOwnerOneShotRequest = 0LL;
          KiSetClockIntervalToMinimumRequested(v24, v23);
        }
      }
      else
      {
        KiClockOwnerOneShotRequest = v17;
        KiSetClockIntervalToMinimumRequested(a1, a2);
        ClockIntervalOneShot = KiGetClockIntervalOneShot(v17, v3);
        PoTraceSystemTimerResolutionKernel(ClockIntervalOneShot, 1397707336, 1);
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v26 = KeGetCurrentIrql();
          if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v28 = CurrentPrcb->SchedulerAssist;
            v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v30 = (v29 & v28[5]) == 0;
            v28[5] &= v29;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
LABEL_5:
    if ( !v2 )
      goto LABEL_6;
  }
  v33 = 0;
  _m_prefetchw(v4 + 12588);
  for ( i = *((_WORD *)v4 + 6294);
        i != _InterlockedCompareExchange16((volatile signed __int16 *)v4 + 6294, i | 8, i);
        i = *((_WORD *)v4 + 6294) )
  {
    RtlBackoff(&v33);
    _m_prefetchw(v4 + 12588);
  }
  if ( (i & 0x29) == 0 )
  {
    if ( v4[32] )
      v4[6] = 1;
    else
      HalRequestSoftwareInterrupt(2);
  }
LABEL_6:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x40000) != 0 && KeGetCurrentIrql() == 13 )
  {
    v30 = v4[33] == 0;
    v31 = 0;
    WORD4(v34) = 0;
    *(_QWORD *)&v34 = v3;
    if ( !v30 )
    {
      v31 = 1;
      WORD4(v34) = 1;
    }
    if ( (v4[12588] & 8) != 0 )
      WORD4(v34) = v31 | 8;
    v35[1] = 16LL;
    v35[0] = &v34;
    EtwTraceKernelEvent((int)v35, 1, 0x40040000u, 3919, 4196866);
  }
}
