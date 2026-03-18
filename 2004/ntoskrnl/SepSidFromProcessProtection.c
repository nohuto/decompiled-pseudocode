/*
 * XREFs of SepSidFromProcessProtection @ 0x140296140
 * Callers:
 *     SepSetTrustLevelForProcessToken @ 0x140269868 (SepSetTrustLevelForProcessToken.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x140295EF0 (SepReferenceTokenUsingPseudoHandle.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x1402960C0 (SepReconcileTrustSidWithProcessProtection.c)
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
