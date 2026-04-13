/*
 * XREFs of _MobilityExperienceManager::GetHasMobilityAccount_::_1_::dtor$4 @ 0x1800D690F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MobilityExperienceManager::GetHasMobilityAccount_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *>>::~vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *>>(a2 + 64);
}
