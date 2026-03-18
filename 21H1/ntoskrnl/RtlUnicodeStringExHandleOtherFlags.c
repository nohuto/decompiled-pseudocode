/*
 * XREFs of RtlUnicodeStringExHandleOtherFlags @ 0x1405069A8
 * Callers:
 *     RtlUnicodeStringPrintfEx @ 0x14036A990 (RtlUnicodeStringPrintfEx.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140722B88 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1407357A4 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 */

NTSTATUS __stdcall RtlUnicodeStringExHandleOtherFlags(
        wchar_t *pszDest,
        size_t cchDest,
        size_t cchOriginalDestLength,
        size_t *pcchNewDestLength,
        wchar_t **ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  if ( (dwFlags & 0x1000) != 0 )
  {
    *pcchNewDestLength = 0LL;
    *ppszDestEnd = pszDest;
    *pcchRemaining = cchDest;
  }
  if ( (dwFlags & 0x400) != 0 )
  {
    memset(pszDest, (unsigned __int8)dwFlags, 2 * cchDest);
    *pcchNewDestLength = 0LL;
    *ppszDestEnd = pszDest;
    *pcchRemaining = cchDest;
  }
  if ( (dwFlags & 0x800) != 0 )
  {
    *pcchNewDestLength = 0LL;
    *ppszDestEnd = pszDest;
    *pcchRemaining = cchDest;
  }
  return 0;
}
