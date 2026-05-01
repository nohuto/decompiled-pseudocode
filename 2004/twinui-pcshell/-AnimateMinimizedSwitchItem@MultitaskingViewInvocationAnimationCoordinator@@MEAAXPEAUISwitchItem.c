/*
 * XREFs of ?AnimateMinimizedSwitchItem@MultitaskingViewInvocationAnimationCoordinator@@MEAAXPEAUISwitchItemElement@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1803AFDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc_____lambda_bbeb76a51bfb926050d075f4007d064b__&__lambda_ce3300e2c568934d15624d64d17a11bc__&_IDCompBatchAnimationCallback___&_ @ 0x1803AFC8C (Microsoft--WRL--Details--Make_DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_bbeb76a51.c)
 */

void __fastcall MultitaskingViewInvocationAnimationCoordinator::AnimateMinimizedSwitchItem(
        MultitaskingViewInvocationAnimationCoordinator *this,
        struct ISwitchItemElement *a2,
        struct IDCompBatchAnimationCallback *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r8
  void (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rbx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v15; // [rsp+50h] [rbp+20h] BYREF
  struct IDCompBatchAnimationCallback *v16; // [rsp+58h] [rbp+28h] BYREF
  void (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+30h] BYREF

  v15 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  v15 = 0LL;
  v16 = a3;
  Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc_____lambda_bbeb76a51bfb926050d075f4007d064b_____lambda_ce3300e2c568934d15624d64d17a11bc____IDCompBatchAnimationCallback_____(
    &v17,
    v6,
    v7,
    (__int64 *)&v16);
  v9 = v17;
  if ( v17 )
  {
    (**v17)(v17, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, &v15);
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v9)[2])(v9);
  }
  if ( !*((_QWORD *)this + 12) )
  {
    v10 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, _QWORD, __int64, _QWORD, __int64))(*(_QWORD *)a2 + 56LL))(
            a2,
            0LL,
            v8,
            0LL,
            v15);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x26,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewinvocationanimationcoordinator.cpp",
        (const char *)(unsigned int)v10);
    v11 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 1LL);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x27,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewinvocationanimationcoordinator.cpp",
        (const char *)(unsigned int)v11);
  }
  v12 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, _QWORD, __int64, __int64))(*(_QWORD *)a2 + 48LL))(
          a2,
          0LL,
          10LL,
          v15);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2A,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewinvocationanimationcoordinator.cpp",
      (const char *)(unsigned int)v12);
  v13 = (*(__int64 (__fastcall **)(struct ISwitchItemElement *, __int64, __int64, __int64))(*(_QWORD *)a2 + 48LL))(
          a2,
          1LL,
          11LL,
          v15);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2B,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewinvocationanimationcoordinator.cpp",
      (const char *)(unsigned int)v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
}
