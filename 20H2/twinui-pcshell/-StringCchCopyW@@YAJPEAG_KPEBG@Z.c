/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18013BA10
 * Callers:
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x1800D6260 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 *     ?IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z @ 0x1800E2A48 (-IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180138FA0 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18013BFA8 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?ProcessWindowBool@QuadShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@AEAA_NPEAUHWND__@@@Z @ 0x180194780 (-ProcessWindowBool@QuadShadowWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32.c)
 *     ?IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z @ 0x1801FA068 (-IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z.c)
 *     ?EncodeRelativePath@@YAXPEAG_KPEBU_GUID@@IPEBG@Z @ 0x1802389EC (-EncodeRelativePath@@YAXPEAG_KPEBU_GUID@@IPEBG@Z.c)
 *     ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180420B88 (-JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x18046E294 (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 *     Str_SetPtrW @ 0x180477AA0 (Str_SetPtrW.c)
 *     s_DrawGlyph @ 0x18047AC98 (s_DrawGlyph.c)
 * Callees:
 *     StringCopyWorkerW @ 0x18002A210 (StringCopyWorkerW.c)
 */

__int64 __fastcall StringCchCopyW(unsigned __int16 *a1, size_t a2, size_t *a3)
{
  int v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)StringCopyWorkerW(a1, a2, a3, (STRSAFE_PCNZWCH)a3, v5);
  }
  return (unsigned int)v3;
}
