/*
 * XREFs of MiMakeProtoAddressValid @ 0x140352940
 * Callers:
 *     MiLockProtoPage @ 0x140352790 (MiLockProtoPage.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x1402296A0 (MiAddLockedPageCharge.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMakeProtoAddressValid(ULONG_PTR BugCheckParameter1)
{
  unsigned __int64 *v2; // r14
  unsigned __int64 v3; // rbx
  BOOL v4; // ebp
  __int64 v5; // r8
  _DWORD *v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned __int8 v9; // al
  struct _LIST_ENTRY *v10; // r8
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v15; // rax
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

  v2 = (unsigned __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  while ( 1 )
  {
    do
    {
      v3 = *v2;
      v26 = v3;
      if ( (v3 & 1) == 0 )
        goto LABEL_12;
      v4 = MiPteInShadowRange((unsigned __int64)&v26);
      if ( v4
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v15 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v26 >> 3) & 0x1FF));
          if ( (v15 & 0x20) != 0 )
            v3 |= 0x20uLL;
          if ( (v15 & 0x42) != 0 )
            v3 |= 0x42uLL;
        }
        else
        {
          v3 = v26;
        }
      }
      v7 = (v3 >> 12) & 0xFFFFFFFFFLL;
    }
    while ( (*(_QWORD *)(48 * v7 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
    if ( (v26 & 0x200) == 0 )
      break;
LABEL_12:
    MmAccessFault(2uLL, BugCheckParameter1, 0, 0LL);
  }
  v8 = 48 * v7 - 0x58000000000LL;
  v9 = MiLockPageInline(v8, 0x4000000000000LL, v5, v6);
  v11 = *v2;
  v12 = v9;
  v26 = v11;
  if ( (v11 & 1) == 0 || (v11 & 0x200) != 0 )
    goto LABEL_33;
  if ( v4
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    v10 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v10 )
    {
      v16 = *((_QWORD *)&v10->Flink + (((unsigned __int64)&v26 >> 3) & 0x1FF));
      if ( (v16 & 0x20) != 0 )
        v11 |= 0x20uLL;
      if ( (v16 & 0x42) != 0 )
        v11 |= 0x42uLL;
    }
    else
    {
      v11 = v26;
    }
  }
  if ( v7 != ((v11 >> 12) & 0xFFFFFFFFFLL) )
  {
LABEL_33:
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v21 = (v20 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v12);
    goto LABEL_12;
  }
  MiAddLockedPageCharge(48 * v7 - 0x58000000000LL, 1LL, (__int64)v10);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v25 = v23->SchedulerAssist;
        v21 = (v24 & v25[5]) == 0;
        v25[5] &= v24;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
  }
  __writecr8(v12);
  return 48 * v7 - 0x58000000000LL;
}
