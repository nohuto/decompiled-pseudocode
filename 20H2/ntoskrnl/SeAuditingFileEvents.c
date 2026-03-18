/*
 * XREFs of SeAuditingFileEvents @ 0x140923000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall SeAuditingFileEvents(BOOLEAN AccessGranted, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  BOOLEAN result; // al

  result = 0;
  if ( byte_140C1D424 && AccessGranted
    || byte_140C1D425 && !AccessGranted
    || byte_140C1D426 && AccessGranted
    || byte_140C1D427 && !AccessGranted )
  {
    return 1;
  }
  return result;
}
