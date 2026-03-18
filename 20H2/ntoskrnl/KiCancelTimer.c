/*
 * XREFs of KiCancelTimer @ 0x14021E0C0
 * Callers:
 *     KiSwapThread @ 0x14021C4C0 (KiSwapThread.c)
 *     KiSetTimerEx @ 0x140247520 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x1402476E0 (KeSetTimerEx.c)
 *     KeCancelTimer @ 0x1402479F0 (KeCancelTimer.c)
 *     ExpCancelTimer @ 0x14028A550 (ExpCancelTimer.c)
 *     KiSuspendThread @ 0x1402EC150 (KiSuspendThread.c)
 *     KeCancelTimerInternal @ 0x140326B14 (KeCancelTimerInternal.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTryToAcquireSpinLockInstrumented @ 0x140514E84 (KiTryToAcquireSpinLockInstrumented.c)
 */

__int64 __fastcall KiCancelTimer(__int64 a1, char a2)
{
  unsigned __int8 v2; // si
  char v3; // r12
  __int64 v5; // rax
  __int64 v6; // r9
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v8; // r15
  _DWORD *SchedulerAssist; // rcx
  __int64 v10; // r13
  volatile signed __int32 *v11; // rdi
  unsigned __int16 v12; // r8
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rsi
  _QWORD *v15; // rax
  __int64 v16; // rbp
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  unsigned int v19; // eax
  int v20; // ecx
  volatile signed __int32 *v22; // r14
  struct _KPRCB *v23; // rdx
  _DWORD *v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // r15
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  _DWORD *v29; // rcx
  _DWORD *v30; // rcx
  struct _KPRCB *v31; // rdx
  _DWORD *v32; // rcx
  struct _KPRCB *v33; // r12
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  _DWORD *v36; // rcx
  _DWORD *v37; // rcx
  _DWORD *v38; // rcx
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  struct _KPRCB *v41; // rdi
  _DWORD *v42; // rcx
  struct _KPRCB *v43; // rcx
  _DWORD *v44; // rdx
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
  v2 = 0;
  v69 = 0;
  v3 = a2;
  while ( 1 )
  {
    v70 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
        KeYieldProcessorEx(&v70);
      while ( (*(_DWORD *)a1 & 0x80u) != 0 );
    }
    if ( (*(_BYTE *)(a1 + 3) & 0xC0) == 0 )
      break;
    v5 = *(unsigned __int16 *)(a1 + 56);
    v6 = *(unsigned __int8 *)(a1 + 2);
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = v6;
    v71 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v10 = KiProcessorBlock[v5] + 14656;
    v11 = (volatile signed __int32 *)(v10 + 32 * (((unsigned __int64)*(unsigned __int16 *)(a1 + 58) << 8) + v6 + 16));
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
    while ( _interlockedbittestandset64(v11, 0LL) )
    {
      v29 = CurrentPrcb->SchedulerAssist;
      if ( v29 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v47 = v29[6] - 1;
          v29[6] = v47;
          if ( !v47 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v71);
      while ( *(_QWORD *)v11 );
      v30 = CurrentPrcb->SchedulerAssist;
      if ( v30 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v48 = v30[6];
          v30[6] = v48 + 1;
          if ( v48 == -1 )
            goto LABEL_66;
        }
      }
    }
    if ( *(char *)(a1 + 3) >= 0 )
    {
      v12 = *(_WORD *)(a1 + 58);
      v13 = *(_QWORD **)(a1 + 32);
      v14 = 32 * (((unsigned __int64)v12 << 8) + v8 + 16);
      v15 = *(_QWORD **)(a1 + 40);
      v16 = 32 * (((v12 ^ 1LL) << 8) + v8 + 16);
      if ( v13[1] != a1 + 32 || *v15 != a1 + 32 )
        __fastfail(3u);
      *v15 = v13;
      v13[1] = v15;
      if ( v15 != v13 )
      {
LABEL_10:
        _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        if ( v18 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v67 = v18[6] - 1;
            v18[6] = v67;
            if ( !v67 )
              KiRemoveSystemWorkPriorityKick(v17);
          }
        }
        v19 = -1073741953;
        v20 = -1073741825;
        goto LABEL_12;
      }
      *(_DWORD *)(v14 + v10 + 28) = -1;
      if ( v12 )
      {
        v22 = (volatile signed __int32 *)(v10 + 32 * (v8 + 16));
        v76 = (struct _KPRCB *)v22;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          if ( (unsigned __int8)KiTryToAcquireSpinLockInstrumented(v10 + 32 * (v8 + 16)) )
            goto LABEL_21;
        }
        else
        {
          v23 = KeGetCurrentPrcb();
          v75 = v23;
          v24 = v23->SchedulerAssist;
          if ( v24 )
          {
            if ( v23->NestingLevel <= 1u )
            {
              v53 = v24[6];
              v24[6] = v53 + 1;
              if ( v53 == -1 )
              {
                KiRemoveSystemWorkPriorityKick(v23);
                v23 = v75;
              }
            }
          }
          if ( !_interlockedbittestandset64(v22, 0LL) )
          {
LABEL_21:
            if ( v22 )
              goto LABEL_22;
            _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
            v39 = KeGetCurrentPrcb();
            v40 = v39->SchedulerAssist;
            if ( v40 )
            {
              if ( v39->NestingLevel <= 1u )
              {
                v55 = v40[6] - 1;
                v40[6] = v55;
                if ( !v55 )
                  KiRemoveSystemWorkPriorityKick(v39);
              }
            }
            v41 = KeGetCurrentPrcb();
            v22 = (volatile signed __int32 *)v76;
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
            while ( _interlockedbittestandset64(v22, 0LL) )
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
                KeYieldProcessorEx(&v73);
              while ( *(_QWORD *)v22 );
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
            v11 = (volatile signed __int32 *)(v10 + 32 * (v8 + 272));
            v76 = v43;
            v74 = 0;
            v44 = v43->SchedulerAssist;
            if ( v44 )
            {
              if ( v43->NestingLevel <= 1u )
              {
                v61 = v44[6];
                v44[6] = v61 + 1;
                if ( v61 == -1 )
                  KiRemoveSystemWorkPriorityKick(v43);
              }
            }
            v45 = v76;
            while ( _interlockedbittestandset64(v11, 0LL) )
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
                KeYieldProcessorEx(&v74);
              while ( *(_QWORD *)v11 );
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
            v3 = a2;
LABEL_22:
            if ( *(_DWORD *)(v14 + v10 + 28) == -1 && *(_DWORD *)(v16 + v10 + 28) == -1 )
            {
              if ( KiSerializeTimerExpiration )
              {
                v25 = v8 & 0x3F;
                v26 = 8LL * ((unsigned int)v8 >> 6);
              }
              else
              {
                v25 = *(unsigned __int8 *)(v10 - 14447);
                v26 = v8 << 6;
              }
              _interlockedbittestandreset64(
                (volatile signed __int32 *)(qword_140CFD7A8[2 * *(unsigned __int8 *)(v10 - 14448)] + v26),
                v25);
            }
            _InterlockedAnd64((volatile signed __int64 *)v22, 0LL);
            v27 = KeGetCurrentPrcb();
            v28 = v27->SchedulerAssist;
            if ( v28 )
            {
              if ( v27->NestingLevel <= 1u )
              {
                v66 = v28[6] - 1;
                v28[6] = v66;
                if ( !v66 )
                  KiRemoveSystemWorkPriorityKick(v27);
              }
            }
            goto LABEL_10;
          }
          v38 = v23->SchedulerAssist;
          if ( v38 )
          {
            if ( v23->NestingLevel <= 1u )
            {
              v54 = v38[6] - 1;
              v38[6] = v54;
              if ( !v54 )
                KiRemoveSystemWorkPriorityKick(v23);
            }
          }
          _mm_pause();
        }
        v22 = 0LL;
        goto LABEL_21;
      }
      v31 = KeGetCurrentPrcb();
      v22 = (volatile signed __int32 *)(v10 + 32 * (v8 + 272));
      v75 = v31;
      v72 = 0;
      v32 = v31->SchedulerAssist;
      if ( v32 )
      {
        if ( v31->NestingLevel <= 1u )
        {
          v50 = v32[6];
          v32[6] = v50 + 1;
          if ( v50 == -1 )
            KiRemoveSystemWorkPriorityKick(v31);
        }
      }
      v33 = v75;
      while ( _interlockedbittestandset64(v22, 0LL) )
      {
        v36 = v33->SchedulerAssist;
        if ( v36 )
        {
          if ( v33->NestingLevel <= 1u )
          {
            v51 = v36[6] - 1;
            v36[6] = v51;
            if ( !v51 )
              KiRemoveSystemWorkPriorityKick(v33);
          }
        }
        do
          KeYieldProcessorEx(&v72);
        while ( *(_QWORD *)v22 );
        v37 = v33->SchedulerAssist;
        if ( v37 )
        {
          if ( v33->NestingLevel <= 1u )
          {
            v52 = v37[6];
            v37[6] = v52 + 1;
            if ( v52 == -1 )
              KiRemoveSystemWorkPriorityKick(v33);
          }
        }
      }
      goto LABEL_39;
    }
    _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
    v34 = KeGetCurrentPrcb();
    v35 = v34->SchedulerAssist;
    if ( v35 )
    {
      if ( v34->NestingLevel <= 1u )
      {
        v49 = v35[6] - 1;
        v35[6] = v49;
        if ( !v49 )
          KiRemoveSystemWorkPriorityKick(v34);
      }
    }
    if ( _InterlockedExchange64((volatile __int64 *)(v10 + 8LL * (*(_BYTE *)(a1 + 3) & 0x3F)), 0LL) )
    {
      v19 = 16777087;
      v20 = 0xFFFFFF;
LABEL_12:
      if ( !v3 )
        v19 = v20;
      _InterlockedAnd((volatile signed __int32 *)a1, v19);
      v2 = 1;
      goto LABEL_15;
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    v69 = 0;
    while ( *(char *)(a1 + 3) < 0 )
      KeYieldProcessorEx(&v69);
  }
  if ( v3 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_15:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v2 )
  {
    v77 = a1;
    v78[0] = &v77;
    v78[1] = 8LL;
    EtwTraceKernelEvent((unsigned int)v78, 1, 1073872896, 3925, 1538);
  }
  return v2;
}
