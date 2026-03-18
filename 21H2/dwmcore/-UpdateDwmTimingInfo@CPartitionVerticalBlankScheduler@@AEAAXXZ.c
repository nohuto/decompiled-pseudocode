/*
 * XREFs of ?UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007B9D8
 * Callers:
 *     ?ComputeFrameTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007AEF8 (-ComputeFrameTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18007AFD4 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(CPartitionVerticalBlankScheduler *this)
{
  __int64 v1; // r9
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+8h] [rbp+8h]

  v1 = *((_QWORD *)this + 564);
  *((_QWORD *)this + 573) = *(_QWORD *)(v1 + 64);
  *(_QWORD *)((char *)this + 4564) = *(_QWORD *)(v1 + 56);
  *(_QWORD *)((char *)this + 4572) = *(_QWORD *)(v1 + 16);
  *((_DWORD *)this + 1150) = *(_DWORD *)(v1 + 32);
  *((_DWORD *)this + 1145) = *(_DWORD *)(v1 + 44);
  *(_QWORD *)((char *)this + 4604) = *(_QWORD *)(v1 + 8);
  *((_QWORD *)this + 574) = *(_QWORD *)v1;
  LODWORD(v7) = g_qpcFrequency.LowPart;
  HIDWORD(v7) = *(_DWORD *)(v1 + 248);
  *(_QWORD *)((char *)this + 4540) = v7;
  *(_QWORD *)((char *)this + 4548) = *(_QWORD *)(v1 + 256);
  LODWORD(v7) = g_qpcFrequency.LowPart;
  HIDWORD(v7) = *(_DWORD *)(v1 + 248);
  *(_QWORD *)((char *)this + 4556) = v7;
  v3 = *((_QWORD *)this + 1559);
  *((_DWORD *)this + 1164) = 0;
  *((_QWORD *)this + 581) = v3;
  v4 = *((unsigned int *)this + 1126);
  if ( (_DWORD)v4 != -1 )
  {
    *(_QWORD *)((char *)this + 4612) = *((_QWORD *)this + 34 * v4 + 18);
    *((_DWORD *)this + 1155) = *((_DWORD *)this + 68 * (unsigned int)v4 + 44);
  }
  v5 = *((unsigned int *)this + 1127);
  if ( (_DWORD)v5 != -1 )
  {
    *((_QWORD *)this + 578) = *((_QWORD *)this + 34 * v5 + 18);
    *(_QWORD *)((char *)this + 4636) = *((_QWORD *)this + 34 * (unsigned int)v5 + 19);
  }
  v6 = *(unsigned int *)(v1 + 104);
  *((_DWORD *)this + 1158) = v6;
  *((_DWORD *)this + 1161) = *(_DWORD *)(v1 + 108);
  *(_QWORD *)((char *)this + 4836) = *(_QWORD *)((char *)this + 4828);
  *(_QWORD *)((char *)this + 4828) = v6;
}
