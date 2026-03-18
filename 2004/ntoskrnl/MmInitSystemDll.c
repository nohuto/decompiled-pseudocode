/*
 * XREFs of MmInitSystemDll @ 0x140A42ACC
 * Callers:
 *     Phase1InitializationIoReady @ 0x140A447A8 (Phase1InitializationIoReady.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140299050 (ObFastDereferenceObject.c)
 *     PsQuerySystemDllInfo @ 0x1406B5B0C (PsQuerySystemDllInfo.c)
 *     PspReferenceSystemDll @ 0x1406B7720 (PspReferenceSystemDll.c)
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
    qword_140C4DC10 = *(_QWORD *)(v1 + 24);
    if ( v2 )
      ObFastDereferenceObject((signed __int64 *)(v1 - 16), v2);
  }
}
