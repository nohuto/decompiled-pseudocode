/*
 * XREFs of IoIsInitiator32bitProcess @ 0x14036CD40
 * Callers:
 *     <none>
 * Callees:
 *     IoIs32bitProcess @ 0x1402644F0 (IoIs32bitProcess.c)
 *     IoGetInitiatorProcess @ 0x1402D3250 (IoGetInitiatorProcess.c)
 */

BOOLEAN __fastcall IoIsInitiator32bitProcess(PIRP Irp, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 InitiatorProcess; // rax
  BOOLEAN result; // al
  __int64 v7; // rax
  __int16 v8; // ax

  InitiatorProcess = IoGetInitiatorProcess((__int64)Irp->Tail.Overlay.CurrentStackLocation->FileObject, a2, a3, a4);
  if ( !InitiatorProcess )
    return IoIs32bitProcess(Irp);
  v7 = *(_QWORD *)(InitiatorProcess + 1408);
  result = 0;
  if ( v7 )
  {
    v8 = *(_WORD *)(v7 + 8);
    if ( v8 == 332 || v8 == 452 )
      return 1;
  }
  return result;
}
