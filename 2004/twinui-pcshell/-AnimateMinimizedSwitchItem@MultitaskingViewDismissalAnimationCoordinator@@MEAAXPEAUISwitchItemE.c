/*
 * XREFs of ?AnimateMinimizedSwitchItem@MultitaskingViewDismissalAnimationCoordinator@@MEAAXPEAUISwitchItemElement@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803B2600
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc_____lambda_bbeb76a51bfb926050d075f4007d064b__&__lambda_ce3300e2c568934d15624d64d17a11bc__&_IDCompBatchAnimationCallback___&_ @ 0x1803AFC8C (Microsoft--WRL--Details--Make_DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_bbeb76a51.c)
 */

void __fastcall MultitaskingViewDismissalAnimationCoordinator::AnimateMinimizedSwitchItem(
        MultitaskingViewDismissalAnimationCoordinator *this,
        struct ISwitchItemElement *a2,
        struct IDCompBatchAnimationCallback *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  void (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  struct IDCompBatchAnimationCallback *v12; // [rsp+50h] [rbp+18h] BYREF
  void (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  v11 = 0LL;
  v12 = a3;
  Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc_____lambda_bbeb76a51bfb926050d075f4007d064b_____lambda_ce3300e2c568934d15624d64d17a11bc____IDCompBatchAnimationCallback_____(
    &v13,
    v5,
    v6,
    (__int64 *)&v12);
  v7 = v13;
  if ( v13 )
  {
    (**v13)(v13, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, &v11);
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v7)[2])(v7);
  }
  v8 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, _QWORD, __int64, __int64))(*(_QWORD *)a2 + 48LL))(
         a2,
         0LL,
         12LL,
         v11);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x30,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewdismissalanimationcoordinator.cpp",
      (const char *)(unsigned int)v8);
  v9 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, __int64, __int64, __int64))(*(_QWORD *)a2 + 48LL))(
         a2,
         1LL,
         12LL,
         v11);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewdismissalanimationcoordinator.cpp",
      (const char *)(unsigned int)v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
}
