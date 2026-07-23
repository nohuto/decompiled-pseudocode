/*
 * XREFs of MiMapSystemCachePage @ 0x1405372E4
 * Callers:
 *     MmCopyToCachedPage @ 0x14033C250 (MmCopyToCachedPage.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiAddLockedPageCharge @ 0x140325158 (MiAddLockedPageCharge.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiMapFrame @ 0x1405371C4 (MiMapFrame.c)
 */

__int64 __fastcall MiMapSystemCachePage(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v6; // rbx
  struct _LIST_ENTRY *Flink; // r8
  _DWORD *v8; // r9
  BOOL v9; // r14d
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  struct _LIST_ENTRY *v15; // r9
  __int64 v16; // rcx
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  unsigned __int8 v22; // al
  char v23; // cl
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // rdx
  int v26; // eax
  _DWORD *v27; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v30; // r9
  int v31; // eax
  _DWORD *v32; // r8
  __int64 v33; // [rsp+68h] [rbp+20h] BYREF

  while ( 1 )
  {
    v33 = MI_READ_PTE_LOCK_FREE(a2);
    v6 = v33;
    if ( (v33 & 1) == 0 )
      return 0LL;
    v9 = MiPteInShadowRange((unsigned __int64)&v33);
    if ( v9
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v10 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v33 >> 3) & 0x1FF));
        if ( (v10 & 0x20) != 0 )
          v6 |= 0x20uLL;
        if ( (v10 & 0x42) != 0 )
          v6 |= 0x42uLL;
      }
      else
      {
        v6 = v33;
      }
    }
    v11 = (v6 >> 12) & 0xFFFFFFFFFLL;
    if ( (*(_QWORD *)(48 * v11 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
      return 0LL;
    v12 = 48 * v11 - 0x58000000000LL;
    v13 = (unsigned __int8)MiLockPageInline(v12, 0x4000000000000LL, (__int64)Flink, v8);
    v14 = MI_READ_PTE_LOCK_FREE(a2);
    v33 = v14;
    if ( (v14 & 1) == 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
          {
            v23 = v13 + 1;
            goto LABEL_59;
          }
        }
      }
LABEL_61:
      __writecr8(v13);
      return 0LL;
    }
    if ( v9
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      v15 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v15 )
      {
        v16 = *((_QWORD *)&v15->Flink + (((unsigned __int64)&v33 >> 3) & 0x1FF));
        if ( (v16 & 0x20) != 0 )
          v14 |= 0x20uLL;
        if ( (v16 & 0x42) != 0 )
          v14 |= 0x42uLL;
      }
      else
      {
        v14 = v33;
      }
    }
    if ( ((v14 >> 12) & 0xFFFFFFFFFLL) == v11 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v21 = (v20 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
  }
  if ( !(unsigned int)MiAddLockedPageCharge(48 * v11 - 0x58000000000LL, 0) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v22 = KeGetCurrentIrql();
        if ( v22 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v22 >= 2u )
        {
          v23 = v13 + 1;
LABEL_59:
          v30 = KeGetCurrentPrcb();
          v31 = ~(unsigned __int16)(-1LL << v23);
          v32 = v30->SchedulerAssist;
          v21 = (v31 & v32[5]) == 0;
          v32[5] &= v31;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick((__int64)v30);
        }
      }
    }
    goto LABEL_61;
  }
  if ( (a3 & 4) == 0 || !MiIsPfnFileOnly(48 * v11 - 0x58000000000LL) )
    *(_BYTE *)(v12 + 34) |= 0x10u;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v24 = KeGetCurrentIrql();
      if ( v24 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v24 >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v27 = v25->SchedulerAssist;
        v21 = (v26 & v27[5]) == 0;
        v27[5] &= v26;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick((__int64)v25);
      }
    }
  }
  __writecr8(v13);
  return MiMapFrame(a1, v11);
}
