/*
 * XREFs of MiChangeAwePageAttributes @ 0x14054BA80
 * Callers:
 *     MiIncrementAweMapCount @ 0x14054C8B4 (MiIncrementAweMapCount.c)
 * Callees:
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiChangePageAttributeBatch @ 0x14030E2F0 (MiChangePageAttributeBatch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiChangeAwePageAttributes(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // rbp
  unsigned int v5; // r14d
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  _DWORD *v9; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v13; // eax
  bool v14; // zf
  __int64 v16; // rbx
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r8
  int v20; // eax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 *v23; // rax

  v4 = *(_QWORD *)(a1 + 8);
  v5 = a3;
  v7 = a2 + 24;
  v8 = (unsigned __int8)MiLockPageInline(a2, a2, a3, a4);
  if ( *(_WORD *)(a2 + 32) > 2u
    || (*(_QWORD *)v7 & 0x3FFFFFFFFFFFFFFFLL) != 1
    || (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v7, 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v14 = (v13 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
    return 3221225496LL;
  }
  v16 = *(_QWORD *)(a2 + 16);
  _InterlockedAnd64((volatile signed __int64 *)v7, 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v9 = (_DWORD *)(-1LL << ((unsigned __int8)v8 + 1));
        v19 = v18->SchedulerAssist;
        v20 = ~(unsigned __int16)v9;
        v14 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)v18);
      }
    }
  }
  __writecr8(v8);
  v21 = 0LL;
  v22 = 0LL;
  if ( v4 )
  {
    while ( *(_WORD *)(v7 + 8) <= 2u && (*(_QWORD *)v7 & 0x4000000000000000LL) == 0 )
    {
      *(_QWORD *)(v7 - 8) = v21;
      ++v22;
      v21 = v7 - 24;
      v7 += 48LL;
      if ( v22 >= v4 )
        goto LABEL_24;
    }
    while ( v21 )
    {
      v23 = (__int64 *)(v21 + 16);
      v21 = *(_QWORD *)(v21 + 16);
      *v23 = v16;
    }
    return 3221225496LL;
  }
LABEL_24:
  MiChangePageAttributeBatch(v21, v5, v16, v9);
  return 0LL;
}
