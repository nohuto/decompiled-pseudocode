/*
 * XREFs of PiProcessReenumeration @ 0x140731D54
 * Callers:
 *     PnpDeviceActionWorker @ 0x14036BEB0 (PnpDeviceActionWorker.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PipProcessDevNodeTree @ 0x140726894 (PipProcessDevNodeTree.c)
 *     PipClearDevNodeFlags @ 0x14072C104 (PipClearDevNodeFlags.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140731E08 (PiMarkDeviceTreeForReenumeration.c)
 */

__int64 __fastcall PiProcessReenumeration(__int64 a1, __int64 a2)
{
  struct _DMA_ADAPTER *v3; // rcx
  __int64 FlushAdapterBuffers; // rdi
  int v5; // esi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  v3 = *(struct _DMA_ADAPTER **)(a1 + 16);
  FlushAdapterBuffers = (__int64)v3[19].DmaOperations->FlushAdapterBuffers;
  if ( (unsigned int)(*(_DWORD *)(FlushAdapterBuffers + 300) - 787) <= 1 )
  {
    HalPutDmaAdapter(v3);
    return 3221225558LL;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 24) == 8 )
    {
      if ( *(_BYTE *)(a1 + 32) )
        PipClearDevNodeFlags((__int64)v3[19].DmaOperations->FlushAdapterBuffers, 0x80000000);
      v5 = 1;
    }
    else
    {
      v5 = 2;
    }
    LOBYTE(a2) = v5 != 1;
    PiMarkDeviceTreeForReenumeration(FlushAdapterBuffers, a2);
    BYTE4(v7) = PnPBootDriversInitialized;
    LODWORD(v7) = 3;
    PipProcessDevNodeTree(FlushAdapterBuffers, a1, (__int64)&v7, v5, 0, 0, 0);
    return 0LL;
  }
}
