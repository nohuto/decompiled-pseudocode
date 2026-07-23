/*
 * XREFs of IoGetRequestorProcessId @ 0x1403CFB40
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRequestorProcess @ 0x140363F10 (IoGetRequestorProcess.c)
 */

ULONG __stdcall IoGetRequestorProcessId(PIRP Irp)
{
  PEPROCESS RequestorProcess; // rax

  RequestorProcess = IoGetRequestorProcess(Irp);
  if ( RequestorProcess )
    LODWORD(RequestorProcess) = RequestorProcess[1].Header.WaitListHead.Flink;
  return (unsigned int)RequestorProcess;
}
