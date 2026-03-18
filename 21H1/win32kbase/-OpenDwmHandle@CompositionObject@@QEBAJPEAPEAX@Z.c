/*
 * XREFs of ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C00B43C0
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0003420 (NtDCompositionRegisterThumbnailVisual.c)
 *     ?OpenDwmHandle@CompositionInputObject@@QEBAJPEAPEAX@Z @ 0x1C00B5270 (-OpenDwmHandle@CompositionInputObject@@QEBAJPEAPEAX@Z.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x1C01D47A0 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C01D4EE0 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C01D5020 (NtDCompositionSetChildRootVisual.c)
 * Callees:
 *     OpenDwmHandle @ 0x1C00B4484 (OpenDwmHandle.c)
 */

__int64 __fastcall CompositionObject::OpenDwmHandle(CompositionObject *this, void **a2)
{
  int v3; // [rsp+20h] [rbp-18h]

  return OpenDwmHandle(this, ExCompositionObjectType, 3u, v3, a2);
}
