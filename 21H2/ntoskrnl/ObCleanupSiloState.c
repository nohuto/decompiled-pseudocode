/*
 * XREFs of ObCleanupSiloState @ 0x140983EC0
 * Callers:
 *     ObShutdownSystem @ 0x140983EF0 (ObShutdownSystem.c)
 *     PspDeleteExternalServerSiloState @ 0x1409ABED8 (PspDeleteExternalServerSiloState.c)
 *     PspDeleteServerSiloGlobals @ 0x1409ABFB0 (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ObDereferenceDeviceMap @ 0x14069C9C0 (ObDereferenceDeviceMap.c)
 */

void __fastcall ObCleanupSiloState(volatile __int64 *a1)
{
  __int64 v1; // rcx

  v1 = _InterlockedExchange64(a1, 0LL);
  if ( v1 )
    ObDereferenceDeviceMap((volatile signed __int64 *)(v1 & 0xFFFFFFFFFFFFFFF0uLL), (v1 & 0xF) + 1);
}
