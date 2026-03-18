/*
 * XREFs of MiUpdatePerSessionProto @ 0x140255870
 * Callers:
 *     MiDereferenceSubsectionProtos @ 0x1406DDAE0 (MiDereferenceSubsectionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406DDB48 (MiCreatePerSessionProtos.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdatePerSessionProto(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  volatile LONG *v4; // r14
  unsigned __int64 v8; // rsi
  __int64 v9; // r8
  __int64 *v10; // rdx
  __int64 *v11; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf

  v4 = (volatile LONG *)(a1 + 72);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( !a4 )
  {
    RtlAvlRemoveNode(a2 + 24, a3);
    goto LABEL_9;
  }
  v10 = *(__int64 **)(a2 + 24);
  LOBYTE(v9) = 0;
  if ( !v10 )
    goto LABEL_8;
  while ( *(_DWORD *)(a3 + 64) < *((_DWORD *)v10 + 16) )
  {
    v11 = (__int64 *)*v10;
    if ( !*v10 )
      goto LABEL_8;
LABEL_5:
    v10 = v11;
  }
  v11 = (__int64 *)v10[1];
  if ( v11 )
    goto LABEL_5;
  LOBYTE(v9) = 1;
LABEL_8:
  RtlAvlInsertNodeEx(a2 + 24, v10, v9, a3);
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
