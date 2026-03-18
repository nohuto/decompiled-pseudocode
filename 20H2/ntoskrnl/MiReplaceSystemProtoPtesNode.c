/*
 * XREFs of MiReplaceSystemProtoPtesNode @ 0x1405563E0
 * Callers:
 *     MiAllocateFileExtents @ 0x1408D1D50 (MiAllocateFileExtents.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x14022E170 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402C3340 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiObtainProtoBaseFromNode @ 0x1402D5720 (MiObtainProtoBaseFromNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReplaceSystemProtoPtesNode(unsigned __int64 *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rdi
  bool v6; // r8
  _QWORD *v7; // r10
  _QWORD *v8; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  v4 = MiObtainProtoBaseFromNode(a1, &v13);
  v5 = ExAcquireSpinLockExclusive(&dword_140C4C9C0);
  RtlAvlRemoveNode((unsigned __int64 *)&qword_140C4C9B8, a1);
  a1[3] &= ~8uLL;
  v6 = 0;
  v7 = (_QWORD *)qword_140C4C9B8;
  if ( qword_140C4C9B8 )
  {
    while ( 1 )
    {
      v14 = 0LL;
      if ( v4 < MiObtainProtoBaseFromNode(v7, &v14) )
      {
        v8 = (_QWORD *)*v7;
        if ( !*v7 )
        {
          v6 = 0;
          break;
        }
      }
      else
      {
        v8 = (_QWORD *)v7[1];
        if ( !v8 )
        {
          v6 = 1;
          break;
        }
      }
      v7 = v8;
    }
  }
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C4C9B8, (unsigned __int64)v7, v6, a2);
  a2[3] |= 8uLL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C9C0);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return result;
}
