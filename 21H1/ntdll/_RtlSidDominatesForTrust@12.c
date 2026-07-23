/*
 * XREFs of _RtlSidDominatesForTrust@12 @ 0x4B2D9290
 * Callers:
 *     _RtlpGetDefaultTrustSubjectContext@8 @ 0x4B2D9164 (_RtlpGetDefaultTrustSubjectContext@8.c)
 *     _RtlpValidTrustSubjectContext@16 @ 0x4B34A352 (_RtlpValidTrustSubjectContext@16.c)
 * Callees:
 *     _RtlIsValidProcessTrustLabelSid@4 @ 0x4B3466F0 (_RtlIsValidProcessTrustLabelSid@4.c)
 */

NTSTATUS __cdecl RtlSidDominatesForTrust(PSID Sid1, PSID Sid2, PBOOLEAN DominatesTrust)
{
  BOOLEAN v3; // bl

  v3 = 0;
  *DominatesTrust = 0;
  if ( Sid1 && !RtlIsValidProcessTrustLabelSid(Sid1) )
    return -1073741811;
  if ( !Sid2 )
    goto LABEL_3;
  if ( RtlIsValidProcessTrustLabelSid(Sid2) )
  {
    if ( !Sid1 )
    {
      v3 = *((_DWORD *)Sid2 + 2) == 0;
      goto LABEL_4;
    }
    if ( *((_DWORD *)Sid1 + 2) < *((_DWORD *)Sid2 + 2) || *((_DWORD *)Sid1 + 3) < *((_DWORD *)Sid2 + 3) )
      goto LABEL_4;
LABEL_3:
    v3 = 1;
LABEL_4:
    *DominatesTrust = v3;
    return 0;
  }
  return -1073741811;
}
