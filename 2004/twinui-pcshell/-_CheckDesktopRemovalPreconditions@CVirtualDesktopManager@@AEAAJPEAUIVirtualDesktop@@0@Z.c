/*
 * XREFs of ?_CheckDesktopRemovalPreconditions@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@0@Z @ 0x18043EA84
 * Callers:
 *     ?RemoveDesktopForRecoveryInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x18043B060 (-RemoveDesktopForRecoveryInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x18043B130 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003F5B8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::_CheckDesktopRemovalPreconditions(
        CVirtualDesktopManager *this,
        struct IUnknown *a2,
        struct IUnknown *a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 42) )
  {
    v6 = 432LL;
LABEL_3:
    v7 = -2147019873;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)v7);
    return v7;
  }
  if ( (unsigned int)SHIsSameObject(a2, a3) )
  {
    v7 = -2147024809;
    v6 = 433LL;
    goto LABEL_4;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 11) + 32LL))(
          *((_QWORD *)this + 11),
          a2) )
  {
    v7 = -2147024809;
    v6 = 434LL;
    goto LABEL_4;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 11) + 32LL))(
          *((_QWORD *)this + 11),
          a3) )
  {
    v7 = -2147024809;
    v6 = 435LL;
    goto LABEL_4;
  }
  if ( (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11)) == 1 )
  {
    v6 = 436LL;
    goto LABEL_3;
  }
  return 0LL;
}
