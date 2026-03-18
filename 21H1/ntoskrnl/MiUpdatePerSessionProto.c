/*
 * XREFs of MiUpdatePerSessionProto @ 0x14031F110
 * Callers:
 *     MiDereferenceSubsectionProtos @ 0x1406E683C (MiDereferenceSubsectionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406E68A4 (MiCreatePerSessionProtos.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x140296CC0 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1402A2C20 (RtlAvlInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdatePerSessionProto(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  volatile LONG *v4; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  bool v10; // r8
  unsigned __int64 v11; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf

  v4 = (volatile LONG *)(a1 + 72);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( !a4 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)(a2 + 24), (unsigned __int64 *)a3);
    goto LABEL_9;
  }
  v9 = *(_QWORD *)(a2 + 24);
  v10 = 0;
  if ( !v9 )
    goto LABEL_8;
  while ( *(_DWORD *)(a3 + 64) < *(_DWORD *)(v9 + 64) )
  {
    v11 = *(_QWORD *)v9;
    if ( !*(_QWORD *)v9 )
      goto LABEL_8;
LABEL_5:
    v9 = v11;
  }
  v11 = *(_QWORD *)(v9 + 8);
  if ( v11 )
    goto LABEL_5;
  v10 = 1;
LABEL_8:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a2 + 24), v9, v10, (_QWORD *)a3);
LABEL_9:
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v8 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v15 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  return result;
}
