/*
 * XREFs of ?IsSyncObjectLockExclusiveOwner@DXGGLOBAL@@QEBAEXZ @ 0x1C0006838
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C00DCB58 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1C0114FB0 (-Close@DXGSYNCOBJECT@@QEAAEI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::IsSyncObjectLockExclusiveOwner(PERESOURCE *this)
{
  return ExIsResourceAcquiredExclusiveLite(this[65]) != 0;
}
