/*
 * XREFs of ?_ClearAnimationPassState@CAppTransitionManager@@AEAAXXZ @ 0x1803C580C
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1803C45E0 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 *     ?PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1803C5100 (-PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiv.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CAppTransitionManager::_ClearAnimationPassState(CAppTransitionManager *this)
{
  SetRectEmpty((LPRECT)((char *)this + 264));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  *((_DWORD *)this + 71) = -1;
  *((_BYTE *)this + 282) = 1;
  *((_QWORD *)this + 36) = 0LL;
  *((_WORD *)this + 140) = 0;
  CCoSimpleArray<RecoveredViewInfo,4294967294,CSimpleArrayStandardCompareHelper<RecoveredViewInfo>>::~CCoSimpleArray<RecoveredViewInfo,4294967294,CSimpleArrayStandardCompareHelper<RecoveredViewInfo>>((__int64)this + 232);
}
