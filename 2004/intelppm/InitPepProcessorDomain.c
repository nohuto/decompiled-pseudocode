/*
 * XREFs of InitPepProcessorDomain @ 0x1C0033688
 * Callers:
 *     InitPepPerfStates @ 0x1C0038F1C (InitPepPerfStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitPepProcessorDomain(__int64 a1, int a2, int a3)
{
  char *PoolWithTag; // rax
  unsigned int v7; // r9d

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x72637250u);
  v7 = 0;
  if ( PoolWithTag )
  {
    *(_QWORD *)(PoolWithTag + 4) = 5LL;
    *(_DWORD *)PoolWithTag = 1;
    *((_DWORD *)PoolWithTag + 4) = 1;
    *((_DWORD *)PoolWithTag + 3) = a2;
    *((_DWORD *)PoolWithTag + 5) = a3;
    *(_QWORD *)(a1 + 1192) = PoolWithTag;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
