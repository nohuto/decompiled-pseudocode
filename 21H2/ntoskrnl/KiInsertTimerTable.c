/*
 * XREFs of KiInsertTimerTable @ 0x140352D50
 * Callers:
 *     KiResumeThread @ 0x140267870 (KiResumeThread.c)
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x1402816A0 (KeSetTimerEx.c)
 *     KiTimerWaitTest @ 0x1402EC640 (KiTimerWaitTest.c)
 *     ExpSetTimerObject @ 0x1402EDC70 (ExpSetTimerObject.c)
 *     KiCommitThreadWait @ 0x140350D00 (KiCommitThreadWait.c)
 *     KiAdjustTimerDueTimes @ 0x14039E2BC (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiRemoveEntryTimer @ 0x1402EBFE0 (KiRemoveEntryTimer.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

_BOOL8 __fastcall KiInsertTimerTable(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, char *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // r13
  __int64 v9; // r9
  unsigned int v10; // edx
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v14; // r10
  _DWORD *SchedulerAssist; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r14
  _QWORD *v18; // rsi
  struct _KPRCB *v19; // r15
  _QWORD *v20; // rdx
  unsigned __int64 v21; // r8
  _QWORD *v22; // rax
  __int64 v23; // r10
  unsigned int v24; // ecx
  __int64 v25; // r12
  char v26; // r11
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  int v30; // eax
  _QWORD *v31; // r9
  _QWORD *v32; // rax
  _DWORD *v33; // rcx
  _DWORD *v34; // rcx
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
  v9 = 0x140000000uLL;
  v10 = 0;
  if ( !KiSerializeTimerExpiration )
  {
    if ( a3 && (v30 = *(unsigned __int16 *)(a3 + 2), (unsigned __int16)v30 >= 0x500u) )
    {
      v10 = v30 - 1280;
    }
    else
    {
      v10 = *(_DWORD *)(a1 + 36);
      if ( (*(_BYTE *)(a1 + 35) & 2) != 0 )
      {
        a3 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 80LL) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL);
        if ( a3 )
        {
          v35 = *(_BYTE *)(a1 + 209);
          a3 = __ROR8__(a3, v35);
          _BitScanForward64(&v36, a3);
          v10 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 208)
                                                   + (((unsigned __int8)v36 + v35) & 0x3F)];
        }
      }
    }
  }
  v11 = *(_QWORD *)(a2 + 24);
  v12 = v10;
  *(_WORD *)(a2 + 56) = v10;
  CurrentPrcb = KeGetCurrentPrcb();
  v45 = CurrentPrcb;
  v14 = KiProcessorBlock[v12] + 14656;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  v16 = (unsigned __int64)*(unsigned __int16 *)(a2 + 58) << 8;
  v44 = v14;
  v17 = v14 + 32 * (v16 + v6 + 16);
  v42 = 0;
  v18 = (_QWORD *)(v17 + 8);
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
  v19 = v45;
  while ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
  {
    v33 = v19->SchedulerAssist;
    if ( v33 )
    {
      if ( v19->NestingLevel <= 1u )
      {
        v38 = v33[6] - 1;
        v33[6] = v38;
        if ( !v38 )
          KiRemoveSystemWorkPriorityKick(v19);
      }
    }
    do
      KeYieldProcessorEx(&v42, (__int64)CurrentPrcb, a3, v9);
    while ( *(_QWORD *)v17 );
    v34 = v19->SchedulerAssist;
    if ( v34 )
    {
      if ( v19->NestingLevel <= 1u )
      {
        v39 = v34[6];
        v34[6] = v39 + 1;
        if ( v39 == -1 )
          KiRemoveSystemWorkPriorityKick(v19);
      }
    }
  }
  v20 = *(_QWORD **)(v17 + 8);
  v43 = (volatile signed __int64 *)v17;
  if ( v20 == (_QWORD *)(v17 + 8) )
  {
    v5 = 6;
  }
  else
  {
    v21 = *(v20 - 1);
    if ( v11 > v21 )
    {
      v31 = (_QWORD *)(v17 + 16);
      if ( v11 - v21 <= (unsigned __int64)KeMaximumIncrement >> 2 )
      {
        v18 = v20;
        if ( v20 != (_QWORD *)*v31 )
        {
          do
          {
            v32 = (_QWORD *)*v18;
            if ( v11 <= *(_QWORD *)(*v18 - 8LL) )
              break;
            v18 = (_QWORD *)*v18;
          }
          while ( v32 != (_QWORD *)*v31 );
        }
      }
      else
      {
        v18 = (_QWORD *)*v31;
        do
        {
          if ( v11 >= *(v18 - 1) )
            break;
          v18 = (_QWORD *)v18[1];
        }
        while ( v18 != (_QWORD *)(v17 + 8) );
      }
    }
    else
    {
      v5 = v11 < v21 ? 2 : 0;
    }
    v20 = (_QWORD *)*v18;
  }
  v22 = (_QWORD *)(a2 + 32);
  if ( (_QWORD *)v20[1] != v18 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 40) = v18;
  *v22 = v20;
  v20[1] = v22;
  *v18 = v22;
  if ( (v5 & 2) != 0 )
  {
    *(_QWORD *)(v17 + 24) = v11;
    _InterlockedOr(v41, 0);
    v23 = v44;
    if ( v5 >= 4 )
    {
      if ( KiSerializeTimerExpiration )
      {
        v24 = v6 & 0x3F;
        v25 = 8LL * ((unsigned int)v6 >> 6);
      }
      else
      {
        v24 = *(unsigned __int8 *)(v44 - 14447);
        v25 = v6 << 6;
      }
      _interlockedbittestandset64(
        (volatile signed __int32 *)(qword_140CFD7A8[2 * *(unsigned __int8 *)(v44 - 14448)] + v25),
        v24);
    }
    if ( v11 <= MEMORY[0xFFFFF78000000008] )
    {
      if ( a5 )
      {
        v26 = 1;
        v46 = 1;
        goto LABEL_19;
      }
      LOBYTE(v5) = 1;
      KiRemoveEntryTimer(v23, a2, v6, &v43);
    }
  }
  v26 = 0;
LABEL_19:
  _InterlockedAnd64(v43, 0LL);
  v27 = KeGetCurrentPrcb();
  v28 = v27->SchedulerAssist;
  if ( v28 )
  {
    if ( v27->NestingLevel <= 1u )
    {
      v40 = v28[6] - 1;
      v28[6] = v40;
      if ( !v40 )
      {
        KiRemoveSystemWorkPriorityKick(v27);
        v26 = v46;
      }
    }
  }
  if ( a5 )
    *a5 = v26;
  return (v5 & 1) == 0;
}
