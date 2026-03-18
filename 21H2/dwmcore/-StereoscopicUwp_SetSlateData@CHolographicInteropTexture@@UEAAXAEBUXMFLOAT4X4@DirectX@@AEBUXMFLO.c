/*
 * XREFs of ?StereoscopicUwp_SetSlateData@CHolographicInteropTexture@@UEAAXAEBUXMFLOAT4X4@DirectX@@AEBUXMFLOAT3@3@1@Z @ 0x18029C250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHolographicInteropTexture::StereoscopicUwp_SetSlateData(
        CHolographicInteropTexture *this,
        const struct DirectX::XMFLOAT4X4 *a2,
        const struct DirectX::XMFLOAT3 *a3,
        const struct DirectX::XMFLOAT3 *a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_StereoscopicUwp>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetImpl'::`2'::impl,
    0,
    (__int64)a3,
    (__int64)a4);
}
