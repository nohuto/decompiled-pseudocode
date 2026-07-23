/*
 * XREFs of KiCancelTimer @ 0x140353020
 * Callers:
 *     KeCancelTimerInternal @ 0x140246344 (KeCancelTimerInternal.c)
 *     KiSuspendThread @ 0x1402682C4 (KiSuspendThread.c)
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x1402816A0 (KeSetTimerEx.c)
 *     KeCancelTimer @ 0x1402819B0 (KeCancelTimer.c)
 *     ExpCancelTimer @ 0x1402EE9E0 (ExpCancelTimer.c)
 *     KiSwapThread @ 0x140351420 (KiSwapThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTryToAcquireSpinLockInstrumented @ 0x140516C04 (KiTryToAcquireSpinLockInstrumented.c)
 */

__int64 __fastcall KiCancelTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // si
  char v5; // r12
  __int64 v7; // rax
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v9; // r15
  _DWORD *SchedulerAssist; // rcx
  __int64 v11; // r13
  volatile signed __int32 *v12; // rdi
  __int64 v13; // r8
  _QWORD *v14; // rcx
  __int64 v15; // rsi
  _QWORD *v16; // rax
  __int64 v17; // rbp
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  unsigned int v20; // eax
  int v21; // ecx
  volatile signed __int32 *v23; // r14
  struct _KPRCB *v24; // rdx
  _DWORD *v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // r15
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  _DWORD *v30; // rcx
  _DWORD *v31; // rcx
  struct _KPRCB *v32; // rdx
  _DWORD *v33; // rcx
  struct _KPRCB *v34; // r12
  struct _KPRCB *v35; // rcx
  _DWORD *v36; // rcx
  _DWORD *v37; // rcx
  _DWORD *v38; // rcx
  struct _KPRCB *v39; // rcx
  __int64 v40; // rdx
  struct _KPRCB *v41; // rdi
  _DWORD *v42; // rcx
  struct _KPRCB *v43; // rcx
  __int64 v44; // rdx
  struct _KPRCB *v45; // r12
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  _DWORD *v57; // rcx
  int v58; // eax
  _DWORD *v59; // rcx
  int v60; // eax
  int v61; // eax
  _DWORD *v62; // rcx
  int v63; // eax
  _DWORD *v64; // rcx
  int v65; // eax
  int v66; // eax
  int v67; // eax
  char v68; // [rsp+30h] [rbp-78h]
  int v69; // [rsp+34h] [rbp-74h] BYREF
  int v70; // [rsp+38h] [rbp-70h] BYREF
  int v71; // [rsp+3Ch] [rbp-6Ch] BYREF
  int v72; // [rsp+40h] [rbp-68h] BYREF
  int v73; // [rsp+44h] [rbp-64h] BYREF
  int v74; // [rsp+48h] [rbp-60h] BYREF
  struct _KPRCB *v75; // [rsp+50h] [rbp-58h]
  struct _KPRCB *v76; // [rsp+58h] [rbp-50h]
  __int64 v77; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v78[2]; // [rsp+68h] [rbp-40h] BYREF

  v77 = 0LL;
  v4 = 0;
  v69 = 0;
  v5 = a2;
  v68 = a2;
  while ( 1 )
  {
    v70 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
        KeYieldProcessorEx(&v70, a2, a3, a4);
      while ( (*(_DWORD *)a1 & 0x80u) != 0 );
    }
    if ( (*(_BYTE *)(a1 + 3) & 0xC0) == 0 )
      break;
    v7 = *(unsigned __int16 *)(a1 + 56);
    a4 = *(unsigned __int8 *)(a1 + 2);
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = a4;
    v71 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v11 = KiProcessorBlock[v7] + 14656;
    v12 = (volatile signed __int32 *)(v11 + 32 * (((unsigned __int64)*(unsigned __int16 *)(a1 + 58) << 8) + a4 + 16));
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v46 = SchedulerAssist[6];
        SchedulerAssist[6] = v46 + 1;
        if ( v46 == -1 )
