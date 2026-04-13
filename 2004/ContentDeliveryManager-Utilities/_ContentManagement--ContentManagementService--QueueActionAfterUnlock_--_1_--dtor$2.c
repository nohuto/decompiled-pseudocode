/*
 * XREFs of _ContentManagement::ContentManagementService::QueueActionAfterUnlock_::_1_::dtor$2 @ 0x1800D03A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContentManagementService::QueueActionAfterUnlock_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  return Microsoft::WRL::ComPtr<UnlockActionHelper>::~ComPtr<UnlockActionHelper>((__int64 *)(a2 + 104));
}
