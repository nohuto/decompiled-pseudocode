/*
 * XREFs of ObCleanupSiloState @ 0x1408DECB0
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x140908AFC (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ObfDereferenceDeviceMap @ 0x14063ADE4 (ObfDereferenceDeviceMap.c)
 */

void __fastcall ObCleanupSiloState(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ObfDereferenceDeviceMap(v1);
}
