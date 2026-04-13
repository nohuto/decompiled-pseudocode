/*
 * XREFs of ??1?$ComPtr@VUnlockActionHelper@@@WRL@Microsoft@@QEAA@XZ @ 0x1800333EC
 * Callers:
 *     _ContentManagement::ContentManagementService::QueueActionAfterUnlock_::_1_::dtor$0 @ 0x1800D2483 (_ContentManagement--ContentManagementService--QueueActionAfterUnlock_--_1_--dtor$0.c)
 *     _ContentManagement::ContentManagementService::QueueActionAfterUnlock_::_1_::dtor$2 @ 0x1800D24A7 (_ContentManagement--ContentManagementService--QueueActionAfterUnlock_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPendingLaunch@Private@System@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800336E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPendingLaunch@Pr.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<UnlockActionHelper>::~ComPtr<UnlockActionHelper>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::System::Private::IPendingLaunch>::Release(result);
  }
  return result;
}
