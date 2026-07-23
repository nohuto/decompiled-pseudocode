/*
 * XREFs of MiMakeProtoAddressValid @ 0x140242A94
 * Callers:
 *     MiLockProtoPage @ 0x1402428E4 (MiLockProtoPage.c)
 * Callees:
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiAddLockedPageCharge @ 0x140325158 (MiAddLockedPageCharge.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMakeProtoAddressValid(ULONG_PTR BugCheckParameter1)
{
  unsigned __int64 *v2; // r14
  unsigned __int64 v3; // rbx
  int v4; // ebp
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int8 v7; // al
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v12; // rax
  struct _LIST_ENTRY *v13; // r8
  __int64 v14; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // rax
  int v22; // edx
  _DWORD *v23; // r9
  unsigned __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  v2 = (unsigned __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  while ( 1 )
  {
    do
    {
      v3 = *v2;
      v24 = v3;
      if ( (v3 & 1) == 0 )
        goto LABEL_12;
      v4 = MiPteInShadowRange(&v24);
      if ( v4
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v12 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v24 >> 3) & 0x1FF));
          if ( (v12 & 0x20) != 0 )
            v3 |= 0x20uLL;
          if ( (v12 & 0x42) != 0 )
            v3 |= 0x42uLL;
        }
        else
        {
          v3 = v24;
        }
      }
      v5 = (v3 >> 12) & 0xFFFFFFFFFLL;
    }
    while ( (*(_QWORD *)(48 * v5 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
    if ( (v24 & 0x200) == 0 )
      break;
LABEL_12:
    MmAccessFault(2uLL, BugCheckParameter1);
  }
  v6 = 48 * v5 - 0x58000000000LL;
  v7 = MiLockPageInline(v6);
  v8 = *v2;
  v9 = v7;
  v24 = v8;
  if ( (v8 & 1) == 0 || (v8 & 0x200) != 0 )
    goto LABEL_33;
  if ( v4
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    v13 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v13 )
    {
      v14 = *((_QWORD *)&v13->Flink + (((unsigned __int64)&v24 >> 3) & 0x1FF));
      if ( (v14 & 0x20) != 0 )
        v8 |= 0x20uLL;
      if ( (v14 & 0x42) != 0 )
        v8 |= 0x42uLL;
    }
    else
    {
      v8 = v24;
    }
  }
  if ( v5 != ((v8 >> 12) & 0xFFFFFFFFFLL) )
  {
LABEL_33:
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v19 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    goto LABEL_12;
  }
  MiAddLockedPageCharge(48 * v5 - 0x58000000000LL, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v20 = KeGetCurrentIrql();
      if ( v20 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v20 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v23 = v21->SchedulerAssist;
        v19 = (v22 & v23[5]) == 0;
        v23[5] &= v22;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
  }
  __writecr8(v9);
  return 48 * v5 - 0x58000000000LL;
}
