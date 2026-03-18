/*
 * XREFs of FsRtlNormalizeNtstatus @ 0x14036AB80
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x1403502F0 (FsRtlIsNtstatusExpected.c)
 */

NTSTATUS __stdcall FsRtlNormalizeNtstatus(NTSTATUS Exception, NTSTATUS GenericException)
{
  NTSTATUS v3; // edi

  v3 = Exception;
  if ( !FsRtlIsNtstatusExpected(Exception) )
    return GenericException;
  return v3;
}
