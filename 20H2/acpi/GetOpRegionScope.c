/*
 * XREFs of GetOpRegionScope @ 0x1C00179F4
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x1C0018240 (PciConfigSpaceHandlerWorker.c)
 * Callees:
 *     GetOpRegionScopeWorker @ 0x1C0017AC0 (GetOpRegionScopeWorker.c)
 *     AMLIGetParent @ 0x1C001B0E8 (AMLIGetParent.c)
 */

__int64 __fastcall GetOpRegionScope(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD *PoolWithTag; // rax
  _OWORD *v8; // rbx
  __int64 v9; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x46706341u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  PoolWithTag[2] = 0LL;
  *((_QWORD *)PoolWithTag + 6) = 0LL;
  *(_QWORD *)PoolWithTag = a1;
  dword_1C0082908 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v9 = AMLIGetParent(a1);
  *((_DWORD *)v8 + 6) = -1;
  *((_QWORD *)v8 + 1) = v9;
  *((_QWORD *)v8 + 5) = a3;
  *((_QWORD *)v8 + 4) = &PciConfigSpaceHandlerWorker;
  *((_QWORD *)v8 + 6) = a4;
  return GetOpRegionScopeWorker(a1, 0LL, 0LL, v8);
}
