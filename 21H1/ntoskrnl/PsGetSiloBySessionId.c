/*
 * XREFs of PsGetSiloBySessionId @ 0x1406A64A4
 * Callers:
 *     SessionIsInteractive @ 0x14033DB1C (SessionIsInteractive.c)
 *     SeQuerySessionIdTokenEx @ 0x1406A6400 (SeQuerySessionIdTokenEx.c)
 *     SeQueryServerSiloToken @ 0x1406DC060 (SeQueryServerSiloToken.c)
 *     PsIsServiceSession @ 0x1406EC848 (PsIsServiceSession.c)
 *     EtwWmitraceWorker @ 0x140938024 (EtwWmitraceWorker.c)
 * Callees:
 *     MmGetSessionById @ 0x14022BBB0 (MmGetSessionById.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 */

__int64 __fastcall PsGetSiloBySessionId(
        unsigned int a1,
        int (__fastcall **a2)(_DMA_ADAPTER *, _DEVICE_OBJECT *, _MDL *, void *, unsigned int, void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *), void *, unsigned __int8, void *, unsigned int))
{
  struct _DMA_ADAPTER *SessionById; // rax
  int (__fastcall *BuildScatterGatherList)(_DMA_ADAPTER *, _DEVICE_OBJECT *, _MDL *, void *, unsigned int, void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *), void *, unsigned __int8, void *, unsigned int); // rbx
  __int64 result; // rax

  SessionById = (struct _DMA_ADAPTER *)MmGetSessionById(a1);
  if ( !SessionById )
    return 3221226581LL;
  BuildScatterGatherList = SessionById[85].DmaOperations[3].BuildScatterGatherList;
  HalPutDmaAdapter(SessionById);
  result = 0LL;
  *a2 = BuildScatterGatherList;
  return result;
}
