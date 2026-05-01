/*
 * XREFs of ??$?0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z @ 0x1800E1784
 * Callers:
 *     ?_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18005B10C (-_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ShellFeedsAvailabilityHelpers::GetEnablementCheckURL @ 0x1800E22B4 (ShellFeedsAvailabilityHelpers--GetEnablementCheckURL.c)
 *     ?_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@PEAPEAU2@@Z @ 0x1801BC6B4 (-_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellEx.c)
 *     _lambda_e5434191a426e1e6c5461e9f90ae0298_::operator() @ 0x1802E62E0 (_lambda_e5434191a426e1e6c5461e9f90ae0298_--operator().c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800275B0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x1800275F8 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18014F058 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *hstringHeader,
        PCWSTR sourceString,
        unsigned int a3)
{
  unsigned __int64 v5; // rbx
  UINT32 v6; // eax

  v5 = -1LL;
  do
    ++v5;
  while ( sourceString[v5] );
  if ( v5 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, (int)sourceString, a3);
    JUMPOUT(0x1800E17E7LL);
  }
  v6 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v5, (int)sourceString, a3);
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(hstringHeader, sourceString, v6, v5);
  return hstringHeader;
}
