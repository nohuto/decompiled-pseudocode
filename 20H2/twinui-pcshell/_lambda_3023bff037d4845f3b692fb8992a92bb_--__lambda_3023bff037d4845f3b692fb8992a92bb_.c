/*
 * XREFs of _lambda_3023bff037d4845f3b692fb8992a92bb_::__lambda_3023bff037d4845f3b692fb8992a92bb_ @ 0x1801DBD80
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3023bff037d4845f3b692fb8992a92bb___::_scalar_deleting_destructor_ @ 0x1801DC410 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3023bff037d4845f3b692fb8992a92bb___--_scala.c)
 *     ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1801DC55C (-CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ @ 0x1801DBF2C (--1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_3023bff037d4845f3b692fb8992a92bb_::__lambda_3023bff037d4845f3b692fb8992a92bb_(__int64 *a1)
{
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)(a1 + 4));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
