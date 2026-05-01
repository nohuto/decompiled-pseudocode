/*
 * XREFs of ?InternalRelease@?$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x180383198
 * Callers:
 *     ??$MakeAndInitialize@VMultitaskingViewGestureHandler@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingViewGestureHandler@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x180382314 (--$MakeAndInitialize@VMultitaskingViewGestureHandler@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@.c)
 *     ?MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@AEBU_GUID@@PEAPEAX@Z @ 0x180383218 (-MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMult.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1803620D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMe_ea_1803620D0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<MultitaskingViewGestureHandler>::InternalRelease(volatile int **a1)
{
  volatile int *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>::Release(
             (__int64)v1,
             v1);
  }
  return result;
}
