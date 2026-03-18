/*
 * XREFs of SeAuditingFileEvents @ 0x14091C0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_140C1D504 && AccessGranted
    || byte_140C1D505 && !AccessGranted
    || byte_140C1D506 && AccessGranted
    || byte_140C1D507 && !AccessGranted )
  {
    return 1;
  }
  return result;
}
