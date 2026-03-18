/*
 * XREFs of _DwmAsyncRegisterSharedThumbnailVisualApiExt@36 @ 0xAABAE
 * Callers:
 *     <none>
 * Callees:
 *     _DwmAsyncRegisterSharedThumbnailVisual@36 @ 0xAABD8 (_DwmAsyncRegisterSharedThumbnailVisual@36.c)
 */

int __stdcall DwmAsyncRegisterSharedThumbnailVisualApiExt(
        PVOID Object,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return DwmAsyncRegisterSharedThumbnailVisual(Object, a3, a4, a5, a6, a9, a7, a8);
}
