/*
 * XREFs of ?v_InitAccessibleObject@CMultitaskingViewFrameElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1803ABDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags@@JAEBU_GUID@@PEAPEAX@Z @ 0x1803B3194 (-AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags.c)
 */

__int64 __fastcall CMultitaskingViewFrameElement::v_InitAccessibleObject(
        CMultitaskingViewFrameElement *this,
        struct IWeakReference *a2,
        const struct _GUID *a3,
        void **a4)
{
  return AccessibleElement_CreateInstance(a2, 10LL, 50032LL, a3, a4);
}
