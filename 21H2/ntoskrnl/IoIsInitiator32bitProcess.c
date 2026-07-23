/*
 * XREFs of IoIsInitiator32bitProcess @ 0x14036CEF0
 * Callers:
 *     <none>
 * Callees:
 *     IoGetInitiatorProcess @ 0x140251590 (IoGetInitiatorProcess.c)
 *     IoIs32bitProcess @ 0x140252580 (IoIs32bitProcess.c)
 */

BOOLEAN __fastcall IoIsInitiator32bitProcess(PIRP Irp)
{
  __int64 InitiatorProcess; // rax
  BOOLEAN result; // al
  __int64 v4; // rax
  __int16 v5; // ax

  InitiatorProcess = IoGetInitiatorProcess((__int64)Irp->Tail.Overlay.CurrentStackLocation->FileObject);
  if ( !InitiatorProcess )
    return IoIs32bitProcess(Irp);
  v4 = *(_QWORD *)(InitiatorProcess + 1408);
  result = 0;
  if ( v4 )
  {
    v5 = *(_WORD *)(v4 + 8);
    if ( v5 == 332 || v5 == 452 )
      return 1;
  }
  return result;
}
