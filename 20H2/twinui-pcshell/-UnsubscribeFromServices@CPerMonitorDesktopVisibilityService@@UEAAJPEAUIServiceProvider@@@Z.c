/*
 * XREFs of ?UnsubscribeFromServices@CPerMonitorDesktopVisibilityService@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803CD630
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPerMonitorDesktopVisibilityService::UnsubscribeFromServices(
        CPerMonitorDesktopVisibilityService *this,
        struct IServiceProvider *a2)
{
  __int64 *v2; // rdi

  v2 = (__int64 *)((char *)this + 192);
  if ( *((_DWORD *)this + 42) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 32LL))(*v2);
    *((_DWORD *)this + 42) = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
  return 0LL;
}
