/*
 * XREFs of PspFreezeProcessWorker @ 0x140906A40
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PsGetServerSiloGlobals @ 0x1402D70B4 (PsGetServerSiloGlobals.c)
 *     SmIsCompressionProcess @ 0x1402FDDD0 (SmIsCompressionProcess.c)
 *     PsCaptureExceptionPort @ 0x140707008 (PsCaptureExceptionPort.c)
 *     PsSuspendProcess @ 0x1409081A0 (PsSuspendProcess.c)
 */

__int64 __fastcall PspFreezeProcessWorker(_DWORD *a1)
{
  _DWORD **ServerSiloGlobals; // rax
  __int64 v3; // rcx
  struct _DMA_ADAPTER *v4; // rax

  ServerSiloGlobals = (_DWORD **)PsGetServerSiloGlobals(0LL);
  if ( (a1[543] & 0x1000) == 0 && a1 != PsIdleProcess && a1 != ServerSiloGlobals[110] && !SmIsCompressionProcess(a1) )
  {
    v4 = (struct _DMA_ADAPTER *)PsCaptureExceptionPort(v3);
    if ( v4 )
      HalPutDmaAdapter(v4);
    if ( (a1[281] & 4) == 0 )
      PsSuspendProcess(a1);
  }
  return 0LL;
}
