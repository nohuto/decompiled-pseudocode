/*
 * XREFs of MiMakeProtoAddressValid @ 0x140314BF0
 * Callers:
 *     MiLockProtoPage @ 0x140314A40 (MiLockProtoPage.c)
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiAddLockedPageCharge @ 0x1402826F0 (MiAddLockedPageCharge.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMakeProtoAddressValid(ULONG_PTR BugCheckParameter1)
{
  unsigned __int64 *v2; // r14
  unsigned __int64 v3; // rbx
  BOOL v4; // ebp
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int8 v8; // al
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v13; // rax
  struct _LIST_ENTRY *v14; // r8
  __int64 v15; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // rax
  int v23; // edx
  _DWORD *v24; // r9
  unsigned __int64 v25; // [rsp+50h] [rbp+8h] BYREF

  v2 = (unsigned __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  while ( 1 )
  {
    do
    {
      v3 = *v2;
      v25 = v3;
      if ( (v3 & 1) == 0 )
        goto LABEL_12;
      v4 = MiPteInShadowRange((unsigned __int64)&v25);
      if ( v4
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v13 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v25 >> 3) & 0x1FF));
          if ( (v13 & 0x20) != 0 )
            v3 |= 0x20uLL;
          if ( (v13 & 0x42) != 0 )
            v3 |= 0x42uLL;
        }
        else
        {
          v3 = v25;
        }
      }
      v6 = (v3 >> 12) & 0xFFFFFFFFFLL;
    }
    while ( (*(_QWORD *)(48 * v6 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
    if ( (v25 & 0x200) == 0 )
      break;
LABEL_12:
    MmAccessFault(2uLL, BugCheckParameter1, 0, 0LL);
  }
  v7 = 48 * v6 - 0x58000000000LL;
  v8 = MiLockPageInline(v7, 0x4000000000000LL, v5);
  v9 = *v2;
  v10 = v8;
  v25 = v9;
  if ( (v9 & 1) == 0 || (v9 & 0x200) != 0 )
    goto LABEL_33;
  if ( v4
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v14 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v14 )
    {
      v15 = *((_QWORD *)&v14->Flink + (((unsigned __int64)&v25 >> 3) & 0x1FF));
      if ( (v15 & 0x20) != 0 )
        v9 |= 0x20uLL;
      if ( (v15 & 0x42) != 0 )
        v9 |= 0x42uLL;
    }
    else
    {
      v9 = v25;
    }
  }
  if ( v6 != ((v9 >> 12) & 0xFFFFFFFFFLL) )
  {
LABEL_33:
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v20 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
    goto LABEL_12;
  }
  MiAddLockedPageCharge(48 * v6 - 0x58000000000LL, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v21 = KeGetCurrentIrql();
      if ( v21 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v24 = v22->SchedulerAssist;
        v20 = (v23 & v24[5]) == 0;
        v24[5] &= v23;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
  }
  __writecr8(v10);
  return 48 * v6 - 0x58000000000LL;
}
