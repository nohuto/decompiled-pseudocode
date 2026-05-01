/*
 * XREFs of ?CreateVirtualDesktop@CVirtualDesktopFactory@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180434330
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CVirtualDesktop_CreateInstance@@YAJAEBU_GUID@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@0PEAPEAX@Z @ 0x18044C83C (-CVirtualDesktop_CreateInstance@@YAJAEBU_GUID@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtual.c)
 */

__int64 __fastcall CVirtualDesktopFactory::CreateVirtualDesktop(
        struct IVirtualDesktopVisibilityPolicy **this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  int Instance; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Instance = CVirtualDesktop_CreateInstance(a2, this[2], this[3], a3, a4);
  v5 = Instance;
  if ( Instance < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopfactory.cpp",
      (const char *)(unsigned int)Instance);
  return v5;
}
