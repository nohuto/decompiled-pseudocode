/*
 * XREFs of GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C0067070
 * Callers:
 *     CheckOrAcquireDwmStateLock @ 0x1C0066FA4 (CheckOrAcquireDwmStateLock.c)
 *     GreIsDwmStateLocked @ 0x1C0066FE0 (GreIsDwmStateLocked.c)
 *     UserReferenceDwmApiPort @ 0x1C0067000 (UserReferenceDwmApiPort.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2190 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreIsSemaphoreOwnedOrSharedByCurrentThread(PERESOURCE Resource)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( ExIsResourceAcquiredExclusiveLite(Resource) || ExIsResourceAcquiredSharedLite(Resource) )
    return 1;
  return v2;
}
