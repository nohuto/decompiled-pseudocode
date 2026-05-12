/*
 * XREFs of RtlStringCchCopyW @ 0x1C0033050
 * Callers:
 *     StorCreateSystemLogEntry @ 0x1C0045DB4 (StorCreateSystemLogEntry.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C0075844 (RaidGetStorageAdapterSerialNumberProperty.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C00330F4 (RtlStringCopyWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCchCopyW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringCopyWorkerW(pszDest, cchDest, (size_t *)pszSrc, pszSrc, v5);
  if ( cchDest )
    *pszDest = 0;
  return v3;
}
