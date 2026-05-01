/*
 * XREFs of ?v_InitAccessibleObject@LightDismissElement@@MEAAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18039BBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags@@JAEBU_GUID@@PEAPEAX@Z @ 0x1803927C4 (-AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags.c)
 */

__int64 __fastcall LightDismissElement::v_InitAccessibleObject(
        LightDismissElement *this,
        struct IWeakReference *a2,
        struct _GUID *a3,
        void **a4)
{
  return AccessibleElement_CreateInstance((__int64)a2, 9, 50000, a3, a4);
}
