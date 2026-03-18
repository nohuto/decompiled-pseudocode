/*
 * XREFs of PspDeleteServerSiloGlobals @ 0x140902EEC
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x140902C94 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x140903040 (PspDeleteSilo.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     ExpDeleteSiloState @ 0x1405AD68C (ExpDeleteSiloState.c)
 *     MmUnmapViewInSystemSpace @ 0x140605CC0 (MmUnmapViewInSystemSpace.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     DbgkCleanupServerSiloState @ 0x140881268 (DbgkCleanupServerSiloState.c)
 *     ObCleanupSiloState @ 0x1408D8E70 (ObCleanupSiloState.c)
 *     PspDeleteProtectedProcessParameters @ 0x140902610 (PspDeleteProtectedProcessParameters.c)
 *     SeRmCleanupSiloState @ 0x140918C30 (SeRmCleanupSiloState.c)
 *     EtwDeleteSiloState @ 0x140934724 (EtwDeleteSiloState.c)
 *     ExWnfCleanupServerSiloState @ 0x140959450 (ExWnfCleanupServerSiloState.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PspDeleteServerSiloGlobals(char *P)
{
  void *v2; // rcx
  struct _DMA_ADAPTER *v3; // rcx
  void *v4; // rcx
  struct _DMA_ADAPTER *v5; // rcx
  void *v6; // rcx
  struct _KEVENT *v7; // rcx

  DbgkCleanupServerSiloState((__int64)(P + 968));
  ObCleanupSiloState((void **)P);
  SeRmCleanupSiloState((ULONG_PTR)(P + 784));
  ExWnfCleanupServerSiloState(P + 912);
  v2 = (void *)*((_QWORD *)P + 108);
  if ( v2 )
  {
    EtwDeleteSiloState(v2);
    *((_QWORD *)P + 108) = 0LL;
  }
  if ( *((_QWORD *)P + 136) )
  {
    RtlFreeAnsiString((PUNICODE_STRING)(P + 1080));
    *((_QWORD *)P + 136) = 0LL;
  }
  v3 = (struct _DMA_ADAPTER *)*((_QWORD *)P + 129);
  if ( v3 )
  {
    HalPutDmaAdapter(v3);
    *((_QWORD *)P + 129) = 0LL;
  }
  v4 = (void *)*((_QWORD *)P + 130);
  if ( v4 )
  {
    MmUnmapViewInSystemSpace(v4);
    *((_QWORD *)P + 130) = 0LL;
  }
  PspDeleteProtectedProcessParameters((__int64)P);
  if ( *((_QWORD *)P + 141) )
  {
    MmUnmapViewInSystemSpace(*((PVOID *)P + 140));
    v5 = (struct _DMA_ADAPTER *)*((_QWORD *)P + 141);
    *((_QWORD *)P + 140) = 0LL;
    HalPutDmaAdapter(v5);
    *((_QWORD *)P + 141) = 0LL;
  }
  v6 = (void *)*((_QWORD *)P + 113);
  if ( v6 )
  {
    ExpDeleteSiloState(v6);
    *((_QWORD *)P + 113) = 0LL;
  }
  v7 = (struct _KEVENT *)*((_QWORD *)P + 139);
  if ( v7 )
  {
    KeSetEvent(v7, 0, 0);
    ObfDereferenceObjectWithTag(*((PVOID *)P + 139), 0x65446953u);
    *((_QWORD *)P + 139) = 0LL;
  }
  if ( P[1049] )
    ExFreePoolWithTag(*((PVOID *)P + 132), 0);
  ExFreePoolWithTag(P, 0x476C6953u);
}
