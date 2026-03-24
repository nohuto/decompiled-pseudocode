/*
 * XREFs of MiMakeProtoAddressValid @ 0x1402C4514
 * Callers:
 *     MiLockProtoPage @ 0x1402C4364 (MiLockProtoPage.c)
 * Callees:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiAddLockedPageCharge @ 0x14031A408 (MiAddLockedPageCharge.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMakeProtoAddressValid(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  unsigned __int64 *v3; // r14
  unsigned __int64 v4; // rbx
  int v5; // ebp
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned __int8 v9; // al
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v14; // rax
  struct _LIST_ENTRY *v15; // r8
  __int64 v16; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // rax
  int v24; // edx
  _DWORD *v25; // r9
  unsigned __int64 v26; // [rsp+50h] [rbp+8h] BYREF

  v3 = (unsigned __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  while ( 1 )
  {
    do
    {
      v4 = *v3;
      v26 = v4;
      if ( (v4 & 1) == 0 )
        goto LABEL_12;
      v5 = MiPteInShadowRange(&v26, a2);
      if ( v5
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v14 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v26 >> 3) & 0x1FF));
          if ( (v14 & 0x20) != 0 )
            v4 |= 0x20uLL;
          if ( (v14 & 0x42) != 0 )
            v4 |= 0x42uLL;
        }
        else
        {
          v4 = v26;
        }
      }
      v7 = (v4 >> 12) & 0xFFFFFFFFFLL;
      a2 = 0x4000000000000LL;
    }
    while ( (*(_QWORD *)(48 * v7 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
    if ( (v26 & 0x200) == 0 )
      break;
LABEL_12:
    MmAccessFault(2uLL, BugCheckParameter1, 0, 0LL);
  }
  v8 = 48 * v7 - 0x58000000000LL;
  v9 = MiLockPageInline(v8, 0x4000000000000LL, v6);
  v10 = *v3;
  v11 = v9;
  v26 = v10;
  if ( (v10 & 1) == 0 || (v10 & 0x200) != 0 )
    goto LABEL_33;
  if ( v5
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    v15 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v15 )
    {
      v16 = *((_QWORD *)&v15->Flink + (((unsigned __int64)&v26 >> 3) & 0x1FF));
      if ( (v16 & 0x20) != 0 )
        v10 |= 0x20uLL;
      if ( (v16 & 0x42) != 0 )
        v10 |= 0x42uLL;
    }
    else
    {
      v10 = v26;
    }
  }
  if ( v7 != ((v10 >> 12) & 0xFFFFFFFFFLL) )
  {
LABEL_33:
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v21 = (v20 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v11);
    goto LABEL_12;
  }
  MiAddLockedPageCharge(48 * v7 - 0x58000000000LL, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v25 = v23->SchedulerAssist;
        v21 = (v24 & v25[5]) == 0;
        v25[5] &= v24;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
  }
  __writecr8(v11);
  return 48 * v7 - 0x58000000000LL;
}
