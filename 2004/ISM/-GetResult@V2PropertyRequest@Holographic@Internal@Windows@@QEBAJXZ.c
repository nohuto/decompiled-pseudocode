/*
 * XREFs of ?GetResult@V2PropertyRequest@Holographic@Internal@Windows@@QEBAJXZ @ 0x18015E324
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x180162598 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::V2PropertyRequest::GetResult(
        Windows::Internal::Holographic::V2PropertyRequest *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = *((unsigned int *)this + 26);
  if ( (_DWORD)result == -2147023899 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      93LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\PropertyRequests.h",
      a4);
    __debugbreak();
  }
  return result;
}
