/*
 * XREFs of Windows::Internal::Holographic::CreateGuidFailFast @ 0x18015A8E8
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UISpatialGraphDriverClient@Holographic@Internal@Windows@@U?$CloakedIid@UISpatialGraphDriverClientInternal@Holographic@Internal@Windows@@@23@VDynamicNodeSourceBase@567@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1801563DC (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UISpatialGraphDriverClient@Holographic.c)
 *     ?CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x18015A4E0 (-CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windo.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

GUID *__fastcall Windows::Internal::Holographic::CreateGuidFailFast(GUID *a1)
{
  HRESULT Guid; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Guid = CoCreateGuid(a1);
  if ( Guid < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      34LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\HolographicDriverHandleWrapper.h",
      (const char *)(unsigned int)Guid);
    __debugbreak();
  }
  return a1;
}
