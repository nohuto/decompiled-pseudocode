/*
 * XREFs of FsRtlNormalizeNtstatus @ 0x140377040
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x140247160 (FsRtlIsNtstatusExpected.c)
 */

NTSTATUS __stdcall FsRtlNormalizeNtstatus(NTSTATUS Exception, NTSTATUS GenericException)
{
  NTSTATUS v3; // edi

  v3 = Exception;
  if ( !FsRtlIsNtstatusExpected(Exception) )
    return GenericException;
  return v3;
}
