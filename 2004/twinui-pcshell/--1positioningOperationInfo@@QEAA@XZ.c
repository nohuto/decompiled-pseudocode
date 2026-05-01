/*
 * XREFs of ??1positioningOperationInfo@@QEAA@XZ @ 0x1801A4EAC
 * Callers:
 *     ?ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ @ 0x1801A5278 (-ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A6BA8 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall positioningOperationInfo::~positioningOperationInfo(positioningOperationInfo *this)
{
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((char *)this + 8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
}
