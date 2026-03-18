/*
 * XREFs of KiCancelTimer @ 0x14020DF00
 * Callers:
 *     KiSwapThread @ 0x14020C300 (KiSwapThread.c)
 *     KeSetTimerEx @ 0x140210F50 (KeSetTimerEx.c)
 *     KiSetTimerEx @ 0x1402C90A0 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1402C9300 (KeCancelTimer.c)
 *     KiSuspendThread @ 0x1402FADDC (KiSuspendThread.c)
 *     ExpCancelTimer @ 0x1403003F0 (ExpCancelTimer.c)
 *     KeCancelTimerInternal @ 0x140356410 (KeCancelTimerInternal.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140250918 (EtwTraceKernelEvent.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTryToAcquireSpinLockInstrumented @ 0x140511554 (KiTryToAcquireSpinLockInstrumented.c)
 */

__int64 __fastcall KiCancelTimer(__int64 a1, _DWORD *a2)
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
  _DWORD *v35; // rcx
  _DWORD *v36; // rcx
  _DWORD *v37; // rcx
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  struct _KPRCB *v40; // rdi
  _DWORD *v41; // rcx
  struct _KPRCB *v42; // rcx
  _DWORD *v43; // rdx
  struct _KPRCB *v44; // r12
  int v45; // eax
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
  _DWORD *v56; // rcx
  int v57; // eax
  _DWORD *v58; // rcx
  int v59; // eax
  int v60; // eax
  _DWORD *v61; // rcx
  int v62; // eax
  _DWORD *v63; // rcx
  int v64; // eax
  int v65; // eax
  int v66; // eax
  char v67; // [rsp+30h] [rbp-78h]
  int v68; // [rsp+34h] [rbp-74h] BYREF
  int v69; // [rsp+38h] [rbp-70h] BYREF
  int v70; // [rsp+3Ch] [rbp-6Ch] BYREF
  int v71; // [rsp+40h] [rbp-68h] BYREF
  int v72; // [rsp+44h] [rbp-64h] BYREF
  int v73; // [rsp+48h] [rbp-60h] BYREF
  struct _KPRCB *v74; // [rsp+50h] [rbp-58h]
  struct _KPRCB *v75; // [rsp+58h] [rbp-50h]
  __int64 v76; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v77[2]; // [rsp+68h] [rbp-40h] BYREF

  v76 = 0LL;
  v2 = 0;
  v68 = 0;
  v3 = (char)a2;
  v67 = (char)a2;
  while ( 1 )
  {
    v69 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
        KeYieldProcessorEx(&v69, a2);
      while ( (*(_DWORD *)a1 & 0x80u) != 0 );
    }
    if ( (*(_BYTE *)(a1 + 3) & 0xC0) == 0 )
      break;
    v5 = *(unsigned __int16 *)(a1 + 56);
    v6 = *(unsigned __int8 *)(a1 + 2);
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = v6;
    v70 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v10 = KiProcessorBlock[v5] + 14656;
    v11 = (volatile signed __int32 *)(v10 + 32 * (((unsigned __int64)*(unsigned __int16 *)(a1 + 58) << 8) + v6 + 16));
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v45 = SchedulerAssist[6];
        SchedulerAssist[6] = v45 + 1;
        if ( v45 == -1 )
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
          v46 = v29[6] - 1;
          v29[6] = v46;
          if ( !v46 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v70, a2);
      while ( *(_QWORD *)v11 );
      v30 = CurrentPrcb->SchedulerAssist;
      if ( v30 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v47 = v30[6];
          v30[6] = v47 + 1;
          if ( v47 == -1 )
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
            v66 = v18[6] - 1;
            v18[6] = v66;
            if ( !v66 )
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
        v75 = (struct _KPRCB *)v22;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          if ( (unsigned __int8)KiTryToAcquireSpinLockInstrumented(v10 + 32 * (v8 + 16)) )
            goto LABEL_21;
        }
        else
        {
          v23 = KeGetCurrentPrcb();
          v74 = v23;
          v24 = v23->SchedulerAssist;
          if ( v24 )
          {
            if ( v23->NestingLevel <= 1u )
            {
              v52 = v24[6];
              v24[6] = v52 + 1;
              if ( v52 == -1 )
              {
                KiRemoveSystemWorkPriorityKick(v23);
                v23 = v74;
              }
            }
          }
          if ( !_interlockedbittestandset64(v22, 0LL) )
          {
LABEL_21:
            if ( v22 )
              goto LABEL_22;
            _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
            v38 = KeGetCurrentPrcb();
            v39 = v38->SchedulerAssist;
            if ( v39 )
            {
              if ( v38->NestingLevel <= 1u )
              {
                v54 = v39[6] - 1;
                v39[6] = v54;
                if ( !v54 )
                  KiRemoveSystemWorkPriorityKick(v38);
              }
            }
            v40 = KeGetCurrentPrcb();
            v22 = (volatile signed __int32 *)v75;
            v72 = 0;
            v41 = v40->SchedulerAssist;
            if ( v41 )
            {
              if ( v40->NestingLevel <= 1u )
              {
                v55 = v41[6];
                v41[6] = v55 + 1;
                if ( v55 == -1 )
LABEL_98:
                  KiRemoveSystemWorkPriorityKick(v40);
              }
            }
            while ( _interlockedbittestandset64(v22, 0LL) )
            {
              v56 = v40->SchedulerAssist;
              if ( v56 )
              {
                if ( v40->NestingLevel <= 1u )
                {
                  v57 = v56[6] - 1;
                  v56[6] = v57;
                  if ( !v57 )
                    KiRemoveSystemWorkPriorityKick(v40);
                }
              }
              do
                KeYieldProcessorEx(&v72, v39);
              while ( *(_QWORD *)v22 );
              v58 = v40->SchedulerAssist;
              if ( v58 )
              {
                if ( v40->NestingLevel <= 1u )
                {
                  v59 = v58[6];
                  v58[6] = v59 + 1;
                  if ( v59 == -1 )
                    goto LABEL_98;
                }
              }
            }
            v42 = KeGetCurrentPrcb();
            v11 = (volatile signed __int32 *)(v10 + 32 * (v8 + 272));
            v75 = v42;
            v73 = 0;
            v43 = v42->SchedulerAssist;
            if ( v43 )
            {
              if ( v42->NestingLevel <= 1u )
              {
                v60 = v43[6];
                v43[6] = v60 + 1;
                if ( v60 == -1 )
                  KiRemoveSystemWorkPriorityKick(v42);
              }
            }
            v44 = v75;
            while ( _interlockedbittestandset64(v11, 0LL) )
            {
              v61 = v44->SchedulerAssist;
              if ( v61 )
              {
                if ( v44->NestingLevel <= 1u )
                {
                  v62 = v61[6] - 1;
                  v61[6] = v62;
                  if ( !v62 )
                    KiRemoveSystemWorkPriorityKick(v44);
                }
              }
              do
                KeYieldProcessorEx(&v73, v43);
              while ( *(_QWORD *)v11 );
              v63 = v44->SchedulerAssist;
              if ( v63 )
              {
                if ( v44->NestingLevel <= 1u )
                {
                  v64 = v63[6];
                  v63[6] = v64 + 1;
                  if ( v64 == -1 )
                    KiRemoveSystemWorkPriorityKick(v44);
                }
              }
            }
LABEL_39:
            v3 = v67;
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
                v65 = v28[6] - 1;
                v28[6] = v65;
                if ( !v65 )
                  KiRemoveSystemWorkPriorityKick(v27);
              }
            }
            goto LABEL_10;
          }
          v37 = v23->SchedulerAssist;
          if ( v37 )
          {
            if ( v23->NestingLevel <= 1u )
            {
              v53 = v37[6] - 1;
              v37[6] = v53;
              if ( !v53 )
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
      v74 = v31;
      v71 = 0;
      v32 = v31->SchedulerAssist;
      if ( v32 )
      {
        if ( v31->NestingLevel <= 1u )
        {
          v49 = v32[6];
          v32[6] = v49 + 1;
          if ( v49 == -1 )
            KiRemoveSystemWorkPriorityKick(v31);
        }
      }
      v33 = v74;
      while ( _interlockedbittestandset64(v22, 0LL) )
      {
        v35 = v33->SchedulerAssist;
        if ( v35 )
        {
          if ( v33->NestingLevel <= 1u )
          {
            v50 = v35[6] - 1;
            v35[6] = v50;
            if ( !v50 )
              KiRemoveSystemWorkPriorityKick(v33);
          }
        }
        do
          KeYieldProcessorEx(&v71, v31);
        while ( *(_QWORD *)v22 );
        v36 = v33->SchedulerAssist;
        if ( v36 )
        {
          if ( v33->NestingLevel <= 1u )
          {
            v51 = v36[6];
            v36[6] = v51 + 1;
            if ( v51 == -1 )
              KiRemoveSystemWorkPriorityKick(v33);
          }
        }
      }
      goto LABEL_39;
    }
    _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
    v34 = KeGetCurrentPrcb();
    a2 = v34->SchedulerAssist;
    if ( a2 )
    {
      if ( v34->NestingLevel <= 1u )
      {
        v48 = a2[6] - 1;
        a2[6] = v48;
        if ( !v48 )
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
    v68 = 0;
    while ( *(char *)(a1 + 3) < 0 )
      KeYieldProcessorEx(&v68, a2);
  }
  if ( v3 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_15:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v2 )
  {
    v76 = a1;
    v77[0] = &v76;
    v77[1] = 8LL;
    EtwTraceKernelEvent((unsigned int)v77, 1, 1073872896, 3925, 1538);
  }
  return v2;
}
