/*
 * XREFs of RaidCreateAdapter @ 0x1C00309D4
 * Callers:
 *     RaDriverAddDevice @ 0x1C0033F60 (RaDriverAddDevice.c)
 * Callees:
 *     memset @ 0x1C001F8C0 (memset.c)
 *     RaidCreateDeferredQueue @ 0x1C0033B6C (RaidCreateDeferredQueue.c)
 *     StorCreateIoGateway @ 0x1C004E16C (StorCreateIoGateway.c)
 *     StorCreateDictionary @ 0x1C0058D10 (StorCreateDictionary.c)
 *     RaCreateBus @ 0x1C0079EC8 (RaCreateBus.c)
 *     RaidCreateDma @ 0x1C0079F58 (RaidCreateDma.c)
 *     RaCreateMiniport @ 0x1C007AB88 (RaCreateMiniport.c)
 *     RaidCreateResourceList @ 0x1C007B010 (RaidCreateResourceList.c)
 */

void __fastcall RaidCreateAdapter(__int64 a1)
{
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax

  memset((void *)a1, 0, 0x1740uLL);
  *(_QWORD *)(a1 + 144) = a1 + 136;
  *(_QWORD *)(a1 + 136) = a1 + 136;
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 128));
  *(_QWORD *)(a1 + 224) = a1 + 216;
  *(_QWORD *)(a1 + 216) = a1 + 216;
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 208));
  InitializeSListHead((PSLIST_HEADER)(a1 + 240));
  InitializeSListHead((PSLIST_HEADER)(a1 + 5072));
  *(_DWORD *)(a1 + 56) = -1;
  if ( (int)StorCreateDictionary(a1 + 160) >= 0 )
  {
    CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x6D526152u);
    *(_QWORD *)(a1 + 280) = CacheAwareRundownProtection;
    if ( CacheAwareRundownProtection )
    {
      RaCreateMiniport(a1 + 320);
      RaidCreateDma(a1 + 728);
      *(_DWORD *)(a1 + 288) = 0;
      *(_DWORD *)(a1 + 292) = 0;
      *(_DWORD *)(a1 + 296) = 0;
      *(_BYTE *)(a1 + 300) = 0;
      RaidCreateResourceList(a1 + 304);
      RaCreateBus(a1 + 624);
      *(_OWORD *)(a1 + 760) = 0LL;
      *(_QWORD *)(a1 + 776) = 0LL;
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
      KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 712));
      KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 5648));
    }
  }
}
