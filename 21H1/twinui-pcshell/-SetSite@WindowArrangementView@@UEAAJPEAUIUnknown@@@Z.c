/*
 * XREFs of ?SetSite@WindowArrangementView@@UEAAJPEAUIUnknown@@@Z @ 0x1803ECF30
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000FAAC (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18011D420 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

__int64 __fastcall WindowArrangementView::SetSite(WindowArrangementView *this, struct IUnknown *a2)
{
  IUnknown **v2; // rsi
  bool v5; // bp
  IUnknown **v6; // r14
  __int64 v7; // rcx
  IUnknown *v8; // rcx
  bool v9; // zf
  void *ppvOut; // [rsp+40h] [rbp+8h] BYREF

  v2 = (IUnknown **)((char *)this + 16);
  v5 = !*((_QWORD *)this + 2) && a2;
  if ( *v2 && !a2 )
  {
    v6 = (IUnknown **)((char *)this + 80);
    v7 = *((_QWORD *)this + 10);
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, 4LL, 0LL);
      IUnknown_SetSite(*v6, 0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v6);
    }
    v8 = (IUnknown *)*((_QWORD *)this + 9);
    if ( v8 )
    {
      IUnknown_SetSite(v8, 0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
    SmartCookie::Unregister((WindowArrangementView *)((char *)this + 160));
    ppvOut = 0LL;
    v9 = *((_DWORD *)this + 80) == 0;
    *((_BYTE *)this + 314) = 1;
    if ( !v9 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      if ( IUnknown_QueryService(
             *v2,
             &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
             &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
             &ppvOut) >= 0 )
      {
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 104LL))(ppvOut, *((unsigned int *)this + 80));
        *((_DWORD *)this + 80) = 0;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v2, (__int64)a2);
  if ( v5 )
  {
    ppvOut = 0LL;
    if ( !*((_DWORD *)this + 80) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      if ( IUnknown_QueryService(
             *v2,
             &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
             &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
             &ppvOut) >= 0 )
        (*(void (__fastcall **)(void *, char *, char *))(*(_QWORD *)ppvOut + 96LL))(
          ppvOut,
          (char *)this + 40,
          (char *)this + 320);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  }
  return 0LL;
}
