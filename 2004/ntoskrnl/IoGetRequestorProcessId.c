/*
 * XREFs of IoGetRequestorProcessId @ 0x1403CC440
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRequestorProcess @ 0x1402D7C00 (IoGetRequestorProcess.c)
 */

ULONG __stdcall IoGetRequestorProcessId(PIRP Irp)
{
  PEPROCESS RequestorProcess; // rax

  RequestorProcess = IoGetRequestorProcess(Irp);
  if ( RequestorProcess )
    LODWORD(RequestorProcess) = RequestorProcess[1].Header.WaitListHead.Flink;
  return (unsigned int)RequestorProcess;
}
