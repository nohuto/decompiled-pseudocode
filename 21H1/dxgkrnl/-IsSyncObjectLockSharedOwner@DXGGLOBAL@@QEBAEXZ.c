/*
 * XREFs of ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x1C001BE94
 * Callers:
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C015E270 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::IsSyncObjectLockSharedOwner(PERESOURCE *this)
{
  return ExIsResourceAcquiredSharedLite(this[51]) != 0;
}
