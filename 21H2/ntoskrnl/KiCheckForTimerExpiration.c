/*
 * XREFs of KiCheckForTimerExpiration @ 0x140307E90
 * Callers:
 *     KeAccumulateTicks @ 0x1403078A0 (KeAccumulateTicks.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     KiResetClockIntervalOneShot @ 0x14022F104 (KiResetClockIntervalOneShot.c)
 *     KiSetClockIntervalOneShot @ 0x14022F3E8 (KiSetClockIntervalOneShot.c)
 *     RtlBackoff @ 0x14029F5C0 (RtlBackoff.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiCheckForTimerExpiration(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // si
  unsigned __int64 v4; // rdi
  _BYTE *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbp
  char v8; // r9
  _DWORD *v9; // r12
  __int64 v10; // rdx
  int v11; // r13d
  __int64 v12; // r14
  int v13; // r11d
  unsigned int v14; // edx
  unsigned int v15; // r15d
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r11
  __int64 v19; // rax
  unsigned __int8 CurrentIrql; // r14
  signed __int16 i; // dx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v23; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v25; // r8
  int v26; // eax
  bool v27; // zf
  __int16 v28; // cx
  bool v29; // [rsp+30h] [rbp-58h]
  unsigned int v30; // [rsp+34h] [rbp-54h] BYREF
  __int128 v31; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v32[2]; // [rsp+48h] [rbp-40h] BYREF

  v31 = 0LL;
  v3 = 0;
  v4 = MEMORY[0xFFFFF78000000008];
  v5 = (_BYTE *)a1;
  if ( (*(_BYTE *)(a1 + 13244) & 8) == 0 )
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
    v7 = v6 + 15360;
    if ( v6 != -15360 )
    {
      LOBYTE(a1) = *(_QWORD *)(v6 + 32264) != KiLastNonHrTimerExpiration;
      v8 = a1;
      LOBYTE(a2) = *(_QWORD *)(v6 + 32256) != KiLastPseudoHrTimerExpiration;
      if ( KiGlobalTimerResolutionRequests )
        v8 = a2;
      v29 = *(_QWORD *)(v6 + 32256) != KiLastPseudoHrTimerExpiration;
      if ( v8 || (_BYTE)a2 )
      {
        v9 = (_DWORD *)(v6 + 32272);
        v10 = MEMORY[0xFFFFF78000000008] >> 18;
        v11 = -1;
        LODWORD(a3) = 0;
        v12 = 0LL;
        while ( 1 )
        {
          v13 = *v9 + 255;
          if ( (unsigned int)(v10 - *v9) < 0x100 )
            v13 = v10;
          v14 = *v9 - 1;
          while ( 1 )
          {
            ++v14;
            v15 = v11;
            a1 = 32 * (v12 + (unsigned __int8)v14);
            v16 = *(_QWORD *)(a1 + v7 + 536);
            if ( (_DWORD)a3 != 1 || v8 )
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
                v8 = 1;
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
          if ( !(_DWORD)a3 || v8 )
LABEL_23:
            *(_DWORD *)(v7 + 4LL * (unsigned int)a3 + 16912) = v14;
          a3 = (unsigned int)(a3 + 1);
          ++v9;
          v12 += 256LL;
          LODWORD(v10) = v13;
          if ( (unsigned int)a3 >= 2 )
          {
            a2 = v29;
            break;
          }
        }
      }
      if ( !v5[33] )
        goto LABEL_5;
      if ( !v8 )
      {
        if ( (_BYTE)a2 )
        {
          a1 = qword_140C2B918;
          if ( v4 >= qword_140C2B918 )
          {
            a1 = (unsigned int)KeNonHrTimeIncrement + qword_140C2B918;
            if ( v4 + (unsigned int)KePseudoHrTimeIncrement > a1 )
            {
              KiLastNonHrTimerExpiration = v4;
LABEL_54:
              v3 = 1;
              goto LABEL_4;
            }
          }
        }
      }
      if ( v3 )
        goto LABEL_4;
      if ( v8 )
      {
        v3 = KiNextTimer2DueTime <= v4;
      }
      else if ( (_BYTE)a2 && qword_140C2B900 <= v4 || qword_140C2B8E8 <= v4 )
      {
        goto LABEL_54;
      }
    }
  }
LABEL_4:
  if ( !v5[33] )
    goto LABEL_5;
  v17 = qword_140C2B8E8;
  v18 = v4 + (unsigned int)KeMaximumIncrement;
  if ( qword_140C2B8E8 > v4 )
  {
    v19 = KiClockOwnerOneShotRequest;
    if ( !KiClockOwnerOneShotRequest )
      v19 = -1LL;
    if ( v19 != qword_140C2B8E8 )
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
      if ( v18 > v17 )
        KiSetClockIntervalOneShot(v17, v4);
      else
        KiResetClockIntervalOneShot(a1, a2, a3);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v23 = KeGetCurrentIrql();
          if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v25 = CurrentPrcb->SchedulerAssist;
            v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v27 = (v26 & v25[5]) == 0;
            v25[5] &= v26;
            if ( v27 )
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
  v30 = 0;
  _m_prefetchw(v5 + 13244);
  for ( i = *((_WORD *)v5 + 6622);
        i != _InterlockedCompareExchange16((volatile signed __int16 *)v5 + 6622, i | 8, i);
        i = *((_WORD *)v5 + 6622) )
  {
    RtlBackoff(&v30);
    _m_prefetchw(v5 + 13244);
  }
  if ( (i & 0xA9) == 0 )
  {
    if ( v5[32] )
      v5[6] = 1;
    else
      HalRequestSoftwareInterrupt(2);
  }
LABEL_6:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x40000) != 0 && KeGetCurrentIrql() == 13 )
  {
    v27 = v5[33] == 0;
    v28 = 0;
    WORD4(v31) = 0;
    *(_QWORD *)&v31 = v4;
    if ( !v27 )
    {
      v28 = 1;
      WORD4(v31) = 1;
    }
    if ( (v5[13244] & 8) != 0 )
      WORD4(v31) = v28 | 8;
    v32[1] = 16LL;
    v32[0] = &v31;
    EtwTraceKernelEvent((unsigned int)v32, 1, 1074003968, 3919, 4196866);
  }
}
