/*
 * XREFs of ??$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ @ 0x1800C55E8
 * Callers:
 *     ?OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY__@@PEA_N@Z @ 0x1800C6670 (-OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY_.c)
 *     _anonymous_namespace_::OpenPosesFallbackRootKey @ 0x1800C6900 (_anonymous_namespace_--OpenPosesFallbackRootKey.c)
 *     ?HidStatus@SpatialInteractionDevices@@YAJJ@Z @ 0x1800CBFE0 (-HidStatus@SpatialInteractionDevices@@YAJJ@Z.c)
 *     ?ParsingInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKPEB_WGG_N1GGG1EIKAEBUPoseData@2@2@Z @ 0x18016E178 (-ParsingInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKPEB_WGG_N1GGG1EI.c)
 * Callees:
 *     vswprintf_s @ 0x18003C954 (vswprintf_s.c)
 */

int swprintf_s<64>(wchar_t *a1, const wchar_t *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return vswprintf_s(a1, 0x40uLL, a2, va);
}
