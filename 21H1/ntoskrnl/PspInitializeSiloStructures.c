/*
 * XREFs of PspInitializeSiloStructures @ 0x140A391E4
 * Callers:
 *     PspInitPhase0 @ 0x140A3A1E4 (PspInitPhase0.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PspAllocStorage @ 0x1406ECC20 (PspAllocStorage.c)
 *     PspSiloInitializeSharedUserSessionId @ 0x1406EDE18 (PspSiloInitializeSharedUserSessionId.c)
 *     PspStorageAllocSlot @ 0x14077E598 (PspStorageAllocSlot.c)
 *     ObCreateObjectType @ 0x14077E620 (ObCreateObjectType.c)
 *     PspStorageFreeSlot @ 0x14090A8B4 (PspStorageFreeSlot.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

char PspInitializeSiloStructures()
{
  PVOID PoolWithTag; // rax
  unsigned int v2; // ecx
  struct _DMA_ADAPTER *v3; // rcx
  _QWORD v4[16]; // [rsp+20h] [rbp-29h] BYREF

  dword_140D24988 = 1;
  dword_140D2498C = 259;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x248uLL, 0x476C6953u);
  qword_140D24998 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, 0x248uLL);
  if ( (int)PspSiloInitializeSharedUserSessionId(qword_140D24998) < 0
    || (int)PspStorageAllocSlot((ULONG *)&PsObjectDirectorySiloContextSlot) < 0 )
  {
    return 0;
  }
  if ( (int)PspStorageAllocSlot((ULONG *)&PsObjectDirectoryTeardownSlot) < 0 )
  {
    v2 = PsObjectDirectorySiloContextSlot;
LABEL_13:
    PspStorageFreeSlot(v2);
    return 0;
  }
  if ( (int)PspStorageAllocSlot((ULONG *)&PsSystemRootSiloContextSlot) < 0 )
  {
    PspStorageFreeSlot(PsObjectDirectorySiloContextSlot);
    v2 = PsObjectDirectoryTeardownSlot;
    goto LABEL_13;
  }
  PspSiloMonitorLock = 0LL;
  qword_140C1E028 = (__int64)&PspSiloMonitorList;
  PspSiloMonitorList = (__int64)&PspSiloMonitorList;
  memset(v4, 0, 0x78uLL);
  BYTE2(v4[0]) |= 0x84u;
  LOWORD(v4[0]) = 120;
  HIDWORD(v4[1]) = 0x20000;
  v4[2] = 0x2000000020000LL;
  HIDWORD(v4[4]) = 1;
  v4[3] = 0xF0000000F0000LL;
  v4[9] = PspDeleteSiloContext;
  if ( (int)ObCreateObjectType((const UNICODE_STRING *)L"$&", (__int64)v4, 0LL, (__int64)&PsSiloContextPagedType) >= 0 )
  {
    HIDWORD(v4[4]) = 512;
    if ( (int)ObCreateObjectType((const UNICODE_STRING *)L"*,", (__int64)v4, 0LL, (__int64)&PsSiloContextNonPagedType) < 0 )
    {
      v3 = PsSiloContextPagedType;
    }
    else
    {
      if ( (int)PspAllocStorage(&qword_140D24980) >= 0 )
        return 1;
      HalPutDmaAdapter(PsSiloContextPagedType);
      v3 = PsSiloContextNonPagedType;
    }
    HalPutDmaAdapter(v3);
  }
  return 0;
}
