/*
 * XREFs of ?MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@AEBU_GUID@@PEAPEAX@Z @ 0x180383218
 * Callers:
 *     ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x18037E3B4 (-_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VMultitaskingViewGestureHandler@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingViewGestureHandler@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x180382314 (--$MakeAndInitialize@VMultitaskingViewGestureHandler@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@.c)
 *     ?InternalRelease@?$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x180383198 (-InternalRelease@-$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler_CreateInstance(
        struct IMultitaskingViewTaskScheduler *a1,
        struct IMultitaskingViewVisibilityService *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  volatile int *v11; // rcx
  volatile int *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IMultitaskingViewTaskScheduler *v15; // [rsp+30h] [rbp+8h] BYREF
  struct IMultitaskingViewVisibilityService *v16; // [rsp+38h] [rbp+10h] BYREF
  volatile int *v17; // [rsp+40h] [rbp+18h] BYREF

  v16 = a2;
  v15 = a1;
  *a4 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<MultitaskingViewGestureHandler>::InternalRelease(&v17);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<MultitaskingViewGestureHandler,MultitaskingViewGestureHandler,IMultitaskingViewTaskScheduler * &,IMultitaskingViewVisibilityService * &>(
         (__int64 *)&v17,
         &v15,
         &v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    v8 = 457LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)v7);
    goto LABEL_15;
  }
  *a4 = 0LL;
  if ( InlineIsEqualGUID(&GUID_de8d7855_1edf_411b_99bf_0226775c0b72, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v12 = v17;
    *a4 = (void *)v17;
    (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v12 + 8LL))(v12);
    v6 = 0;
    goto LABEL_15;
  }
  if ( InlineIsEqualGUID(v9, v9) )
  {
    v11 = v17;
    v6 = 0;
    *a4 = (void *)v17;
  }
  else
  {
    if ( InlineIsEqualGUID(v10, &GUID_2efbb7b2_92ab_4d26_9e07_39c400ca8603) )
    {
      v11 = v17 + 2;
      *a4 = (void *)(v17 + 2);
      v6 = 0;
    }
    else
    {
      v6 = -2147467262;
      v11 = 0LL;
    }
    if ( v6 < 0 )
    {
      v7 = (unsigned int)v6;
      v8 = 458LL;
      goto LABEL_14;
    }
  }
  (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v11 + 8LL))(v11);
LABEL_15:
  Microsoft::WRL::ComPtr<MultitaskingViewGestureHandler>::InternalRelease(&v17);
  return (unsigned int)v6;
}
