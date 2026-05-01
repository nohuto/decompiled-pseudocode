/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopAnimationSyncNotificationInstance@@UIVirtualDesktopAnimationNotificationInstance@@AEAPEAUIVirtualDesktop@@AEAPEAU3@PEAUIObjectArray@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIVirtualDesktopAnimationNotificationInstance@@AEAPEAUIVirtualDesktop@@1$$QEAPEAUIObjectArray@@AEAK@Z @ 0x18041C068
 * Callers:
 *     ?BeginAnimatedSwitch@VirtualDesktopAnimationSyncNotifications@@UEAAJPEAUIVirtualDesktop@@0PEAPEAUIVirtualDesktopAnimationNotificationInstance@@@Z @ 0x18041C5B0 (-BeginAnimatedSwitch@VirtualDesktopAnimationSyncNotifications@@UEAAJPEAUIVirtualDesktop@@0PEAPEA.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180079540 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0VirtualDesktopAnimationSyncNotificationInstance@@QEAA@XZ @ 0x18041C220 (--0VirtualDesktopAnimationSyncNotificationInstance@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopAnimationSyncNotificationInstance@@QEAAJPEAUIVirtualDesktop@@0PEAUIObjectArray@@K@Z @ 0x18041C7B0 (-RuntimeClassInitialize@VirtualDesktopAnimationSyncNotificationInstance@@QEAAJPEAUIVirtualDeskto.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopAnimationSyncNotificationInstance,IVirtualDesktopAnimationNotificationInstance,IVirtualDesktop * &,IVirtualDesktop * &,IObjectArray *,unsigned long &>(
        VirtualDesktopAnimationSyncNotificationInstance **a1,
        struct IVirtualDesktop **a2,
        struct IVirtualDesktop **a3,
        struct IObjectArray **a4,
        unsigned int *a5)
{
  VirtualDesktopAnimationSyncNotificationInstance *v9; // rax
  int v10; // edi
  VirtualDesktopAnimationSyncNotificationInstance *v11; // rbx
  volatile int *v12; // rdx
  _DWORD *v13; // rcx

  *a1 = 0LL;
  v9 = (VirtualDesktopAnimationSyncNotificationInstance *)operator new(
                                                            0x20uLL,
                                                            (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v11 = VirtualDesktopAnimationSyncNotificationInstance::VirtualDesktopAnimationSyncNotificationInstance(v9);
    v10 = VirtualDesktopAnimationSyncNotificationInstance::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5);
    if ( v10 >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_54190683_3626_41b9_a839_5869f360a946, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v11;
        (*(void (__fastcall **)(VirtualDesktopAnimationSyncNotificationInstance *))(*(_QWORD *)v11 + 8LL))(v11);
        v10 = 0;
      }
      else if ( InlineIsEqualGUID(v13, v13) )
      {
        *a1 = v11;
        v10 = 0;
        (*(void (__fastcall **)(VirtualDesktopAnimationSyncNotificationInstance *))(*(_QWORD *)v11 + 8LL))(v11);
      }
      else
      {
        v10 = -2147467262;
      }
    }
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
        (__int64)v11,
        v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
