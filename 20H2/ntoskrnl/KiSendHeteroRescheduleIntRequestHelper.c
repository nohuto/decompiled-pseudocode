/*
 * XREFs of KiSendHeteroRescheduleIntRequestHelper @ 0x14051E510
 * Callers:
 *     KiSendHeteroRescheduleIntRequest @ 0x14051E450 (KiSendHeteroRescheduleIntRequest.c)
 * Callees:
 *     KiAcquireThreadStateLock @ 0x1402BE9A0 (KiAcquireThreadStateLock.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1402DBC60 (KiCheckPreferredHeteroProcessor.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiReleaseThreadStateLock @ 0x1402E9B20 (KiReleaseThreadStateLock.c)
 *     KiSendSoftwareInterrupt @ 0x1402F7E88 (KiSendSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiSendHeteroRescheduleIntRequestHelper(unsigned __int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v5; // rsi
  char v6; // r12
  _QWORD *v7; // r15
  unsigned __int64 v8; // r13
  __int64 v9; // rdx
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  _DWORD *SchedulerAssist; // rcx
  __int64 v14; // rdi
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  _DWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // r9
  struct _KPRCB *v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  struct _KPRCB *v25; // rdi
  _DWORD *v26; // rcx
  int v27; // eax
  _DWORD *v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rdi
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  int v35; // eax
  int v37; // [rsp+20h] [rbp-28h]
  int v38; // [rsp+24h] [rbp-24h]
  int v39; // [rsp+28h] [rbp-20h] BYREF
  int v40; // [rsp+2Ch] [rbp-1Ch] BYREF
  __int64 v41; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int64 *v42; // [rsp+38h] [rbp-10h] BYREF
  int v43; // [rsp+90h] [rbp+48h]
  __int64 v45; // [rsp+A0h] [rbp+58h]
  __int64 v46; // [rsp+A8h] [rbp+60h]

  v46 = a4;
  v45 = a3;
  v4 = 0;
  v42 = 0LL;
  v5 = 0LL;
  v37 = -1;
  v6 = 0;
  v38 = 0;
  v7 = a2;
  v8 = a1;
  if ( a1 )
  {
    v9 = 0x140000000uLL;
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v39 = 0;
      _BitScanForward64(&v11, v8);
      v8 ^= 1LL << v11;
      v12 = (unsigned int)v11 + (*(unsigned __int8 *)(a4 + 208) << 6);
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v43 = KiProcessorNumberToIndexMappingTable[v12];
      v14 = KiProcessorBlock[v43];
      v41 = v14;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v15 = SchedulerAssist[6];
          SchedulerAssist[6] = v15 + 1;
          if ( v15 == -1 )
LABEL_6:
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 48), 0LL) )
      {
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
          KeYieldProcessorEx(&v39, v9, a3, a4);
        while ( *(_QWORD *)(v14 + 48) );
        v18 = CurrentPrcb->SchedulerAssist;
        if ( v18 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v19 = v18[6];
            v18[6] = v19 + 1;
            if ( v19 == -1 )
              goto LABEL_6;
          }
        }
      }
      v7 = a2;
      v20 = *(_QWORD *)(v14 + 8);
      if ( (*(_BYTE *)(v14 + 35) & 1) == 0 || *(_QWORD *)(v14 + 16) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 48), 0LL);
        v33 = KeGetCurrentPrcb();
        v34 = v33->SchedulerAssist;
        if ( v34 )
        {
LABEL_51:
          if ( v33->NestingLevel <= 1u )
          {
            v35 = v34[6] - 1;
            v34[6] = v35;
            if ( !v35 )
              KiRemoveSystemWorkPriorityKick((__int64)v33);
          }
        }
      }
      else
      {
        if ( !*(_BYTE *)(v14 + 12585) && (unsigned int)KiCheckPreferredHeteroProcessor(*(_QWORD *)(v14 + 8), v14, 0, a4) )
        {
          if ( !a2 )
          {
            _InterlockedAdd16((volatile signed __int16 *)(v20 + 868), 1u);
            _InterlockedAnd64((volatile signed __int64 *)(v14 + 48), 0LL);
            v22 = KeGetCurrentPrcb();
            v23 = (__int64)v22->SchedulerAssist;
            if ( v23 )
            {
              if ( v22->NestingLevel <= 1u )
              {
                v24 = *(_DWORD *)(v23 + 24) - 1;
                *(_DWORD *)(v23 + 24) = v24;
                if ( !v24 )
                  KiRemoveSystemWorkPriorityKick((__int64)v22);
              }
            }
            v25 = KeGetCurrentPrcb();
            v40 = 0;
            while ( 1 )
            {
              v26 = v25->SchedulerAssist;
              if ( v26 )
              {
                if ( v25->NestingLevel <= 1u )
                {
                  v27 = v26[6];
                  v26[6] = v27 + 1;
                  if ( v27 == -1 )
                    KiRemoveSystemWorkPriorityKick((__int64)v25);
                }
              }
              if ( !_interlockedbittestandset64((volatile signed __int32 *)(v20 + 64), 0LL) )
                break;
              v28 = v25->SchedulerAssist;
              if ( v28 )
              {
                if ( v25->NestingLevel <= 1u )
                {
                  v29 = v28[6] - 1;
                  v28[6] = v29;
                  if ( !v29 )
                    KiRemoveSystemWorkPriorityKick((__int64)v25);
                }
              }
              do
                KeYieldProcessorEx(&v40, v23, a3, v21);
              while ( *(_QWORD *)(v20 + 64) );
            }
            KiAcquireThreadStateLock(v20, &v41, (volatile signed __int32 **)&v42);
            _InterlockedAdd16((volatile signed __int16 *)(v20 + 868), 0xFFFFu);
            if ( *(_BYTE *)(v20 + 388) == 2 )
            {
              v32 = v41;
              if ( !*(_BYTE *)(v41 + 12585)
                && (unsigned int)KiCheckPreferredHeteroProcessor(v20, v41, 0, v31)
                && !_interlockedbittestandset((volatile signed __int32 *)(v20 + 120), 0xCu) )
              {
                *(_BYTE *)(v32 + 12585) = 1;
                KiSendSoftwareInterrupt();
                v6 = 1;
              }
            }
            KiReleaseThreadStateLock(v30, v41, v42);
            KiReleaseThreadLockSafe(v20);
            goto LABEL_54;
          }
          if ( (*(_DWORD *)(v20 + 120) & 0x1000) == 0 )
          {
            a3 = (unsigned int)v37;
            v5 |= 1LL << v43;
            if ( v37 == -1 || *(char *)(v20 + 195) > v37 )
            {
              v6 = 1;
              v37 = *(char *)(v20 + 195);
              v38 = v43;
            }
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 48), 0LL);
        v33 = KeGetCurrentPrcb();
        v34 = v33->SchedulerAssist;
        if ( v34 )
          goto LABEL_51;
      }
LABEL_54:
      a4 = v46;
      v9 = 0x140000000uLL;
      if ( !v8 )
      {
        a3 = v45;
        v4 = v38;
        break;
      }
    }
  }
  if ( v7 )
    *v7 = v5;
  if ( a3 )
    *(_DWORD *)a3 = v4;
  return v6;
}
