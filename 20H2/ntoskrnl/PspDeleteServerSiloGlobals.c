/*
 * XREFs of PspDeleteServerSiloGlobals @ 0x140908AFC
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x1409088A4 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x140908C68 (PspDeleteSilo.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ExpDeleteSiloState @ 0x1405B11EC (ExpDeleteSiloState.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     MmUnmapViewInSystemSpace @ 0x140658CE0 (MmUnmapViewInSystemSpace.c)
 *     DbgkCleanupServerSiloState @ 0x140886DB8 (DbgkCleanupServerSiloState.c)
 *     ObCleanupSiloState @ 0x1408DECB0 (ObCleanupSiloState.c)
 *     PspDeleteProtectedProcessParameters @ 0x140908220 (PspDeleteProtectedProcessParameters.c)
 *     SeRmCleanupSiloState @ 0x14091E860 (SeRmCleanupSiloState.c)
 *     EtwDeleteSiloState @ 0x14093A554 (EtwDeleteSiloState.c)
 *     ExWnfCleanupServerSiloState @ 0x14095F210 (ExWnfCleanupServerSiloState.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PspDeleteServerSiloGlobals(char *P)
{
  void *v2; // rcx
  struct _DMA_ADAPTER *v3; // rcx
  void *v4; // rcx
  struct _DMA_ADAPTER *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  struct _KEVENT *v8; // rcx

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
  if ( *((_QWORD *)P + 137) )
  {
    RtlFreeAnsiString((PUNICODE_STRING)P + 68);
    *((_QWORD *)P + 137) = 0LL;
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
  if ( *((_QWORD *)P + 142) )
  {
    MmUnmapViewInSystemSpace(*((PVOID *)P + 141));
    v5 = (struct _DMA_ADAPTER *)*((_QWORD *)P + 142);
    *((_QWORD *)P + 141) = 0LL;
    HalPutDmaAdapter(v5);
    *((_QWORD *)P + 142) = 0LL;
  }
  v6 = (void *)*((_QWORD *)P + 113);
  if ( v6 )
  {
    ExpDeleteSiloState(v6);
    *((_QWORD *)P + 113) = 0LL;
  }
  v7 = (void *)*((_QWORD *)P + 132);
  if ( v7 )
  {
    ZwClose(v7);
    *((_QWORD *)P + 132) = 0LL;
  }
  v8 = (struct _KEVENT *)*((_QWORD *)P + 140);
  if ( v8 )
  {
    KeSetEvent(v8, 0, 0);
    ObfDereferenceObjectWithTag(*((PVOID *)P + 140), 0x65446953u);
    *((_QWORD *)P + 140) = 0LL;
  }
  if ( P[1049] )
    ExFreePoolWithTag(*((PVOID *)P + 133), 0);
  ExFreePoolWithTag(P, 0x476C6953u);
}
