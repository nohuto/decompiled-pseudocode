/*
 * XREFs of PciConfigInternal @ 0x1C001815C
 * Callers:
 *     IsPciDeviceWorker @ 0x1C00166E0 (IsPciDeviceWorker.c)
 *     IsPciBusAsyncWorker @ 0x1C0017710 (IsPciBusAsyncWorker.c)
 * Callees:
 *     PciConfigSpaceHandlerWorker @ 0x1C00184A0 (PciConfigSpaceHandlerWorker.c)
 *     memset @ 0x1C0032480 (memset.c)
 */

__int64 __fastcall PciConfigInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rbx
  char v10; // al

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x46706341u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x60uLL);
  v9[3] = a7;
  v9[5] = a5;
  v9[6] = a6;
  v10 = gdwfAMLI;
  *((_DWORD *)v9 + 5) = 15;
  v9[7] = a2;
  dword_1C0082908 = 0;
  pszDest = 0;
  if ( (v10 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
  *((_DWORD *)v9 + 20) = -1;
  *((_DWORD *)v9 + 18) = 1;
  return PciConfigSpaceHandlerWorker(a2, 0LL, 0LL, v9);
}
