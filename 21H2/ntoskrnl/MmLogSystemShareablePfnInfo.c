/*
 * XREFs of MmLogSystemShareablePfnInfo @ 0x1408D1950
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14079763C (EtwpKernelTraceRundown.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiGetWorkingSetInfoEx @ 0x140547020 (MiGetWorkingSetInfoEx.c)
 *     MiGetAggregateWorkingSetSize @ 0x140550428 (MiGetAggregateWorkingSetSize.c)
 *     EtwLogPfnInfoRundown @ 0x14093D828 (EtwLogPfnInfoRundown.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MmLogSystemShareablePfnInfo(__int64 a1, unsigned int a2)
{
  __int64 v3; // r14
  _QWORD *Pool; // rbx
  unsigned __int64 v5; // r15
  size_t v6; // rsi
  char *AnyMultiplexedVm; // r12
  char *v8; // rbp
  unsigned __int64 AggregateWorkingSetSize; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdi
  int v12; // ecx
  int WorkingSetInfo; // eax
  __int64 v14; // rcx
  _DWORD v16[4]; // [rsp+28h] [rbp-50h]

  v16[0] = 2;
  v16[1] = 3;
  v3 = 0LL;
  v16[2] = 4;
  Pool = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
  v8 = AnyMultiplexedVm;
  AggregateWorkingSetSize = MiGetAggregateWorkingSetSize((__int64)AnyMultiplexedVm);
  if ( AggregateWorkingSetSize <= v10 )
    v11 = 64LL;
  else
    v11 = AggregateWorkingSetSize - v10 + 64;
  do
  {
    if ( v16[v3] == 2 )
    {
      v8 = AnyMultiplexedVm;
    }
    else
    {
      if ( v16[v3] == 3 )
      {
        v12 = 2;
      }
      else
      {
        if ( v16[v3] != 4 )
          goto LABEL_11;
        v12 = 1;
      }
      v8 = MiGetAnyMultiplexedVm(v12);
    }
LABEL_11:
    if ( v5 >= v11 )
    {
      memset(Pool, 0, v6);
    }
    else
    {
      if ( Pool )
        ExFreePoolWithTag(Pool, 0);
      v6 = 32 * v11 + 16;
      Pool = MiAllocatePool(64, v6, 0x4D777445u);
      if ( !Pool )
        return;
      v5 = v11;
    }
    WorkingSetInfo = MiGetWorkingSetInfoEx((__int64)v8, 0, Pool, v6);
    v14 = Pool[1];
    if ( WorkingSetInfo >= 0 )
    {
      if ( v14 )
        EtwLogPfnInfoRundown(0LL, a1, a2, Pool);
      v3 = (unsigned int)(v3 + 1);
    }
    else
    {
      v11 = v14 + 64;
    }
  }
  while ( (unsigned int)v3 < 3 );
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
}
