/*
 * XREFs of ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C001B764
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0003420 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionSetMaterialProperty @ 0x1C00399D0 (NtDCompositionSetMaterialProperty.c)
 *     CreateSharedSystemVisualObject @ 0x1C00419A0 (CreateSharedSystemVisualObject.c)
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00B6A98 (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 *     CreateSharedResourceObject @ 0x1C00B7294 (CreateSharedResourceObject.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C00B87A0 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C01D4EE0 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C01D5020 (NtDCompositionSetChildRootVisual.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C001B7F4 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall DirectComposition::ResourceObject::ResolveHandle(
        void *a1,
        __int64 a2,
        __int64 a3,
        struct DirectComposition::ResourceObject **a4)
{
  __int64 result; // rax
  struct DirectComposition::ResourceObject *v6; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = 0LL;
  result = CompositionObject::ResolveHandle(a1, a2, a3, 1LL, &v6);
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
