/*
 * XREFs of ?v_InitAccessibleObject@CVirtualDesktopContainerElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1803C0C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags@@JAEBU_GUID@@PEAPEAX@Z @ 0x1803B3194 (-AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags.c)
 */

__int64 __fastcall CVirtualDesktopContainerElement::v_InitAccessibleObject(
        CVirtualDesktopContainerElement *this,
        struct IWeakReference *a2,
        struct _GUID *a3,
        void **a4)
{
  int Instance; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Instance = AccessibleElement_CreateInstance((__int64)a2, 44, 50008, a3, a4);
  v5 = Instance;
  if ( Instance < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopcontainerelement.cpp",
      (const char *)(unsigned int)Instance);
  return v5;
}
