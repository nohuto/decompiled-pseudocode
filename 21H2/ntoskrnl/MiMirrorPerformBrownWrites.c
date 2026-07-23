/*
 * XREFs of MiMirrorPerformBrownWrites @ 0x140382400
 * Callers:
 *     MiMirrorBrownPhase @ 0x14099668C (MiMirrorBrownPhase.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiAddLockedPageCharge @ 0x140325158 (MiAddLockedPageCharge.c)
 *     MiPfnReferenceCountIsZero @ 0x140330B40 (MiPfnReferenceCountIsZero.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiDiscardTransitionPteEx @ 0x140388FE4 (MiDiscardTransitionPteEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiMirrorPerformBrownWrites(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r12d
  ULONG_PTR v4; // rsi
  int v5; // ebp
  __int64 v6; // r13
  char v7; // r15
  unsigned __int64 SchedulerAssist; // r9
  unsigned __int64 i; // r8
  _QWORD *v10; // rdi
  unsigned __int64 j; // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  __int64 v14; // r14
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  __int64 v17; // r8
  _DWORD *v18; // r9
  __int64 v20; // r8
  unsigned __int64 v21; // r9
  volatile signed __int32 *v22; // r8
  unsigned int v23; // eax
  unsigned __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // r15
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // rbp
  __int64 v30; // r12
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rdx
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  int v35; // eax
  bool v36; // zf
  unsigned __int64 v37; // rcx
  char v38; // cl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v41; // eax
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  int v45; // eax
  unsigned __int64 v46; // rsi
  unsigned __int64 v47; // rbp
  unsigned __int64 v48; // r15
  unsigned __int8 v49; // cl
  struct _KPRCB *v50; // r10
  int v51; // eax
  int v52; // [rsp+20h] [rbp-68h]
  int v53; // [rsp+28h] [rbp-60h]
  __int64 v54; // [rsp+30h] [rbp-58h]
  char v56; // [rsp+98h] [rbp+10h]
  int v58; // [rsp+A8h] [rbp+20h]

  v56 = a2;
  v3 = 0;
  v52 = 0;
  v4 = 0LL;
  v58 = 0;
  v5 = 0;
  v54 = 0LL;
  v6 = 0LL;
  v7 = a2;
  while ( 1 )
  {
    SchedulerAssist = v4 & -(__int64)(v4 < qword_140C4E750);
    for ( i = qword_140C4E750 - 1; i - SchedulerAssist == -1LL; i = v20 - 1 )
    {
      v12 = -1LL;
LABEL_46:
      if ( !SchedulerAssist )
        goto LABEL_10;
      v20 = v4 + 1;
      SchedulerAssist = 0LL;
      if ( v4 + 1 > qword_140C4E750 )
        v20 = qword_140C4E750;
    }
    a2 = (1LL << (SchedulerAssist & 0x3F)) - 1;
    v10 = (_QWORD *)(qword_140C4E758 + 8 * (SchedulerAssist >> 6));
    for ( j = a2 | ~*v10; j == -1LL; j = ~*v10 )
    {
      if ( (unsigned __int64)++v10 > qword_140C4E758 + 8 * (i >> 6) )
        goto LABEL_43;
    }
    _BitScanForward64(&j, ~j);
    v12 = j + (((__int64)v10 - qword_140C4E758) >> 3 << 6);
    if ( v12 > i )
    {
LABEL_43:
      v12 = -1LL;
      goto LABEL_46;
    }
    if ( v12 == -1LL )
      goto LABEL_46;
LABEL_10:
    if ( v12 < v4 || v12 == -1LL )
      goto LABEL_32;
    if ( qword_140C4E750 > v12 )
    {
      v13 = v12;
      SchedulerAssist = qword_140C4E758 + 4 * ((unsigned __int64)(qword_140C4E750 - 1) >> 5);
      i = qword_140C4E758 + 4 * (v12 >> 5);
      if ( i != SchedulerAssist && (*(_DWORD *)i | *((_DWORD *)qword_140012120 + (v12 & 0x1F))) == -1 )
      {
        v13 = (v12 & 0xFFFFFFFFFFFFFFE0uLL) + 32;
        for ( i += 4LL; i < SchedulerAssist && *(_DWORD *)i == -1; i += 4LL )
          v13 += 32LL;
      }
      while ( v13 < qword_140C4E750 && _bittest64((const signed __int64 *)qword_140C4E758, v13) )
        ++v13;
      v14 = 0LL;
      if ( i != SchedulerAssist )
      {
        a2 = *(unsigned int *)i;
        if ( ((unsigned int)a2 & ~*((_DWORD *)qword_140012120 + (v13 & 0x1F))) == 0 )
        {
          v14 = 32 - (v13 & 0x1F);
          if ( v14 == -1 )
            goto LABEL_26;
          i += 4LL;
          while ( i < SchedulerAssist && !*(_DWORD *)i )
          {
            i += 4LL;
            v14 += 32LL;
            if ( v14 == -1 )
              goto LABEL_26;
          }
        }
      }
      a2 = qword_140C4E750;
      v15 = v14 + v13;
      if ( v14 + v13 < qword_140C4E750 )
      {
        do
        {
          if ( _bittest64((const signed __int64 *)qword_140C4E758, v15) )
            break;
          if ( v14 == -1 )
            break;
          ++v15;
          ++v14;
        }
        while ( v15 < qword_140C4E750 );
        v3 = v52;
      }
LABEL_26:
      if ( v14 )
        goto LABEL_27;
      goto LABEL_51;
    }
    v14 = 0LL;
LABEL_51:
    v13 = qword_140C4E750;
LABEL_27:
    v16 = v13 - v12;
    v53 = v7 & 8;
    if ( (v7 & 8) == 0 )
      goto LABEL_28;
    if ( v5 != 1 )
      break;
    v21 = v12 & 0x1F;
    a2 = v16;
    v22 = (volatile signed __int32 *)(qword_140C4E768 + 4 * (v12 >> 5));
    if ( v21 + v16 <= 0x20 )
    {
      if ( v16 == 32 )
      {
        *v22 = -1;
        goto LABEL_65;
      }
      v23 = ((1 << v16) - 1) << v21;
      goto LABEL_64;
    }
    if ( (v12 & 0x1F) != 0 )
    {
      _InterlockedOr(v22, ((1 << (32 - (v12 & 0x1F))) - 1) << v21);
      a2 = v16 - (32 - (unsigned int)(v12 & 0x1F));
      ++v22;
    }
    if ( a2 >= 0x20 )
    {
      v24 = a2 >> 5;
      a2 += -32LL * (a2 >> 5);
      do
      {
        *v22++ = -1;
        --v24;
      }
      while ( v24 );
    }
    if ( a2 )
    {
      v23 = (1 << a2) - 1;
LABEL_64:
      _InterlockedOr(v22, v23);
    }
LABEL_65:
    v4 = v16 + v14 + v12;
LABEL_31:
    if ( v4 >= qword_140C4E750 )
      goto LABEL_32;
  }
  v4 = v12;
  v25 = 3 * v12;
  v14 = 0LL;
  v26 = -1LL;
  if ( v16 > 0x100 )
    v16 = 256LL;
  v27 = 16 * v25 - 0x58000000000LL;
  v28 = v27 + 48 * v16;
  v29 = v27 + 24;
  while ( 1 )
  {
    v30 = v26;
    v31 = (unsigned __int8)MiLockPageInline(v27, a2, i, (_DWORD *)SchedulerAssist);
    if ( *(_WORD *)(v29 + 8) || (unsigned __int8)((*(_BYTE *)(v29 + 10) & 7) - 2) > 2u )
    {
      _InterlockedAnd64((volatile signed __int64 *)v29, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v31 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            a2 = -1LL << ((unsigned __int8)v31 + 1);
            SchedulerAssist = (unsigned __int64)CurrentPrcb->SchedulerAssist;
            v41 = ~(unsigned __int16)a2;
            v36 = (v41 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
            i = (unsigned int)v41 & *(_DWORD *)(SchedulerAssist + 20);
            *(_DWORD *)(SchedulerAssist + 20) = i;
            if ( v36 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v31);
      if ( v26 != -1 )
        goto LABEL_114;
      goto LABEL_100;
    }
    if ( !(unsigned int)MiUnlinkPageFromList(v27, 0) )
      break;
    *(_QWORD *)v29 &= 0xC000000000000000uLL;
    if ( !(unsigned int)MiAddLockedPageCharge(v27, 0) )
    {
      MiPfnReferenceCountIsZero(v27, v4);
      goto LABEL_104;
    }
    SchedulerAssist = v4 & 0x1F;
    LOBYTE(v32) = 1;
    i = qword_140C4E768 + 4 * (v4 >> 5);
    if ( SchedulerAssist + 1 <= 0x20 )
    {
      _InterlockedAnd((volatile signed __int32 *)i, ~(1 << SchedulerAssist));
LABEL_75:
      a2 = -1LL;
      goto LABEL_76;
    }
    if ( (v4 & 0x1F) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)i, ~(((1 << (32 - (v4 & 0x1F))) - 1) << SchedulerAssist));
      i += 4LL;
      v32 = 1LL - (32 - (unsigned int)(v4 & 0x1F));
      if ( v32 >= 0x20 )
      {
        v37 = v32 >> 5;
        v32 += -32LL * (v32 >> 5);
        do
        {
          *(_DWORD *)i = 0;
          i += 4LL;
          --v37;
        }
        while ( v37 );
      }
      if ( !v32 )
        goto LABEL_75;
    }
    v38 = v32;
    a2 = -1LL;
    _InterlockedAnd((volatile signed __int32 *)i, -1 << v38);
LABEL_76:
    _InterlockedAnd64((volatile signed __int64 *)v29, 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v33 = KeGetCurrentIrql();
        if ( v33 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v33 >= 2u )
        {
          v34 = KeGetCurrentPrcb();
          a2 = -1LL << ((unsigned __int8)v31 + 1);
          v35 = ~(unsigned __int16)a2;
          SchedulerAssist = (unsigned __int64)v34->SchedulerAssist;
          v36 = (v35 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
          i = (unsigned int)v35 & *(_DWORD *)(SchedulerAssist + 20);
          *(_DWORD *)(SchedulerAssist + 20) = i;
          if ( v36 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
    }
    __writecr8(v31);
    v26 = v4;
    if ( v30 != -1 )
      v26 = v30;
LABEL_100:
    v27 += 48LL;
    v29 += 48LL;
    ++v4;
    if ( v27 >= v28 )
    {
      v5 = v58;
      goto LABEL_112;
    }
  }
  MiDiscardTransitionPteEx(v27, 0LL);
LABEL_104:
  _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v42 = KeGetCurrentIrql();
      if ( v42 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v42 >= 2u )
      {
        v43 = KeGetCurrentPrcb();
        a2 = -1LL << ((unsigned __int8)v31 + 1);
        v44 = v43->SchedulerAssist;
        v45 = ~(unsigned __int16)a2;
        v36 = (v45 & v44[5]) == 0;
        v44[5] &= v45;
        if ( v36 )
          KiRemoveSystemWorkPriorityKick(v43);
      }
    }
  }
  __writecr8(v31);
  v5 = 1;
  v58 = 1;
LABEL_112:
  if ( v26 == -1 )
  {
    v3 = v52;
    v6 = v54;
    v7 = v56;
    goto LABEL_31;
  }
LABEL_114:
  v6 = v54;
  v16 = v4 - v26;
  v12 = v26;
LABEL_28:
  v6 += v16;
  v54 = v6;
  v52 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(a1 + 16))(v12 << 12, v16 << 12);
  v3 = v52;
  if ( v53 )
  {
    v46 = 48 * v12 - 0x58000000000LL;
    v47 = v46 + 48 * v16;
    do
    {
      v48 = (unsigned __int8)MiLockPageInline(v46, a2, v17, v18);
      MiRemoveLockedPageChargeAndDecRef(v46);
      _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v49 = KeGetCurrentIrql();
          if ( v49 <= 0xFu && (unsigned __int8)v48 <= 0xFu && v49 >= 2u )
          {
            v50 = KeGetCurrentPrcb();
            a2 = -1LL << ((unsigned __int8)v48 + 1);
            v18 = v50->SchedulerAssist;
            v51 = ~(unsigned __int16)a2;
            v36 = (v51 & v18[5]) == 0;
            v17 = (unsigned int)v51 & v18[5];
            v18[5] = v17;
            if ( v36 )
              KiRemoveSystemWorkPriorityKick(v50);
          }
        }
      }
      __writecr8(v48);
      v46 += 48LL;
    }
    while ( v46 < v47 );
  }
  if ( v52 >= 0 )
  {
    v5 = v58;
    v7 = v56;
    v4 = v14 + v12 + v16;
    goto LABEL_31;
  }
LABEL_32:
  *a3 = v6;
  return v3;
}
