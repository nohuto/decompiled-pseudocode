/*
 * XREFs of MiChangeAwePageAttributes @ 0x140546370
 * Callers:
 *     MiIncrementAweMapCount @ 0x1405471A4 (MiIncrementAweMapCount.c)
 * Callees:
 *     MiChangePageAttributeBatch @ 0x1402F70C0 (MiChangePageAttributeBatch.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiChangeAwePageAttributes(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // rbp
  unsigned int v5; // r14d
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v12; // eax
  bool v13; // zf
  __int64 v15; // rbx
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r8
  int v19; // eax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 *v22; // rax

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
          v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v13 = (v12 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
    return 3221225496LL;
  }
  v15 = *(_QWORD *)(a2 + 16);
  _InterlockedAnd64((volatile signed __int64 *)v7, 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v13 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)v17);
      }
    }
  }
  __writecr8(v8);
  v20 = 0LL;
  v21 = 0LL;
  if ( v4 )
  {
    while ( *(_WORD *)(v7 + 8) <= 2u && (*(_QWORD *)v7 & 0x4000000000000000LL) == 0 )
    {
      *(_QWORD *)(v7 - 8) = v20;
      ++v21;
      v20 = v7 - 24;
      v7 += 48LL;
      if ( v21 >= v4 )
        goto LABEL_24;
    }
    while ( v20 )
    {
      v22 = (__int64 *)(v20 + 16);
      v20 = *(_QWORD *)(v20 + 16);
      *v22 = v15;
    }
    return 3221225496LL;
  }
LABEL_24:
  MiChangePageAttributeBatch(v20, v5, v15);
  return 0LL;
}
