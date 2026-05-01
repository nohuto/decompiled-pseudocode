/*
 * XREFs of ?SwitchItemCloseAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1803BA320
 * Callers:
 *     ?ItemOperationBegin@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@W4ObservableArrayOperation@@PEAUIObservableItem@@@Z @ 0x1803A74B0 (-ItemOperationBegin@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@W4ObservableArrayOperation.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VSwitchItemCloseAnimationCoordinator@@V1@AEAPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemCloseAnimationCoordinator@@AEAPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Z @ 0x1803B9BD0 (--$MakeAndInitialize@VSwitchItemCloseAnimationCoordinator@@V1@AEAPEAUISwitchThumbnailFactory@@AE.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ @ 0x1803BA1BC (-InternalRelease@-$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall SwitchItemCloseAnimationCoordinator_CreateInstance(
        struct ISwitchThumbnailFactory *a1,
        const struct _GUID *a2,
        void **a3)
{
  int v4; // eax
  int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  ItemAnimationCoordinatorBase *v9; // rcx
  ItemAnimationCoordinatorBase *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ISwitchThumbnailFactory *v13; // [rsp+30h] [rbp+8h] BYREF
  ItemAnimationCoordinatorBase *v14; // [rsp+38h] [rbp+10h] BYREF

  v13 = a1;
  *a3 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::InternalRelease((__int64 *)&v14);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<SwitchItemCloseAnimationCoordinator,SwitchItemCloseAnimationCoordinator,ISwitchThumbnailFactory * &,_GUID const &>(
         &v14,
         &v13,
         &stru_180541FE0);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    v7 = 79LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcloseanimationcoordinator.cpp",
      (const char *)v6);
    goto LABEL_13;
  }
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_ea7f7ba6_4c6a_4191_9c06_24520bc6be9e, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v10 = v14;
    *a3 = v14;
    (*(void (__fastcall **)(ItemAnimationCoordinatorBase *))(*(_QWORD *)v10 + 8LL))(v10);
    v5 = 0;
    goto LABEL_13;
  }
  if ( InlineIsEqualGUID(v8, v8) )
  {
    v9 = v14;
    v5 = 0;
    *a3 = v14;
  }
  else
  {
    v9 = 0LL;
    v5 = -2147467262;
  }
  if ( v5 < 0 )
  {
    v6 = (unsigned int)v5;
    v7 = 80LL;
    goto LABEL_12;
  }
  (*(void (__fastcall **)(ItemAnimationCoordinatorBase *))(*(_QWORD *)v9 + 8LL))(v9);
LABEL_13:
  Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::InternalRelease((__int64 *)&v14);
  return (unsigned int)v5;
}
