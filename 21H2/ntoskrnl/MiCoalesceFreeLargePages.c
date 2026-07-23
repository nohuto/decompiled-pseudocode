/*
 * XREFs of MiCoalesceFreeLargePages @ 0x14030DEF0
 * Callers:
 *     MiRebuildLargeZeroPage @ 0x14021F3F0 (MiRebuildLargeZeroPage.c)
 * Callees:
 *     MiUnlockDynamicMemoryShared @ 0x1402138C0 (MiUnlockDynamicMemoryShared.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiIsPfn @ 0x140353EA0 (MiIsPfn.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F5A4C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePagePromote @ 0x1403F6D98 (MiLargePagePromote.c)
 *     MiLargePfnPromoteCandidate @ 0x1403F7020 (MiLargePfnPromoteCandidate.c)
 *     MiChangePageHeatImmediate @ 0x1403F7CB0 (MiChangePageHeatImmediate.c)
 */

__int64 __fastcall MiCoalesceFreeLargePages(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rbp
  unsigned __int8 v8; // r13
  unsigned __int64 v9; // rdx
  unsigned int v10; // esi
  unsigned __int64 v11; // r14
  __int64 v12; // r13
  unsigned int v13; // ecx
  unsigned int *v14; // r9
  int v15; // eax
  unsigned int v16; // r12d
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned int v19; // r11d
  unsigned int v20; // r10d
  unsigned int v21; // esi
  __int64 v22; // rbx
  __int64 v23; // rbp
  unsigned __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rdx
  _DWORD *v27; // r9
  __int64 v28; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  bool v33; // zf
  unsigned __int64 i; // rax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  int v38; // eax
  int v42; // [rsp+30h] [rbp-78h] BYREF
  __int64 v43; // [rsp+38h] [rbp-70h]
  unsigned int v44; // [rsp+40h] [rbp-68h]
  __int64 v45; // [rsp+48h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-58h]
  __int128 v47; // [rsp+58h] [rbp-50h] BYREF

  v45 = a1;
  v3 = MiLargePageSizes[a3];
  v4 = MiLargePageSizes[a3 - 1];
  v44 = a3 - 1;
  v47 = 0LL;
  v5 = 48 * a2 - 0x58000000000LL;
  v6 = a2;
  v42 = 0;
  v7 = v5;
  v43 = v5;
  v8 = 17;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(a1 + 192, 0LL);
  v9 = v4 % v3;
  v10 = 0;
  v11 = v4 / v3;
  if ( v4 / v3 )
  {
    v12 = v45;
    do
    {
      if ( !(unsigned int)MiIsPfn(v6, v9) )
        break;
      if ( !(unsigned int)MiLargePfnPromoteCandidate(v12, v7, a3) )
        break;
      ++v10;
      v6 += v3;
      ++*((_DWORD *)&v47 + ((unsigned __int64)*(unsigned __int8 *)(v7 + 34) >> 6));
      v7 += 48 * v3;
    }
    while ( v10 < v11 );
    v5 = v43;
    v8 = 17;
  }
  if ( v10 == v11 )
  {
    v13 = 0;
    v14 = (unsigned int *)&v47;
    v15 = 0;
    v16 = 1;
    LODWORD(v17) = 0;
    do
    {
      v18 = *v14;
      v19 = v16;
      v20 = v13;
      if ( (_DWORD)v18 && v13 )
        v15 = 1;
      v16 = v17;
      v13 = *v14;
      if ( v20 >= (unsigned int)v18 )
        v16 = v19;
      v17 = (unsigned int)(v17 + 1);
      ++v14;
      if ( v20 >= (unsigned int)v18 )
        v13 = v20;
    }
    while ( (unsigned int)v17 < 4 );
    if ( v15 && (v21 = 0, v22 = v5, v11) )
    {
      while ( (unsigned int)MiChangePageAttributeLargeFreeZeroPage(v22, a3, v16, v14) )
      {
        ++v21;
        v22 += 48 * v3;
        if ( v21 >= v11 )
          goto LABEL_21;
      }
    }
    else
    {
LABEL_21:
      v23 = 0LL;
      v24 = a2;
      v25 = v5;
      v43 = a2;
      if ( v11 )
      {
        while ( (unsigned int)MiIsPfn(v24, v18) )
        {
          if ( v25 == v5 )
          {
            v8 = MiLockPageInline(v25, v26, v17, v27);
          }
          else if ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
          {
            break;
          }
          if ( !(unsigned int)MiLargePfnPromoteCandidate(v45, v25, a3) || *(unsigned __int8 *)(v25 + 34) >> 6 != v16 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v25 == v5 )
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
                    v32 = ~(unsigned __int16)(-1LL << (v8 + 1));
                    v33 = (v32 & SchedulerAssist[5]) == 0;
                    v17 = (unsigned int)v32 & SchedulerAssist[5];
                    SchedulerAssist[5] = v17;
                    if ( v33 )
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  }
                }
              }
              __writecr8(v8);
            }
            break;
          }
          v23 = (unsigned int)(v23 + 1);
          v25 += 48 * v3;
          v24 = v3 + v43;
          v43 += v3;
          if ( (unsigned int)v23 >= v11 )
            break;
        }
      }
      if ( (unsigned int)v23 == v11 )
      {
        MiLargePagePromote(a2, a3, v17, &v42);
        v28 = v5 + 48 * v3;
      }
      else
      {
        v28 = v5 & -(__int64)((_DWORD)v23 != 0);
      }
      if ( (_DWORD)v23 )
      {
        for ( i = v5 + v3 * (48 * v23 - 48); i != v28; i -= 48 * v3 )
          _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
        _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v35 = KeGetCurrentIrql();
            if ( v35 <= 0xFu && v8 <= 0xFu && v35 >= 2u )
            {
              v36 = KeGetCurrentPrcb();
              v37 = v36->SchedulerAssist;
              v38 = ~(unsigned __int16)(-1LL << (v8 + 1));
              v33 = (v38 & v37[5]) == 0;
              v37[5] &= v38;
              if ( v33 )
                KiRemoveSystemWorkPriorityKick(v36);
            }
          }
        }
        __writecr8(v8);
      }
      if ( v42 )
        MiChangePageHeatImmediate(a2, v44, 0LL);
    }
  }
  return MiUnlockDynamicMemoryShared(v45, (__int64)CurrentThread);
}
