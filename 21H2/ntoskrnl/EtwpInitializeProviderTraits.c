/*
 * XREFs of EtwpInitializeProviderTraits @ 0x140864124
 * Callers:
 *     EtwpInitialize @ 0x140B0433C (EtwpInitialize.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x1402E0710 (KeInitializeGuardedMutex.c)
 */

void EtwpInitializeProviderTraits()
{
  KeInitializeGuardedMutex(&EtwpProviderTraitsKmMutex);
  EtwpProviderTraitsKmTree = 0LL;
  KeInitializeGuardedMutex(&EtwpProviderTraitsUmMutex);
  EtwpProviderTraitsUmTree = 0LL;
}
