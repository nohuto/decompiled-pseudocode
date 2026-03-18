/*
 * XREFs of ExpPartitionStart @ 0x140851C58
 * Callers:
 *     PspAllocatePartition @ 0x14085BD34 (PspAllocatePartition.c)
 *     ExpWorkerInitialization @ 0x140B240EC (ExpWorkerInitialization.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x140263730 (KeQueryNodeActiveAffinity.c)
 *     ExpWorkQueueManagerStart @ 0x140851D00 (ExpWorkQueueManagerStart.c)
 */

__int64 __fastcall ExpPartitionStart(__int64 a1)
{
  unsigned __int16 v2; // bx
  USHORT *v3; // rcx
  __int64 result; // rax
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( !KeNumberNodes )
    return 0LL;
  while ( 1 )
  {
    Affinity = 0LL;
    v3 = 0LL;
    if ( (_UNKNOWN *)KeNodeBlock[v2] != (_UNKNOWN *)((char *)&KiNodeInit + 280 * v2) )
      v3 = (USHORT *)KeNodeBlock[v2];
    KeQueryNodeActiveAffinity(*v3, &Affinity, 0LL);
    if ( Affinity.Mask )
    {
      result = ExpWorkQueueManagerStart(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v2));
      if ( (int)result < 0 )
        break;
    }
    if ( ++v2 >= (unsigned __int16)KeNumberNodes )
      return 0LL;
  }
  return result;
}
