/*
 * XREFs of ?v_DismissView@XamlAltTabViewHost@@MEAAXXZ @ 0x1803133D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1802EB25C (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ??1AltTabWindowHook@@QEAA@XZ @ 0x18031F170 (--1AltTabWindowHook@@QEAA@XZ.c)
 *     ?UnregisterForEvents@XamlAltTabViewController@@QE$AAAXXZ @ 0x1803209E8 (-UnregisterForEvents@XamlAltTabViewController@@QE$AAAXXZ.c)
 */

void __fastcall XamlAltTabViewHost::v_DismissView(XamlAltTabViewHost *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  AltTabWindowHook *v4; // rsi
  __int64 v5; // rcx

  v1 = (__int64 *)((char *)this + 152);
  v3 = *((_QWORD *)this + 19);
  if ( v3 )
  {
    XamlAltTabViewController::UnregisterForEvents(v3);
    v4 = *(AltTabWindowHook **)(*v1 + 248);
    *(_QWORD *)(*v1 + 248) = 0LL;
    if ( v4 )
    {
      AltTabWindowHook::~AltTabWindowHook(v4);
      operator delete(v4, (const struct std::nothrow_t *)0x10);
    }
    __abi_winrt_ptr_assign(v1, 0LL);
  }
  v5 = *((_QWORD *)this + 25);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  }
  __abi_winrt_ptr_assign((__int64 *)this + 21, 0LL);
}
