/*
 * XREFs of ?SetViewStateForDesiredAppStateByHostId@CApplicationViewManager@@UEAAJ_KW4APPLICATION_DESIRED_STATE@@@Z @ 0x18018FC30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetApplicationViewsById@CApplicationViewManager@@AEAAJPEBG_K_NPEAPEAUIObjectArray@@@Z @ 0x18018E6C0 (-GetApplicationViewsById@CApplicationViewManager@@AEAAJPEBG_K_NPEAPEAUIObjectArray@@@Z.c)
 *     ?SetAppStateForViews@CApplicationViewManager@@AEAAJPEAUIObjectArray@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x18018F850 (-SetAppStateForViews@CApplicationViewManager@@AEAAJPEAUIObjectArray@@W4APPLICATION_DESIRED_STATE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::SetViewStateForDesiredAppStateByHostId(__int64 a1, __int64 a2, int a3)
{
  int ApplicationViewsById; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IObjectArray *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  ApplicationViewsById = CApplicationViewManager::GetApplicationViewsById((RTL_SRWLOCK *)(a1 - 200), 0LL, a2, 1, &v10);
  v7 = ApplicationViewsById;
  if ( ApplicationViewsById >= 0 )
    v7 = CApplicationViewManager::SetAppStateForViews(a1 - 200, (__int64)v10, a3);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x368,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)ApplicationViewsById);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  return v7;
}
