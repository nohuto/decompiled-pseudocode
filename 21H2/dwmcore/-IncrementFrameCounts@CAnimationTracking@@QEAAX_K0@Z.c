/*
 * XREFs of ?IncrementFrameCounts@CAnimationTracking@@QEAAX_K0@Z @ 0x180079228
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18007C008 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnimationTracking::IncrementFrameCounts(CAnimationTracking *this, unsigned __int64 a2, __int64 a3)
{
  __int64 i; // r10
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)this + 8 * i);
    if ( *(_QWORD *)(v6 + 56) && a2 >= *(_QWORD *)(v6 + 56) )
    {
      ++*(_DWORD *)(v6 + 72);
      if ( *(_QWORD *)(v6 + 88) )
      {
        v7 = *(_QWORD *)(v6 + 96);
        v8 = a3 - *(_QWORD *)(v6 + 88);
        *(_QWORD *)(v6 + 80) += v8;
        if ( v7 <= v8 )
          v7 = v8;
        *(_QWORD *)(v6 + 96) = v7;
      }
      else
      {
        *(_QWORD *)(v6 + 104) = a3;
      }
      *(_QWORD *)(v6 + 88) = a3;
    }
  }
}
