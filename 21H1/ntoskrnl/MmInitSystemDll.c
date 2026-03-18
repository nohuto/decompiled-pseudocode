/*
 * XREFs of MmInitSystemDll @ 0x140A6FEC8
 * Callers:
 *     Phase1InitializationIoReady @ 0x140A3EF44 (Phase1InitializationIoReady.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140206540 (ObFastDereferenceObject.c)
 *     PsQuerySystemDllInfo @ 0x14064CB2C (PsQuerySystemDllInfo.c)
 *     PspReferenceSystemDll @ 0x14064E740 (PspReferenceSystemDll.c)
 */

void MmInitSystemDll()
{
  __int64 SystemDllInfo; // rax
  __int64 v1; // rbx
  struct _DMA_ADAPTER *v2; // rax

  SystemDllInfo = PsQuerySystemDllInfo(0);
  v1 = SystemDllInfo;
  if ( SystemDllInfo )
  {
    v2 = (struct _DMA_ADAPTER *)PspReferenceSystemDll((signed __int64 *)(SystemDllInfo - 16));
    qword_140C4DD50 = *(_QWORD *)(v1 + 24);
    if ( v2 )
      ObFastDereferenceObject((signed __int64 *)(v1 - 16), v2);
  }
}
