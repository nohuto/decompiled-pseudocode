/*
 * XREFs of GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C00B4E00
 * Callers:
 *     CheckOrAcquireDwmStateLock @ 0x1C00B45E4 (CheckOrAcquireDwmStateLock.c)
 *     GreIsDwmStateLocked @ 0x1C00B4D70 (GreIsDwmStateLocked.c)
 *     UserReferenceDwmApiPort @ 0x1C00B4D90 (UserReferenceDwmApiPort.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2860 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
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
