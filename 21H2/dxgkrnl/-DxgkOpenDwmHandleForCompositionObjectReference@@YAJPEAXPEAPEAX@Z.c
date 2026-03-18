/*
 * XREFs of ?DxgkOpenDwmHandleForCompositionObjectReference@@YAJPEAXPEAPEAX@Z @ 0x1C0005270
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0007114 (-OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkOpenDwmHandleForCompositionObjectReference(void *a1, void **a2)
{
  return DxgkCompositionObject::OpenDwmHandle(a1, a2);
}
