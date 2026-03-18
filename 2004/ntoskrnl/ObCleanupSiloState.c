/*
 * XREFs of ObCleanupSiloState @ 0x1408D8E70
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x140902EEC (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ObfDereferenceDeviceMap @ 0x140666044 (ObfDereferenceDeviceMap.c)
 */

void __fastcall ObCleanupSiloState(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ObfDereferenceDeviceMap(v1);
}
