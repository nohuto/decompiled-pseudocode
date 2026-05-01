/*
 * XREFs of ?RuntimeClassInitialize@MultitaskingViewAnimationCoordinatorBase@@QEAAJXZ @ 0x1803B1398
 * Callers:
 *     ?RuntimeClassInitialize@MultitaskingViewInvocationAnimationCoordinator@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewAnimation@@@Z @ 0x1803AF9FC (-RuntimeClassInitialize@MultitaskingViewInvocationAnimationCoordinator@@QEAAJPEAUIWeakReference@.c)
 *     ?RuntimeClassInitialize@MultitaskingViewDismissalAnimationCoordinator@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewAnimation@@@Z @ 0x1803B1FB4 (-RuntimeClassInitialize@MultitaskingViewDismissalAnimationCoordinator@@QEAAJPEAUIWeakReference@W.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@V12@AEAPEAVCSwitchItemGrid@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@AEAPEAVCSwitchItemGrid@@@Z @ 0x18039FDAC (--$MakeAndInitialize@V-$CWeakReference@VCSwitchItemGrid@@@WeakReference@@V12@AEAPEAVCSwitchItemG.c)
 *     ??$wnf_query_nothrow@W4_TABLETMODESTATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_TABLETMODESTATE@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1803AFCA4 (--$wnf_query_nothrow@W4_TABLETMODESTATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_TABLETMODESTAT.c)
 */

__int64 __fastcall MultitaskingViewAnimationCoordinatorBase::RuntimeClassInitialize(
        MultitaskingViewAnimationCoordinatorBase *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  char v7; // al
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  MultitaskingViewAnimationCoordinatorBase *v11; // [rsp+38h] [rbp+10h] BYREF
  int v12; // [rsp+40h] [rbp+18h] BYREF

  v5 = wil::wnf_query_nothrow<enum _TABLETMODESTATE>((__int64)this, (char *)&v11, (__int64)&v12, a4);
  if ( (v5 & 0x80000000) != 0 )
  {
    v6 = 311LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewanimationcoordinatorbase.cpp",
      (const char *)v5);
    return v5;
  }
  if ( !(_BYTE)v11 || (v7 = 1, v12 != 1) )
    v7 = 0;
  *((_BYTE *)this + 168) = v7;
  v11 = this;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<CSwitchItemGrid>,WeakReference::CWeakReference<CSwitchItemGrid>,CSwitchItemGrid * &>(
         (_QWORD *)this + 3,
         &v11);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
      (const char *)(unsigned int)v8);
    v6 = 313LL;
    goto LABEL_8;
  }
  return v5;
}
