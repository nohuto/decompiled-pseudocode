/*
 * XREFs of KiAdjustTimerDueTimes @ 0x14039E2BC
 * Callers:
 *     KiSetSystemTimeDpc @ 0x14039E100 (KiSetSystemTimeDpc.c)
 *     KiAdjustTimersAfterDripsExit @ 0x14051419C (KiAdjustTimersAfterDripsExit.c)
 * Callees:
 *     KiRemoveEntryTimer @ 0x1402EBFE0 (KiRemoveEntryTimer.c)
 *     KiTimerWaitTest @ 0x1402EC640 (KiTimerWaitTest.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiInsertTimerTable @ 0x140352D50 (KiInsertTimerTable.c)
 *     KiAdjustTimer2DueTimes @ 0x14039E540 (KiAdjustTimer2DueTimes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceSetTimer @ 0x140523D9C (KiTraceSetTimer.c)
 */

_QWORD *__fastcall KiAdjustTimerDueTimes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v5; // r10
  unsigned int i; // esi
  unsigned int v8; // r15d
  unsigned __int64 v9; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  volatile signed __int64 *v12; // rax
  _QWORD *v13; // rbx
  struct _KPRCB *v14; // rcx
  _QWORD *result; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  unsigned int v23; // r9d
  unsigned __int64 v24; // rdi
  bool inserted; // al
  __int64 v26; // r14
  char v27; // dl
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  int v30; // eax
  _DWORD *v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // [rsp+30h] [rbp-40h] BYREF
  volatile signed __int64 *v35; // [rsp+38h] [rbp-38h] BYREF
  _QWORD *v36; // [rsp+40h] [rbp-30h] BYREF
  _QWORD **v37; // [rsp+48h] [rbp-28h]
  __int128 v38; // [rsp+50h] [rbp-20h]
  __int64 v39; // [rsp+60h] [rbp-10h]
  __int64 v40; // [rsp+B8h] [rbp+48h]
  char v42; // [rsp+C8h] [rbp+58h] BYREF

  v40 = a2;
  v4 = 0LL;
  v37 = &v36;
  v5 = a2;
  v42 = 0;
  v36 = &v36;
  v35 = 0LL;
  for ( i = 0; i < 2; ++i )
  {
    v8 = 0;
    v9 = ((unsigned __int64)i << 13) + v5 + 512;
    do
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v34 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v30 = SchedulerAssist[6];
            SchedulerAssist[6] = v30 + 1;
            if ( v30 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
          break;
        v31 = CurrentPrcb->SchedulerAssist;
        if ( v31 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v32 = v31[6] - 1;
            v31[6] = v32;
            if ( !v32 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v34, a2, v4, a4);
        while ( *(_QWORD *)v9 );
      }
      v12 = (volatile signed __int64 *)v9;
      v13 = *(_QWORD **)(v9 + 8);
      v35 = (volatile signed __int64 *)v9;
      if ( v13 != (_QWORD *)(v9 + 8) )
      {
        do
        {
          v26 = (__int64)(v13 - 4);
          v27 = *((_BYTE *)v13 - 31);
          v13 = (_QWORD *)*v13;
          if ( (v27 & 1) != *(_BYTE *)a3 && (!*(_BYTE *)a3 || (v27 & 2) == 0) )
          {
            KiRemoveEntryTimer(v40, v26, v8, &v35);
            v28 = v37;
            v29 = (_QWORD *)(v26 + 32);
            if ( *v37 != &v36 )
              goto LABEL_52;
            *(_QWORD *)(v26 + 40) = v37;
            *v29 = &v36;
            *v28 = v29;
            v37 = (_QWORD **)(v26 + 32);
          }
        }
        while ( v13 != (_QWORD *)(v9 + 8) );
        v12 = v35;
      }
      v4 = 0LL;
      _InterlockedAnd64(v12, 0LL);
      v14 = KeGetCurrentPrcb();
      a2 = (__int64)v14->SchedulerAssist;
      if ( a2 )
      {
        if ( v14->NestingLevel <= 1u )
        {
          v33 = *(_DWORD *)(a2 + 24) - 1;
          *(_DWORD *)(a2 + 24) = v33;
          if ( !v33 )
          {
            KiRemoveSystemWorkPriorityKick(v14);
            v4 = 0LL;
          }
        }
      }
      ++v8;
      v9 += 32LL;
    }
    while ( v8 < 0x100 );
    v5 = v40;
  }
  result = v36;
  if ( v36 != &v36 )
  {
    while ( 1 )
    {
      v16 = (__int64)(result - 4);
      v17 = *result;
      v18 = (_QWORD *)result[1];
      if ( *(_QWORD **)(*result + 8LL) != result || (_QWORD *)*v18 != result )
        break;
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      v19 = *(_QWORD *)(a3 + 24);
      v20 = *(_QWORD *)(v16 + 24);
      v21 = v20 - v19;
      if ( v19 >= 0 )
      {
        if ( v21 > v20 )
          v21 = 0LL;
      }
      else if ( v21 < v20 )
      {
        v21 = -1LL;
      }
      v22 = __ROL8__(KiWaitNever ^ *(_QWORD *)(v16 + 48), KiWaitNever);
      v23 = (unsigned __int8)(v21 >> 18);
      v38 = 0LL;
      v24 = KiWaitAlways ^ _byteswap_uint64(v16 ^ v22);
      *(_DWORD *)v16 |= 0x80u;
      *(_QWORD *)(v16 + 24) = v21;
      v39 = 0LL;
      LODWORD(v38) = *(_DWORD *)v16;
      BYTE2(v38) = v21 >> 18;
      *(_DWORD *)v16 = v38;
      if ( *(_BYTE *)(a3 + 32) )
        inserted = KiInsertTimerTable(a1, v16, v24, v23, &v42);
      else
        inserted = KiInsertTimerTable(a1, v16, v24, v23, 0LL);
      if ( inserted )
      {
        if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
          KiTraceSetTimer(v16, v24, 0LL);
        else
          _InterlockedAnd((volatile signed __int32 *)v16, 0xFFFFFF7F);
      }
      else
      {
        KiTimerWaitTest(a1, v16, 0LL);
      }
      result = v36;
      if ( v36 == &v36 )
        goto LABEL_30;
    }
LABEL_52:
    __fastfail(3u);
  }
LABEL_30:
  if ( *(_BYTE *)(a1 + 33) || *(_BYTE *)(a3 + 32) )
    return (_QWORD *)KiAdjustTimer2DueTimes(a3);
  return result;
}
