/*
 * XREFs of EtwpInitializeProviderTraits @ 0x1407849E4
 * Callers:
 *     EtwpInitialize @ 0x140A46B98 (EtwpInitialize.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x1402DF510 (KeInitializeGuardedMutex.c)
 */

void EtwpInitializeProviderTraits()
{
  KeInitializeGuardedMutex(&EtwpProviderTraitsKmMutex);
  *(_OWORD *)&EtwpProviderTraitsKmTree = 0LL;
  KeInitializeGuardedMutex(&EtwpProviderTraitsUmMutex);
  *(_OWORD *)&EtwpProviderTraitsUmTree = 0LL;
}
