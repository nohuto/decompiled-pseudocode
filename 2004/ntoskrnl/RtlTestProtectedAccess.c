/*
 * XREFs of RtlTestProtectedAccess @ 0x1406B5F2C
 * Callers:
 *     PopBlackBoxUpdate @ 0x14064B858 (PopBlackBoxUpdate.c)
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1406B5EFC (PspCheckForInvalidAccessByProtection.c)
 *     PspValidateCreateProcessProtection @ 0x140701E60 (PspValidateCreateProcessProtection.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1407038B0 (PspGetProcessProtectionRequirementsFromImage.c)
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
