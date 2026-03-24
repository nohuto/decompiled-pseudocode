/*
 * XREFs of IoGetRequestorProcessId @ 0x1403CF9D0
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRequestorProcess @ 0x1403591C0 (IoGetRequestorProcess.c)
 */

ULONG __stdcall IoGetRequestorProcessId(PIRP Irp)
{
  PEPROCESS RequestorProcess; // rax

  RequestorProcess = IoGetRequestorProcess(Irp);
  if ( RequestorProcess )
    LODWORD(RequestorProcess) = RequestorProcess[1].Header.WaitListHead.Flink;
  return (unsigned int)RequestorProcess;
}
