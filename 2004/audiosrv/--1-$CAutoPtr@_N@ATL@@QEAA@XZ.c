/*
 * XREFs of ??1?$CAutoPtr@_N@ATL@@QEAA@XZ @ 0x1801196CC
 * Callers:
 *     _CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_f36e01949351335f5e9acafaa1161a48____::_1_::dtor$1 @ 0x180117A24 (_CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_f36e01949351335f5e_ea_180117A24.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoPtr<bool>::~CAutoPtr<bool>(void **a1)
{
  operator delete(*a1, (const struct std::nothrow_t *)1);
  *a1 = 0LL;
}
