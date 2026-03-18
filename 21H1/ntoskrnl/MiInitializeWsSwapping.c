/*
 * XREFs of MiInitializeWsSwapping @ 0x1407845C0
 * Callers:
 *     MiInitNucleus @ 0x140A43F3C (MiInitNucleus.c)
 * Callees:
 *     <none>
 */

void (__fastcall *__fastcall MiInitializeWsSwapping(_QWORD *a1))(__int64 a1)
{
  void (__fastcall *result)(__int64); // rax

  a1[141] = 0LL;
  result = MiContractWsSwapPageFileWorker;
  a1[136] = 0LL;
  a1[138] = MiContractWsSwapPageFileWorker;
  a1[139] = a1;
  return result;
}
