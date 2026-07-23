/*
 * XREFs of MmInitSystemDll @ 0x140A4C9EC
 * Callers:
 *     Phase1InitializationIoReady @ 0x140A4D104 (Phase1InitializationIoReady.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14026A5B0 (ObFastDereferenceObject.c)
 *     PsQuerySystemDllInfo @ 0x1406436FC (PsQuerySystemDllInfo.c)
 *     PspReferenceSystemDll @ 0x1406C1094 (PspReferenceSystemDll.c)
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
    qword_140C4DE50 = *(_QWORD *)(v1 + 24);
    if ( v2 )
      ObFastDereferenceObject((signed __int64 *)(v1 - 16), v2);
  }
}
