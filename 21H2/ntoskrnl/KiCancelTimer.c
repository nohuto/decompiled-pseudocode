/*
 * XREFs of KiCancelTimer @ 0x140357840
 * Callers:
 *     KeCancelTimerInternal @ 0x140252A60 (KeCancelTimerInternal.c)
 *     KiSwapThread @ 0x1402B3140 (KiSwapThread.c)
 *     KiSuspendThread @ 0x1402EE4D4 (KiSuspendThread.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     NtCancelTimer @ 0x140356F50 (NtCancelTimer.c)
 *     KeSetTimerEx @ 0x1403575C0 (KeSetTimerEx.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiCancelTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // di
  char v5; // si
  __int64 v7; // rax
  __int64 v8; // r10
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v10; // rbp
  _DWORD *SchedulerAssist; // rcx
  __int64 v12; // r15
  volatile signed __int32 *v13; // r14
  __int64 v14; // r8
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // r13
  _QWORD *v18; // rax
  __int64 v19; // r9
  struct _KPRCB *v20; // r12
  _DWORD *v21; // rcx
  volatile signed __int32 *v22; // rdi
  __int64 v23; // rcx
  unsigned int v24; // edx
  volatile signed __int32 *v25; // rcx
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  unsigned int v30; // eax
  int v31; // ecx
  struct _KPRCB *v33; // rcx
  __int64 v34; // rdx
  struct _KPRCB *v35; // r14
  _DWORD *v36; // rcx
  struct _KPRCB *v37; // r12
  _DWORD *v38; // rcx
  _DWORD *v39; // rcx
  _DWORD *v40; // rcx
  struct _KPRCB *v41; // rcx
  _DWORD *v42; // rcx
  _DWORD *v43; // rcx
  _DWORD *v44; // rcx
  _DWORD *v45; // rcx
  _DWORD *v46; // rcx
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
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  _DWORD *v61; // rcx
  int v62; // eax
  _DWORD *v63; // rcx
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // [rsp+30h] [rbp-78h] BYREF
  int v68; // [rsp+34h] [rbp-74h] BYREF
  int v69; // [rsp+38h] [rbp-70h] BYREF
  int v70; // [rsp+3Ch] [rbp-6Ch] BYREF
  int v71; // [rsp+40h] [rbp-68h] BYREF
  int v72[3]; // [rsp+44h] [rbp-64h] BYREF
  __int64 v73; // [rsp+50h] [rbp-58h]
  __int64 v74; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v75[2]; // [rsp+60h] [rbp-48h] BYREF

  v74 = 0LL;
  v4 = 0;
  v67 = 0;
  v5 = a2;
  while ( 1 )
  {
    v68 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
        KeYieldProcessorEx(&v68, a2, a3, a4);
      while ( (*(_DWORD *)a1 & 0x80u) != 0 );
    }
    if ( (*(_BYTE *)(a1 + 3) & 0xC0) == 0 )
      break;
    v7 = *(unsigned __int16 *)(a1 + 56);
    v8 = *(unsigned __int8 *)(a1 + 2);
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = v8;
    v69 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v12 = KiProcessorBlock[v7] + 15360;
    v13 = (volatile signed __int32 *)(v12 + 32 * (((unsigned __int64)*(unsigned __int16 *)(a1 + 58) << 8) + v8 + 16));
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v47 = SchedulerAssist[6];
        SchedulerAssist[6] = v47 + 1;
        if ( v47 == -1 )
LABEL_65:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64(v13, 0LL) )
    {
      v39 = CurrentPrcb->SchedulerAssist;
      if ( v39 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v48 = v39[6] - 1;
          v39[6] = v48;
          if ( !v48 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v69, a2, a3, a4);
      while ( *(_QWORD *)v13 );
      v40 = CurrentPrcb->SchedulerAssist;
      if ( v40 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v49 = v40[6];
          v40[6] = v49 + 1;
          if ( v49 == -1 )
            goto LABEL_65;
        }
      }
    }
    if ( *(char *)(a1 + 3) >= 0 )
    {
      v14 = *(unsigned __int16 *)(a1 + 58);
      v15 = a1 + 32;
      v16 = *(_QWORD **)(a1 + 32);
      v17 = 32 * ((v14 << 8) + v10 + 16);
      v18 = *(_QWORD **)(a1 + 40);
      v19 = v12 + 32 * (((v14 ^ 1) << 8) + v10 + 16);
      v73 = v19;
      if ( v16[1] != a1 + 32 || *v18 != v15 )
        __fastfail(3u);
      *v18 = v16;
      v16[1] = v18;
      if ( v18 == v16 )
      {
        *(_DWORD *)(v17 + v12 + 28) = -1;
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        if ( !(_WORD)v14 )
        {
          v70 = 0;
          v22 = (volatile signed __int32 *)(v12 + 32 * (v10 + 272));
          if ( v21 )
          {
            if ( v20->NestingLevel <= 1u )
            {
              v51 = v21[6];
              v21[6] = v51 + 1;
              if ( v51 == -1 )
LABEL_77:
                KiRemoveSystemWorkPriorityKick(v20);
            }
          }
          while ( _interlockedbittestandset64(v22, 0LL) )
          {
            v42 = v20->SchedulerAssist;
            if ( v42 )
            {
              if ( v20->NestingLevel <= 1u )
              {
                v52 = v42[6] - 1;
                v42[6] = v52;
                if ( !v52 )
                  KiRemoveSystemWorkPriorityKick(v20);
              }
            }
            do
              KeYieldProcessorEx(&v70, v15, v14, v19);
            while ( *(_QWORD *)v22 );
            v43 = v20->SchedulerAssist;
            if ( v43 )
            {
              if ( v20->NestingLevel <= 1u )
              {
                v53 = v43[6];
                v43[6] = v53 + 1;
                if ( v53 == -1 )
                  goto LABEL_77;
              }
            }
          }
          goto LABEL_13;
        }
        v22 = (volatile signed __int32 *)(v12 + 32 * (v10 + 16));
        if ( v21 )
        {
          if ( v20->NestingLevel <= 1u )
          {
            v54 = v21[6];
            v21[6] = v54 + 1;
            if ( v54 == -1 )
            {
              KiRemoveSystemWorkPriorityKick(v20);
              v19 = v73;
            }
          }
        }
        if ( _interlockedbittestandset64(v22, 0LL) )
        {
          v44 = v20->SchedulerAssist;
          if ( v44 )
          {
            if ( v20->NestingLevel <= 1u )
            {
              v55 = v44[6] - 1;
              v44[6] = v55;
              if ( !v55 )
                KiRemoveSystemWorkPriorityKick(v20);
            }
          }
          _mm_pause();
          goto LABEL_33;
        }
        if ( !v22 )
        {
LABEL_33:
          _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
          v33 = KeGetCurrentPrcb();
          v34 = (__int64)v33->SchedulerAssist;
          if ( v34 )
          {
            if ( v33->NestingLevel <= 1u )
            {
              v56 = *(_DWORD *)(v34 + 24) - 1;
              *(_DWORD *)(v34 + 24) = v56;
              if ( !v56 )
                KiRemoveSystemWorkPriorityKick(v33);
            }
          }
          v35 = KeGetCurrentPrcb();
          v71 = 0;
          v36 = v35->SchedulerAssist;
          if ( v36 )
          {
            if ( v35->NestingLevel <= 1u )
            {
              v57 = v36[6];
              v36[6] = v57 + 1;
              if ( v57 == -1 )
LABEL_95:
                KiRemoveSystemWorkPriorityKick(v35);
            }
          }
          while ( _interlockedbittestandset64(v22, 0LL) )
          {
            v45 = v35->SchedulerAssist;
            if ( v45 )
            {
              if ( v35->NestingLevel <= 1u )
              {
                v58 = v45[6] - 1;
                v45[6] = v58;
                if ( !v58 )
                  KiRemoveSystemWorkPriorityKick(v35);
              }
            }
            do
              KeYieldProcessorEx(&v71, v34, v14, v19);
            while ( *(_QWORD *)v22 );
            v46 = v35->SchedulerAssist;
            if ( v46 )
            {
              if ( v35->NestingLevel <= 1u )
              {
                v59 = v46[6];
                v46[6] = v59 + 1;
                if ( v59 == -1 )
                  goto LABEL_95;
              }
            }
          }
          v37 = KeGetCurrentPrcb();
          v13 = (volatile signed __int32 *)(v12 + 32 * (v10 + 272));
          v72[0] = 0;
          v38 = v37->SchedulerAssist;
          if ( v38 )
          {
            if ( v37->NestingLevel <= 1u )
            {
              v60 = v38[6];
              v38[6] = v60 + 1;
              if ( v60 == -1 )
LABEL_104:
                KiRemoveSystemWorkPriorityKick(v37);
            }
          }
          while ( _interlockedbittestandset64(v13, 0LL) )
          {
            v61 = v37->SchedulerAssist;
            if ( v61 )
            {
              if ( v37->NestingLevel <= 1u )
              {
                v62 = v61[6] - 1;
                v61[6] = v62;
                if ( !v62 )
                  KiRemoveSystemWorkPriorityKick(v37);
              }
            }
            do
              KeYieldProcessorEx(v72, v34, v14, v19);
            while ( *(_QWORD *)v13 );
            v63 = v37->SchedulerAssist;
            if ( v63 )
            {
              if ( v37->NestingLevel <= 1u )
              {
                v64 = v63[6];
                v63[6] = v64 + 1;
                if ( v64 == -1 )
                  goto LABEL_104;
              }
            }
          }
LABEL_13:
          v19 = v73;
        }
        if ( *(_DWORD *)(v17 + v12 + 28) == -1 && *(_DWORD *)(v19 + 28) == -1 )
        {
          v23 = qword_140D07E98[2 * *(unsigned __int8 *)(v12 - 15152)];
          if ( KiSerializeTimerExpiration )
          {
            v24 = v10 & 0x3F;
            v25 = (volatile signed __int32 *)(v23 + 8LL * ((unsigned int)v10 >> 6));
          }
          else
          {
            v24 = *(unsigned __int8 *)(v12 - 15151);
            v25 = (volatile signed __int32 *)((v10 << 6) + v23);
          }
          _interlockedbittestandreset64(v25, v24);
        }
        _InterlockedAnd64((volatile signed __int64 *)v22, 0LL);
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        if ( v27 )
        {
          if ( v26->NestingLevel <= 1u )
          {
            v65 = v27[6] - 1;
            v27[6] = v65;
            if ( !v65 )
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
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
      v30 = -1073741953;
      v31 = -1073741825;
LABEL_22:
      if ( !v5 )
        v30 = v31;
      _InterlockedAnd((volatile signed __int32 *)a1, v30);
      v4 = 1;
      goto LABEL_25;
    }
    _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
    v41 = KeGetCurrentPrcb();
    a2 = (__int64)v41->SchedulerAssist;
    if ( a2 )
    {
      if ( v41->NestingLevel <= 1u )
      {
        v50 = *(_DWORD *)(a2 + 24) - 1;
        *(_DWORD *)(a2 + 24) = v50;
        if ( !v50 )
          KiRemoveSystemWorkPriorityKick(v41);
      }
    }
    if ( _InterlockedExchange64((volatile __int64 *)(v12 + 8LL * (*(_BYTE *)(a1 + 3) & 0x3F)), 0LL) )
    {
      v30 = 16777087;
      v31 = 0xFFFFFF;
      goto LABEL_22;
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    v67 = 0;
    while ( *(char *)(a1 + 3) < 0 )
      KeYieldProcessorEx(&v67, a2, a3, a4);
  }
  if ( v5 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_25:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v4 )
  {
    v74 = a1;
    v75[0] = &v74;
    v75[1] = 8LL;
    EtwTraceKernelEvent((unsigned int)v75, 1, 1073872896, 3925, 1538);
  }
  return v4;
}
