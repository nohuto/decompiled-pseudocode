/*
 * XREFs of IoIsInitiator32bitProcess @ 0x14025D580
 * Callers:
 *     <none>
 * Callees:
 *     IoGetInitiatorProcess @ 0x14025D5C0 (IoGetInitiatorProcess.c)
 *     IoIs32bitProcess @ 0x1402DF4A0 (IoIs32bitProcess.c)
 */

BOOLEAN __fastcall IoIsInitiator32bitProcess(PIRP Irp)
{
  __int64 InitiatorProcess; // rax
  __int16 v4; // cx

  InitiatorProcess = IoGetInitiatorProcess(Irp->Tail.Overlay.CurrentStackLocation->FileObject);
  if ( !InitiatorProcess )
    return IoIs32bitProcess(Irp);
  if ( *(_QWORD *)(InitiatorProcess + 1408) )
  {
    v4 = *(_WORD *)(InitiatorProcess + 2412);
    if ( v4 == 332 || v4 == 452 )
      return 1;
  }
  return 0;
}
