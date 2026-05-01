/*
 * XREFs of ??$MakeAndInitialize@VTabletModeInputHandler@@V1@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPEAUITabletModeInputCallback@@@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeInputHandler@@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPEAUITabletModeInputCallback@@@Z @ 0x1803F14B4
 * Callers:
 *     ?TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputCallback@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F1954 (-TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletMod.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18011590C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     ??0TabletModeInputHandler@@QEAA@XZ @ 0x1803F1554 (--0TabletModeInputHandler@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VTabletModeInputHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x1803F1618 (-InternalRelease@-$ComPtr@VTabletModeInputHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@TabletModeInputHandler@@QEAAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputCallback@@@Z @ 0x1803F17B8 (-RuntimeClassInitialize@TabletModeInputHandler@@QEAAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAU.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModeInputHandler,TabletModeInputHandler,enum SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE &,ITabletModeInputCallback * &>(
        __int64 *a1,
        unsigned int *a2,
        __int64 *a3)
{
  TabletModeInputHandler *v6; // rax
  int v7; // ebx
  TabletModeInputHandler *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdi
  volatile int *v12; // rdx
  TabletModeInputHandler *v14; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (TabletModeInputHandler *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = TabletModeInputHandler::TabletModeInputHandler(v6);
    v9 = *a3;
    v10 = *a2;
    v11 = (__int64)v8;
    v14 = v8;
    v7 = TabletModeInputHandler::RuntimeClassInitialize(v8, v10, v9);
    if ( v7 >= 0 )
    {
      if ( v11 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
          v11,
          v12);
      *a1 = v11;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<TabletModeInputHandler>::InternalRelease(&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
