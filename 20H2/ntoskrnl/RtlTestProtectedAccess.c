/*
 * XREFs of RtlTestProtectedAccess @ 0x1406B348C
 * Callers:
 *     NtSetInformationThread @ 0x14060E970 (NtSetInformationThread.c)
 *     PspValidateCreateProcessProtection @ 0x1406B303C (PspValidateCreateProcessProtection.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1406B345C (PspCheckForInvalidAccessByProtection.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1406D69C0 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PopBlackBoxUpdate @ 0x1406F4E3C (PopBlackBoxUpdate.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTestProtectedAccess(PS_PROTECTION Source, PS_PROTECTION Target)
{
  BOOLEAN result; // al
  int v3; // eax

  result = 1;
  if ( (Target.Level & 7) != 0 )
  {
    if ( (unsigned __int8)(Source.Level & 7) < (unsigned __int8)(Target.Level & 7) )
      return 0;
    v3 = *(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)Source.Level >> 4)];
    if ( !_bittest(&v3, Target.Level >> 4) )
      return 0;
  }
  return result;
}
