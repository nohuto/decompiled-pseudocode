/*
 * XREFs of PspDeleteServerSiloGlobals @ 0x1409020A4
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x140901E34 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x140902240 (PspDeleteSilo.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExpDeleteSiloState @ 0x1405ACF6C (ExpDeleteSiloState.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     ObfDereferenceDeviceMap @ 0x1405DFD44 (ObfDereferenceDeviceMap.c)
 *     MmUnmapViewInSystemSpace @ 0x14063AD00 (MmUnmapViewInSystemSpace.c)
 *     EtwDeleteSiloState @ 0x140933484 (EtwDeleteSiloState.c)
 *     ExWnfCleanupServerSiloState @ 0x1409580B0 (ExWnfCleanupServerSiloState.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PspDeleteServerSiloGlobals(char *P)
{
  void *v2; // rcx
  _QWORD *v3; // rdx
  void *v4; // rcx
  struct _DMA_ADAPTER *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  struct _DMA_ADAPTER *v8; // rcx
  void *v9; // rcx
  struct _KEVENT *v10; // rcx

  v2 = (void *)*((_QWORD *)P + 124);
  if ( v2 )
  {
    ObfDereferenceObjectWithTag(v2, 0x6B676244u);
    *((_QWORD *)P + 124) = 0LL;
  }
  if ( *(_QWORD *)P )
    ObfDereferenceDeviceMap(*(PVOID *)P);
  v3 = P + 784;
  if ( *((_QWORD *)P + 99) || *((_QWORD *)P + 101) || *v3 )
    KeBugCheckEx(0x29u, (ULONG_PTR)v3, (ULONG_PTR)"minkernel\\ntos\\se\\rmmain.c", 0x6D1uLL, 0LL);
  ExWnfCleanupServerSiloState(P + 912);
  v4 = (void *)*((_QWORD *)P + 108);
  if ( v4 )
  {
    EtwDeleteSiloState(v4);
    *((_QWORD *)P + 108) = 0LL;
  }
  if ( *((_QWORD *)P + 135) )
  {
    RtlFreeAnsiString((PUNICODE_STRING)P + 67);
    *((_QWORD *)P + 135) = 0LL;
  }
  v5 = (struct _DMA_ADAPTER *)*((_QWORD *)P + 129);
  if ( v5 )
  {
    HalPutDmaAdapter(v5);
    *((_QWORD *)P + 129) = 0LL;
  }
  v6 = (void *)*((_QWORD *)P + 130);
  if ( v6 )
  {
    MmUnmapViewInSystemSpace(v6);
    *((_QWORD *)P + 130) = 0LL;
  }
  v7 = (void *)*((_QWORD *)P + 128);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x6C537350u);
    *((_QWORD *)P + 128) = 0LL;
  }
  if ( *((_QWORD *)P + 140) )
  {
    MmUnmapViewInSystemSpace(*((PVOID *)P + 139));
    v8 = (struct _DMA_ADAPTER *)*((_QWORD *)P + 140);
    *((_QWORD *)P + 139) = 0LL;
    HalPutDmaAdapter(v8);
    *((_QWORD *)P + 140) = 0LL;
  }
  v9 = (void *)*((_QWORD *)P + 113);
  if ( v9 )
  {
    ExpDeleteSiloState(v9);
    *((_QWORD *)P + 113) = 0LL;
  }
  v10 = (struct _KEVENT *)*((_QWORD *)P + 138);
  if ( v10 )
  {
    KeSetEvent(v10, 0, 0);
    ObfDereferenceObjectWithTag(*((PVOID *)P + 138), 0x65446953u);
    *((_QWORD *)P + 138) = 0LL;
  }
  ExFreePoolWithTag(P, 0x476C6953u);
}
