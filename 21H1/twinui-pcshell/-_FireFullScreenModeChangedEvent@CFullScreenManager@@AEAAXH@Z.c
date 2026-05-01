/*
 * XREFs of ?_FireFullScreenModeChangedEvent@CFullScreenManager@@AEAAXH@Z @ 0x1801892F8
 * Callers:
 *     ?FullScreenVisibilityChanged@CFullScreenManager@@UEAAJH@Z @ 0x180186970 (-FullScreenVisibilityChanged@CFullScreenManager@@UEAAJH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2ade507f68d5c466c2155bc3180ec4d7___ @ 0x1801854A0 (Windows--Internal--ComTaskPool--QueueTask__lambda_2ade507f68d5c466c2155bc3180ec4d7___.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180453A38 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 */

void __fastcall CFullScreenManager::_FireFullScreenModeChangedEvent(CFullScreenManager *this, int a2)
{
  int v3; // edi
  __int64 v5; // rcx
  struct IObjectArray *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  struct IObjectArray *v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  if ( (int)CGITRegistrationList::GetCallbackArray((CFullScreenManager *)((char *)this + 144), &v8) >= 0 )
  {
    v6 = v8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
    LOBYTE(v3) = a2 != 0;
    v7 = v3;
    Windows::Internal::ComTaskPool::QueueTask__lambda_2ade507f68d5c466c2155bc3180ec4d7___(v5, &v6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
}
