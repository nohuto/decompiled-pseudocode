/*
 * XREFs of ObpInitStackTrace @ 0x140A719B0
 * Callers:
 *     ObInitSystem @ 0x140A3F538 (ObInitSystem.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObpInitStackAndObjectTables @ 0x1408DEAD0 (ObpInitStackAndObjectTables.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void ObpInitStackTrace()
{
  int v0; // ebx
  __int64 v1; // rdi
  __int64 v2; // rbx
  unsigned __int16 v3; // bx
  PVOID PoolWithTag; // rax
  unsigned int v5; // edx
  unsigned int v6; // r9d
  int *v7; // r8
  int v8; // r10d
  unsigned int i; // r11d
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // ebx

  ObpStackTraceLock = 0LL;
  ObpPushStackInfoWorkItem.Parameter = 0LL;
  ObpPushStackInfoWorkItem.List.Flink = 0LL;
  ObpPushStackInfoList = 0LL;
  v0 = 0;
  ObpPushStackInfoWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ObpPushStackInfoQueue;
  memset(&ObpRegTracePoolTags, 0, 0x40uLL);
  memset(&ObpRuntimeTracePoolTags, 0, 0x40uLL);
  v1 = -1LL;
  ObpNumTracedObjects = 0;
  ObpStackSequence = 0;
  if ( ObpTraceProcessNameBuffer[0] )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( ObpTraceProcessNameBuffer[v2] );
    v3 = 2 * v2;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3 + 2LL, 0x7452624Fu);
    qword_140C25BE8 = PoolWithTag;
    if ( !PoolWithTag )
      return;
    LOWORD(ObpRegTraceProcessName) = v3;
    WORD1(ObpRegTraceProcessName) = v3 + 2;
    memmove(PoolWithTag, ObpTraceProcessNameBuffer, (unsigned __int16)(v3 + 2));
    v0 = 32;
  }
  if ( ObpTracePoolTagsBuffer[0] )
  {
    do
      ++v1;
    while ( ObpTracePoolTagsBuffer[v1] );
    v5 = 0;
    v6 = ((int)v1 + 1) / 5u;
    if ( v6 > 0x10 )
      v6 = 16;
    if ( v6 )
    {
      v7 = (int *)&ObpRegTracePoolTags;
      do
      {
        v8 = *v7;
        for ( i = 0; i < 4; ++i )
        {
          v10 = 5 * v5 - i;
          v11 = (v8 << 8) | (unsigned __int16)ObpTracePoolTagsBuffer[v10 + 3];
          v8 = v11;
        }
        *v7 = v11;
        ++v5;
        ++v7;
      }
      while ( v5 < v6 );
    }
    v0 |= 0x10u;
  }
  if ( v0 )
  {
    if ( ObpTracePermanent )
      v0 |= 0x40u;
    if ( (int)ObpInitStackAndObjectTables() < 0 )
    {
      if ( (v0 & 0x10) != 0 )
        memset(&ObpRegTracePoolTags, 0, 0x40uLL);
      if ( (v0 & 0x20) != 0 )
      {
        ExFreePoolWithTag(qword_140C25BE8, 0x7452624Fu);
        ObpRegTraceProcessName = 0LL;
        qword_140C25BE8 = 0LL;
      }
    }
    else
    {
      v12 = v0 | 1;
      ObpRegTraceFlags = v12;
      ObpTraceFlags = v12;
      if ( (v12 & 0x10) != 0 )
        ObpTracePoolTags = (__int64)&ObpRegTracePoolTags;
      if ( (v12 & 0x20) != 0 )
        ObpTraceProcessName = (PCUNICODE_STRING)&ObpRegTraceProcessName;
    }
  }
}