LABEL_66:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64(v12, 0LL) )
    {
      v30 = CurrentPrcb->SchedulerAssist;
      if ( v30 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v47 = v30[6] - 1;
          v30[6] = v47;
          if ( !v47 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v71, a2, a3, a4);
      while ( *(_QWORD *)v12 );
      v31 = CurrentPrcb->SchedulerAssist;
      if ( v31 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v48 = v31[6];
          v31[6] = v48 + 1;
          if ( v48 == -1 )
            goto LABEL_66;
        }
      }
    }
    if ( *(char *)(a1 + 3) >= 0 )
    {
      v13 = *(unsigned __int16 *)(a1 + 58);
      v14 = *(_QWORD **)(a1 + 32);
      v15 = 32 * ((v13 << 8) + v9 + 16);
      v16 = *(_QWORD **)(a1 + 40);
      v17 = 32 * (((v13 ^ 1) << 8) + v9 + 16);
      if ( v14[1] != a1 + 32 || *v16 != a1 + 32 )
        __fastfail(3u);
      *v16 = v14;
      v14[1] = v16;
      if ( v16 != v14 )
      {
LABEL_10:
        _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        if ( v19 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v67 = v19[6] - 1;
            v19[6] = v67;
            if ( !v67 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        v20 = -1073741953;
        v21 = -1073741825;
        goto LABEL_12;
      }
      *(_DWORD *)(v15 + v11 + 28) = -1;
      if ( (_WORD)v13 )
      {
        v23 = (volatile signed __int32 *)(v11 + 32 * (v9 + 16));
        v76 = (struct _KPRCB *)v23;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          if ( (unsigned __int8)KiTryToAcquireSpinLockInstrumented(v11 + 32 * (v9 + 16)) )
            goto LABEL_21;
        }
        else
        {
          v24 = KeGetCurrentPrcb();
          v75 = v24;
          v25 = v24->SchedulerAssist;
          if ( v25 )
          {
            if ( v24->NestingLevel <= 1u )
            {
              v53 = v25[6];
              v25[6] = v53 + 1;
              if ( v53 == -1 )
              {
                KiRemoveSystemWorkPriorityKick(v24);
                v24 = v75;
              }
            }
          }
          if ( !_interlockedbittestandset64(v23, 0LL) )
          {
LABEL_21:
            if ( v23 )
              goto LABEL_22;
            _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
            v39 = KeGetCurrentPrcb();
            v40 = (__int64)v39->SchedulerAssist;
            if ( v40 )
            {
              if ( v39->NestingLevel <= 1u )
              {
                v55 = *(_DWORD *)(v40 + 24) - 1;
                *(_DWORD *)(v40 + 24) = v55;
                if ( !v55 )
                  KiRemoveSystemWorkPriorityKick(v39);
              }
            }
            v41 = KeGetCurrentPrcb();
            v23 = (volatile signed __int32 *)v76;
            v73 = 0;
            v42 = v41->SchedulerAssist;
            if ( v42 )
            {
              if ( v41->NestingLevel <= 1u )
              {
                v56 = v42[6];
                v42[6] = v56 + 1;
                if ( v56 == -1 )
LABEL_98:
                  KiRemoveSystemWorkPriorityKick(v41);
              }
            }
            while ( _interlockedbittestandset64(v23, 0LL) )
            {
              v57 = v41->SchedulerAssist;
              if ( v57 )
              {
                if ( v41->NestingLevel <= 1u )
                {
                  v58 = v57[6] - 1;
                  v57[6] = v58;
                  if ( !v58 )
                    KiRemoveSystemWorkPriorityKick(v41);
                }
              }
              do
                KeYieldProcessorEx(&v73, v40, v13, a4);
              while ( *(_QWORD *)v23 );
              v59 = v41->SchedulerAssist;
              if ( v59 )
              {
                if ( v41->NestingLevel <= 1u )
                {
                  v60 = v59[6];
                  v59[6] = v60 + 1;
                  if ( v60 == -1 )
                    goto LABEL_98;
                }
              }
            }
            v43 = KeGetCurrentPrcb();
            v12 = (volatile signed __int32 *)(v11 + 32 * (v9 + 272));
            v76 = v43;
            v74 = 0;
            v44 = (__int64)v43->SchedulerAssist;
            if ( v44 )
            {
              if ( v43->NestingLevel <= 1u )
              {
                v61 = *(_DWORD *)(v44 + 24);
                *(_DWORD *)(v44 + 24) = v61 + 1;
                if ( v61 == -1 )
                  KiRemoveSystemWorkPriorityKick(v43);
              }
            }
            v45 = v76;
            while ( _interlockedbittestandset64(v12, 0LL) )
            {
              v62 = v45->SchedulerAssist;
              if ( v62 )
              {
                if ( v45->NestingLevel <= 1u )
                {
                  v63 = v62[6] - 1;
                  v62[6] = v63;
                  if ( !v63 )
                    KiRemoveSystemWorkPriorityKick(v45);
                }
              }
              do
                KeYieldProcessorEx(&v74, v44, v13, a4);
              while ( *(_QWORD *)v12 );
              v64 = v45->SchedulerAssist;
              if ( v64 )
              {
                if ( v45->NestingLevel <= 1u )
                {
                  v65 = v64[6];
                  v64[6] = v65 + 1;
                  if ( v65 == -1 )
                    KiRemoveSystemWorkPriorityKick(v45);
                }
              }
            }
LABEL_39:
            v5 = v68;
LABEL_22:
            if ( *(_DWORD *)(v15 + v11 + 28) == -1 && *(_DWORD *)(v17 + v11 + 28) == -1 )
            {
              if ( KiSerializeTimerExpiration )
              {
                v26 = v9 & 0x3F;
                v27 = 8LL * ((unsigned int)v9 >> 6);
              }
              else
              {
                v26 = *(unsigned __int8 *)(v11 - 14447);
                v27 = v9 << 6;
              }
              _interlockedbittestandreset64(
                (volatile signed __int32 *)(qword_140CFD7A8[2 * *(unsigned __int8 *)(v11 - 14448)] + v27),
                v26);
            }
            _InterlockedAnd64((volatile signed __int64 *)v23, 0LL);
            v28 = KeGetCurrentPrcb();
            v29 = v28->SchedulerAssist;
            if ( v29 )
            {
              if ( v28->NestingLevel <= 1u )
              {
                v66 = v29[6] - 1;
                v29[6] = v66;
                if ( !v66 )
                  KiRemoveSystemWorkPriorityKick(v28);
              }
            }
            goto LABEL_10;
          }
          v38 = v24->SchedulerAssist;
          if ( v38 )
          {
            if ( v24->NestingLevel <= 1u )
            {
              v54 = v38[6] - 1;
              v38[6] = v54;
              if ( !v54 )
                KiRemoveSystemWorkPriorityKick(v24);
            }
          }
          _mm_pause();
        }
        v23 = 0LL;
        goto LABEL_21;
      }
      v32 = KeGetCurrentPrcb();
      v23 = (volatile signed __int32 *)(v11 + 32 * (v9 + 272));
      v75 = v32;
      v72 = 0;
      v33 = v32->SchedulerAssist;
      if ( v33 )
      {
        if ( v32->NestingLevel <= 1u )
        {
          v50 = v33[6];
          v33[6] = v50 + 1;
          if ( v50 == -1 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
      v34 = v75;
      while ( _interlockedbittestandset64(v23, 0LL) )
      {
        v36 = v34->SchedulerAssist;
        if ( v36 )
        {
          if ( v34->NestingLevel <= 1u )
          {
            v51 = v36[6] - 1;
            v36[6] = v51;
            if ( !v51 )
              KiRemoveSystemWorkPriorityKick(v34);
          }
        }
        do
          KeYieldProcessorEx(&v72, (__int64)v32, v13, a4);
        while ( *(_QWORD *)v23 );
        v37 = v34->SchedulerAssist;
        if ( v37 )
        {
          if ( v34->NestingLevel <= 1u )
          {
            v52 = v37[6];
            v37[6] = v52 + 1;
            if ( v52 == -1 )
              KiRemoveSystemWorkPriorityKick(v34);
          }
        }
      }
      goto LABEL_39;
    }
    _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
    v35 = KeGetCurrentPrcb();
    a2 = (__int64)v35->SchedulerAssist;
    if ( a2 )
    {
      if ( v35->NestingLevel <= 1u )
      {
        v49 = *(_DWORD *)(a2 + 24) - 1;
        *(_DWORD *)(a2 + 24) = v49;
        if ( !v49 )
          KiRemoveSystemWorkPriorityKick(v35);
      }
    }
    if ( _InterlockedExchange64((volatile __int64 *)(v11 + 8LL * (*(_BYTE *)(a1 + 3) & 0x3F)), 0LL) )
    {
      v20 = 16777087;
      v21 = 0xFFFFFF;
LABEL_12:
      if ( !v5 )
        v20 = v21;
      _InterlockedAnd((volatile signed __int32 *)a1, v20);
      v4 = 1;
      goto LABEL_15;
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    v69 = 0;
    while ( *(char *)(a1 + 3) < 0 )
      KeYieldProcessorEx(&v69, a2, a3, a4);
  }
  if ( v5 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_15:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v4 )
  {
    v77 = a1;
    v78[0] = &v77;
    v78[1] = 8LL;
    EtwTraceKernelEvent((int)v78, 1, 0x40020000u, 3925, 1538);
  }
  return v4;
}
