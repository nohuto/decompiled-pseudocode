/*
 * XREFs of ?StereoscopicUwp_SetPoseData@CHolographicInteropTexture@@UEAAXAEBUXMFLOAT4X4@DirectX@@00@Z @ 0x18025A7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHolographicInteropTexture::StereoscopicUwp_SetPoseData(
        CHolographicInteropTexture *this,
        const struct DirectX::XMFLOAT4X4 *a2,
        const struct DirectX::XMFLOAT4X4 *a3,
        const struct DirectX::XMFLOAT4X4 *a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_StereoscopicUwp>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetImpl'::`2'::impl,
    0,
    (__int64)a3,
    a4);
}
