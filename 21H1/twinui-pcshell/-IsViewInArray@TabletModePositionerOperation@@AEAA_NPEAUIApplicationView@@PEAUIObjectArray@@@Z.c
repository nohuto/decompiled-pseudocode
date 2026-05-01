/*
 * XREFs of ?IsViewInArray@TabletModePositionerOperation@@AEAA_NPEAUIApplicationView@@PEAUIObjectArray@@@Z @ 0x1803E8AC8
 * Callers:
 *     ?CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArray@@W4CreateSanitizedLayoutFlags@@@Z @ 0x1803E82C0 (-CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArr.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003EF48 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800A5F5C (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180186B34 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 */

char __fastcall TabletModePositionerOperation::IsViewInArray(
        struct IUnknown *this,
        struct IUnknown *a2,
        struct IObjectArray *a3)
{
  char v4; // di
  __int64 *v5; // rcx
  struct IUnknown *v6; // rbx
  __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  int v9; // [rsp+28h] [rbp-38h]
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  struct IUnknown *v11; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v12; // [rsp+40h] [rbp-20h]
  int v13; // [rsp+48h] [rbp-18h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  __int64 *v15; // [rsp+58h] [rbp-8h]
  struct IUnknown *v16; // [rsp+70h] [rbp+10h] BYREF

  v16 = this;
  details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
    (__int64)&v8,
    (__int64)a3);
  v4 = 0;
  v12 = &v8;
  LODWORD(v10) = 0;
  v11 = 0LL;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v10);
  v5 = (__int64 *)&v13;
  v13 = v9;
  v15 = &v8;
  v14 = 0LL;
  while ( 1 )
  {
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(v5);
    if ( (_DWORD)v10 == v13 && v12 == v15 )
      break;
    v6 = v11;
    v16 = v11;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
    if ( (unsigned int)SHIsSameObject(a2, v6) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      v4 = 1;
      break;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    LODWORD(v10) = v10 + 1;
    v5 = &v10;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return v4;
}
