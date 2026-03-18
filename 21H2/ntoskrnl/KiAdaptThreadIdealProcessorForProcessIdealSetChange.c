/*
 * XREFs of KiAdaptThreadIdealProcessorForProcessIdealSetChange @ 0x140572094
 * Callers:
 *     KiUpdateProcessConcurrencyCount @ 0x140302650 (KiUpdateProcessConcurrencyCount.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KeSelectIdealProcessor @ 0x140293268 (KeSelectIdealProcessor.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiSetIdealProcessorThread @ 0x14035D00C (KiSetIdealProcessorThread.c)
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x14062DAE4 (EtwTraceIdealProcessor.c)
 */

char __fastcall KiAdaptThreadIdealProcessorForProcessIdealSetChange(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        _WORD *a4,
        _BYTE *a5,
        _DWORD *a6)
{
  _BYTE *v6; // r15
  char v7; // r12
  int v8; // eax
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  _DWORD *v18; // r14
  __int64 v19; // r8
  _WORD *v20; // r9
  __int64 v21; // r9
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rdx
  int v24; // edi
  __int64 v25; // r11
  __int64 v26; // rsi
  __int64 v27; // rbp
  unsigned __int64 v28; // rax
  __int64 v29; // rdi
  bool v30; // zf
  __int128 v32; // [rsp+20h] [rbp-38h] BYREF
  __int64 v33; // [rsp+68h] [rbp+10h] BYREF

  v6 = a5;
  v7 = 0;
  v33 = 0LL;
  v8 = *(_DWORD *)(a2 + 120);
  *a5 = 0;
  v32 = 0LL;
  if ( (v8 & 1) != 0 || *(_BYTE *)(a2 + 125) )
    return v8;
  CurrentPrcb = KeGetCurrentPrcb();
  LODWORD(a5) = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = SchedulerAssist[6];
        SchedulerAssist[6] = v15 + 1;
        if ( v15 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
      break;
    v16 = CurrentPrcb->SchedulerAssist;
    if ( v16 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v17 = v16[6] - 1;
        v16[6] = v17;
        if ( !v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&a5, a2, (__int64)a3, (__int64)a4);
    while ( *(_QWORD *)(a2 + 64) );
  }
  v18 = a6;
  if ( (*(_DWORD *)(a2 + 120) & 1) != 0 || *(_BYTE *)(a2 + 125) )
    goto LABEL_41;
  if ( (*(_DWORD *)(a2 + 116) & 8) != 0 )
  {
    v19 = *(unsigned __int16 *)(a2 + 560);
    v20 = *(_WORD **)(a2 + 552);
  }
  else
  {
    v19 = *(unsigned __int16 *)(a2 + 584);
    v20 = *(_WORD **)(a2 + 576);
  }
  WORD4(v32) = v19;
  v21 = (unsigned __int16)v19 >= *v20 ? 0LL : *(_QWORD *)&v20[4 * v19 + 4];
  *(_QWORD *)&v32 = v21;
  v22 = (unsigned __int16)v19 >= *a3 ? 0LL : *(_QWORD *)&a3[4 * (unsigned __int16)v19 + 4];
  v23 = (unsigned __int16)v19 >= *a4 ? 0LL : *(_QWORD *)&a4[4 * (unsigned __int16)v19 + 4];
  if ( v22 == v23 )
    goto LABEL_41;
  if ( (v22 & v23) == v23 )
  {
    v24 = 1;
LABEL_35:
    v25 = v23;
    goto LABEL_36;
  }
  if ( (v22 & v23) != v22 )
  {
    v24 = 3;
    goto LABEL_35;
  }
  v24 = 2;
  v25 = v22 ^ v23;
LABEL_36:
  v26 = *(unsigned int *)(a2 + 196);
  v33 = v25;
  v27 = KiProcessorBlock[v26];
  if ( (v25 & *(_QWORD *)(v27 + 200)) == 0 && (v21 & v25) != 0 )
  {
    if ( v24 != 2
      || (v7 = 1,
          v28 = ((v23 - ((v23 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
              + (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL),
          *a6 % ((unsigned int)((0x101010101010101LL * ((v28 + (v28 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24) >= (unsigned int)((0x101010101010101LL * ((((v22 - ((v22 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL) + (((v22 - ((v22 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL) + ((((v22 - ((v22 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL) + (((v22 - ((v22 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24) )
    {
      v29 = (unsigned __int16)KeSelectIdealProcessor(
                                (__int64)&v32,
                                (_WORD *)(a1 + 644 + 2LL * (unsigned __int16)v19),
                                &v33,
                                1u);
      KiSetIdealProcessorThread(a2, v29, 0, 0LL);
      KiReleaseThreadLockSafe(a2);
      LOBYTE(v8) = *(_WORD *)(*(_QWORD *)(KiProcessorBlock[v29] + 192) + 138LL) != *(_WORD *)(*(_QWORD *)(v27 + 192)
                                                                                            + 138LL);
      v30 = (xmmword_140D06910 & 0x8000000) == 0;
      *v6 = v8;
      if ( !v30 )
        LOBYTE(v8) = EtwTraceIdealProcessor(a2, 1351LL, (unsigned int)v26, (unsigned int)v29);
      goto LABEL_42;
    }
  }
LABEL_41:
  LOBYTE(v8) = KiReleaseThreadLockSafe(a2);
LABEL_42:
  if ( v7 )
  {
    v8 = ExGenRandom(1);
    *v18 = v8;
  }
  return v8;
}
