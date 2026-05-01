/*
 * XREFs of ?v_Initialize@CImmersiveWindowFactory@@EEAAJPEAUIImmersiveMonitor@@PEBUtagRECT@@@Z @ 0x180485F20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x18003FDD8 (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowFactory::v_Initialize(
        CImmersiveWindowFactory *this,
        IUnknown *a2,
        enum ORIENTATION_PREFERENCE *a3)
{
  HRESULT v3; // ebx
  void *ppvOut; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  if ( a3 )
  {
    *(_OWORD *)((char *)this + 116) = *(_OWORD *)a3;
  }
  else
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v3 = IUnknown_QueryService(a2, &stru_180551D38, &GUID_53b23e1b_25e2_4886_9fb6_744b8f15571c, &ppvOut);
    if ( v3 >= 0 )
      v3 = (*(__int64 (__fastcall **)(void *, IUnknown *, _QWORD, _QWORD, char *))(*(_QWORD *)ppvOut + 40LL))(
             ppvOut,
             a2,
             *((_QWORD *)this + 17),
             0LL,
             (char *)this + 116);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  }
  if ( v3 >= 0 )
    *((_BYTE *)this + 144) = (int)CallerIdentity::GetManifestedOrientationPreference(
                                    *((LPCWSTR *)this + 17),
                                    (unsigned __int16 *)this + 74,
                                    a3) >= 0;
  return (unsigned int)v3;
}
