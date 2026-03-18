/*
 * XREFs of MiCoalesceFreeLargePages @ 0x14034D440
 * Callers:
 *     MiRebuildLargeZeroPage @ 0x140304F60 (MiRebuildLargeZeroPage.c)
 * Callees:
 *     MiIsPfn @ 0x14021F200 (MiIsPfn.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     MiUnlockDynamicMemoryShared @ 0x1402FFEF0 (MiUnlockDynamicMemoryShared.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F42B0 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePagePromote @ 0x1403F55FC (MiLargePagePromote.c)
 *     MiLargePfnPromoteCandidate @ 0x1403F5884 (MiLargePfnPromoteCandidate.c)
 *     MiChangePageHeatImmediate @ 0x1403F6514 (MiChangePageHeatImmediate.c)
 */

char __fastcall MiCoalesceFreeLargePages(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 v5; // r15
  unsigned __int64 v6; // r12
  __int64 v7; // rbp
  unsigned __int8 v8; // r13
  unsigned int v9; // esi
  unsigned __int64 v10; // r14
  __int64 v11; // r13
  unsigned int v12; // ecx
  unsigned int *v13; // r9
  int v14; // eax
  unsigned int v15; // r12d
  __int64 v16; // r8
  unsigned int v17; // edx
  unsigned int v18; // r11d
  unsigned int v19; // r10d
  unsigned int v20; // esi
  __int64 v21; // rbx
  __int64 v22; // rbp
  unsigned __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  bool v30; // zf
  unsigned __int64 i; // rax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  int v35; // eax
  int v39; // [rsp+30h] [rbp-78h] BYREF
  __int64 v40; // [rsp+38h] [rbp-70h]
  unsigned int v41; // [rsp+40h] [rbp-68h]
  __int64 v42; // [rsp+48h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-58h]
  __int128 v44; // [rsp+58h] [rbp-50h] BYREF

  v42 = a1;
  v3 = MiLargePageSizes[a3];
  v4 = MiLargePageSizes[a3 - 1];
  v41 = a3 - 1;
  v44 = 0LL;
  v5 = 48 * a2 - 0x58000000000LL;
  v6 = a2;
  v39 = 0;
  v7 = v5;
  v40 = v5;
  v8 = 17;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(a1 + 192, 0LL);
  v9 = 0;
  v10 = v4 / v3;
  if ( v4 / v3 )
  {
    v11 = v42;
    do
    {
      if ( !(unsigned int)MiIsPfn(v6) )
        break;
      if ( !(unsigned int)MiLargePfnPromoteCandidate(v11, v7, a3) )
        break;
      ++v9;
      v6 += v3;
      ++*((_DWORD *)&v44 + ((unsigned __int64)*(unsigned __int8 *)(v7 + 34) >> 6));
      v7 += 48 * v3;
    }
    while ( v9 < v10 );
    v5 = v40;
    v8 = 17;
  }
  if ( v9 == v10 )
  {
    v12 = 0;
    v13 = (unsigned int *)&v44;
    v14 = 0;
    v15 = 1;
    LODWORD(v16) = 0;
    do
    {
      v17 = *v13;
      v18 = v15;
      v19 = v12;
      if ( *v13 && v12 )
        v14 = 1;
      v15 = v16;
      v12 = *v13;
      if ( v19 >= v17 )
        v15 = v18;
      v16 = (unsigned int)(v16 + 1);
      ++v13;
      if ( v19 >= v17 )
        v12 = v19;
    }
    while ( (unsigned int)v16 < 4 );
    if ( v14 && (v20 = 0, v21 = v5, v10) )
    {
      while ( (unsigned int)MiChangePageAttributeLargeFreeZeroPage(v21, a3, v15, v13) )
      {
        ++v20;
        v21 += 48 * v3;
        if ( v20 >= v10 )
          goto LABEL_21;
      }
    }
    else
    {
LABEL_21:
      v22 = 0LL;
      v23 = a2;
      v24 = v5;
      v40 = a2;
      if ( v10 )
      {
        while ( (unsigned int)MiIsPfn(v23) )
        {
          if ( v24 == v5 )
          {
            v8 = MiLockPageInline(v24);
          }
          else if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
          {
            break;
          }
          if ( !(unsigned int)MiLargePfnPromoteCandidate(v42, v24, a3) || *(unsigned __int8 *)(v24 + 34) >> 6 != v15 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v24 == v5 )
            {
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  if ( CurrentIrql <= 0xFu && v8 <= 0xFu && CurrentIrql >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    SchedulerAssist = CurrentPrcb->SchedulerAssist;
                    v29 = ~(unsigned __int16)(-1LL << (v8 + 1));
                    v30 = (v29 & SchedulerAssist[5]) == 0;
                    v16 = (unsigned int)v29 & SchedulerAssist[5];
                    SchedulerAssist[5] = v16;
                    if ( v30 )
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  }
                }
              }
              __writecr8(v8);
            }
            break;
          }
          v22 = (unsigned int)(v22 + 1);
          v24 += 48 * v3;
          v23 = v3 + v40;
          v40 += v3;
          if ( (unsigned int)v22 >= v10 )
            break;
        }
      }
      if ( (unsigned int)v22 == v10 )
      {
        MiLargePagePromote(a2, a3, v16, &v39);
        v25 = v5 + 48 * v3;
      }
      else
      {
        v25 = v5 & -(__int64)((_DWORD)v22 != 0);
      }
      if ( (_DWORD)v22 )
      {
        for ( i = v5 + v3 * (48 * v22 - 48); i != v25; i -= 48 * v3 )
          _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
        _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v32 = KeGetCurrentIrql();
            if ( v32 <= 0xFu && v8 <= 0xFu && v32 >= 2u )
            {
              v33 = KeGetCurrentPrcb();
              v34 = v33->SchedulerAssist;
              v35 = ~(unsigned __int16)(-1LL << (v8 + 1));
              v30 = (v35 & v34[5]) == 0;
              v34[5] &= v35;
              if ( v30 )
                KiRemoveSystemWorkPriorityKick(v33);
            }
          }
        }
        __writecr8(v8);
      }
      if ( v39 )
        MiChangePageHeatImmediate(a2, v41, 0LL);
    }
  }
  return MiUnlockDynamicMemoryShared(v42, (__int64)CurrentThread);
}
