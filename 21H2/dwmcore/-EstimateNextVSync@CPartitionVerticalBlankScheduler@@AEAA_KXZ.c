/*
 * XREFs of ?EstimateNextVSync@CPartitionVerticalBlankScheduler@@AEAA_KXZ @ 0x1800F3A74
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18007A840 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CPartitionVerticalBlankScheduler::EstimateNextVSync(CPartitionVerticalBlankScheduler *this)
{
  _QWORD *v1; // r8

  v1 = (_QWORD *)*((_QWORD *)this + 565);
  if ( v1[2] )
    return v1[7] + *((_QWORD *)this + 2147) - v1[7] + v1[32] - (*((_QWORD *)this + 2147) - v1[7]) % v1[32];
  else
    return *(_QWORD *)(*((_QWORD *)this + 564) + 256LL)
         + *((_QWORD *)this + 2147)
         - *((_QWORD *)this + 2147) % *(_QWORD *)(*((_QWORD *)this + 564) + 256LL);
}
