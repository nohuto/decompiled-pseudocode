/*
 * XREFs of ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x18038DE34
 * Callers:
 *     ??$CallControllerAsync@UIDismissAnimationController@@$$V@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UIDismissAnimationController@@@WRL@Microsoft@@P8IDismissAnimationController@@EAAXXZ@Z @ 0x18038DB04 (--$CallControllerAsync@UIDismissAnimationController@@$$V@AsyncControllerHelpers@@YAXAEAV-$ComPtr.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___ @ 0x1803ACE70 (AsyncFrameEvents--_NotifyFrameEvent__lambda_1cc7c4a545a2c54b98f9c323f6c45fc2___.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_4c1352802533852b573d4ad647ba047a___ @ 0x1803ACF1C (AsyncFrameEvents--_NotifyFrameEvent__lambda_4c1352802533852b573d4ad647ba047a___.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_9d6f2e50a9d1c22d8e47d66903bcf204___ @ 0x1803ACFD8 (AsyncFrameEvents--_NotifyFrameEvent__lambda_9d6f2e50a9d1c22d8e47d66903bcf204___.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___ @ 0x1803AD094 (AsyncFrameEvents--_NotifyFrameEvent__lambda_c70d466e53705bebc116464583ec8f40___.c)
 *     AsyncFrameEvents::_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___ @ 0x1803AD140 (AsyncFrameEvents--_NotifyFrameEvent__lambda_e640755ae9c094dc0d06fd44d037b19e___.c)
 *     ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@@ZV?$ComPtr@UISwitchItem@@@23@@Z @ 0x1803ADA08 (--$CallControllerAsync@UISwitchItemController@@UISwitchItem@@@AsyncControllerHelpers@@YAXAEAV-$C.c)
 *     ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@ZV?$ComPtr@UISwitchItem@@@23@V?$ComPtr@UIVirtualDesktopItem@@@23@@Z @ 0x1803ADAA0 (--$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControl.c)
 *     ?ContextMenuInvoked@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@I@Z @ 0x1803ADF20 (-ContextMenuInvoked@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@I@Z.c)
 *     ?DragSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x1803ADFE0 (-DragSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z.c)
 *     ?SwitchItemDragEnded@CAsyncSwitchItemController@@UEAAXXZ @ 0x1803AE250 (-SwitchItemDragEnded@CAsyncSwitchItemController@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AsyncControllerHelpers::GetControllerApartment(int (__fastcall ***a1)(_QWORD, GUID *, __int64 *))
{
  unsigned int v2; // edi
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = 2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  if ( (**a1)(a1, &GUID_09c24c3c_95c7_4af9_8c9f_5017de9b9800, &v4) >= 0
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4) )
  {
    v2 = 4;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  return v2;
}
