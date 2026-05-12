/*
 * XREFs of RaBuildSetTemperatureThresholdBufferForMiniport @ 0x1C0042C40
 * Callers:
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C002988C (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C0046B80 (RaUnitSetTemperatureThresholdIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007C88 (RaidAllocatePool.c)
 */

__int64 __fastcall RaBuildSetTemperatureThresholdBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  _OWORD *v6; // rbp
  __int64 v9; // rsi
  char *Pool; // rax
  int v11; // ecx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = *(_OWORD **)(a2 + 24);
  if ( *(_DWORD *)v4 == 1 )
    v9 = *(_QWORD *)(v4 + 24);
  else
    v9 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v4 != 1 )
    v4 = 0LL;
  Pool = (char *)RaidAllocatePool(NonPagedPoolNx, 0x2CuLL, 0x72536152u, a1);
  if ( Pool )
  {
    *((_DWORD *)Pool + 3) = 0;
    *(_QWORD *)(Pool + 20) = 0LL;
    *(_QWORD *)(Pool + 28) = 0LL;
    *(_QWORD *)(Pool + 36) = 0LL;
    *(_DWORD *)Pool = 28;
    *((_DWORD *)Pool + 4) = 3002880;
    *(_QWORD *)(Pool + 4) = 0x54504D4554544553LL;
    if ( v4 )
      v11 = *(_DWORD *)(v4 + 1264);
    else
      v11 = *(_DWORD *)(v9 + 4268);
    *((_DWORD *)Pool + 3) = v11;
    *((_DWORD *)Pool + 6) = 16;
    *(_OWORD *)(Pool + 28) = *v6;
  }
  else
  {
    v5 = -1073741670;
  }
  *a3 = Pool;
  result = v5;
  *a4 = 44;
  return result;
}
