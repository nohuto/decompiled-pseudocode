/*
 * XREFs of SepSidFromProcessProtection @ 0x14022A630
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x14022A460 (SepReferenceTokenUsingPseudoHandle.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x14022A5B0 (SepReconcileTrustSidWithProcessProtection.c)
 *     SepSetTrustLevelForProcessToken @ 0x1402E3768 (SepSetTrustLevelForProcessToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSidFromProcessProtection(_BYTE *a1)
{
  __int64 v1; // r8

  v1 = 0LL;
  switch ( *a1 )
  {
    case 0x12:
      return SeProcTrustAuthenticodeSid;
    case 0x31:
      return SeProcTrustLiteAntimalwareSid;
    case 0x51:
      return SeProcTrustLiteWinSid;
    case 0x52:
      return SeProcTrustWinSid;
    case 0x61:
      return SeProcTrustLiteWinTcbSid;
    case 0x62:
    case 0x72:
      return SeProcTrustWinTcbSid;
  }
  if ( (unsigned __int8)*a1 == 129 )
    return SeProcTrustLiteAppSid;
  return v1;
}
