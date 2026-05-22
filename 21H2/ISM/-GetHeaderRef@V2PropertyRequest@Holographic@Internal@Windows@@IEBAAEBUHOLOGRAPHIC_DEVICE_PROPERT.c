/*
 * XREFs of ?GetHeaderRef@V2PropertyRequest@Holographic@Internal@Windows@@IEBAAEBUHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@XZ @ 0x18015D1D4
 * Callers:
 *     ?GetValue@V2PropertyRequest@Holographic@Internal@Windows@@QEBAXPEAPEBEPEA_K@Z @ 0x18015F42C (-GetValue@V2PropertyRequest@Holographic@Internal@Windows@@QEBAXPEAPEBEPEA_K@Z.c)
 *     ?HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z @ 0x18015F5DC (-HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

const struct HOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2 *__fastcall Windows::Internal::Holographic::V2PropertyRequest::GetHeaderRef(
        Windows::Internal::Holographic::V2PropertyRequest *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 11) - *((_QWORD *)this + 10) < 0xCuLL )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      55LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\PropertyRequests.h",
      a4);
    __debugbreak();
  }
  return (const struct HOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2 *)*((_QWORD *)this + 10);
}
