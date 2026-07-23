/*
 * XREFs of KiSendHeteroRescheduleIntRequestHelper @ 0x140520230
 * Callers:
 *     KiSendHeteroRescheduleIntRequest @ 0x140520170 (KiSendHeteroRescheduleIntRequest.c)
 * Callees:
 *     KiSendSoftwareInterrupt @ 0x140211D5C (KiSendSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiCheckPreferredHeteroProcessor @ 0x14027A170 (KiCheckPreferredHeteroProcessor.c)
 *     KiReleaseThreadStateLock @ 0x14029B7D0 (KiReleaseThreadStateLock.c)
 *     KiAcquireThreadStateLock @ 0x1402D5790 (KiAcquireThreadStateLock.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 v31; // rdi
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  int v34; // eax
  int v36; // [rsp+20h] [rbp-28h]
  int v37; // [rsp+24h] [rbp-24h]
  int v38; // [rsp+28h] [rbp-20h] BYREF
  int v39; // [rsp+2Ch] [rbp-1Ch] BYREF
  __int64 v40; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int64 *v41; // [rsp+38h] [rbp-10h] BYREF
  int v42; // [rsp+90h] [rbp+48h]
  __int64 v44; // [rsp+A0h] [rbp+58h]
  __int64 v45; // [rsp+A8h] [rbp+60h]

  v45 = a4;
  v44 = a3;
  v4 = 0;
  v41 = 0LL;
  v5 = 0LL;
  v36 = -1;
  v6 = 0;
  v37 = 0;
  v7 = a2;
  v8 = a1;
  if ( a1 )
  {
    v9 = 0x140000000uLL;
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v38 = 0;
      _BitScanForward64(&v11, v8);
      v8 ^= 1LL << v11;
      v12 = (unsigned int)v11 + (*(unsigned __int8 *)(a4 + 208) << 6);
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v42 = KiProcessorNumberToIndexMappingTable[v12];
      v14 = KiProcessorBlock[v42];
      v40 = v14;
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
          KeYieldProcessorEx(&v38, v9, a3, a4);
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
        v32 = KeGetCurrentPrcb();
        v33 = v32->SchedulerAssist;
        if ( v33 )
        {
LABEL_51:
          if ( v32->NestingLevel <= 1u )
          {
            v34 = v33[6] - 1;
            v33[6] = v34;
            if ( !v34 )
              KiRemoveSystemWorkPriorityKick((__int64)v32);
          }
        }
      }
      else
      {
        if ( !*(_BYTE *)(v14 + 12585) && (unsigned int)KiCheckPreferredHeteroProcessor(*(_QWORD *)(v14 + 8), v14, 0) )
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
            v39 = 0;
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
                KeYieldProcessorEx(&v39, v23, a3, v21);
              while ( *(_QWORD *)(v20 + 64) );
            }
            KiAcquireThreadStateLock(v20, &v40, (volatile signed __int32 **)&v41);
            _InterlockedAdd16((volatile signed __int16 *)(v20 + 868), 0xFFFFu);
            if ( *(_BYTE *)(v20 + 388) == 2 )
            {
              v31 = v40;
              if ( !*(_BYTE *)(v40 + 12585)
                && (unsigned int)KiCheckPreferredHeteroProcessor(v20, v40, 0)
                && !_interlockedbittestandset((volatile signed __int32 *)(v20 + 120), 0xCu) )
              {
                *(_BYTE *)(v31 + 12585) = 1;
                KiSendSoftwareInterrupt();
                v6 = 1;
              }
            }
            KiReleaseThreadStateLock(v30, v40, v41);
            KiReleaseThreadLockSafe(v20);
            goto LABEL_54;
          }
          if ( (*(_DWORD *)(v20 + 120) & 0x1000) == 0 )
          {
            a3 = (unsigned int)v36;
            v5 |= 1LL << v42;
            if ( v36 == -1 || *(char *)(v20 + 195) > v36 )
            {
              v6 = 1;
              v36 = *(char *)(v20 + 195);
              v37 = v42;
            }
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 48), 0LL);
        v32 = KeGetCurrentPrcb();
        v33 = v32->SchedulerAssist;
        if ( v33 )
          goto LABEL_51;
      }
LABEL_54:
      a4 = v45;
      v9 = 0x140000000uLL;
      if ( !v8 )
      {
        a3 = v44;
        v4 = v37;
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
