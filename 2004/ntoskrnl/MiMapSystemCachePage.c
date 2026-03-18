/*
 * XREFs of MiMapSystemCachePage @ 0x140531BD4
 * Callers:
 *     MmCopyToCachedPage @ 0x140223C10 (MmCopyToCachedPage.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x1402296A0 (MiAddLockedPageCharge.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiIsPfnFileOnly @ 0x1402AB200 (MiIsPfnFileOnly.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiMapFrame @ 0x140531AB4 (MiMapFrame.c)
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
  __int64 v15; // r8
  struct _LIST_ENTRY *v16; // r9
  __int64 v17; // rcx
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int8 v25; // al
  char v26; // cl
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // rdx
  int v29; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v32; // r9
  int v33; // eax
  _DWORD *v34; // r8
  __int64 v35; // [rsp+68h] [rbp+20h] BYREF

  while ( 1 )
  {
    v35 = MI_READ_PTE_LOCK_FREE(a2);
    v6 = v35;
    if ( (v35 & 1) == 0 )
      return 0LL;
    v9 = MiPteInShadowRange((unsigned __int64)&v35);
    if ( v9
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v10 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v35 >> 3) & 0x1FF));
        if ( (v10 & 0x20) != 0 )
          v6 |= 0x20uLL;
        if ( (v10 & 0x42) != 0 )
          v6 |= 0x42uLL;
      }
      else
      {
        v6 = v35;
      }
    }
    v11 = (v6 >> 12) & 0xFFFFFFFFFLL;
    if ( (*(_QWORD *)(48 * v11 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
      return 0LL;
    v12 = 48 * v11 - 0x58000000000LL;
    v13 = (unsigned __int8)MiLockPageInline(v12, 0x4000000000000LL, (__int64)Flink, v8);
    v14 = MI_READ_PTE_LOCK_FREE(a2);
    v35 = v14;
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
            v26 = v13 + 1;
            goto LABEL_59;
          }
        }
      }
LABEL_61:
      __writecr8(v13);
      return 0LL;
    }
    if ( v9 )
    {
      if ( (MiFlags & 0xC00000) != 0 && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
      {
        v15 = v14;
        if ( (v14 & 0x20) == 0 || (v14 & 0x42) == 0 )
        {
          v16 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v16 )
          {
            v17 = *((_QWORD *)&v16->Flink + (((unsigned __int64)&v35 >> 3) & 0x1FF));
            if ( (v17 & 0x20) != 0 )
              v14 |= 0x20uLL;
            if ( (v17 & 0x42) != 0 )
              v14 |= 0x42uLL;
          }
          else
          {
            v14 = v35;
          }
        }
      }
    }
    if ( ((v14 >> 12) & 0xFFFFFFFFFLL) == v11 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v18 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v22 = (v21 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v21;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
  }
  if ( !(unsigned int)MiAddLockedPageCharge(48 * v11 - 0x58000000000LL, 0LL, v15) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v25 >= 2u )
        {
          v26 = v13 + 1;
LABEL_59:
          v32 = KeGetCurrentPrcb();
          v33 = ~(unsigned __int16)(-1LL << v26);
          v34 = v32->SchedulerAssist;
          v22 = (v33 & v34[5]) == 0;
          v34[5] &= v33;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick((__int64)v32);
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
      v27 = KeGetCurrentIrql();
      if ( v27 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v27 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v24 = (__int64)v28->SchedulerAssist;
        v22 = (v29 & *(_DWORD *)(v24 + 20)) == 0;
        v23 = (unsigned int)v29 & *(_DWORD *)(v24 + 20);
        *(_DWORD *)(v24 + 20) = v23;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick((__int64)v28);
      }
    }
  }
  __writecr8(v13);
  return MiMapFrame(a1, v11, v23, v24);
}
