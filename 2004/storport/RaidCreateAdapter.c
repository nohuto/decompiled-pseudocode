/*
 * XREFs of RaidCreateAdapter @ 0x1C002FB68
 * Callers:
 *     RaDriverAddDevice @ 0x1C00330E0 (RaDriverAddDevice.c)
 * Callees:
 *     memset @ 0x1C001DA00 (memset.c)
 *     RaidCreateDeferredQueue @ 0x1C0032CEC (RaidCreateDeferredQueue.c)
 *     StorCreateIoGateway @ 0x1C004D35C (StorCreateIoGateway.c)
 *     StorCreateDictionary @ 0x1C0057E50 (StorCreateDictionary.c)
 *     RaCreateBus @ 0x1C00789C0 (RaCreateBus.c)
 *     RaidCreateDma @ 0x1C0078A50 (RaidCreateDma.c)
 *     RaCreateMiniport @ 0x1C0079688 (RaCreateMiniport.c)
 *     RaidCreateResourceList @ 0x1C0079B10 (RaidCreateResourceList.c)
 */

void __fastcall RaidCreateAdapter(__int64 a1)
{
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax

  memset((void *)a1, 0, 0x1740uLL);
  *(_QWORD *)(a1 + 128) = a1 + 120;
  *(_QWORD *)(a1 + 120) = a1 + 120;
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 112));
  *(_QWORD *)(a1 + 208) = a1 + 200;
  *(_QWORD *)(a1 + 200) = a1 + 200;
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 192));
  InitializeSListHead((PSLIST_HEADER)(a1 + 224));
  InitializeSListHead((PSLIST_HEADER)(a1 + 5072));
  *(_DWORD *)(a1 + 56) = -1;
  if ( (int)StorCreateDictionary(a1 + 144) >= 0 )
  {
    CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x6D526152u);
    *(_QWORD *)(a1 + 264) = CacheAwareRundownProtection;
    if ( CacheAwareRundownProtection )
    {
      RaCreateMiniport(a1 + 304);
      RaidCreateDma(a1 + 712);
      *(_DWORD *)(a1 + 272) = 0;
      *(_DWORD *)(a1 + 276) = 0;
      *(_DWORD *)(a1 + 280) = 0;
      *(_BYTE *)(a1 + 284) = 0;
      RaidCreateResourceList(a1 + 288);
      RaCreateBus(a1 + 608);
      *(_OWORD *)(a1 + 744) = 0LL;
      *(_QWORD *)(a1 + 760) = 0LL;
      StorCreateIoGateway((PKSPIN_LOCK)(a1 + 832));
      RaidCreateDeferredQueue(a1 + 1152);
      RaidCreateDeferredQueue(a1 + 1536);
      *(_DWORD *)(a1 + 1296) = 134684677;
      *(_DWORD *)(a1 + 1376) = 134684677;
      *(_DWORD *)(a1 + 1456) = 134684677;
      KeInitializeTimer((PKTIMER)(a1 + 1728));
      KeInitializeTimer((PKTIMER)(a1 + 1920));
      KeInitializeTimer((PKTIMER)(a1 + 4280));
      KeInitializeTimer((PKTIMER)(a1 + 5520));
      *(_DWORD *)(a1 + 88) = 2;
      *(_BYTE *)(a1 + 106) = 1;
      KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 696));
      KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 5648));
    }
  }
}
