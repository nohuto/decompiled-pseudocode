/*
 * XREFs of KiInsertTimerTable @ 0x14021DDF0
 * Callers:
 *     KiCommitThreadWait @ 0x14021BDA0 (KiCommitThreadWait.c)
 *     KiSetTimerEx @ 0x140247520 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x1402476E0 (KeSetTimerEx.c)
 *     ExpSetTimerObject @ 0x1402897E0 (ExpSetTimerObject.c)
 *     KiTimerWaitTest @ 0x14028BDB0 (KiTimerWaitTest.c)
 *     KiResumeThread @ 0x1402D7924 (KiResumeThread.c)
 *     KiAdjustTimerDueTimes @ 0x14039E52C (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiRemoveEntryTimer @ 0x14028B750 (KiRemoveEntryTimer.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

_BOOL8 __fastcall KiInsertTimerTable(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // r13
  unsigned int v9; // edx
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v13; // r10
  _DWORD *SchedulerAssist; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r14
  _QWORD *v17; // rsi
  struct _KPRCB *v18; // r15
  _QWORD *v19; // rdx
  unsigned __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // r10
  unsigned int v23; // ecx
  __int64 v24; // r12
  char v25; // r11
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  int v29; // eax
  _QWORD *v30; // r9
  _QWORD *v31; // rax
  _DWORD *v32; // rcx
  _DWORD *v33; // rcx
  __int64 v34; // r8
  char v35; // cl
  unsigned __int64 v36; // rax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  signed __int32 v41[8]; // [rsp+0h] [rbp-78h] BYREF
  int v42; // [rsp+20h] [rbp-58h] BYREF
  volatile signed __int64 *v43; // [rsp+28h] [rbp-50h] BYREF
  __int64 v44; // [rsp+30h] [rbp-48h]
  struct _KPRCB *v45; // [rsp+38h] [rbp-40h]
  char v46; // [rsp+98h] [rbp+20h]

  v5 = 0;
  v6 = a4;
  v43 = 0LL;
  v46 = 0;
  if ( !*(_DWORD *)(a2 + 60) )
    *(_DWORD *)(a2 + 4) = 0;
  v9 = 0;
  if ( !KiSerializeTimerExpiration )
  {
    if ( a3 && (v29 = *(unsigned __int16 *)(a3 + 2), (unsigned __int16)v29 >= 0x500u) )
    {
      v9 = v29 - 1280;
    }
    else
    {
      v9 = *(_DWORD *)(a1 + 36);
      if ( (*(_BYTE *)(a1 + 35) & 2) != 0 )
      {
        v34 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 80LL) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL);
        if ( v34 )
        {
          v35 = *(_BYTE *)(a1 + 209);
          _BitScanForward64(&v36, __ROR8__(v34, v35));
          v9 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 208)
                                                  + (((unsigned __int8)v36 + v35) & 0x3F)];
        }
      }
    }
  }
  v10 = *(_QWORD *)(a2 + 24);
  v11 = v9;
  *(_WORD *)(a2 + 56) = v9;
  CurrentPrcb = KeGetCurrentPrcb();
  v45 = CurrentPrcb;
  v13 = KiProcessorBlock[v11] + 14656;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  v15 = (unsigned __int64)*(unsigned __int16 *)(a2 + 58) << 8;
  v44 = v13;
  v16 = v13 + 32 * (v15 + a4 + 16LL);
  v42 = 0;
  v17 = (_QWORD *)(v16 + 8);
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v37 = SchedulerAssist[6];
      SchedulerAssist[6] = v37 + 1;
      if ( v37 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  v18 = v45;
  while ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
  {
    v32 = v18->SchedulerAssist;
    if ( v32 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v38 = v32[6] - 1;
        v32[6] = v38;
        if ( !v38 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    do
      KeYieldProcessorEx(&v42);
    while ( *(_QWORD *)v16 );
    v33 = v18->SchedulerAssist;
    if ( v33 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v39 = v33[6];
        v33[6] = v39 + 1;
        if ( v39 == -1 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
  }
  v19 = *(_QWORD **)(v16 + 8);
  v43 = (volatile signed __int64 *)v16;
  if ( v19 == (_QWORD *)(v16 + 8) )
  {
    v5 = 6;
  }
  else
  {
    v20 = *(v19 - 1);
    if ( v10 > v20 )
    {
      v30 = (_QWORD *)(v16 + 16);
      if ( v10 - v20 <= (unsigned __int64)KeMaximumIncrement >> 2 )
      {
        v17 = v19;
        if ( v19 != (_QWORD *)*v30 )
        {
          do
          {
            v31 = (_QWORD *)*v17;
            if ( v10 <= *(_QWORD *)(*v17 - 8LL) )
              break;
            v17 = (_QWORD *)*v17;
          }
          while ( v31 != (_QWORD *)*v30 );
        }
      }
      else
      {
        v17 = (_QWORD *)*v30;
        do
        {
          if ( v10 >= *(v17 - 1) )
            break;
          v17 = (_QWORD *)v17[1];
        }
        while ( v17 != (_QWORD *)(v16 + 8) );
      }
    }
    else
    {
      v5 = v10 < v20 ? 2 : 0;
    }
    v19 = (_QWORD *)*v17;
  }
  v21 = (_QWORD *)(a2 + 32);
  if ( (_QWORD *)v19[1] != v17 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 40) = v17;
  *v21 = v19;
  v19[1] = v21;
  *v17 = v21;
  if ( (v5 & 2) != 0 )
  {
    *(_QWORD *)(v16 + 24) = v10;
    _InterlockedOr(v41, 0);
    v22 = v44;
    if ( v5 >= 4 )
    {
      if ( KiSerializeTimerExpiration )
      {
        v23 = v6 & 0x3F;
        v24 = 8LL * ((unsigned int)v6 >> 6);
      }
      else
      {
        v23 = *(unsigned __int8 *)(v44 - 14447);
        v24 = v6 << 6;
      }
      _interlockedbittestandset64(
        (volatile signed __int32 *)(qword_140CFD7A8[2 * *(unsigned __int8 *)(v44 - 14448)] + v24),
        v23);
    }
    if ( v10 <= MEMORY[0xFFFFF78000000008] )
    {
      if ( a5 )
      {
        v25 = 1;
        v46 = 1;
        goto LABEL_19;
      }
      LOBYTE(v5) = 1;
      ((void (__fastcall *)(__int64, __int64, _QWORD, volatile signed __int64 **, int))KiRemoveEntryTimer)(
        v22,
        a2,
        (unsigned int)v6,
        &v43,
        v42);
    }
  }
  v25 = 0;
LABEL_19:
  _InterlockedAnd64(v43, 0LL);
  v26 = KeGetCurrentPrcb();
  v27 = v26->SchedulerAssist;
  if ( v27 )
  {
    if ( v26->NestingLevel <= 1u )
    {
      v40 = v27[6] - 1;
      v27[6] = v40;
      if ( !v40 )
      {
        KiRemoveSystemWorkPriorityKick(v26);
        v25 = v46;
      }
    }
  }
  if ( a5 )
    *a5 = v25;
  return (v5 & 1) == 0;
}
