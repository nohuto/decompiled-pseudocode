/*
 * XREFs of PciConfigSpaceHandler @ 0x1C0018130
 * Callers:
 *     <none>
 * Callees:
 *     PciConfigSpaceHandlerWorker @ 0x1C0018240 (PciConfigSpaceHandlerWorker.c)
 */

__int64 __fastcall PciConfigSpaceHandler(
        int a1,
        volatile signed __int32 *a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  _OWORD *PoolWithTag; // rax
  char v13; // cl
  __int64 v14; // rdx
  __int64 v15; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x46706341u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v13 = gdwfAMLI;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  PoolWithTag[2] = 0LL;
  PoolWithTag[3] = 0LL;
  PoolWithTag[4] = 0LL;
  PoolWithTag[5] = 0LL;
  *(_DWORD *)PoolWithTag = a1;
  *((_QWORD *)PoolWithTag + 1) = a2;
  dword_1C0082908 = 0;
  pszDest = 0;
  if ( (v13 & 4) != 0 )
    _InterlockedIncrement(a2 + 2);
  *((_QWORD *)PoolWithTag + 3) = a5;
  *((_DWORD *)PoolWithTag + 8) = a6;
  *((_QWORD *)PoolWithTag + 5) = a7;
  *((_QWORD *)PoolWithTag + 6) = a8;
  *((_DWORD *)PoolWithTag + 4) = a3;
  *((_DWORD *)PoolWithTag + 5) = a4;
  v14 = *(_QWORD *)(*(_QWORD *)a2 + 104LL);
  *((_QWORD *)PoolWithTag + 7) = v14;
  if ( v14 )
  {
    dword_1C0082908 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
  }
  v15 = *((_QWORD *)PoolWithTag + 7);
  *((_DWORD *)PoolWithTag + 20) = -1;
  return PciConfigSpaceHandlerWorker(v15, 0LL, 0LL, PoolWithTag);
}
