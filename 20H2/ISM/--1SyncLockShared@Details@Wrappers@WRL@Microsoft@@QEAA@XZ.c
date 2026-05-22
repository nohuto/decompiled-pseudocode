/*
 * XREFs of ??1SyncLockShared@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800CE3E4
 * Callers:
 *     __lambda_3d50a50961408acf3fdeaf78894b32d8_::operator()_::_1_::dtor$0 @ 0x1800D6017 (__lambda_3d50a50961408acf3fdeaf78894b32d8_--operator()_--_1_--dtor$0.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::TryUpdatePose_::_1_::dtor$0 @ 0x18016FA1D (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--TryUpdatePose_--_1_.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockShared::~SyncLockShared(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ReleaseSRWLockShared(v2);
    *this = 0LL;
  }
}
