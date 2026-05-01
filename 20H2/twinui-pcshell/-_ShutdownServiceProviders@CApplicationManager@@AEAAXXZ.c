/*
 * XREFs of ?_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ @ 0x1801592A4
 * Callers:
 *     ?v_ShutdownServices@CApplicationManager@@MEAAJPEAUIProfferService@@@Z @ 0x180159C10 (-v_ShutdownServices@CApplicationManager@@MEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800784BC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$QueueTask@V_lambda_dff7b450e7eee25fd5a246545de8ddb9_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_dff7b450e7eee25fd5a246545de8ddb9_@@@Z @ 0x1801444CC (--$QueueTask@V_lambda_dff7b450e7eee25fd5a246545de8ddb9_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 */

void __fastcall CApplicationManager::_ShutdownServiceProviders(CApplicationManager *this)
{
  IUnknown *v2; // rcx
  IUnknown *v3; // rcx
  IUnknown *v4; // rcx
  IUnknown *v5; // rcx
  IUnknown *v6; // rcx
  IUnknown *v7; // rcx
  IUnknown *v8; // rcx

  Windows::Internal::ComTaskPool::QueueTask<_lambda_dff7b450e7eee25fd5a246545de8ddb9_>(
    (__int64)this,
    0x102u,
    (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 75);
  v2 = (IUnknown *)*((_QWORD *)this + 66);
  if ( v2 )
  {
    IUnknown_SetSite(v2, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 66);
  }
  v3 = (IUnknown *)*((_QWORD *)this + 74);
  if ( v3 )
  {
    IUnknown_SetSite(v3, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 74);
  }
  v4 = (IUnknown *)*((_QWORD *)this + 71);
  if ( v4 )
  {
    IUnknown_SetSite(v4, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 71);
  }
  v5 = (IUnknown *)*((_QWORD *)this + 93);
  if ( v5 )
  {
    IUnknown_SetSite(v5, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 93);
  }
  v6 = (IUnknown *)*((_QWORD *)this + 65);
  if ( v6 )
  {
    IUnknown_SetSite(v6, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 65);
  }
  v7 = (IUnknown *)*((_QWORD *)this + 67);
  if ( v7 )
  {
    IUnknown_SetSite(v7, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 67);
  }
  v8 = (IUnknown *)*((_QWORD *)this + 76);
  if ( v8 )
  {
    IUnknown_SetSite(v8, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 76);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 70);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 73);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 68);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 69);
}
