/*
 * XREFs of PspQueryForwardersEnabled @ 0x14078FEB8
 * Callers:
 *     PsBootPhaseComplete @ 0x14078FB6C (PsBootPhaseComplete.c)
 *     PspSiloLoadApiSets @ 0x140902B34 (PspSiloLoadApiSets.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     RtlpQueryRegistryValues @ 0x1406823A0 (RtlpQueryRegistryValues.c)
 */

char PspQueryForwardersEnabled()
{
  char v0; // bl
  _QWORD v2[15]; // [rsp+30h] [rbp-78h] BYREF
  int v3; // [rsp+B0h] [rbp+8h] BYREF

  v3 = 0;
  memset(v2, 0, 0x70uLL);
  LODWORD(v2[1]) = 292;
  v2[2] = L"OCFW_Enabled";
  LODWORD(v2[4]) = 0x4000000;
  v0 = 1;
  v2[3] = &v3;
  if ( (int)RtlpQueryRegistryValues(
              0,
              L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\OneCore",
              (__int64)v2,
              0LL) < 0
    || !v3 )
  {
    return 0;
  }
  return v0;
}
