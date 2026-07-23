/*
 * XREFs of ExStartRecordingIRTimerExpiries @ 0x14094F1F4
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570798 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void ExStartRecordingIRTimerExpiries()
{
  int v0; // edx
  __int64 *v1; // rcx
  __int64 v2; // r8
  int v3; // eax
  SIZE_T v4; // rdi
  PVOID PoolWithTag; // rax
  __int64 v6; // rbx
  void *v7; // rbx

  v0 = 0;
  v1 = qword_140005300;
  v2 = 16LL;
  do
  {
    v3 = *(unsigned __int8 *)v1;
    v1 += 3;
    v0 += v3;
    --v2;
  }
  while ( v2 );
  v4 = (unsigned int)(4 * v0);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x69547845u);
  v6 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v4);
    v7 = (void *)_InterlockedExchange64(&ExpIRTimerExpiryCounts, v6);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x69547845u);
  }
}
