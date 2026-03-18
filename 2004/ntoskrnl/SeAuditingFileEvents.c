/*
 * XREFs of SeAuditingFileEvents @ 0x14091D380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_140C1D4C4 && AccessGranted
    || byte_140C1D4C5 && !AccessGranted
    || byte_140C1D4C6 && AccessGranted
    || byte_140C1D4C7 && !AccessGranted )
  {
    return 1;
  }
  return result;
}
