/*
 * XREFs of ?CalculateFrameTimeDelta@CPartitionVerticalBlankScheduler@@AEAA_KXZ @ 0x18007B9A8
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18007ADD0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18007AFD4 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CPartitionVerticalBlankScheduler::CalculateFrameTimeDelta(
        CPartitionVerticalBlankScheduler *this)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = *(_QWORD *)(*((_QWORD *)this + 565) + 56LL);
  v2 = *((_QWORD *)this + 564);
  if ( v1 )
    return *(_QWORD *)(v2 + 56) - v1;
  else
    return *(_QWORD *)(v2 + 256);
}
