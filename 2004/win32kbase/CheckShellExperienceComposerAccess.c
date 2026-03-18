/*
 * XREFs of CheckShellExperienceComposerAccess @ 0x1C01CF63C
 * Callers:
 *     NtDCompositionSetMaterialProperty @ 0x1C000DB70 (NtDCompositionSetMaterialProperty.c)
 * Callees:
 *     <none>
 */

__int64 CheckShellExperienceComposerAccess()
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer");
  if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v2) >= 0 && v2 )
    return 0LL;
  else
    return 3221225506LL;
}
