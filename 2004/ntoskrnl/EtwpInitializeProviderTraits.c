/*
 * XREFs of EtwpInitializeProviderTraits @ 0x14079A148
 * Callers:
 *     EtwpInitialize @ 0x140A61950 (EtwpInitialize.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x140273520 (KeInitializeGuardedMutex.c)
 */

void EtwpInitializeProviderTraits()
{
  KeInitializeGuardedMutex(&EtwpProviderTraitsKmMutex);
  *(_OWORD *)&EtwpProviderTraitsKmTree = 0LL;
  KeInitializeGuardedMutex(&EtwpProviderTraitsUmMutex);
  *(_OWORD *)&EtwpProviderTraitsUmTree = 0LL;
}
