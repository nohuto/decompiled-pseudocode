/*
 * XREFs of ?EnsureTileRemoved@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUITileNotification@Tiles@456@@Z @ 0x1800CB7D4
 * Callers:
 *     ?FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800CB868 (-FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180047804 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18004A074 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180096214 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?UnregisterTileIfExists@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@@Z @ 0x1800D3BC4 (-UnregisterTileIfExists@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::EnsureTileRemoved(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Internal::Tiles::ITileNotification *a2)
{
  unsigned int v3; // eax
  _QWORD *Ptr; // rdi
  _QWORD *i; // rbx
  RTL_SRWLOCK *v6; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v7[16]; // [rsp+28h] [rbp-20h] BYREF

  v3 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)a2 + 56LL))(*(_QWORD *)a2, v7);
  winrt::check_hresult(v3);
  wil::srwlock::lock_exclusive(this + 75, &v6);
  Ptr = this[77].Ptr;
  for ( i = (_QWORD *)*Ptr; i != Ptr; i = (_QWORD *)*i )
    winrt::Windows::Internal::Shell::implementation::WindowData::UnregisterTileIfExists(
      (winrt::Windows::Internal::Shell::implementation::WindowData *)(i + 3),
      (const struct winrt::guid *)v7);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v6);
}
