/*
 * XREFs of IopDestroyDeviceNode @ 0x1406120F4
 * Callers:
 *     IopDeleteDevice @ 0x140612090 (IopDeleteDevice.c)
 *     IopLegacyResourceAllocation @ 0x140753634 (IopLegacyResourceAllocation.c)
 *     IopRemoveLegacyDeviceNode @ 0x140753768 (IopRemoveLegacyDeviceNode.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PnpFreeDeviceInstancePath @ 0x140735E70 (PnpFreeDeviceInstancePath.c)
 *     IopUncacheInterfaceInformation @ 0x14073E5B8 (IopUncacheInterfaceInformation.c)
 *     IopLegacyResourceAllocation @ 0x140753634 (IopLegacyResourceAllocation.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall IopDestroyDeviceNode(char *P)
{
  __int64 v2; // r8
  struct _DMA_ADAPTER *v3; // rcx
  void *v4; // rcx
  void **v5; // rsi
  void *v6; // rdi
  void *v7; // rcx
  unsigned __int16 *v8; // rsi
  __int64 v9; // rax
  unsigned __int16 *v10; // rsi
  __int64 v11; // rax
  void **v12; // rax

  if ( P )
  {
    if ( *((_QWORD *)P + 90) )
    {
      v8 = (unsigned __int16 *)(P + 40);
      IoAddTriageDumpDataBlock((ULONG)P, (PVOID)0x310);
      if ( *v8 )
      {
        IoAddTriageDumpDataBlock((ULONG)v8, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v8 + 1), (PVOID)*v8);
      }
      if ( *((_WORD *)P + 28) )
      {
        IoAddTriageDumpDataBlock((_DWORD)P + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)P + 8), (PVOID)*((unsigned __int16 *)P + 28));
      }
      v9 = *((_QWORD *)P + 2);
      if ( v9 && *(_WORD *)(v9 + 56) )
      {
        IoAddTriageDumpDataBlock(v9 + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*((_QWORD *)P + 2) + 64LL),
          (PVOID)*(unsigned __int16 *)(*((_QWORD *)P + 2) + 56LL));
      }
      KeBugCheckEx(0xCAu, 5uLL, *((_QWORD *)P + 4), *((_QWORD *)P + 90), 0x11uLL);
    }
    v2 = *((_QWORD *)P + 4);
    if ( (*(_DWORD *)(v2 + 48) & 0x1000) != 0 && *((_QWORD *)P + 2) )
    {
      v10 = (unsigned __int16 *)(P + 40);
      IoAddTriageDumpDataBlock((ULONG)P, (PVOID)0x310);
      if ( *v10 )
      {
        IoAddTriageDumpDataBlock((ULONG)v10, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v10 + 1), (PVOID)*v10);
      }
      if ( *((_WORD *)P + 28) )
      {
        IoAddTriageDumpDataBlock((_DWORD)P + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)P + 8), (PVOID)*((unsigned __int16 *)P + 28));
      }
      v11 = *((_QWORD *)P + 2);
      if ( v11 && *(_WORD *)(v11 + 56) )
      {
        IoAddTriageDumpDataBlock(v11 + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*((_QWORD *)P + 2) + 64LL),
          (PVOID)*(unsigned __int16 *)(*((_QWORD *)P + 2) + 56LL));
      }
      KeBugCheckEx(0xCAu, 5uLL, *((_QWORD *)P + 4), 0LL, 0LL);
    }
    if ( (*((_DWORD *)P + 99) & 0x20000) != 0 )
    {
      IopLegacyResourceAllocation(-1, (_DWORD)PnpDriverObject, v2, 0, 0LL);
    }
    else
    {
      v3 = (struct _DMA_ADAPTER *)*((_QWORD *)P + 54);
      if ( v3 )
        HalPutDmaAdapter(v3);
      if ( *((_WORD *)P + 28) )
        ExFreePoolWithTag(*((PVOID *)P + 8), 0);
      PnpFreeDeviceInstancePath(P);
      ExAcquireFastMutex(&PiResourceListLock);
      v4 = (void *)*((_QWORD *)P + 55);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      KeReleaseGuardedMutex(&PiResourceListLock);
      IopUncacheInterfaceInformation(*((_QWORD *)P + 4), 0LL);
      v5 = (void **)(P + 608);
      while ( 1 )
      {
        v6 = *v5;
        if ( *v5 == v5 )
          break;
        if ( *((void ***)v6 + 1) != v5 || (v12 = *(void ***)v6, *(void **)(*(_QWORD *)v6 + 8LL) != v6) )
          __fastfail(3u);
        *v5 = v12;
        v12[1] = v5;
        ExFreePoolWithTag(*((PVOID *)v6 + 3), 0);
        ExFreePoolWithTag(v6, 0);
      }
      v7 = (void *)*((_QWORD *)P + 89);
      if ( v7 )
        ExFreePoolWithTag(v7, 0x62655250u);
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 4) + 312LL) + 40LL) = 0LL;
      ExFreePoolWithTag(P, 0);
      _InterlockedDecrement(&IopNumberDeviceNodes);
    }
  }
}
