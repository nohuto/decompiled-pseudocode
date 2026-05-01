/*
 * XREFs of ?FinishAnimateVisibleSwitchItem@MultitaskingViewInvocationAnimationCoordinator@@MEAAJPEAUISwitchItemElement@@PEAUIDCompThumbnail@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x18038ECB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MultitaskingViewInvocationAnimationCoordinator::FinishAnimateVisibleSwitchItem(
        MultitaskingViewInvocationAnimationCoordinator *this,
        struct ISwitchItemElement *a2,
        struct IDCompThumbnail *a3,
        struct IUIAnimationStoryboardEventHandler2 *a4)
{
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v7 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 1LL);
  if ( v7 < 0 )
  {
    v8 = 67LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewinvocationanimationcoordinator.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v7 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, __int64, __int64, struct IUIAnimationStoryboardEventHandler2 *))(*(_QWORD *)a2 + 48LL))(
         a2,
         1LL,
         11LL,
         a4);
  if ( v7 < 0 )
  {
    v8 = 68LL;
    goto LABEL_9;
  }
  v7 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, __int64, __int64, struct IUIAnimationStoryboardEventHandler2 *))(*(_QWORD *)a3 + 32LL))(
         a3,
         v9,
         20LL,
         a4);
  if ( v7 < 0 )
  {
    v8 = 69LL;
    goto LABEL_9;
  }
  v7 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, _QWORD, __int64, struct IUIAnimationStoryboardEventHandler2 *))(*(_QWORD *)a2 + 48LL))(
         a2,
         0LL,
         21LL,
         a4);
  if ( v7 < 0 )
  {
    v8 = 70LL;
    goto LABEL_9;
  }
  return (unsigned int)v7;
}
