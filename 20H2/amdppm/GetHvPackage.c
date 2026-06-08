/*
 * XREFs of GetHvPackage @ 0x1C00223D4
 * Callers:
 *     RegisterHvPackage @ 0x1C00234B0 (RegisterHvPackage.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall GetHvPackage(int a1)
{
  _OWORD *v2; // rbx
  unsigned int *PoolWithTag; // rax
  unsigned int *v4; // rsi
  _OWORD *v5; // rax
  __int64 v6; // rdi
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0;
  v2 = 0LL;
  v8 = 0;
  if ( (int)HvlQueryStartedProcessors(&v8, 0LL) >= 0 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 4LL * v8, 0x72637250u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( (int)HvlQueryStartedProcessors(&v8, PoolWithTag) >= 0 )
      {
        v5 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x72637250u);
        v2 = v5;
        if ( v5 )
        {
          *v5 = 0LL;
          v6 = 0LL;
          v5[1] = 0LL;
          v5[2] = 0LL;
          *((_DWORD *)v5 + 8) = a1;
          *((_QWORD *)v5 + 3) = v5 + 1;
          for ( *((_QWORD *)v5 + 2) = v5 + 1; (unsigned int)v6 < v8; v6 = (unsigned int)(v6 + 1) )
          {
            if ( (int)HvlQueryProcessorTopology(v4[v6], 0LL, &v9, 0LL) >= 0 && a1 == v9 )
              ++*((_DWORD *)v2 + 9);
          }
        }
      }
      ExFreePoolWithTag(v4, 0x72637250u);
    }
  }
  return v2;
}
