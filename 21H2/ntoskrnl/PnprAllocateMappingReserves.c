/*
 * XREFs of PnprAllocateMappingReserves @ 0x1408AD2DC
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1408AC3D0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     PnprFreeMappingReserve @ 0x1408AD830 (PnprFreeMappingReserve.c)
 *     PnprInitializeMappingReserve @ 0x1408ADCB4 (PnprInitializeMappingReserve.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnprAllocateMappingReserves(_QWORD *a1, _QWORD *a2, unsigned int a3)
{
  SIZE_T v5; // rbx
  _QWORD *PoolWithTag; // rsi
  int v7; // ebx
  _QWORD *v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx

  v5 = 24 * a3;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x51706E50u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v8 = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x51706E50u);
  if ( v8 )
  {
    memset(PoolWithTag, 0, v5);
    memset(v8, 0, v5);
    v9 = 0LL;
    if ( a3 )
    {
      while ( 1 )
      {
        v7 = PnprInitializeMappingReserve(2LL, &PoolWithTag[3 * v9]);
        if ( v7 < 0 )
          break;
        v7 = PnprInitializeMappingReserve(2050LL, &v8[3 * v9]);
        if ( v7 < 0 )
        {
          PnprFreeMappingReserve(&PoolWithTag[3 * v9]);
          goto LABEL_10;
        }
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= a3 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      v7 = 0;
LABEL_10:
      if ( v7 >= 0 )
        goto LABEL_17;
    }
  }
  else
  {
    v7 = -1073741670;
  }
  if ( v8 && *PoolWithTag && *v8 )
  {
    v10 = PnprContext;
    v11 = *(unsigned int *)(PnprContext + 180);
    if ( !PoolWithTag[3 * v11] )
    {
      *(_OWORD *)&PoolWithTag[3 * v11] = *(_OWORD *)PoolWithTag;
      PoolWithTag[3 * v11 + 2] = PoolWithTag[2];
      v12 = 3LL * *(unsigned int *)(v10 + 180);
      *(_OWORD *)&v8[v12] = *(_OWORD *)v8;
      v8[v12 + 2] = v8[2];
      *(_OWORD *)PoolWithTag = 0LL;
      PoolWithTag[2] = 0LL;
      *(_OWORD *)v8 = 0LL;
      v8[2] = 0LL;
    }
    v7 = 0;
LABEL_17:
    *a1 = PoolWithTag;
    *a2 = v8;
    return (unsigned int)v7;
  }
  ExFreePoolWithTag(PoolWithTag, 0x51706E50u);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x51706E50u);
  return (unsigned int)v7;
}
