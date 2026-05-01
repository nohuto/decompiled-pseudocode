/*
 * XREFs of ?_UntrackMouseMovement@SearchAppExperienceManager@@AEAAXXZ @ 0x1800995F4
 * Callers:
 *     ?Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18005C310 (-Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shel.c)
 *     ?Hide@SearchAppExperienceManager@@UEAAJXZ @ 0x1800894C0 (-Hide@SearchAppExperienceManager@@UEAAJXZ.c)
 *     ??1SearchAppExperienceManager@@UEAA@XZ @ 0x1801F586C (--1SearchAppExperienceManager@@UEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180046AB8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SearchAppExperienceManager::_UntrackMouseMovement(struct _TP_TIMER **this)
{
  struct _TP_TIMER *v2; // rcx
  __int64 v3; // rax
  _BYTE v4[56]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v5; // [rsp+58h] [rbp-10h]

  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 76,
    0LL);
  v2 = this[62];
  *((_BYTE *)this + 568) = 0;
  v3 = *(_QWORD *)v2;
  v5 = 0LL;
  (*(void (__fastcall **)(struct _TP_TIMER *, _BYTE *))(v3 + 64))(v2, v4);
}
