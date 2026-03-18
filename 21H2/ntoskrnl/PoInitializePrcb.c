/*
 * XREFs of PoInitializePrcb @ 0x140A59654
 * Callers:
 *     KiInitializeKernel @ 0x140A580F0 (KiInitializeKernel.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     PpmHvUseNativeAlgorithms @ 0x1403C1E10 (PpmHvUseNativeAlgorithms.c)
 *     PpmHeteroHgsProcessorInit @ 0x1403C1E60 (PpmHeteroHgsProcessorInit.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall PoInitializePrcb(char *DeferredContext)
{
  char *v1; // rdi
  char result; // al

  v1 = DeferredContext + 33600;
  memset(DeferredContext + 33600, 0, 0x230uLL);
  *((_DWORD *)DeferredContext + 8302) = 0x10000;
  *((_QWORD *)v1 + 29) = PpmWmiDispatch;
  v1[248] = 1;
  *((_WORD *)v1 + 213) = 100;
  v1[216] = 2;
  KeInitializeDpc((PRKDPC)(v1 + 280), (PKDEFERRED_ROUTINE)PpmPerfAction, DeferredContext);
  PpmHeteroHgsProcessorInit((__int64)DeferredContext, 1);
  if ( !*((_QWORD *)v1 + 42) )
    *((_WORD *)v1 + 141) = *((_DWORD *)DeferredContext + 9) + 2048;
  v1[281] = 3;
  result = PpmHvUseNativeAlgorithms();
  if ( result )
  {
    *((_DWORD *)v1 + 56) = 0;
  }
  else
  {
    result = -(HvlpFlags & 2);
    *((_DWORD *)v1 + 56) = ((HvlpFlags & 2) != 0) + 1;
  }
  v1[432] = 1;
  return result;
}
