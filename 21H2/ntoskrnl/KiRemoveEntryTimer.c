/*
 * XREFs of KiRemoveEntryTimer @ 0x1402EBFE0
 * Callers:
 *     KiRetireDpcList @ 0x1402EAF00 (KiRetireDpcList.c)
 *     ExpSetTimerObject @ 0x1402EDC70 (ExpSetTimerObject.c)
 *     KiInsertTimerTable @ 0x140352D50 (KiInsertTimerTable.c)
 *     KiExpireTimerTable @ 0x140389600 (KiExpireTimerTable.c)
 *     KiAdjustTimerDueTimes @ 0x14039E2BC (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTryToAcquireSpinLockInstrumented @ 0x140516C04 (KiTryToAcquireSpinLockInstrumented.c)
 */

unsigned __int64 __fastcall KiRemoveEntryTimer(__int64 a1, __int64 a2, unsigned int a3, volatile signed __int64 **a4)
{
  __int64 v4; // rbp
  unsigned int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  unsigned __int64 result; // rax
  __int64 v11; // r12
  volatile signed __int32 *v12; // rdi
  struct _KPRCB *v13; // r13
  _DWORD *v14; // rcx
  unsigned __int64 v15; // rbx
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v20; // rcx
  _DWORD *v21; // rcx
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  struct _KPRCB *v24; // r15
  _DWORD *v25; // rcx
  struct _KPRCB *v26; // r15
  volatile signed __int32 *v27; // r13
  _DWORD *v28; // rcx
  _DWORD *v29; // rcx
  _DWORD *v30; // rcx
  _DWORD *v31; // rcx
  int v32; // eax
  bool v33; // zf
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  _DWORD *v42; // rcx
  int v43; // eax
  _DWORD *v44; // rcx
  int v45; // eax
  int v46; // [rsp+70h] [rbp+8h] BYREF
  int v47; // [rsp+78h] [rbp+10h] BYREF
  int v48; // [rsp+80h] [rbp+18h] BYREF
  volatile signed __int64 **v49; // [rsp+88h] [rbp+20h]

  v49 = a4;
  v4 = a3;
  v6 = *(unsigned __int16 *)(a2 + 58);
  v7 = *(_QWORD *)(a2 + 32);
  v8 = a2 + 32;
  v9 = 32 * (((unsigned __int64)v6 << 8) + v4 + 16);
  result = *(_QWORD *)(v8 + 8);
  v11 = 32 * (((v6 ^ 1LL) << 8) + v4 + 16);
  if ( *(_QWORD *)(v7 + 8) != v8 || *(_QWORD *)result != v8 )
    __fastfail(3u);
  *(_QWORD *)result = v7;
  *(_QWORD *)(v7 + 8) = result;
  if ( result == v7 )
  {
    *(_DWORD *)(v9 + a1 + 28) = -1;
    if ( !(_WORD)v6 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = (volatile signed __int32 *)(a1 + 32 * (v4 + 272));
      v48 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v32 = SchedulerAssist[6];
          v33 = v32 == -1;
          result = (unsigned int)(v32 + 1);
          SchedulerAssist[6] = result;
          if ( v33 )
LABEL_38:
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64(v12, 0LL) )
      {
        v20 = CurrentPrcb->SchedulerAssist;
        if ( v20 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v34 = v20[6] - 1;
            v20[6] = v34;
            if ( !v34 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
        {
          KeYieldProcessorEx(&v48);
          result = *(_QWORD *)v12;
        }
        while ( *(_QWORD *)v12 );
        v21 = CurrentPrcb->SchedulerAssist;
        if ( v21 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v35 = v21[6];
            v33 = v35 == -1;
            result = (unsigned int)(v35 + 1);
            v21[6] = result;
            if ( v33 )
              goto LABEL_38;
          }
        }
      }
      goto LABEL_9;
    }
    v12 = (volatile signed __int32 *)(a1 + 32 * (v4 + 16));
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      result = KiTryToAcquireSpinLockInstrumented(a1 + 32 * (v4 + 16));
      a4 = v49;
      if ( (_BYTE)result )
        goto LABEL_8;
    }
    else
    {
      v13 = KeGetCurrentPrcb();
      v14 = v13->SchedulerAssist;
      if ( v14 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v36 = v14[6];
          v33 = v36 == -1;
          result = (unsigned int)(v36 + 1);
          v14[6] = result;
          if ( v33 )
          {
            result = KiRemoveSystemWorkPriorityKick(v13);
            a4 = v49;
          }
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 32 * (v4 + 16)), 0LL) )
      {
LABEL_8:
        if ( !v12 )
        {
          _InterlockedAnd64(*a4, 0LL);
          v22 = KeGetCurrentPrcb();
          v23 = v22->SchedulerAssist;
          if ( v23 )
          {
            if ( v22->NestingLevel <= 1u )
            {
              v37 = v23[6] - 1;
              v23[6] = v37;
              if ( !v37 )
                KiRemoveSystemWorkPriorityKick(v22);
            }
          }
          v12 = (volatile signed __int32 *)(a1 + 32 * (v4 + 16));
          v24 = KeGetCurrentPrcb();
          v46 = 0;
          v25 = v24->SchedulerAssist;
          if ( v25 )
          {
            if ( v24->NestingLevel <= 1u )
            {
              v38 = v25[6];
              v25[6] = v38 + 1;
              if ( v38 == -1 )
LABEL_58:
                KiRemoveSystemWorkPriorityKick(v24);
            }
          }
          while ( _interlockedbittestandset64(v12, 0LL) )
          {
            v30 = v24->SchedulerAssist;
            if ( v30 )
            {
              if ( v24->NestingLevel <= 1u )
              {
                v39 = v30[6] - 1;
                v30[6] = v39;
                if ( !v39 )
                  KiRemoveSystemWorkPriorityKick(v24);
              }
            }
            do
              KeYieldProcessorEx(&v46);
            while ( *(_QWORD *)v12 );
            v31 = v24->SchedulerAssist;
            if ( v31 )
            {
              if ( v24->NestingLevel <= 1u )
              {
                v40 = v31[6];
                v31[6] = v40 + 1;
                if ( v40 == -1 )
                  goto LABEL_58;
              }
            }
          }
          v26 = KeGetCurrentPrcb();
          v27 = (volatile signed __int32 *)(a1 + 32 * (v4 + 272));
          v47 = 0;
          v28 = v26->SchedulerAssist;
          if ( v28 )
          {
            if ( v26->NestingLevel <= 1u )
            {
              v41 = v28[6];
              v28[6] = v41 + 1;
              if ( v41 == -1 )
LABEL_67:
                KiRemoveSystemWorkPriorityKick(v26);
            }
          }
          while ( _interlockedbittestandset64(v27, 0LL) )
          {
            v42 = v26->SchedulerAssist;
            if ( v42 )
            {
              if ( v26->NestingLevel <= 1u )
              {
                v43 = v42[6] - 1;
                v42[6] = v43;
                if ( !v43 )
                  KiRemoveSystemWorkPriorityKick(v26);
              }
            }
            do
              KeYieldProcessorEx(&v47);
            while ( *(_QWORD *)v27 );
            v44 = v26->SchedulerAssist;
            if ( v44 )
            {
              if ( v26->NestingLevel <= 1u )
              {
                v45 = v44[6];
                v44[6] = v45 + 1;
                if ( v45 == -1 )
                  goto LABEL_67;
              }
            }
          }
          result = (unsigned __int64)v49;
          *v49 = (volatile signed __int64 *)v27;
        }
LABEL_9:
        if ( *(_DWORD *)(v9 + a1 + 28) == -1 && *(_DWORD *)(v11 + a1 + 28) == -1 )
        {
          if ( KiSerializeTimerExpiration )
          {
            result = v4 & 0x3F;
            v15 = 8LL * ((unsigned int)v4 >> 6);
          }
          else
          {
            result = *(unsigned __int8 *)(a1 - 14447);
            v15 = (unsigned __int64)(unsigned int)v4 << 6;
          }
          _interlockedbittestandreset64(
            (volatile signed __int32 *)(qword_140CFD7A8[2 * *(unsigned __int8 *)(a1 - 14448)] + v15),
            result);
        }
        _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        if ( v17 && v16->NestingLevel <= 1u )
        {
          result = (unsigned int)(v17[6] - 1);
          v17[6] = result;
          if ( !(_DWORD)result )
            return KiRemoveSystemWorkPriorityKick(v16);
        }
        return result;
      }
      v29 = v13->SchedulerAssist;
      if ( v29 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          result = (unsigned int)(v29[6] - 1);
          v29[6] = result;
          if ( !(_DWORD)result )
          {
            result = KiRemoveSystemWorkPriorityKick(v13);
            a4 = v49;
          }
        }
      }
      _mm_pause();
    }
    v12 = 0LL;
    goto LABEL_8;
  }
  return result;
}
