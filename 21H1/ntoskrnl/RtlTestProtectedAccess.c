/*
 * XREFs of RtlTestProtectedAccess @ 0x14064CF4C
 * Callers:
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 *     PspCheckForInvalidAccessByProtection @ 0x14064CF1C (PspCheckForInvalidAccessByProtection.c)
 *     PspValidateCreateProcessProtection @ 0x1406DF0D0 (PspValidateCreateProcessProtection.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1406E0B20 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PopBlackBoxUpdate @ 0x14070CE48 (PopBlackBoxUpdate.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlTestProtectedAccess(unsigned __int8 a1, unsigned __int8 a2)
{
  bool result; // al
  int v3; // eax

  result = 1;
  if ( (a2 & 7) != 0 )
  {
    if ( (unsigned __int8)(a1 & 7) < (unsigned __int8)(a2 & 7) )
      return 0;
    v3 = *(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)a1 >> 4)];
    if ( !_bittest(&v3, a2 >> 4) )
      return 0;
  }
  return result;
}
