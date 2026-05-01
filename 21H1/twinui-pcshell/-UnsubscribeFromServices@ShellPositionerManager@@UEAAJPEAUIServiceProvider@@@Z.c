/*
 * XREFs of ?UnsubscribeFromServices@ShellPositionerManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803B5B00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007AEDC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellPositionerManager::UnsubscribeFromServices(
        ShellPositionerManager *this,
        struct IServiceProvider *a2)
{
  __int64 *v2; // rsi

  v2 = (__int64 *)((char *)this + 136);
  if ( *((_DWORD *)this + 40) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 104LL))(*v2);
    *((_DWORD *)this + 40) = 0;
  }
  if ( *((_DWORD *)this + 41) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 80LL))(*((_QWORD *)this + 18));
    *((_DWORD *)this + 41) = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 19);
  return 0LL;
}
