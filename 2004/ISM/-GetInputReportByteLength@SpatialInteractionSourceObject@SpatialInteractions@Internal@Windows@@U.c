/*
 * XREFs of ?GetInputReportByteLength@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEBAKXZ @ 0x1800D75A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800C5DC8 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

void __fastcall __noreturn Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::GetInputReportByteLength(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *this)
{
  const char *v1; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::FailFast_UnexpectedMsg(
    retaddr,
    54LL,
    (unsigned int)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\SpatialInteractionSourceObject.h",
    "Spatial Object is not a HidDevice",
    v1);
  JUMPOUT(0x1800D75C1LL);
}
