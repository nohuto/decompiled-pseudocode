/*
 * XREFs of PoInitializePrcb @ 0x14099E680
 * Callers:
 *     KiInitializeKernel @ 0x14099D7C0 (KiInitializeKernel.c)
 * Callees:
 *     KeInitializeDpc @ 0x14027B6B0 (KeInitializeDpc.c)
 *     PpmHvUseNativeAlgorithms @ 0x1403AE35C (PpmHvUseNativeAlgorithms.c)
 *     memset @ 0x140414200 (memset.c)
 */

char __fastcall PoInitializePrcb(char *DeferredContext)
{
  char *v1; // rdi
  char result; // al

  v1 = DeferredContext + 0x8000;
  memset(DeferredContext + 0x8000, 0, 0x200uLL);
  v1[240] = 1;
  *((_QWORD *)v1 + 28) = PpmWmiDispatch;
  v1[208] = 2;
  *((_WORD *)v1 + 207) = 100;
  KeInitializeDpc((PRKDPC)(v1 + 272), (PKDEFERRED_ROUTINE)PpmPerfAction, DeferredContext);
  if ( !*((_QWORD *)v1 + 41) )
    *((_WORD *)v1 + 137) = *((_DWORD *)DeferredContext + 9) + 1280;
  v1[273] = 3;
  result = PpmHvUseNativeAlgorithms();
  if ( result )
  {
    *((_DWORD *)v1 + 54) = 0;
  }
  else
  {
    result = -(HvlpFlags & 2);
    *((_DWORD *)v1 + 54) = ((HvlpFlags & 2) != 0) + 1;
  }
  v1[420] = 1;
  return result;
}
