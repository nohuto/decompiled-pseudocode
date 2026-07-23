/*
 * XREFs of ObCleanupSiloState @ 0x1408DC5D0
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x14090640C (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ObfDereferenceDeviceMap @ 0x14068F1A4 (ObfDereferenceDeviceMap.c)
 */

void __fastcall ObCleanupSiloState(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ObfDereferenceDeviceMap(v1);
}
