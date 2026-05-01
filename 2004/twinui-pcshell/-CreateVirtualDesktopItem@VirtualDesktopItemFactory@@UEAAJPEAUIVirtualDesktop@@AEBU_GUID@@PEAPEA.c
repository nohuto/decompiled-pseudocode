/*
 * XREFs of ?CreateVirtualDesktopItem@VirtualDesktopItemFactory@@UEAAJPEAUIVirtualDesktop@@AEBU_GUID@@PEAPEAX@Z @ 0x1803925B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?VirtualDesktopItem_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktop@@AEBU_GUID@@PEAPEAX@Z @ 0x18039FE6C (-VirtualDesktopItem_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktop@@.c)
 */

__int64 __fastcall VirtualDesktopItemFactory::CreateVirtualDesktopItem(
        struct IVirtualDesktopManagerInternal **this,
        struct IVirtualDesktop *a2,
        const struct _GUID *a3,
        void **a4)
{
  int Instance; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Instance = VirtualDesktopItem_CreateInstance(this[2], a2, a3, a4);
  v5 = Instance;
  if ( Instance < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemfactory.cpp",
      (const char *)(unsigned int)Instance);
  return v5;
}
