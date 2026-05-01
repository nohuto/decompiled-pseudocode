/*
 * XREFs of ?s_GetActivationTime@CompareGridElements@@CA_KPEAUIMultitaskingViewElement@@@Z @ 0x1803A8A7C
 * Callers:
 *     ?Compare@CompareGridElements@@QEBAHAEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@0@Z @ 0x1803A6FB4 (-Compare@CompareGridElements@@QEBAHAEBV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompareGridElements::s_GetActivationTime(struct IMultitaskingViewElement *a1)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  (**(void (__fastcall ***)(struct IMultitaskingViewElement *, GUID *, __int64 *))a1)(
    a1,
    &GUID_dda13508_825c_43f9_bcd8_7d0dc0e5d932,
    &v4);
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  return v2;
}
