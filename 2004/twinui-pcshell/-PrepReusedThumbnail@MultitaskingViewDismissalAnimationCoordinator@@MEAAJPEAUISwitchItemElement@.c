/*
 * XREFs of ?PrepReusedThumbnail@MultitaskingViewDismissalAnimationCoordinator@@MEAAJPEAUISwitchItemElement@@PEAUIDCompThumbnail@@@Z @ 0x1803B2820
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MultitaskingViewDismissalAnimationCoordinator::PrepReusedThumbnail(
        MultitaskingViewDismissalAnimationCoordinator *this,
        struct ISwitchItemElement *a2,
        struct IDCompThumbnail *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, struct ISwitchItemElement *, _QWORD, _QWORD))(*(_QWORD *)a3 + 32LL))(
         a3,
         a2,
         0LL,
         0LL);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewdismissalanimationcoordinator.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
