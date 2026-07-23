/*
 * XREFs of RtlpGetBootStatusPath @ 0x140396F24
 * Callers:
 *     RtlLockBootStatusData @ 0x14076CD60 (RtlLockBootStatusData.c)
 * Callees:
 *     RtlpGetBootStatusPathFromRegistry @ 0x140396F80 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlIsStateSeparationEnabled @ 0x1407068F0 (RtlIsStateSeparationEnabled.c)
 */

char __fastcall RtlpGetBootStatusPath(const wchar_t **a1, char *a2)
{
  int BootStatusPathFromRegistry; // eax
  char v5; // bl
  const wchar_t *v6; // rcx

  BootStatusPathFromRegistry = RtlpGetBootStatusPathFromRegistry();
  v5 = 0;
  if ( BootStatusPathFromRegistry >= 0 )
  {
    v5 = 1;
  }
  else
  {
    LOBYTE(BootStatusPathFromRegistry) = RtlIsStateSeparationEnabled();
    v6 = L"\\OSDataRoot\\Windows\\bootstat.dat";
    if ( !(_BYTE)BootStatusPathFromRegistry )
      v6 = L"\\SystemRoot\\bootstat.dat";
    *a1 = v6;
  }
  *a2 = v5;
  return BootStatusPathFromRegistry;
}
